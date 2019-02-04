/*
** Automatically generated from `simplify.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__check_hlds__simplify__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 33 "../library/array.int2"
#include "array.mh"

#line 28 "check_hlds.simplify.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "check_hlds.simplify.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 36 "check_hlds.simplify.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "check_hlds.simplify.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.simplify.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.simplify.c"
#line 49 "check_hlds.simplify.c"
#include "check_hlds.simplify.mh"

#line 52 "check_hlds.simplify.c"
#line 53 "check_hlds.simplify.c"
#ifndef CHECK_HLDS__SIMPLIFY_DECL_GUARD
#define CHECK_HLDS__SIMPLIFY_DECL_GUARD

#line 57 "check_hlds.simplify.c"
#line 58 "check_hlds.simplify.c"

#endif
#line 61 "check_hlds.simplify.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__simplify__type_ctor_info_before_after_0,
	mercury_data_check_hlds__simplify__type_ctor_info_cond_can_switch_0,
	mercury_data_check_hlds__simplify__type_ctor_info_seen_non_ground_term_0,
	mercury_data_check_hlds__simplify__type_ctor_info_simplification_0,
	mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0,
	mercury_data_check_hlds__simplify__type_ctor_info_simplify_info_0,
	mercury_data_check_hlds__simplify__type_ctor_info_var_renaming_0;
MR_decl_label3(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0, 5,6,8)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0, 2,3,5,8,6,13,15,16,20,21)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0, 22,11,25,26,27,28,29,30,32,34)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0, 36,31,39,41,42,40,45,46,50,51)
MR_decl_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0, 38,53,54,55,62,63)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0, 96,4,3,5,10,14,15,11,21,23)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0, 24,19,28,29,25,31,35,34,33,39)
MR_decl_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0, 40,41,43,17,44,45)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0, 4,11,14,15,9,21,26,3,40,44)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0, 45,46,47,49,50,53,54,55,56,57)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0, 58,59,64,67,70,72,73,1)
MR_decl_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0, 3,5,10,16,190,1)
MR_decl_label3(check_hlds__simplify__call_builtin_compound_eq_5_0, 2,3,6)
MR_decl_label9(check_hlds__simplify__call_specific_unify_10_0, 5,6,9,10,11,12,18,19,20)
MR_decl_label4(check_hlds__simplify__case_list_contains_trace_4_0, 19,4,6,7)
MR_decl_label2(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0, 5,2)
MR_decl_label10(check_hlds__simplify__create_test_unification_6_0, 2,3,5,6,7,8,9,10,11,12)
MR_decl_label8(check_hlds__simplify__create_test_unification_6_0, 14,15,13,19,20,27,28,29)
MR_decl_label10(check_hlds__simplify__do_process_clause_body_goal_4_0, 2,3,4,7,9,10,11,12,13,14)
MR_decl_label10(check_hlds__simplify__do_process_clause_body_goal_4_0, 15,16,17,5,19,22,24,25,26,27)
MR_decl_label10(check_hlds__simplify__do_process_clause_body_goal_4_0, 28,29,30,31,32,33,34,35,36,37)
MR_decl_label4(check_hlds__simplify__do_process_clause_body_goal_4_0, 38,39,40,20)
MR_decl_label10(check_hlds__simplify__enforce_unreachability_invariant_4_0, 2,3,4,8,10,11,5,6,14,18)
MR_decl_label2(check_hlds__simplify__enforce_unreachability_invariant_4_0, 19,13)
MR_decl_label10(check_hlds__simplify__excess_assigns_in_conj_5_0, 4,6,7,8,9,10,11,12,15,13)
MR_decl_label10(check_hlds__simplify__excess_assigns_in_conj_5_0, 17,18,19,20,21,22,23,25,26,27)
MR_decl_label2(check_hlds__simplify__excess_assigns_in_conj_5_0, 28,2)
MR_decl_label7(check_hlds__simplify__extract_type_info_8_0, 2,3,4,6,7,8,9)
MR_decl_label10(check_hlds__simplify__find_excess_assigns_in_conj_9_0, 143,3,8,9,11,10,13,15,14,63)
MR_decl_label10(check_hlds__simplify__find_excess_assigns_in_conj_9_0, 20,23,26,28,25,33,34,36,39,42)
MR_decl_label8(check_hlds__simplify__find_excess_assigns_in_conj_9_0, 44,41,47,50,52,35,4,5)
MR_decl_label3(check_hlds__simplify__find_renamed_var_3_0, 15,4,2)
MR_decl_label10(check_hlds__simplify__find_simplifications_3_0, 2,3,4,5,6,14,11,9,8,18)
MR_decl_label10(check_hlds__simplify__find_simplifications_3_0, 19,20,21,22,23,24,27,28,31,32)
MR_decl_label10(check_hlds__simplify__goal_contains_trace_3_0, 4,3,6,5,9,8,12,13,14,16)
MR_decl_label10(check_hlds__simplify__goal_contains_trace_3_0, 11,56,22,20,25,26,18,31,32,35)
MR_decl_label9(check_hlds__simplify__goal_contains_trace_3_0, 30,37,36,28,42,2,46,45,48)
MR_decl_label3(check_hlds__simplify__goal_is_call_to_builtin_false_1_0, 4,5,1)
MR_decl_label4(check_hlds__simplify__goal_list_contains_trace_4_0, 18,4,5,6)
MR_decl_label10(check_hlds__simplify__inequality_goal_10_0, 2,4,5,7,8,9,14,15,16,17)
MR_decl_label10(check_hlds__simplify__inequality_goal_10_0, 20,24,22,18,35,33,45,47,48,49)
MR_decl_label7(check_hlds__simplify__inequality_goal_10_0, 50,51,53,69,70,71,74)
MR_decl_label6(check_hlds__simplify__input_args_are_equiv_5_0, 35,3,9,11,21,1)
MR_decl_label10(check_hlds__simplify__make_type_info_vars_5_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(check_hlds__simplify__make_type_info_vars_5_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label1(check_hlds__simplify__make_type_info_vars_5_0, 22)
MR_decl_label3(check_hlds__simplify__maybe_wrap_goal_7_0, 3,4,2)
MR_decl_label5(check_hlds__simplify__nested_scopes_4_0, 2,6,7,3,4)
MR_decl_label7(check_hlds__simplify__nested_scopes_2_4_0, 97,9,5,14,11,21,103)
MR_decl_label10(check_hlds__simplify__simplify_call_goal_10_0, 2,3,4,6,8,9,11,12,13,14)
MR_decl_label10(check_hlds__simplify__simplify_call_goal_10_0, 16,18,24,25,5,36,38,40,41,42)
MR_decl_label10(check_hlds__simplify__simplify_call_goal_10_0, 47,49,50,51,52,53,54,60,61,65)
MR_decl_label10(check_hlds__simplify__simplify_call_goal_10_0, 59,70,71,73,37,88,90,92,94,89)
MR_decl_label10(check_hlds__simplify__simplify_call_goal_10_0, 96,98,100,95,102,104,106,107,108,110)
MR_decl_label10(check_hlds__simplify__simplify_call_goal_10_0, 111,112,113,115,117,114,121,122,123,124)
MR_decl_label2(check_hlds__simplify__simplify_call_goal_10_0, 126,103)
MR_decl_label10(check_hlds__simplify__simplify_disj_8_0, 101,4,3,5,6,11,12,15,17,20)
MR_decl_label10(check_hlds__simplify__simplify_disj_8_0, 22,32,14,33,37,40,41,34,43,8)
MR_decl_label3(check_hlds__simplify__simplify_disj_8_0, 47,49,50)
MR_decl_label10(check_hlds__simplify__simplify_goal_4_0, 2,4,6,3,7,9,11,8,12,13)
MR_decl_label10(check_hlds__simplify__simplify_goal_4_0, 14,15,16,17,18,23,22,25,28,27)
MR_decl_label10(check_hlds__simplify__simplify_goal_4_0, 26,30,32,38,40,43,39,37,45,35)
MR_decl_label10(check_hlds__simplify__simplify_goal_4_0, 59,31,61,63,62,65,67,68,19,20)
MR_decl_label10(check_hlds__simplify__simplify_goal_4_0, 71,74,75,76,77,80,79,85,84,83)
MR_decl_label10(check_hlds__simplify__simplify_goal_4_0, 87,89,88,91,93,94,95,70,98,99)
MR_decl_label10(check_hlds__simplify__simplify_goal_4_0, 104,108,107,103,112,113,114,116,117,118)
MR_decl_label10(check_hlds__simplify__simplify_goal_disj_6_0, 2,5,6,4,9,8,12,11,14,15)
MR_decl_label10(check_hlds__simplify__simplify_goal_disj_6_0, 16,17,18,19,3,21,22,24,25,23)
MR_decl_label10(check_hlds__simplify__simplify_goal_expr_6_0, 3,5,7,9,13,11,16,18,20,22)
MR_decl_label3(check_hlds__simplify__simplify_goal_expr_6_0, 26,28,110)
MR_decl_label10(check_hlds__simplify__simplify_goal_foreign_proc_6_0, 5,6,7,8,11,12,13,14,15,18)
MR_decl_label10(check_hlds__simplify__simplify_goal_foreign_proc_6_0, 19,21,2,3,22,26,28,24,23,31)
MR_decl_label4(check_hlds__simplify__simplify_goal_foreign_proc_6_0, 33,38,39,30)
MR_decl_label7(check_hlds__simplify__simplify_goal_generic_call_6_0, 3,9,6,11,14,10,48)
MR_decl_label10(check_hlds__simplify__simplify_goal_ite_6_0, 2,3,8,12,9,10,18,21,15,23)
MR_decl_label10(check_hlds__simplify__simplify_goal_ite_6_0, 24,25,28,32,33,36,35,34,47,7)
MR_decl_label10(check_hlds__simplify__simplify_goal_ite_6_0, 5,50,51,52,55,56,59,58,57,70)
MR_decl_label1(check_hlds__simplify__simplify_goal_ite_6_0, 71)
MR_decl_label10(check_hlds__simplify__simplify_goal_neg_6_0, 2,3,4,5,6,7,8,35,37,38)
MR_decl_label4(check_hlds__simplify__simplify_goal_neg_6_0, 46,43,50,48)
MR_decl_label10(check_hlds__simplify__simplify_goal_ordinary_ite_9_0, 5,6,7,10,11,12,2,13,14,15)
MR_decl_label10(check_hlds__simplify__simplify_goal_ordinary_ite_9_0, 16,17,18,19,20,21,22,23,24,25)
MR_decl_label10(check_hlds__simplify__simplify_goal_ordinary_ite_9_0, 26,29,30,31,33,34,35,36,40,42)
MR_decl_label10(check_hlds__simplify__simplify_goal_ordinary_ite_9_0, 46,38,48,49,51,52,53,55,54,68)
MR_decl_label6(check_hlds__simplify__simplify_goal_ordinary_ite_9_0, 69,50,81,86,87,80)
MR_decl_label9(check_hlds__simplify__simplify_goal_parallel_conj_6_0, 4,5,3,8,10,11,9,7,16)
MR_decl_label10(check_hlds__simplify__simplify_goal_plain_call_6_0, 2,3,4,5,12,13,16,17,18,7)
MR_decl_label10(check_hlds__simplify__simplify_goal_plain_conj_6_0, 2,3,7,8,6,10,12,14,16,18)
MR_decl_label7(check_hlds__simplify__simplify_goal_plain_conj_6_0, 19,20,17,21,22,23,13)
MR_decl_label10(check_hlds__simplify__simplify_goal_scope_6_0, 5,6,7,10,9,2,13,14,18,20)
MR_decl_label10(check_hlds__simplify__simplify_goal_scope_6_0, 21,23,27,50,29,33,35,31,37,30)
MR_decl_label10(check_hlds__simplify__simplify_goal_switch_6_0, 2,3,4,5,8,11,12,14,15,16)
MR_decl_label10(check_hlds__simplify__simplify_goal_switch_6_0, 6,18,19,20,23,24,25,26,21,31)
MR_decl_label10(check_hlds__simplify__simplify_goal_switch_6_0, 39,35,36,43,44,47,50,51,52,53)
MR_decl_label10(check_hlds__simplify__simplify_goal_switch_6_0, 45,54,55,57,58,59,60,61,62,63)
MR_decl_label10(check_hlds__simplify__simplify_goal_switch_6_0, 64,65,66,67,33,71,72,27,78,77)
MR_decl_label10(check_hlds__simplify__simplify_goal_switch_6_0, 76,74,81,82,83,84,85,88,89,90)
MR_decl_label3(check_hlds__simplify__simplify_goal_switch_6_0, 91,92,93)
MR_decl_label10(check_hlds__simplify__simplify_goal_trace_goal_7_0, 3,2,7,8,6,10,11,12,13,14)
MR_decl_label10(check_hlds__simplify__simplify_goal_trace_goal_7_0, 16,18,20,23,22,15,25,26,27,28)
MR_decl_label7(check_hlds__simplify__simplify_goal_trace_goal_7_0, 29,30,31,32,33,34,35)
MR_decl_label10(check_hlds__simplify__simplify_goal_unify_6_0, 4,5,6,7,8,9,10,11,12,13)
MR_decl_label10(check_hlds__simplify__simplify_goal_unify_6_0, 14,16,3,21,23,24,18,19,29,28)
MR_decl_label8(check_hlds__simplify__simplify_goal_unify_6_0, 25,31,39,37,41,36,43,34)
MR_decl_label1(check_hlds__simplify__simplify_info_add_error_spec_3_0, 2)
MR_decl_label7(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0, 2,5,6,8,9,10,11)
MR_decl_label5(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0, 2,3,4,5,6)
MR_decl_label4(check_hlds__simplify__simplify_info_init_5_0, 2,3,4,5)
MR_decl_label1(check_hlds__simplify__simplify_info_leave_lambda_2_0, 2)
MR_decl_label4(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0, 7,9,2,3)
MR_decl_label1(check_hlds__simplify__simplify_info_reinit_4_0, 3)
MR_decl_label1(check_hlds__simplify__simplify_info_set_module_info_3_0, 2)
MR_decl_label1(check_hlds__simplify__simplify_info_set_var_types_3_0, 2)
MR_decl_label1(check_hlds__simplify__simplify_info_update_instmap_3_0, 2)
MR_decl_label10(check_hlds__simplify__simplify_library_call_int_arity2_8_0, 2,3,4,5,7,8,9,10,15,20)
MR_decl_label10(check_hlds__simplify__simplify_library_call_int_arity2_8_0, 21,22,25,27,28,29,33,38,39,40)
MR_decl_label1(check_hlds__simplify__simplify_library_call_int_arity2_8_0, 1)
MR_decl_label5(check_hlds__simplify__simplify_par_conj_5_0, 20,4,5,7,8)
MR_decl_label10(check_hlds__simplify__simplify_pred_8_0, 2,3,6,4,10,11,12,13,14,15)
MR_decl_label1(check_hlds__simplify__simplify_pred_8_0, 16)
MR_decl_label10(check_hlds__simplify__simplify_pred_procs_9_0, 29,3,4,5,6,7,9,10,8,11)
MR_decl_label5(check_hlds__simplify__simplify_pred_procs_9_0, 13,14,15,16,17)
MR_decl_label1(check_hlds__simplify__simplify_proc_7_0, 2)
MR_decl_label10(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0, 2,3,4,5,7,8,9,10,11,12)
MR_decl_label10(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0, 2,4,5,8,9,10,12,15,18,19)
MR_decl_label2(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0, 28,17)
MR_decl_label10(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0, 2,3,4,8,13,15,11,25,27,6)
MR_decl_label10(check_hlds__simplify__simplify_proc_return_msgs_8_0, 2,3,4,6,8,11,10,13,15,5)
MR_decl_label10(check_hlds__simplify__simplify_proc_return_msgs_8_0, 17,19,22,18,23,24,25,26,27,28)
MR_decl_label10(check_hlds__simplify__simplify_proc_return_msgs_8_0, 29,30,31,32,33,34,35,38,40,44)
MR_decl_label10(check_hlds__simplify__simplify_proc_return_msgs_8_0, 45,46,36,48,49,50,51,52,53,54)
MR_decl_label5(check_hlds__simplify__simplify_proc_return_msgs_8_0, 55,56,57,58,60)
MR_decl_label10(check_hlds__simplify__simplify_process_clause_body_goal_4_0, 2,3,9,7,11,6,14,15,17,5)
MR_decl_label4(check_hlds__simplify__simplify_process_clause_body_goal_4_0, 19,20,22,23)
MR_decl_label10(check_hlds__simplify__simplify_switch_13_0, 68,3,4,5,6,8,9,10,11,12)
MR_decl_label8(check_hlds__simplify__simplify_switch_13_0, 13,17,22,23,24,25,28,29)
MR_decl_label3(check_hlds__simplify__type_info_locn_6_0, 2,4,5)
MR_decl_label10(check_hlds__simplify__warn_switch_for_ite_cond_5_0, 124,5,3,10,13,15,17,19,21,23)
MR_decl_label7(check_hlds__simplify__warn_switch_for_ite_cond_5_0, 25,11,8,30,35,52,36)
MR_decl_label5(fn__check_hlds__simplify__can_switch_on_type_1_0, 5,3,6,8,10)
MR_decl_label10(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0, 4,5,8,10,7,16,15,21,20,25)
MR_decl_label10(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0, 28,27,33,32,38,39,37,43,42,45)
MR_decl_label10(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0, 47,50,51,52,49,57,59,61,13,64)
MR_decl_label10(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0, 65,66,67,68,69,70,72,3,76,75)
MR_decl_label3(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0, 78,79,81)
MR_decl_label10(fn__check_hlds__simplify__list_to_simplifications_1_0, 3,2,5,7,6,9,11,10,13,15)
MR_decl_label10(fn__check_hlds__simplify__list_to_simplifications_1_0, 14,17,19,18,21,23,22,25,27,26)
MR_decl_label10(fn__check_hlds__simplify__list_to_simplifications_1_0, 29,31,30,33,35,34,37,39,38,41)
MR_decl_label5(fn__check_hlds__simplify__list_to_simplifications_1_0, 43,42,45,47,46)
MR_decl_label10(fn__check_hlds__simplify__simplifications_to_list_1_0, 2,5,6,9,10,13,14,17,18,21)
MR_decl_label10(fn__check_hlds__simplify__simplifications_to_list_1_0, 22,25,26,29,30,33,34,37,38,41)
MR_decl_label10(fn__check_hlds__simplify__simplifications_to_list_1_0, 42,45,46,50,51,52,53,54,55,56)
MR_decl_label3(fn__check_hlds__simplify__simplifications_to_list_1_0, 57,58,59)
MR_decl_label10(fn__check_hlds__simplify__will_flush_2_0, 38,3,6,4,9,13,16,19,24,52)
MR_decl_label10(fn__check_hlds__simplify__will_flush_2_0, 25,23,22,56,29,57,32,35,36,141)
MR_decl_label4(__Unify___check_hlds__simplify__cond_can_switch_0_0, 5,15,6,1)
MR_decl_label2(__Unify___check_hlds__simplify__simplifications_0_0, 4,1)
MR_decl_label10(__Unify___check_hlds__simplify__simplify_info_0_0, 4,6,8,10,12,14,16,18,20,1)
MR_decl_label1(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1, 1)
MR_decl_label9(__Compare___check_hlds__simplify__cond_can_switch_0_0, 7,5,11,33,9,25,14,26,15)
MR_decl_label10(__Compare___check_hlds__simplify__simplifications_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label4(__Compare___check_hlds__simplify__simplifications_0_0, 37,41,45,101)
MR_decl_label10(__Compare___check_hlds__simplify__simplify_info_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label9(__Compare___check_hlds__simplify__simplify_info_0_0, 37,41,45,49,53,57,61,65,141)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_simplifications_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_common_struct_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_warn_simple_code_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_elim_removable_scopes_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_set_rerun_det_2_0)
MR_decl_static(check_hlds__simplify__enforce_unreachability_invariant_4_0)
MR_decl_static(check_hlds__simplify__goal_is_call_to_builtin_false_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_once_1_0)
MR_decl_static(check_hlds__simplify__maybe_wrap_goal_7_0)
MR_decl_static(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_instmap_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_update_instmap_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_common_info_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_set_common_info_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_instmap_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_undo_goal_updates_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_excess_assign_1_0)
MR_decl_static(check_hlds__simplify__find_renamed_var_3_0)
MR_decl_static(check_hlds__simplify__find_excess_assigns_in_conj_9_0)
MR_decl_static(check_hlds__simplify__renaming_transitive_closure_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_varset_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_det_info_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_module_info_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_varset_3_0)
MR_decl_static(check_hlds__simplify__excess_assigns_in_conj_5_0)
MR_decl_static(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_error_specs_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_do_add_error_spec_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_add_error_spec_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_post_branch_update_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_var_types_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_set_requantify_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_det_info_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_module_info_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_var_types_3_0)
MR_decl_static(check_hlds__simplify__create_test_unification_6_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_incr_cost_delta_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0)
MR_decl_static(check_hlds__simplify__simplify_goal_generic_call_6_0)
MR_decl_static(check_hlds__simplify__inequality_goal_10_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_warn_obsolete_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_const_prop_1_0)
MR_decl_static(check_hlds__simplify__simplify_library_call_int_arity2_8_0)
MR_decl_static(check_hlds__simplify__input_args_are_equiv_5_0)
MR_decl_static(check_hlds__simplify__simplify_info_inside_lambda_1_0)
MR_decl_static(check_hlds__simplify__simplify_call_goal_10_0)
MR_decl_static(check_hlds__simplify__simplify_goal_plain_call_6_0)
MR_decl_static(check_hlds__simplify__call_specific_unify_10_0)
MR_decl_static(check_hlds__simplify__call_builtin_compound_eq_5_0)
MR_decl_static(check_hlds__simplify__make_type_info_vars_5_0)
MR_decl_static(check_hlds__simplify__extract_type_info_8_0)
MR_decl_static(check_hlds__simplify__type_info_locn_6_0)
MR_decl_static(check_hlds__simplify__simplify_info_enter_lambda_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_leave_lambda_2_0)
MR_decl_static(fn__check_hlds__simplify__can_switch_on_type_1_0)
MR_decl_static(check_hlds__simplify__warn_switch_for_ite_cond_5_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_after_front_end_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0)
MR_decl_static(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0)
MR_decl_static(check_hlds__simplify__simplify_goal_trace_goal_7_0)
MR_decl_static(check_hlds__simplify__nested_scopes_2_4_0)
MR_decl_static(check_hlds__simplify__nested_scopes_4_0)
MR_decl_static(check_hlds__simplify__simplify_goal_foreign_proc_6_0)
MR_decl_static(check_hlds__simplify__simplify_goal_atomic_goal_12_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_found_contains_trace_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_extra_common_struct_1_0)
MR_decl_static(fn__check_hlds__simplify__will_flush_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0)
MR_decl_static(check_hlds__simplify__simplify_goal_4_0)
MR_decl_static(check_hlds__simplify__simplify_goal_expr_6_0)
MR_decl_static(check_hlds__simplify__simplify_goal_plain_conj_6_0)
MR_decl_static(check_hlds__simplify__simplify_goal_parallel_conj_6_0)
MR_decl_static(check_hlds__simplify__simplify_goal_disj_6_0)
MR_decl_static(check_hlds__simplify__simplify_goal_switch_6_0)
MR_decl_static(check_hlds__simplify__simplify_goal_unify_6_0)
MR_decl_static(check_hlds__simplify__simplify_goal_ite_6_0)
MR_decl_static(check_hlds__simplify__simplify_goal_ordinary_ite_9_0)
MR_decl_static(check_hlds__simplify__simplify_goal_neg_6_0)
MR_decl_static(check_hlds__simplify__simplify_goal_scope_6_0)
MR_decl_static(check_hlds__simplify__simplify_par_conj_5_0)
MR_decl_static(check_hlds__simplify__simplify_switch_13_0)
MR_decl_static(check_hlds__simplify__simplify_disj_8_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_requantify_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_rerun_det_1_0)
MR_decl_static(check_hlds__simplify__do_process_clause_body_goal_4_0)
MR_decl_static(check_hlds__simplify__goal_contains_trace_3_0)
MR_decl_static(check_hlds__simplify__goal_list_contains_trace_4_0)
MR_decl_static(check_hlds__simplify__case_list_contains_trace_4_0)
MR_decl_static(check_hlds__simplify__simplify_info_reinit_4_0)
MR_decl_static(check_hlds__simplify__simplify_info_get_found_contains_trace_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_simplifications_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_process_clause_body_goal_4_0)
MR_decl_static(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0)
MR_decl_static(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0)
MR_decl_static(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_init_5_0)
MR_decl_static(check_hlds__simplify__simplify_info_get_has_parallel_conj_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_get_has_user_event_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_proc_return_msgs_8_0)
MR_decl_static(check_hlds__simplify__simplify_pred_procs_9_0)
MR_def_extern_entry(check_hlds__simplify__simplify_pred_8_0)
MR_def_extern_entry(check_hlds__simplify__simplify_proc_7_0)
MR_def_extern_entry(check_hlds__simplify__simplify_may_introduce_calls_3_0)
MR_def_extern_entry(check_hlds__simplify__find_simplifications_3_0)
MR_def_extern_entry(fn__check_hlds__simplify__simplifications_to_list_1_0)
MR_def_extern_entry(fn__check_hlds__simplify__list_to_simplifications_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_format_calls_1_0)
MR_decl_static(fn__check_hlds__simplify__make_arg_always_boxed_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_recompute_atomic_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_cost_delta_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0)
MR_decl_static(__Unify___check_hlds__simplify__before_after_0_0)
MR_decl_static(__Compare___check_hlds__simplify__before_after_0_0)
MR_decl_static(__Unify___check_hlds__simplify__cond_can_switch_0_0)
MR_decl_static(__Compare___check_hlds__simplify__cond_can_switch_0_0)
MR_decl_static(__Unify___check_hlds__simplify__seen_non_ground_term_0_0)
MR_decl_static(__Compare___check_hlds__simplify__seen_non_ground_term_0_0)
MR_def_extern_entry(__Unify___check_hlds__simplify__simplification_0_0)
MR_def_extern_entry(__Compare___check_hlds__simplify__simplification_0_0)
MR_def_extern_entry(__Unify___check_hlds__simplify__simplifications_0_0)
MR_def_extern_entry(__Compare___check_hlds__simplify__simplifications_0_0)
MR_def_extern_entry(__Unify___check_hlds__simplify__simplify_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__simplify__simplify_info_0_0)
MR_decl_static(__Unify___check_hlds__simplify__var_renaming_0_0)
MR_decl_static(__Compare___check_hlds__simplify__var_renaming_0_0)
MR_decl_static(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1)
MR_decl_static(check_hlds__simplify__IntroducedFrom__pred__simplify_proc_return_msgs__439__1_4_0)
MR_decl_static(check_hlds__simplify__IntroducedFrom__pred__create_test_unification__3505__1_2_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
2,
1
}
},
{
{
3,
1
}
},
{
{
2,
0
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_1 mercury_common_1[57] =
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
MR_TAG_COMMON(3,7,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,0),
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
MR_TAG_COMMON(3,8,1),
MR_TAG_COMMON(1,1,6)
}
},
{
{
MR_TAG_COMMON(3,8,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,3),
MR_TAG_COMMON(1,1,8)
}
},
{
{
MR_TAG_COMMON(3,8,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,5),
MR_TAG_COMMON(1,1,10)
}
},
{
{
MR_TAG_COMMON(3,8,6),
MR_TAG_COMMON(1,1,11)
}
},
{
{
MR_TAG_COMMON(3,8,7),
MR_TAG_COMMON(1,1,12)
}
},
{
{
MR_TAG_COMMON(2,11,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,0),
MR_TAG_COMMON(1,1,14)
}
},
{
{
MR_TAG_COMMON(1,12,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,10),
MR_TAG_COMMON(1,1,18)
}
},
{
{
MR_TAG_COMMON(2,11,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,2),
MR_TAG_COMMON(1,1,20)
}
},
{
{
MR_TAG_COMMON(1,12,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,12),
MR_TAG_COMMON(1,1,23)
}
},
{
{
MR_TAG_COMMON(0,11,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,12,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,12),
MR_TAG_COMMON(1,1,27)
}
},
{
{
MR_TAG_COMMON(0,11,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,12,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,14),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,15),
MR_TAG_COMMON(1,1,31)
}
},
{
{
MR_TAG_COMMON(3,8,17),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,12,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,18),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,11,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,12,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,19),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,20),
MR_TAG_COMMON(1,1,39)
}
},
{
{
MR_TAG_COMMON(0,11,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,12,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,21),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,22),
MR_TAG_COMMON(1,1,43)
}
},
{
{
MR_TAG_COMMON(3,8,23),
MR_TAG_COMMON(1,1,44)
}
},
{
{
MR_TAG_COMMON(3,8,24),
MR_TAG_COMMON(1,1,45)
}
},
{
{
MR_TAG_COMMON(0,11,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,25),
MR_TAG_COMMON(1,1,43)
}
},
{
{
MR_TAG_COMMON(3,8,23),
MR_TAG_COMMON(1,1,48)
}
},
{
{
MR_TAG_COMMON(3,8,26),
MR_TAG_COMMON(1,1,49)
}
},
{
{
MR_TAG_COMMON(0,11,10),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,7,2),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, special_pred_id),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(1,54),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__renaming_transitive_closure_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_switch_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__renaming_transitive_closure_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,0),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_goal_switch_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(2,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__create_test_unification_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__create_test_unification_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(1,2)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(1,2)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
MR_decl_entry(string__to_int_2_0);
static const struct mercury_type_5 mercury_common_5[7] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(check_hlds__simplify__IntroducedFrom__pred__create_test_unification__3505__1_2_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(fn__check_hlds__simplify__make_arg_always_boxed_1_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(fn__check_hlds__simplify__make_arg_always_boxed_1_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(string__to_int_2_0),
0
},
{
MR_COMMON(14,0),
MR_ENTRY_AP(check_hlds__simplify__IntroducedFrom__pred__simplify_proc_return_msgs__439__1_4_0),
0
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
1,
1,
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_7 mercury_common_7[3] =
{
{
MR_string_const("replacement of inequality with call to compare/3", 48)
},
{
MR_string_const("int", 3)
},
{
MR_string_const("simplify_library_call", 21)
},
};

static const struct mercury_type_8 mercury_common_8[27] =
{
{
4,
MR_string_const("Warning: call to obsolete", 25)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("infinite recursion.", 19)
},
{
4,
MR_string_const("Warning: recursive call will lead to", 36)
},
{
4,
MR_string_const("leading to infinite recursion.", 30)
},
{
4,
MR_string_const("with exactly the same input arguments,", 38)
},
{
4,
MR_string_const("the procedure will call itself", 30)
},
{
4,
MR_string_const("If this recursive call is executed,", 35)
},
{
4,
MR_string_const("Warning: this goal cannot succeed.", 34)
},
{
4,
MR_string_const("replacing it with \140fail\'.", 25)
},
{
4,
MR_string_const("The compiler will optimize away this goal,", 42)
},
{
4,
MR_string_const("cannot succeed.", 15)
},
{
4,
MR_string_const("Warning: the condition of this if-then-else", 43)
},
{
4,
MR_string_const("cannot fail.", 12)
},
{
4,
MR_string_const("could be replaced by a switch", 29)
},
{
4,
MR_string_const("Warning: this if-then-else", 26)
},
{
4,
MR_string_const("on", 2)
},
{
4,
MR_string_const("Warning: the negated goal cannot fail.", 38)
},
{
4,
MR_string_const("Warning: the negated goal cannot succeed.", 41)
},
{
4,
MR_string_const("will never have any solutions.", 30)
},
{
4,
MR_string_const("Warning: this disjunct", 22)
},
{
4,
MR_string_const("on the predicate.", 17)
},
{
4,
MR_string_const("contradicts the \140no_inline\' pragma", 34)
},
{
4,
MR_string_const("on the foreign_proc", 19)
},
{
4,
MR_string_const("Error: the \140may_duplicate\' attribute", 36)
},
{
4,
MR_string_const("contradicts the \140inline\' pragma", 31)
},
{
4,
MR_string_const("Error: the \140may_not_duplicate\' attribute", 40)
},
};

static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
19,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
37,
1
},
{
MR_tbmkword(0, 2),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_11 mercury_common_11[11] =
{
{
MR_TAG_COMMON(1,1,9)
},
{
MR_TAG_COMMON(1,1,13)
},
{
MR_TAG_COMMON(1,1,17)
},
{
MR_TAG_COMMON(1,1,19)
},
{
MR_TAG_COMMON(1,1,24)
},
{
MR_TAG_COMMON(1,1,28)
},
{
MR_TAG_COMMON(1,1,33)
},
{
MR_TAG_COMMON(1,1,36)
},
{
MR_TAG_COMMON(1,1,40)
},
{
MR_TAG_COMMON(1,1,46)
},
{
MR_TAG_COMMON(1,1,50)
},
};

static const struct mercury_type_12 mercury_common_12[19] =
{
{
((MR_Integer) 19 | ((MR_Integer) 1 << (MR_Integer) 10)),
MR_TAG_COMMON(1,1,15)
},
{
((MR_Integer) 19 | ((MR_Integer) 1 << (MR_Integer) 10)),
MR_TAG_COMMON(1,1,21)
},
{
((MR_Integer) 19 | ((MR_Integer) 1 << (MR_Integer) 10)),
MR_TAG_COMMON(1,1,25)
},
{
((MR_Integer) 19 | ((MR_Integer) 1 << (MR_Integer) 10)),
MR_TAG_COMMON(1,1,29)
},
{
((MR_Integer) 19 | ((MR_Integer) 1 << (MR_Integer) 10)),
MR_TAG_COMMON(1,1,34)
},
{
((MR_Integer) 19 | ((MR_Integer) 1 << (MR_Integer) 10)),
MR_TAG_COMMON(1,1,37)
},
{
((MR_Integer) 19 | ((MR_Integer) 1 << (MR_Integer) 10)),
MR_TAG_COMMON(1,1,41)
},
{
0,
MR_tbmkword(0, 0)
},
{
1,
MR_tbmkword(0, 0)
},
{
2,
MR_tbmkword(0, 0)
},
{
3,
MR_tbmkword(0, 0)
},
{
4,
MR_tbmkword(0, 0)
},
{
5,
MR_tbmkword(0, 0)
},
{
6,
MR_tbmkword(0, 0)
},
{
7,
MR_tbmkword(0, 0)
},
{
8,
MR_tbmkword(0, 0)
},
{
9,
MR_tbmkword(0, 0)
},
{
10,
MR_tbmkword(0, 0)
},
{
11,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__warn_switch_for_ite_cond_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_cond_can_switch_0;
static const struct mercury_type_13 mercury_common_13[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__warn_switch_for_ite_cond_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(2,2),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(check_hlds__simplify, cond_can_switch),
MR_CTOR0_ADDR(check_hlds__simplify, cond_can_switch)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_proc_return_msgs_8_0_1;
static const struct mercury_type_14 mercury_common_14[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_proc_return_msgs_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,2),
MR_STRING_CTOR_ADDR,
MR_COMMON(1,53),
MR_COMMON(1,53)
}
},
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_before_after_0_0 = {
	"before",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_before_after_0_1 = {
	"after",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__simplify__enum_value_ordered_before_after_0[] = {
	&mercury_data_check_hlds__simplify__enum_functor_desc_before_after_0_0,
	&mercury_data_check_hlds__simplify__enum_functor_desc_before_after_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__simplify__enum_name_ordered_before_after_0[] = {
	&mercury_data_check_hlds__simplify__enum_functor_desc_before_after_0_1,
	&mercury_data_check_hlds__simplify__enum_functor_desc_before_after_0_0
};

const MR_Integer mercury_data_check_hlds__simplify__functor_number_map_before_after_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_before_after_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__simplify__before_after_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__simplify__before_after_0_0)),
	"check_hlds.simplify",
	"before_after",
	{ (void *)mercury_data_check_hlds__simplify__enum_name_ordered_before_after_0 },
	{ (void *)mercury_data_check_hlds__simplify__enum_value_ordered_before_after_0 },
	2,
	4,
	mercury_data_check_hlds__simplify__functor_number_map_before_after_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__simplify__du_functor_desc_cond_can_switch_0_0 = {
	"cond_can_switch_uncommitted",
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

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__simplify__field_types_cond_can_switch_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__simplify__du_functor_desc_cond_can_switch_0_1 = {
	"cond_can_switch_on",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__simplify__field_types_cond_can_switch_0_1,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__simplify__du_functor_desc_cond_can_switch_0_2 = {
	"cond_cannot_switch",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__simplify__du_stag_ordered_cond_can_switch_0_0[] = {
	&mercury_data_check_hlds__simplify__du_functor_desc_cond_can_switch_0_0,
	&mercury_data_check_hlds__simplify__du_functor_desc_cond_can_switch_0_2

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__simplify__du_stag_ordered_cond_can_switch_0_1[] = {
	&mercury_data_check_hlds__simplify__du_functor_desc_cond_can_switch_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__simplify__du_ptag_ordered_cond_can_switch_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__simplify__du_stag_ordered_cond_can_switch_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__simplify__du_stag_ordered_cond_can_switch_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__simplify__du_name_ordered_cond_can_switch_0[] = {
	&mercury_data_check_hlds__simplify__du_functor_desc_cond_can_switch_0_1,
	&mercury_data_check_hlds__simplify__du_functor_desc_cond_can_switch_0_0,
	&mercury_data_check_hlds__simplify__du_functor_desc_cond_can_switch_0_2
};

const MR_Integer mercury_data_check_hlds__simplify__functor_number_map_cond_can_switch_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_cond_can_switch_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__simplify__cond_can_switch_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__simplify__cond_can_switch_0_0)),
	"check_hlds.simplify",
	"cond_can_switch",
	{ (void *)mercury_data_check_hlds__simplify__du_name_ordered_cond_can_switch_0 },
	{ (void *)mercury_data_check_hlds__simplify__du_ptag_ordered_cond_can_switch_0 },
	3,
	4,
	mercury_data_check_hlds__simplify__functor_number_map_cond_can_switch_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_seen_non_ground_term_0_0 = {
	"not_seen_non_ground_term",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_seen_non_ground_term_0_1 = {
	"seen_non_ground_term",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__simplify__enum_value_ordered_seen_non_ground_term_0[] = {
	&mercury_data_check_hlds__simplify__enum_functor_desc_seen_non_ground_term_0_0,
	&mercury_data_check_hlds__simplify__enum_functor_desc_seen_non_ground_term_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__simplify__enum_name_ordered_seen_non_ground_term_0[] = {
	&mercury_data_check_hlds__simplify__enum_functor_desc_seen_non_ground_term_0_0,
	&mercury_data_check_hlds__simplify__enum_functor_desc_seen_non_ground_term_0_1
};

const MR_Integer mercury_data_check_hlds__simplify__functor_number_map_seen_non_ground_term_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_seen_non_ground_term_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__simplify__seen_non_ground_term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__simplify__seen_non_ground_term_0_0)),
	"check_hlds.simplify",
	"seen_non_ground_term",
	{ (void *)mercury_data_check_hlds__simplify__enum_name_ordered_seen_non_ground_term_0 },
	{ (void *)mercury_data_check_hlds__simplify__enum_value_ordered_seen_non_ground_term_0 },
	2,
	4,
	mercury_data_check_hlds__simplify__functor_number_map_seen_non_ground_term_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_0 = {
	"simp_warn_simple_code",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_1 = {
	"simp_warn_duplicate_calls",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_2 = {
	"simp_format_calls",
	2
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_3 = {
	"simp_warn_obsolete",
	3
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_4 = {
	"simp_do_once",
	4
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_5 = {
	"simp_after_front_end",
	5
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_6 = {
	"simp_excess_assigns",
	6
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_7 = {
	"simp_elim_removable_scopes",
	7
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_8 = {
	"simp_opt_duplicate_calls",
	8
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_9 = {
	"simp_constant_prop",
	9
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_10 = {
	"simp_common_struct",
	10
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_11 = {
	"simp_extra_common_struct",
	11
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__simplify__enum_value_ordered_simplification_0[] = {
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_0,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_1,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_2,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_3,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_4,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_5,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_6,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_7,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_8,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_9,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_10,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_11
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__simplify__enum_name_ordered_simplification_0[] = {
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_5,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_10,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_9,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_4,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_7,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_6,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_11,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_2,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_8,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_1,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_3,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_0
};

const MR_Integer mercury_data_check_hlds__simplify__functor_number_map_simplification_0[] = {
	11,
	9,
	7,
	10,
	3,
	0,
	5,
	4,
	8,
	2,
	1,
	6 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_simplification_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__simplify__simplification_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__simplify__simplification_0_0)),
	"check_hlds.simplify",
	"simplification",
	{ (void *)mercury_data_check_hlds__simplify__enum_name_ordered_simplification_0 },
	{ (void *)mercury_data_check_hlds__simplify__enum_value_ordered_simplification_0 },
	12,
	4,
	mercury_data_check_hlds__simplify__functor_number_map_simplification_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__simplify__field_types_simplifications_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_check_hlds__simplify__field_names_simplifications_0_0[] = {
	"do_warn_simple_code",
	"do_warn_duplicate_calls",
	"do_format_calls",
	"do_warn_obsolete",
	"do_do_once",
	"do_after_front_end",
	"do_excess_assign",
	"do_elim_removable_scopes",
	"do_opt_duplicate_calls",
	"do_constant_prop",
	"do_common_struct",
	"do_extra_common_struct"
};

const MR_DuArgLocn mercury_data_check_hlds__simplify__field_locns_simplifications_0_0[] = {
	{ 0, 0, 1 },
	{ 0, 1, 1 },
	{ 0, 2, 1 },
	{ 0, 3, 1 },
	{ 0, 4, 1 },
	{ 0, 5, 1 },
	{ 0, 6, 1 },
	{ 0, 7, 1 },
	{ 0, 8, 1 },
	{ 0, 9, 1 },
	{ 0, 10, 1 },
	{ 0, 11, 1 },
};

static const MR_DuFunctorDesc mercury_data_check_hlds__simplify__du_functor_desc_simplifications_0_0 = {
	"simplifications",
	12,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__simplify__field_types_simplifications_0_0,
	mercury_data_check_hlds__simplify__field_names_simplifications_0_0,
	mercury_data_check_hlds__simplify__field_locns_simplifications_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__simplify__du_stag_ordered_simplifications_0_0[] = {
	&mercury_data_check_hlds__simplify__du_functor_desc_simplifications_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__simplify__du_ptag_ordered_simplifications_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__simplify__du_stag_ordered_simplifications_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__simplify__du_name_ordered_simplifications_0[] = {
	&mercury_data_check_hlds__simplify__du_functor_desc_simplifications_0_0
};

const MR_Integer mercury_data_check_hlds__simplify__functor_number_map_simplifications_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__simplify__simplifications_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__simplify__simplifications_0_0)),
	"check_hlds.simplify",
	"simplifications",
	{ (void *)mercury_data_check_hlds__simplify__du_name_ordered_simplifications_0 },
	{ (void *)mercury_data_check_hlds__simplify__du_ptag_ordered_simplifications_0 },
	1,
	4,
	mercury_data_check_hlds__simplify__functor_number_map_simplifications_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_det_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_common_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_det_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_common_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__simplify__field_types_simplify_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__det_util__type_ctor_info_det_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__common__type_ctor_info_common_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__instmap__type_ctor_info_instmap_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_check_hlds__simplify__field_names_simplify_info_0_0[] = {
	"simp_det_info",
	"simp_error_specs",
	"simp_simplifications",
	"simp_common_info",
	"simp_instmap",
	"simp_varset",
	"simp_inst_varset",
	"simp_requantify",
	"simp_recompute_atomic",
	"simp_rerun_det",
	"simp_cost_delta",
	"simp_lambdas",
	"simp_rtti_varmaps",
	"simp_inside_dupl_for_switch",
	"simp_has_parallel_conj",
	"simp_found_contains_trace",
	"simp_has_user_event"
};

const MR_DuArgLocn mercury_data_check_hlds__simplify__field_locns_simplify_info_0_0[] = {
	{ 0, 0, 0 },
	{ 1, 0, 0 },
	{ 2, 0, 0 },
	{ 3, 0, 0 },
	{ 4, 0, 0 },
	{ 5, 0, 0 },
	{ 6, 0, 0 },
	{ 7, 0, 1 },
	{ 7, 1, 1 },
	{ 7, 2, 1 },
	{ 8, 0, 0 },
	{ 9, 0, 0 },
	{ 10, 0, 0 },
	{ 11, 0, 1 },
	{ 11, 1, 1 },
	{ 11, 2, 1 },
	{ 11, 3, 1 },
};

static const MR_DuFunctorDesc mercury_data_check_hlds__simplify__du_functor_desc_simplify_info_0_0 = {
	"simplify_info",
	17,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__simplify__field_types_simplify_info_0_0,
	mercury_data_check_hlds__simplify__field_names_simplify_info_0_0,
	mercury_data_check_hlds__simplify__field_locns_simplify_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__simplify__du_stag_ordered_simplify_info_0_0[] = {
	&mercury_data_check_hlds__simplify__du_functor_desc_simplify_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__simplify__du_ptag_ordered_simplify_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__simplify__du_stag_ordered_simplify_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__simplify__du_name_ordered_simplify_info_0[] = {
	&mercury_data_check_hlds__simplify__du_functor_desc_simplify_info_0_0
};

const MR_Integer mercury_data_check_hlds__simplify__functor_number_map_simplify_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_simplify_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__simplify__simplify_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__simplify__simplify_info_0_0)),
	"check_hlds.simplify",
	"simplify_info",
	{ (void *)mercury_data_check_hlds__simplify__du_name_ordered_simplify_info_0 },
	{ (void *)mercury_data_check_hlds__simplify__du_ptag_ordered_simplify_info_0 },
	1,
	4,
	mercury_data_check_hlds__simplify__functor_number_map_simplify_info_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_var_renaming_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__simplify__var_renaming_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__simplify__var_renaming_0_0)),
	"check_hlds.simplify",
	"var_renaming",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_rec_subst_to_type",
3,
0
},
"check_hlds.simplify",
"simplify.m",
4107,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_proc_return_msgs_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.simplify",
"check_hlds.simplify",
"lambda_simplify_m_439",
4,
0
},
"check_hlds.simplify",
"simplify.m",
439,
"48"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_1 = {
{
MR_PREDICATE,
"string",
"string",
"to_int",
2,
0
},
"check_hlds.simplify",
"simplify.m",
495,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_switch_6_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"bound_inst_to_cons_id",
3,
0
},
"check_hlds.simplify",
"simplify.m",
1162,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_4 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"check_hlds.simplify",
"simplify.m",
2135,
"54"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_3 = {
{
MR_FUNCTION,
"check_hlds.simplify",
"check_hlds.simplify",
"make_arg_always_boxed",
2,
0
},
"check_hlds.simplify",
"simplify.m",
2126,
"44"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_2 = {
{
MR_FUNCTION,
"check_hlds.simplify",
"check_hlds.simplify",
"make_arg_always_boxed",
2,
0
},
"check_hlds.simplify",
"simplify.m",
2125,
"42"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_foreign_proc_6_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"check_hlds.simplify",
"simplify.m",
2109,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__warn_switch_for_ite_cond_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.simplify",
"check_hlds.simplify",
"warn_switch_for_ite_cond",
5,
0
},
"check_hlds.simplify",
"simplify.m",
1736,
"54"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__create_test_unification_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.simplify",
"check_hlds.simplify",
"lambda_simplify_m_3505",
2,
0
},
"check_hlds.simplify",
"simplify.m",
3505,
"29"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__renaming_transitive_closure_2_0_1 = {
{
MR_PREDICATE,
"check_hlds.simplify",
"check_hlds.simplify",
"find_renamed_var",
3,
0
},
"check_hlds.simplify",
"simplify.m",
3410,
"4"
};



MR_BEGIN_MODULE(check_hlds__simplify_module0)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_simplifications_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_simplifications_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_simplifications'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_simplifications_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module1)
	MR_init_entry1(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_opt_duplicate_calls'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module2)
	MR_init_entry1(check_hlds__simplify__simplify_do_common_struct_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_common_struct_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_common_struct'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_common_struct_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module3)
	MR_init_entry1(check_hlds__simplify__simplify_do_warn_simple_code_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_warn_simple_code_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_warn_simple_code'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_warn_simple_code_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module4)
	MR_init_entry1(check_hlds__simplify__simplify_do_elim_removable_scopes_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_elim_removable_scopes_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_elim_removable_scopes'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_elim_removable_scopes_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module5)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_rerun_det_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_rerun_det_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_rerun_det'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_set_rerun_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr3 = ((MR_Integer) MR_tfield(0, MR_r1, 11) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r1, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr6, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr6, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr6, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr6, 7) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | ((MR_Integer) 1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr6, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr6, 9) = MR_tfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr6, 10) = MR_tfield(0, MR_r1, 10);
	MR_tfield(0, MR_tempr6, 11) = ((MR_Integer) MR_tempr3 | (((MR_Integer) MR_tempr2 << (MR_Integer) 1) | (((MR_Integer) MR_tempr1 << (MR_Integer) 2) | ((MR_Integer) MR_r2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr6;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_unreachable_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_unreachable_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_1);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module6)
	MR_init_entry1(check_hlds__simplify__enforce_unreachability_invariant_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__enforce_unreachability_invariant_4_0);
	MR_init_label10(check_hlds__simplify__enforce_unreachability_invariant_4_0,2,3,4,8,10,11,5,6,14,18)
	MR_init_label2(check_hlds__simplify__enforce_unreachability_invariant_4_0,19,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'enforce_unreachability_invariant'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__enforce_unreachability_invariant_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i2);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i3);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i4);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__enforce_unreachability_invariant_4_0_i6);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i8);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__enforce_unreachability_invariant_4_0_i5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i10);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i11);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(5);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr7, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr7, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_tempr7, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 12);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr7, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr7, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_r2, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) 1 << (MR_Integer) 2)));
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr7, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr7, 10);
	MR_tfield(0, MR_r2, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i14);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__enforce_unreachability_invariant_4_0_i13);
	}
	if (MR_INT_EQ(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__simplify__enforce_unreachability_invariant_4_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i18);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i19);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(5);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr7, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr7, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_tempr7, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 12);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr7, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr7, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_r2, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) 1 << (MR_Integer) 2)));
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr7, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr7, 10);
	MR_tfield(0, MR_r2, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(check_hlds__simplify_module7)
	MR_init_entry1(check_hlds__simplify__goal_is_call_to_builtin_false_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__goal_is_call_to_builtin_false_1_0);
	MR_init_label3(check_hlds__simplify__goal_is_call_to_builtin_false_1_0,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_is_call_to_builtin_false'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__goal_is_call_to_builtin_false_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_call_to_builtin_false_1_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_r2, 5);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_call_to_builtin_false_1_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__goal_is_call_to_builtin_false_1_0_i4);
MR_def_label(check_hlds__simplify__goal_is_call_to_builtin_false_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__simplify__goal_is_call_to_builtin_false_1_0_i5);
MR_def_label(check_hlds__simplify__goal_is_call_to_builtin_false_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_call_to_builtin_false_1_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("false", 5)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__simplify__goal_is_call_to_builtin_false_1_0,1)
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


MR_BEGIN_MODULE(check_hlds__simplify_module8)
	MR_init_entry1(check_hlds__simplify__simplify_do_once_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_once_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_once'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_once_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module9)
	MR_init_entry1(check_hlds__simplify__maybe_wrap_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__maybe_wrap_goal_7_0);
	MR_init_label3(check_hlds__simplify__maybe_wrap_goal_7_0,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_wrap_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__maybe_wrap_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__maybe_wrap_goal_7_0_i3);
MR_def_label(check_hlds__simplify__maybe_wrap_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__maybe_wrap_goal_7_0_i4);
MR_def_label(check_hlds__simplify__maybe_wrap_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__maybe_wrap_goal_7_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(check_hlds__simplify__maybe_wrap_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_tempr8 = MR_sv(5);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr8, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_tempr8, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 12);
	MR_r3 = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_tfield(0, MR_tempr8, 0);
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_tempr8, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_tempr8, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_tempr8, 3);
	MR_tfield(0, MR_tempr7, 4) = MR_tfield(0, MR_tempr8, 4);
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_tempr8, 5);
	MR_tfield(0, MR_tempr7, 6) = MR_tfield(0, MR_tempr8, 6);
	MR_tfield(0, MR_tempr7, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) 1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr7, 8) = MR_tfield(0, MR_tempr8, 8);
	MR_tfield(0, MR_tempr7, 9) = MR_tfield(0, MR_tempr8, 9);
	MR_tfield(0, MR_tempr7, 10) = MR_tfield(0, MR_tempr8, 10);
	MR_tfield(0, MR_tempr7, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(check_hlds__simplify_module10)
	MR_init_entry1(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0);
	MR_init_label2(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'conjoin_goal_and_rev_goal_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0_i5);
MR_def_label(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
	}
MR_def_label(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0,2)
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


MR_BEGIN_MODULE(check_hlds__simplify_module11)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_instmap_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_instmap_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_instmap'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_instmap_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__update_instmap_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module12)
	MR_init_entry1(check_hlds__simplify__simplify_info_update_instmap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_update_instmap_3_0);
	MR_init_label1(check_hlds__simplify__simplify_info_update_instmap_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_update_instmap'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_update_instmap_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__simplify__simplify_info_update_instmap_3_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_update_instmap_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr8, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_tempr8, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr7, 0) = MR_tfield(0, MR_tempr8, 0);
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_tempr8, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_tempr8, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_tempr8, 3);
	MR_tfield(0, MR_tempr7, 4) = MR_r1;
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_tempr8, 5);
	MR_tfield(0, MR_tempr7, 6) = MR_tfield(0, MR_tempr8, 6);
	MR_tfield(0, MR_tempr7, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) MR_r2 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr7, 8) = MR_tfield(0, MR_tempr8, 8);
	MR_tfield(0, MR_tempr7, 9) = MR_tfield(0, MR_tempr8, 9);
	MR_tfield(0, MR_tempr7, 10) = MR_tfield(0, MR_tempr8, 10);
	MR_tfield(0, MR_tempr7, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_r1 = MR_tempr7;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module13)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_common_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_common_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_common_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_common_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module14)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_common_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_common_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_common_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_set_common_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_r1;
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module15)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_instmap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_instmap_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_instmap'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_instmap_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_r1;
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module16)
	MR_init_entry1(check_hlds__simplify__simplify_info_undo_goal_updates_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_undo_goal_updates_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_undo_goal_updates'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_undo_goal_updates_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module17)
	MR_init_entry1(check_hlds__simplify__simplify_do_excess_assign_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_excess_assign_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_excess_assign'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_excess_assign_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module18)
	MR_init_entry1(check_hlds__simplify__find_renamed_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__find_renamed_var_3_0);
	MR_init_label3(check_hlds__simplify__find_renamed_var_3_0,15,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_renamed_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__find_renamed_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__find_renamed_var_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__find_renamed_var_3_0_i4);
MR_def_label(check_hlds__simplify__find_renamed_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_renamed_var_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__simplify__find_renamed_var_3_0_i15);
MR_def_label(check_hlds__simplify__find_renamed_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__set_of_var__member_2_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(string__append_3_1);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module19)
	MR_init_entry1(check_hlds__simplify__find_excess_assigns_in_conj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__find_excess_assigns_in_conj_9_0);
	MR_init_label10(check_hlds__simplify__find_excess_assigns_in_conj_9_0,143,3,8,9,11,10,13,15,14,63)
	MR_init_label10(check_hlds__simplify__find_excess_assigns_in_conj_9_0,20,23,26,28,25,33,34,36,39,42)
	MR_init_label8(check_hlds__simplify__find_excess_assigns_in_conj_9_0,44,41,47,50,52,35,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_excess_assigns_in_conj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__find_excess_assigns_in_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(12);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r5;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 0);
	MR_tempr1 = MR_tfield(0, MR_sv(7), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i5);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_tempr4 = MR_r7;
	MR_sv(6) = MR_tempr4;
	MR_sv(9) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__simplify__find_renamed_var_3_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i8);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__find_renamed_var_3_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i9);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i11);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i10);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_sv(11) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i13);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_sv(11) = (MR_Integer) 1;
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(parse_tree__set_of_var__member_2_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i15);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i14);
	}
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i4);
	}
	MR_r6 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i33);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i20);
	}
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i33);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(varset__search_name_3_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i23);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i63);
	}
	MR_r1 = (MR_Word) MR_string_const("HeadVar__", 9);
	MR_np_call_localret_ent(string__append_3_1,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i26);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i25);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i28);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i63);
	}
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r6;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i34);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i36);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i35);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i35);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(varset__search_name_3_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i39);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i35);
	}
	MR_r1 = (MR_Word) MR_string_const("HeadVar__", 9);
	MR_np_call_localret_ent(string__append_3_1,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i42);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i41);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i44);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i35);
	}
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(varset__search_name_3_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i47);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("HeadVar__", 9);
	MR_np_call_localret_ent(string__append_3_1,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i50);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i35);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i52);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i4);
	}
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(9);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i143);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r6;
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i143);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_values_only_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module20)
	MR_init_entry1(check_hlds__simplify__renaming_transitive_closure_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__renaming_transitive_closure_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'renaming_transitive_closure'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__renaming_transitive_closure_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__simplify__find_renamed_var_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_r1;
	MR_r5 = MR_tfield(0, MR_tempr1, 3);
	MR_np_tailcall_ent(map__map_values_only_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module21)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_varset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_varset_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_varset'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_varset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module22)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_rtti_varmaps'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module23)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_det_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_det_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_det_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_det_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_get_module_info_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module24)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_module_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_module_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_module_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_module_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(check_hlds__det_util__det_info_get_module_info_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module25)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_rtti_varmaps'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_r1;
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module26)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_varset_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_varset_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_varset'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_varset_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_r1;
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__get_trace_level_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(hlds__hlds_goal__rename_vars_in_goals_4_0);
MR_decl_entry(map__keys_2_0);
MR_decl_entry(varset__delete_vars_3_0);
MR_decl_entry(fn__map__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0);

MR_BEGIN_MODULE(check_hlds__simplify_module27)
	MR_init_entry1(check_hlds__simplify__excess_assigns_in_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__excess_assigns_in_conj_5_0);
	MR_init_label10(check_hlds__simplify__excess_assigns_in_conj_5_0,4,6,7,8,9,10,11,12,15,13)
	MR_init_label10(check_hlds__simplify__excess_assigns_in_conj_5_0,17,18,19,20,21,22,23,25,26,27)
	MR_init_label2(check_hlds__simplify__excess_assigns_in_conj_5_0,28,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'excess_assigns_in_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__excess_assigns_in_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r3, 2), 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__excess_assigns_in_conj_5_0_i2);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i4);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i6);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i7);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i8);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i9);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 108;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i10);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i11);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__simplify__find_excess_assigns_in_conj_9_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i12);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(map__is_empty_1_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i15);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__excess_assigns_in_conj_5_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__renaming_transitive_closure_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i17);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i18);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__rename_vars_in_goals_4_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i19);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i20);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(varset__delete_vars_3_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i21);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i22);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i23);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i25);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i26);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i27);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i28);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module28)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_inside_duplicated_for_switch'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_r1, 11) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module29)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_error_specs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_error_specs_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_error_specs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_error_specs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module30)
	MR_init_entry1(check_hlds__simplify__simplify_info_do_add_error_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_do_add_error_spec_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_do_add_error_spec'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_do_add_error_spec_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr7 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr8 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 12);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = ((MR_Integer) MR_tempr8 | (((MR_Integer) MR_tempr7 << (MR_Integer) 1) | ((MR_Integer) MR_tempr2 << (MR_Integer) 2)));
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_r1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_r1, 11) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) MR_tempr4 << (MR_Integer) 2) | ((MR_Integer) MR_tempr3 << (MR_Integer) 3))));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module31)
	MR_init_entry1(check_hlds__simplify__simplify_info_add_error_spec_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_add_error_spec_3_0);
	MR_init_label1(check_hlds__simplify__simplify_info_add_error_spec_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_add_error_spec'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_add_error_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r2, 2), 0) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_info_add_error_spec_3_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr7 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr8 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 12);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_r1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_r1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_r1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_r1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_r1, 7) = ((MR_Integer) MR_tempr8 | (((MR_Integer) MR_tempr7 << (MR_Integer) 1) | ((MR_Integer) MR_tempr2 << (MR_Integer) 2)));
	MR_tfield(0, MR_r1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_r1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_r1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_r1, 11) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) MR_tempr4 << (MR_Integer) 2) | ((MR_Integer) MR_tempr3 << (MR_Integer) 3))));
	MR_proceed();
	}
MR_def_label(check_hlds__simplify__simplify_info_add_error_spec_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module32)
	MR_init_entry1(check_hlds__simplify__simplify_info_post_branch_update_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_post_branch_update_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_post_branch_update'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_post_branch_update_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_get_vartypes_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module33)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_var_types_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_var_types_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_var_types'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_var_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(check_hlds__det_util__det_info_get_vartypes_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module34)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_requantify_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_requantify_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_requantify'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_set_requantify_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_r1, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr6, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr6, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr6, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr6, 7) = ((MR_Integer) 1 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) MR_r2 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr6, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr6, 9) = MR_tfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr6, 10) = MR_tfield(0, MR_r1, 10);
	MR_tfield(0, MR_tempr6, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_r1 = MR_tempr6;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module35)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_det_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_det_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_det_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_det_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_r1;
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_set_module_info_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module36)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_module_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_module_info_3_0);
	MR_init_label1(check_hlds__simplify__simplify_info_set_module_info_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_module_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_module_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_set_module_info_3_0,
		check_hlds__simplify__simplify_info_set_module_info_3_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_set_module_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr8, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_tempr8, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr7, 0) = MR_r1;
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_tempr8, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_tempr8, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_tempr8, 3);
	MR_tfield(0, MR_tempr7, 4) = MR_tfield(0, MR_tempr8, 4);
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_tempr8, 5);
	MR_tfield(0, MR_tempr7, 6) = MR_tfield(0, MR_tempr8, 6);
	MR_tfield(0, MR_tempr7, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) MR_r2 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr7, 8) = MR_tfield(0, MR_tempr8, 8);
	MR_tfield(0, MR_tempr7, 9) = MR_tfield(0, MR_tempr8, 9);
	MR_tfield(0, MR_tempr7, 10) = MR_tfield(0, MR_tempr8, 10);
	MR_tfield(0, MR_tempr7, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_r1 = MR_tempr7;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_set_vartypes_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module37)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_var_types_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_var_types_3_0);
	MR_init_label1(check_hlds__simplify__simplify_info_set_var_types_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_var_types'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_var_types_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_set_vartypes_3_0,
		check_hlds__simplify__simplify_info_set_var_types_3_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_set_var_types_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr8, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_tempr8, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr7, 0) = MR_r1;
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_tempr8, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_tempr8, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_tempr8, 3);
	MR_tfield(0, MR_tempr7, 4) = MR_tfield(0, MR_tempr8, 4);
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_tempr8, 5);
	MR_tfield(0, MR_tempr7, 6) = MR_tfield(0, MR_tempr8, 6);
	MR_tfield(0, MR_tempr7, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) MR_r2 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr7, 8) = MR_tfield(0, MR_tempr8, 8);
	MR_tfield(0, MR_tempr7, 9) = MR_tfield(0, MR_tempr8, 9);
	MR_tfield(0, MR_tempr7, 10) = MR_tfield(0, MR_tempr8, 10);
	MR_tfield(0, MR_tempr7, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_r1 = MR_tempr7;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_vars_4_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__type_util__get_cons_id_arg_types_4_0);
MR_decl_entry(map__det_insert_from_corresponding_lists_4_0);
MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(parse_tree__prog_mode__get_arg_insts_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__make_singleton_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);

MR_BEGIN_MODULE(check_hlds__simplify_module38)
	MR_init_entry1(check_hlds__simplify__create_test_unification_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__create_test_unification_6_0);
	MR_init_label10(check_hlds__simplify__create_test_unification_6_0,2,3,5,6,7,8,9,10,11,12)
	MR_init_label8(check_hlds__simplify__create_test_unification_6_0,14,15,13,19,20,27,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_test_unification'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__create_test_unification_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__create_test_unification_6_0_i2);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_vars_4_0,
		check_hlds__simplify__create_test_unification_6_0_i3);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__create_test_unification_6_0_i5);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__create_test_unification_6_0_i6);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_arg_types_4_0,
		check_hlds__simplify__create_test_unification_6_0_i7);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_insert_from_corresponding_lists_4_0,
		check_hlds__simplify__create_test_unification_6_0_i8);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__create_test_unification_6_0_i9);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__create_test_unification_6_0_i10);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__create_test_unification_6_0_i11);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__simplify__create_test_unification_6_0_i12);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__simplify__create_test_unification_6_0_i14);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_mode__get_arg_insts_4_0,
		check_hlds__simplify__create_test_unification_6_0_i15);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__create_test_unification_6_0_i13);
	}
	MR_r4 = MR_r2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__simplify__create_test_unification_6_0_i20);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.create_test_unification\'/6", 57);
	MR_r3 = (MR_Word) MR_string_const("get_arg_insts failed", 20);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__simplify__create_test_unification_6_0_i19);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__simplify__create_test_unification_6_0_i20);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tempr6 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tempr7 = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr7;
	MR_tempr8 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr8;
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 3) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 4) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_sv(6) = MR_tempr4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		check_hlds__simplify__create_test_unification_6_0_i27);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		check_hlds__simplify__create_test_unification_6_0_i28);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		check_hlds__simplify__create_test_unification_6_0_i29);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module39)
	MR_init_entry1(check_hlds__simplify__simplify_info_incr_cost_delta_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_incr_cost_delta_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_incr_cost_delta'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_incr_cost_delta_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = ((MR_Integer) MR_tfield(0, MR_r2, 8) + (MR_Integer) MR_r1);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module40)
	MR_init_entry1(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_warn_duplicate_calls'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__common__common_optimise_higher_order_call_9_0);

MR_BEGIN_MODULE(check_hlds__simplify_module41)
	MR_init_entry1(check_hlds__simplify__simplify_goal_generic_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_generic_call_6_0);
	MR_init_label7(check_hlds__simplify__simplify_goal_generic_call_6_0,3,9,6,11,14,10,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_generic_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_generic_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_generic_call_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_r3;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr8, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_tempr8, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr7, 0) = MR_tfield(0, MR_tempr8, 0);
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_tempr8, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_tempr8, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_tempr8, 3);
	MR_tfield(0, MR_tempr7, 4) = MR_tfield(0, MR_tempr8, 4);
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_tempr8, 5);
	MR_tfield(0, MR_tempr7, 6) = MR_tfield(0, MR_tempr8, 6);
	MR_tfield(0, MR_tempr7, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr7, 8) = MR_tfield(0, MR_tempr8, 8);
	MR_tfield(0, MR_tempr7, 9) = MR_tfield(0, MR_tempr8, 9);
	MR_tfield(0, MR_tempr7, 10) = MR_tfield(0, MR_tempr8, 10);
	MR_tfield(0, MR_tempr7, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) 1 << (MR_Integer) 3))));
	MR_r3 = MR_tempr7;
	MR_proceed();
	}
MR_def_label(check_hlds__simplify__simplify_goal_generic_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_generic_call_6_0_i48);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_sv(8) = MR_tfield(0, MR_tempr3, 1);
	MR_r8 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(3, MR_r1, 4);
	MR_r9 = MR_tfield(3, MR_r1, 3);
	MR_r10 = MR_tfield(3, MR_r1, 2);
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_generic_call_6_0_i6);
	}
	MR_tempr4 = MR_r3;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_tempr4, 2), 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_generic_call_6_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r8;
	MR_r2 = MR_r10;
	MR_tempr2 = MR_tempr4;
	MR_r3 = MR_r9;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__common__common_optimise_higher_order_call_9_0,
		check_hlds__simplify__simplify_goal_generic_call_6_0_i9);
MR_def_label(check_hlds__simplify__simplify_goal_generic_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__simplify__simplify_goal_generic_call_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r10;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r8;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0,
		check_hlds__simplify__simplify_goal_generic_call_6_0_i11);
MR_def_label(check_hlds__simplify__simplify_goal_generic_call_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_generic_call_6_0_i10);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_generic_call_6_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__common__common_optimise_higher_order_call_9_0,
		check_hlds__simplify__simplify_goal_generic_call_6_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_generic_call_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__simplify__simplify_goal_generic_call_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__simplify__simplify_goal_generic_call_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__comparison_result_type_0_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(check_hlds__inst_match__inst_is_unique_2_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);
MR_decl_entry(parse_tree__set_of_var__insert_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module42)
	MR_init_entry1(check_hlds__simplify__inequality_goal_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__inequality_goal_10_0);
	MR_init_label10(check_hlds__simplify__inequality_goal_10_0,2,4,5,7,8,9,14,15,16,17)
	MR_init_label10(check_hlds__simplify__inequality_goal_10_0,20,24,22,18,35,33,45,47,48,49)
	MR_init_label7(check_hlds__simplify__inequality_goal_10_0,50,51,53,69,70,71,74)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inequality_goal'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__inequality_goal_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(10) = MR_tempr2;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__simplify__inequality_goal_10_0_i2);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr9 = MR_sv(10);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr9, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr9, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr9, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr9, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr9, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_tempr9, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_tempr9, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_tempr9, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_tempr9, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_tempr9, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_tempr9, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_tempr9, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_r2;
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_tempr9, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_tempr9, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_tempr9, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_tempr9, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_sv(10) = MR_r1;
	MR_sv(12) = MR_tempr8;
	MR_r1 = MR_tempr8;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__inequality_goal_10_0_i4);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__comparison_result_type_0_0,
		check_hlds__simplify__inequality_goal_10_0_i5);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__simplify__inequality_goal_10_0_i7);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__inequality_goal_10_0_i8);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__inequality_goal_10_0_i9);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__inequality_goal_10_0_i14);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__simplify__inequality_goal_10_0_i15);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__simplify__inequality_goal_10_0_i16);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__inequality_goal_10_0_i17);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_unique_2_0,
		check_hlds__simplify__inequality_goal_10_0_i20);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__inequality_goal_10_0_i18);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_unique_2_0,
		check_hlds__simplify__inequality_goal_10_0_i24);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__inequality_goal_10_0_i22);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(10);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,6,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Integer) 1;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,6,0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__inequality_goal_10_0_i45);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(10);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Integer) 2;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,6,0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__inequality_goal_10_0_i45);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(4);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_unique_2_0,
		check_hlds__simplify__inequality_goal_10_0_i35);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__inequality_goal_10_0_i33);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(10);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,6,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Integer) 3;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,6,0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__inequality_goal_10_0_i45);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(4);
	MR_r1 = MR_sv(9);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(10);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(3,6,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Integer) 0;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,6,0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__inequality_goal_10_0_i45);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_from_assoc_list_1_0,
		check_hlds__simplify__inequality_goal_10_0_i47);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("compare", 7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(5);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__simplify__inequality_goal_10_0_i48);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_sv(9) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__inequality_goal_10_0_i49);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__simplify__inequality_goal_10_0_i50);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__simplify__inequality_goal_10_0_i51);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__inequality_goal_10_0_i53);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_string_const("comparison_result", 17);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_r2;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 6);
	MR_tempr6 = MR_sv(10);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr4, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr4, 4) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr4, 5) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 5);
	MR_sv(9) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr5, 3) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 4) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__inequality_goal_10_0_i69);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__simplify__inequality_goal_10_0_i70);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__simplify__inequality_goal_10_0_i71);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__simplify__inequality_goal_10_0_i74);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_tempr3;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__simplify__inequality_goal_10_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module43)
	MR_init_entry1(check_hlds__simplify__simplify_do_warn_obsolete_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_warn_obsolete_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_warn_obsolete'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_warn_obsolete_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module44)
	MR_init_entry1(check_hlds__simplify__simplify_do_const_prop_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_const_prop_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_const_prop'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_const_prop_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__int_type_0_0);
MR_decl_entry(fn__int__bits_per_int_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__ground_inst_0_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_var_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_func_sym_arity_5_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_1);

MR_BEGIN_MODULE(check_hlds__simplify_module45)
	MR_init_entry1(check_hlds__simplify__simplify_library_call_int_arity2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_library_call_int_arity2_8_0);
	MR_init_label10(check_hlds__simplify__simplify_library_call_int_arity2_8_0,2,3,4,5,7,8,9,10,15,20)
	MR_init_label10(check_hlds__simplify__simplify_library_call_int_arity2_8_0,21,22,25,27,28,29,33,38,39,40)
	MR_init_label1(check_hlds__simplify__simplify_library_call_int_arity2_8_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_library_call_int_arity2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_library_call_int_arity2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i2);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i3);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i4);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i5);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i7);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i8);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i9);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__int__bits_per_int_0_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i10);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(5) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i15);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tempr4 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(8);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__make_singleton_1_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i20);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_var_1_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i21);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i22);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i25);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i27);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i28);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_sym_arity_5_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i29);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_library_call_int_arity2_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_library_call_int_arity2_8_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_library_call_int_arity2_8_0_i1);
	}
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_1,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i33);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr2, 1) = MR_r1;
	MR_tfield(2, MR_tempr2, 2) = MR_r2;
	MR_tfield(2, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tfield(2, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr2, 5) = MR_sv(6);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i38);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i39);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i40);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
MR_decl_entry(check_hlds__common__common_vars_are_equivalent_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module46)
	MR_init_entry1(check_hlds__simplify__input_args_are_equiv_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__input_args_are_equiv_5_0);
	MR_init_label6(check_hlds__simplify__input_args_are_equiv_5_0,35,3,9,11,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'input_args_are_equiv'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__input_args_are_equiv_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__input_args_are_equiv_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__input_args_are_equiv_5_0_i3);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__simplify__input_args_are_equiv_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__input_args_are_equiv_5_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__input_args_are_equiv_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		check_hlds__simplify__input_args_are_equiv_5_0_i9);
MR_def_label(check_hlds__simplify__input_args_are_equiv_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__input_args_are_equiv_5_0_i21);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__common__common_vars_are_equivalent_3_0,
		check_hlds__simplify__input_args_are_equiv_5_0_i11);
MR_def_label(check_hlds__simplify__input_args_are_equiv_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__input_args_are_equiv_5_0_i1);
	}
MR_def_label(check_hlds__simplify__input_args_are_equiv_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__simplify__input_args_are_equiv_5_0_i35);
MR_def_label(check_hlds__simplify__input_args_are_equiv_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module47)
	MR_init_entry1(check_hlds__simplify__simplify_info_inside_lambda_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_inside_lambda_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_inside_lambda'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_inside_lambda_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 9);
	MR_r1 = ((MR_Integer) MR_r2 > (MR_Integer) 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(check_hlds__det_util__det_info_get_pred_id_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(check_hlds__det_util__det_info_get_proc_id_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(check_hlds__mode_util__mode_is_fully_input_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_eval_method_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(check_hlds__common__common_optimise_call_8_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(mdbcomp__prim_data__is_std_lib_module_name_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(transform_hlds__const_prop__evaluate_call_10_0);

MR_BEGIN_MODULE(check_hlds__simplify_module48)
	MR_init_entry1(check_hlds__simplify__simplify_call_goal_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_call_goal_10_0);
	MR_init_label10(check_hlds__simplify__simplify_call_goal_10_0,2,3,4,6,8,9,11,12,13,14)
	MR_init_label10(check_hlds__simplify__simplify_call_goal_10_0,16,18,24,25,5,36,38,40,41,42)
	MR_init_label10(check_hlds__simplify__simplify_call_goal_10_0,47,49,50,51,52,53,54,60,61,65)
	MR_init_label10(check_hlds__simplify__simplify_call_goal_10_0,59,70,71,73,37,88,90,92,94,89)
	MR_init_label10(check_hlds__simplify__simplify_call_goal_10_0,96,98,100,95,102,104,106,107,108,110)
	MR_init_label10(check_hlds__simplify__simplify_call_goal_10_0,111,112,113,115,117,114,121,122,123,124)
	MR_init_label2(check_hlds__simplify__simplify_call_goal_10_0,126,103)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_call_goal'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_call_goal_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i2);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__simplify__simplify_call_goal_10_0_i3);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i4);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_obsolete_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i6);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i8);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i9);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i11);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i12);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) == MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__simplify_call_goal_10_0_i13);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i14);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i16);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		check_hlds__simplify__simplify_call_goal_10_0_i18);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,1,5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i24);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i25);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) 19 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,10,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_call_goal_10_0_i36);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_simple_code_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i38);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i37);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i40);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i41);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i37);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i42);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i37);
	}
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i37);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_inside_lambda_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i47);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i37);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i49);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__simplify__simplify_call_goal_10_0_i50);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i51);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i52);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i53);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__simplify__input_args_are_equiv_5_0,
		check_hlds__simplify__simplify_call_goal_10_0_i54);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i37);
	}
	MR_sv(13) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(14) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(15));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__simplify__simplify_call_goal_10_0_i59);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__simplify__simplify_call_goal_10_0_i60);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i61);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i65);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(15));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i37);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_tag_alloc_heap(MR_sv(7), 2, (MR_Integer) 1);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i70);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1,
		check_hlds__simplify__simplify_call_goal_10_0_i71);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i37);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i73);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,10,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_call_goal_10_0_i88);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i90);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i89);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i92);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i89);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__common__common_optimise_call_8_0,
		check_hlds__simplify__simplify_call_goal_10_0_i94);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i102);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i96);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i95);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i98);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i95);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__common__common_optimise_call_8_0,
		check_hlds__simplify__simplify_call_goal_10_0_i100);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(10);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i102);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(10);
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i104);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i103);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(8) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 2);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__simplify_call_goal_10_0_i106);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i107);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__prim_data__is_std_lib_module_name_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i108);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i103);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i110);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i111);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i112);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i113);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_const_prop_1_0,
		check_hlds__simplify__simplify_call_goal_10_0_i115);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i114);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(11);
	MR_np_call_localret_ent(transform_hlds__const_prop__evaluate_call_10_0,
		check_hlds__simplify__simplify_call_goal_10_0_i117);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i114);
	}
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i126);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i121);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 634;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__simplify_call_goal_10_0_i122);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 255;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__simplify_call_goal_10_0_i123);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,
		check_hlds__simplify__simplify_call_goal_10_0_i124);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_call_goal_10_0_i103);
	}
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_call_goal_10_0_i126);
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__simplify__simplify_call_goal_10_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module49)
	MR_init_entry1(check_hlds__simplify__simplify_goal_plain_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_plain_call_6_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_plain_call_6_0,2,3,4,5,12,13,16,17,18,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_plain_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_plain_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	MR_sv(4) = MR_tfield(2, MR_r1, 1);
	MR_sv(5) = MR_tfield(2, MR_r1, 2);
	MR_sv(6) = MR_tfield(2, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_plain_call_6_0_i2);
MR_def_label(check_hlds__simplify__simplify_goal_plain_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__simplify_goal_plain_call_6_0_i3);
MR_def_label(check_hlds__simplify__simplify_goal_plain_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__simplify__simplify_goal_plain_call_6_0_i4);
MR_def_label(check_hlds__simplify__simplify_goal_plain_call_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__simplify__simplify_goal_plain_call_6_0_i5);
MR_def_label(check_hlds__simplify__simplify_goal_plain_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_call_6_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(5);
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_call_6_0_i7);
	}
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_call_6_0_i7);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_call_6_0_i7);
	}
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(10) = MR_tfield(1, MR_r2, 0);
	MR_sv(11) = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__simplify_goal_plain_call_6_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_plain_call_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__simplify__simplify_goal_plain_call_6_0_i13);
MR_def_label(check_hlds__simplify__simplify_goal_plain_call_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_call_6_0_i7);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("\100<", 2)) != 0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_call_6_0_i16);
	}
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const("<", 1);
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(check_hlds__simplify__inequality_goal_10_0);
MR_def_label(check_hlds__simplify__simplify_goal_plain_call_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("\100>", 2)) != 0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_call_6_0_i17);
	}
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(check_hlds__simplify__inequality_goal_10_0);
MR_def_label(check_hlds__simplify__simplify_goal_plain_call_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("\100=<", 3)) != 0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_call_6_0_i18);
	}
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r5 = (MR_Integer) 1;
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(check_hlds__simplify__inequality_goal_10_0);
MR_def_label(check_hlds__simplify__simplify_goal_plain_call_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("\100>=", 3)) != 0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_call_6_0_i7);
	}
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const("<", 1);
	MR_r5 = (MR_Integer) 1;
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(check_hlds__simplify__inequality_goal_10_0);
MR_def_label(check_hlds__simplify__simplify_goal_plain_call_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_call_goal_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_special_pred_map_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(parse_tree__set_of_var__insert_list_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module50)
	MR_init_entry1(check_hlds__simplify__call_specific_unify_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__call_specific_unify_10_0);
	MR_init_label9(check_hlds__simplify__call_specific_unify_10_0,5,6,9,10,11,12,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_specific_unify'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__call_specific_unify_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr4 = MR_r3;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr4;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__simplify__call_specific_unify_10_0_i5);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		check_hlds__simplify__call_specific_unify_10_0_i6);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__simplify__call_specific_unify_10_0_i9);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__call_specific_unify_10_0_i10);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__simplify__call_specific_unify_10_0_i11);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__simplify__call_specific_unify_10_0_i12);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(9);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 6);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(2, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tfield(2, MR_tempr2, 4) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 5) = MR_r2;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__call_specific_unify_10_0_i18);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_list_3_0,
		check_hlds__simplify__call_specific_unify_10_0_i19);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__simplify__call_specific_unify_10_0_i20);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_no_var_0_0);

MR_BEGIN_MODULE(check_hlds__simplify_module51)
	MR_init_entry1(check_hlds__simplify__call_builtin_compound_eq_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__call_builtin_compound_eq_5_0);
	MR_init_label3(check_hlds__simplify__call_builtin_compound_eq_5_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_builtin_compound_eq'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__call_builtin_compound_eq_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__call_builtin_compound_eq_5_0_i2);
MR_def_label(check_hlds__simplify__call_builtin_compound_eq_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		check_hlds__simplify__call_builtin_compound_eq_5_0_i3);
MR_def_label(check_hlds__simplify__call_builtin_compound_eq_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(3) = MR_r1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		check_hlds__simplify__call_builtin_compound_eq_5_0_i6);
MR_def_label(check_hlds__simplify__call_builtin_compound_eq_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("builtin_compound_eq", 19);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_set_vartypes_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_varset_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0);
MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_make_type_info_vars_6_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);

MR_BEGIN_MODULE(check_hlds__simplify_module52)
	MR_init_entry1(check_hlds__simplify__make_type_info_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__make_type_info_vars_5_0);
	MR_init_label10(check_hlds__simplify__make_type_info_vars_5_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(check_hlds__simplify__make_type_info_vars_5_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label1(check_hlds__simplify__make_type_info_vars_5_0,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_type_info_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__make_type_info_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_r2, 0);
	MR_sv(10) = MR_tfield(0, MR_r2, 5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_vartypes_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i2);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i3);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i4);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i5);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i6);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__simplify__make_type_info_vars_5_0_i7);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i8);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i9);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i10);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		check_hlds__simplify__make_type_info_vars_5_0_i11);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__simplify__make_type_info_vars_5_0_i12);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_vars_6_0,
		check_hlds__simplify__make_type_info_vars_5_0_i13);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		check_hlds__simplify__make_type_info_vars_5_0_i14);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i15);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i16);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i17);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i18);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i19);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i20);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		check_hlds__simplify__make_type_info_vars_5_0_i21);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i22);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__polymorphism__gen_extract_type_info_13_0);

MR_BEGIN_MODULE(check_hlds__simplify_module53)
	MR_init_entry1(check_hlds__simplify__extract_type_info_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__extract_type_info_8_0);
	MR_init_label7(check_hlds__simplify__extract_type_info_8_0,2,3,4,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extract_type_info'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__extract_type_info_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__extract_type_info_8_0_i2);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_vartypes_2_0,
		check_hlds__simplify__extract_type_info_8_0_i3);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__extract_type_info_8_0_i4);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r5, 0) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__gen_extract_type_info_13_0,
		check_hlds__simplify__extract_type_info_8_0_i6);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__extract_type_info_8_0_i7);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__extract_type_info_8_0_i8);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__extract_type_info_8_0_i9);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module54)
	MR_init_entry1(check_hlds__simplify__type_info_locn_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__type_info_locn_6_0);
	MR_init_label3(check_hlds__simplify__type_info_locn_6_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_info_locn'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__type_info_locn_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 10);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		check_hlds__simplify__type_info_locn_6_0_i2);
MR_def_label(check_hlds__simplify__type_info_locn_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__type_info_locn_6_0_i4);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__simplify__type_info_locn_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__simplify__extract_type_info_8_0,
		check_hlds__simplify__type_info_locn_6_0_i5);
MR_def_label(check_hlds__simplify__type_info_locn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module55)
	MR_init_entry1(check_hlds__simplify__simplify_info_enter_lambda_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_enter_lambda_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_enter_lambda'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_enter_lambda_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_r1, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r1, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr7, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr7, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr7, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr7, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) MR_r2 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr7, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr7, 9) = ((MR_Integer) MR_tfield(0, MR_r1, 9) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr7, 10) = MR_tfield(0, MR_r1, 10);
	MR_tfield(0, MR_tempr7, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_r1 = MR_tempr7;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module56)
	MR_init_entry1(check_hlds__simplify__simplify_info_leave_lambda_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_leave_lambda_2_0);
	MR_init_label1(check_hlds__simplify__simplify_info_leave_lambda_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_leave_lambda'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_leave_lambda_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_r1, 9) - (MR_Integer) 1);
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_info_leave_lambda_2_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r1, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r1, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_r2;
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r1, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr8;
	MR_proceed();
	}
MR_def_label(check_hlds__simplify__simplify_info_leave_lambda_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.simplify_info_leave_lambda\'/2", 60);
	MR_r3 = (MR_Word) MR_string_const("left too many lambdas", 21);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module57)
	MR_init_entry1(fn__check_hlds__simplify__can_switch_on_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__simplify__can_switch_on_type_1_0);
	MR_init_label5(fn__check_hlds__simplify__can_switch_on_type_1_0,5,3,6,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_switch_on_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__simplify__can_switch_on_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__can_switch_on_type_1_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 3);
	if (!((((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 1)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(fn__check_hlds__simplify__can_switch_on_type_1_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__simplify__can_switch_on_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__can_switch_on_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__can_switch_on_type_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.simplify.can_switch_on_type\'/1", 51);
	MR_r3 = (MR_Word) MR_string_const("abstract type", 13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__check_hlds__simplify__can_switch_on_type_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__can_switch_on_type_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.simplify.can_switch_on_type\'/1", 51);
	MR_r3 = (MR_Word) MR_string_const("eqv type", 8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__check_hlds__simplify__can_switch_on_type_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__can_switch_on_type_1_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.simplify.can_switch_on_type\'/1", 51);
	MR_r3 = (MR_Word) MR_string_const("foreign type", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__check_hlds__simplify__can_switch_on_type_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.simplify.can_switch_on_type\'/1", 51);
	MR_r3 = (MR_Word) MR_string_const("solver type", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__type_to_type_defn_body_3_0);
MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(check_hlds__simplify_module58)
	MR_init_entry1(check_hlds__simplify__warn_switch_for_ite_cond_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__warn_switch_for_ite_cond_5_0);
	MR_init_label10(check_hlds__simplify__warn_switch_for_ite_cond_5_0,124,5,3,10,13,15,17,19,21,23)
	MR_init_label7(check_hlds__simplify__warn_switch_for_ite_cond_5_0,25,11,8,30,35,52,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'warn_switch_for_ite_cond'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__warn_switch_for_ite_cond_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i5);
	}
	MR_r3 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_succip_word = MR_sv(4);
	continue;
	}
	break;
	} /* end while */
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i52);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r5, 3);
	MR_r6 = MR_tempr1;
	if (!((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0))) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 0))))) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r6, 0);
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__warn_switch_for_ite_cond_5_0_i13);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_to_type_defn_body_3_0,
		check_hlds__simplify__warn_switch_for_ite_cond_5_0_i15);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i52);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__simplify__can_switch_on_type_1_0,
		check_hlds__simplify__warn_switch_for_ite_cond_5_0_i17);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,1)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i23);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__simplify__warn_switch_for_ite_cond_5_0_i25);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i52);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.warn_switch_for_ite_cond\'/5", 58);
	MR_r3 = (MR_Word) MR_string_const("complicated unify", 17);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__simplify__warn_switch_for_ite_cond_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, cond_can_switch);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tfield(3, MR_r5, 1);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,7)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i52);
	}
	MR_r6 = MR_tfield(3, MR_r5, 1);
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i35);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(check_hlds__simplify__warn_switch_for_ite_cond_5_0_i36);
	}
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__simplify__warn_switch_for_ite_cond_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.warn_switch_for_ite_cond\'/5", 58);
	MR_r3 = (MR_Word) MR_string_const("shorthand", 9);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module59)
	MR_init_entry1(check_hlds__simplify__simplify_do_after_front_end_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_after_front_end_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_after_front_end'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_after_front_end_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_proc_info_4_0);

MR_BEGIN_MODULE(check_hlds__simplify_module60)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_pred_proc_info_3_0);
	MR_init_label5(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_pred_proc_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_pred_proc_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__simplify_info_get_pred_proc_info_3_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__simplify_info_get_pred_proc_info_3_0_i3);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		check_hlds__simplify__simplify_info_get_pred_proc_info_3_0_i4);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__simplify_info_get_pred_proc_info_3_0_i5);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		check_hlds__simplify__simplify_info_get_pred_proc_info_3_0_i6);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(bool__not_2_0);
MR_decl_entry(bool__or_list_2_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_level_4_0);
MR_decl_entry(fn__libs__trace_params__at_least_at_deep_1_0);
MR_decl_entry(fn__libs__trace_params__at_least_at_shallow_1_0);
MR_decl_entry(fn__bool__not_1_0);
MR_decl_entry(fn__bool__and_2_0);
MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module61)
	MR_init_entry1(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__simplify__evaluate_compile_time_condition_2_0);
	MR_init_label10(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,4,5,8,10,7,16,15,21,20,25)
	MR_init_label10(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,28,27,33,32,38,39,37,43,42,45)
	MR_init_label10(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,47,50,51,52,49,57,59,61,13,64)
	MR_init_label10(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,65,66,67,68,69,70,72,3,76,75)
	MR_init_label3(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,78,79,81)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'evaluate_compile_time_condition'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i3);
	}
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i4);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i5);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i7);
	}
	MR_sv(4) = MR_tfield(0, MR_sv(2), 0);
	MR_r2 = (MR_Integer) 115;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i8);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i10);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i13);
	}
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	if (MR_INT_NE(MR_r2,9)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i15);
	}
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i16);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,11)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i20);
	}
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i21);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i25);
	}
	MR_r2 = (MR_Integer) 173;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,13)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i27);
	}
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i28);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,10)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i32);
	}
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i33);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,12)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i37);
	}
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i38);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,7)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i42);
	}
	MR_r2 = (MR_Integer) 235;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i43);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(bool__not_2_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,8)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i45);
	}
	MR_r2 = (MR_Integer) 235;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i47);
	}
	MR_r2 = (MR_Integer) 203;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i49);
	}
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 179;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i50);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 180;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i51);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 181;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i52);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(bool__or_list_2_0);
	}
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i57);
	}
	MR_r2 = (MR_Integer) 182;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,6)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i59);
	}
	MR_r2 = (MR_Integer) 215;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i61);
	}
	MR_r2 = (MR_Integer) 219;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 205;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(2, MR_sv(2), 0);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i64);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i65);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i66);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i67);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i68);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i69);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_4_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i70);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i72);
	}
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__libs__trace_params__at_least_at_deep_1_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__libs__trace_params__at_least_at_shallow_1_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i75);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i76);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__bool__not_1_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_localcall_lab(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i78);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i79);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i81);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__bool__and_2_0);
	}
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__bool__or_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__true_goal_with_context_1_0);
MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(require__sorry_3_0);
MR_decl_entry(parse_tree__prog_data__set_thread_safe_3_0);
MR_decl_entry(parse_tree__prog_data__set_purity_3_0);
MR_decl_entry(parse_tree__prog_data__set_terminates_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_throw_exception_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_modify_trail_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mm_tabled_3_0);
MR_decl_entry(hlds__goal_util__generate_foreign_proc_16_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);

MR_BEGIN_MODULE(check_hlds__simplify_module62)
	MR_init_entry1(check_hlds__simplify__simplify_goal_trace_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_trace_goal_7_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_trace_goal_7_0,3,2,7,8,6,10,11,12,13,14)
	MR_init_label10(check_hlds__simplify__simplify_goal_trace_goal_7_0,16,18,20,23,22,15,25,26,27,28)
	MR_init_label7(check_hlds__simplify__simplify_goal_trace_goal_7_0,29,30,31,32,33,34,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_trace_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_trace_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_trace_goal_7_0_i3);
	}
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 1;
	MR_sv(6) = MR_r5;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_trace_goal_7_0_i2);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i2);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_trace_goal_7_0_i6);
	}
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i7);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i8);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_trace_goal_7_0_i10);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(6), 0);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i11);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i13);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_trace_goal_7_0_i16);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i23);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_trace_goal_7_0_i18);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i23);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),6)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_trace_goal_7_0_i20);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i23);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_trace_goal_7_0_i22);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i23);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i25);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.simplify_goal_trace_goal\'/7", 58);
	MR_r3 = (MR_Word) MR_string_const("runtime trace conditions for this target language", 49);
	MR_np_call_localret_ent(require__sorry_3_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i15);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i25);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i26);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i27);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_terminates_3_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i28);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_throw_exception_3_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i29);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_modify_trail_3_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i30);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mm_tabled_3_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i31);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i32);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i33);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("trace_evaluate_runtime_condition", 32);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(4);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(5);
	MR_r11 = (MR_Word) MR_string_const("", 0);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = MR_tempr1;
	MR_r14 = MR_sv(2);
	MR_r15 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_foreign_proc_16_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i34);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__simplify__simplify_goal_trace_goal_7_0_i35);
MR_def_label(check_hlds__simplify__simplify_goal_trace_goal_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 2) = MR_sv(5);
	MR_tfield(3, MR_r2, 3) = MR_sv(1);
	MR_tfield(3, MR_r2, 4) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module63)
	MR_init_entry1(check_hlds__simplify__nested_scopes_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__nested_scopes_2_4_0);
	MR_init_label7(check_hlds__simplify__nested_scopes_2_4_0,97,9,5,14,11,21,103)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nested_scopes_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__nested_scopes_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i103);
	}
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__nested_scopes_2_4_0_i9);
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i97);
	}
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i11);
	}
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i14);
	}
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i97);
	}
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i97);
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i103);
	}
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i103);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i21);
	}
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i97);
	}
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i97);
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module64)
	MR_init_entry1(check_hlds__simplify__nested_scopes_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__nested_scopes_4_0);
	MR_init_label5(check_hlds__simplify__nested_scopes_4_0,2,6,7,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nested_scopes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__nested_scopes_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(check_hlds__simplify__nested_scopes_2_4_0,
		check_hlds__simplify__nested_scopes_4_0_i2);
MR_def_label(check_hlds__simplify__nested_scopes_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_4_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__nested_scopes_4_0_i6);
MR_def_label(check_hlds__simplify__nested_scopes_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__nested_scopes_4_0_i7);
MR_def_label(check_hlds__simplify__nested_scopes_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_4_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__simplify__nested_scopes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
MR_def_label(check_hlds__simplify__nested_scopes_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__parse_tree__prog_data__get_box_policy_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module65)
	MR_init_entry1(check_hlds__simplify__simplify_goal_foreign_proc_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_foreign_proc_6_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_foreign_proc_6_0,5,6,7,8,11,12,13,14,15,18)
	MR_init_label10(check_hlds__simplify__simplify_goal_foreign_proc_6_0,19,21,2,3,22,26,28,24,23,31)
	MR_init_label4(check_hlds__simplify__simplify_goal_foreign_proc_6_0,33,38,39,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_foreign_proc'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_foreign_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 7);
	MR_sv(4) = MR_tfield(3, MR_r1, 6);
	MR_sv(3) = MR_tfield(3, MR_r1, 5);
	MR_sv(10) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(12) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_tempr2, 2), 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_foreign_proc_6_0_i3);
	}
	MR_sv(14) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(13) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i5);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i6);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i7);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__prim_data__is_std_lib_module_name_2_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i8);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_foreign_proc_6_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_foreign_proc_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i11);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i13);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 634;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 255;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i15);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i18);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(13);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i19);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_foreign_proc_6_0_i2);
	}
	MR_sv(14) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i21);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_box_policy_1_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i22);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_foreign_proc_6_0_i24);
	}
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i26);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i28);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(12);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(14);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(5);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_foreign_proc_6_0_i23);
	}
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_sv(14) = MR_sv(10);
	MR_sv(12) = MR_sv(3);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(13);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i31);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_foreign_proc_6_0_i30);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i33);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_foreign_proc_6_0_i30);
	}
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_foreign_proc_6_0_i30);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i38);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__common__common_optimise_call_8_0,
		check_hlds__simplify__simplify_goal_foreign_proc_6_0_i39);
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__simplify__simplify_goal_foreign_proc_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(13);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module66)
	MR_init_entry1(check_hlds__simplify__simplify_goal_atomic_goal_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_atomic_goal_12_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_atomic_goal'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_atomic_goal_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = MR_r4;
	MR_tfield(1, MR_tempr1, 4) = MR_r5;
	MR_tfield(1, MR_tempr1, 5) = MR_r6;
	MR_tfield(1, MR_tempr1, 6) = MR_r7;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module67)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_inside_duplicated_for_switch'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr7, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr7, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr7, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr7, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr7, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr7, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr7, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr7, 11) = ((MR_Integer) MR_r1 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr7;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module68)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_found_contains_trace_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_found_contains_trace_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_found_contains_trace'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_found_contains_trace_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr7, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr7, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr7, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr7, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr7, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr7, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr7, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr7, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_r1 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr7;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module69)
	MR_init_entry1(check_hlds__simplify__simplify_do_extra_common_struct_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_extra_common_struct_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_extra_common_struct'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_extra_common_struct_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module70)
	MR_init_entry1(fn__check_hlds__simplify__will_flush_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__simplify__will_flush_2_0);
	MR_init_label10(fn__check_hlds__simplify__will_flush_2_0,38,3,6,4,9,13,16,19,24,52)
	MR_init_label10(fn__check_hlds__simplify__will_flush_2_0,25,23,22,56,29,57,32,35,36,141)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'will_flush'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__simplify__will_flush_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i3);
	}
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i9);
	}
	MR_r2 = MR_tfield(1, MR_r1, 3);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i13);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i16);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i19);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i38);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i22);
	}
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i23);
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i25);
	}
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i23);
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i52);
	}
	MR_r1 = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i141);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i29);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i38);
	}
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i32);
	}
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i56);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.simplify.will_flush\'/2", 43);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__common__common_info_clear_structs_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module71)
	MR_init_entry1(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_maybe_clear_structs_4_0);
	MR_init_label4(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,7,9,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_maybe_clear_structs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_tempr2, 2), 0) >> (MR_Integer) 10) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i3);
	}
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_tempr2, 2), 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i3);
	}
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__simplify__will_flush_2_0,
		check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i7);
MR_def_label(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i2);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(check_hlds__common__common_info_clear_structs_2_0,
		check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i9);
MR_def_label(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_info_set_common_info_3_0);
MR_def_label(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
MR_def_label(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(hlds__goal_form__goal_can_loop_or_throw_4_0);
MR_decl_entry(check_hlds__det_util__det_info_get_fully_strict_2_0);
MR_decl_entry(hlds__goal_util__goal_contains_goal_2_0);
MR_decl_entry(parse_tree__set_of_var__is_empty_1_0);
MR_decl_entry(transform_hlds__pd_cost__goal_cost_2_0);
MR_decl_entry(fn__hlds__hlds_goal__fail_goal_with_context_1_0);
MR_decl_entry(check_hlds__det_util__det_no_output_vars_4_0);

MR_BEGIN_MODULE(check_hlds__simplify_module72)
	MR_init_entry1(check_hlds__simplify__simplify_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_4_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_4_0,2,4,6,3,7,9,11,8,12,13)
	MR_init_label10(check_hlds__simplify__simplify_goal_4_0,14,15,16,17,18,23,22,25,28,27)
	MR_init_label10(check_hlds__simplify__simplify_goal_4_0,26,30,32,38,40,43,39,37,45,35)
	MR_init_label10(check_hlds__simplify__simplify_goal_4_0,59,31,61,63,62,65,67,68,19,20)
	MR_init_label10(check_hlds__simplify__simplify_goal_4_0,71,74,75,76,77,80,79,85,84,83)
	MR_init_label10(check_hlds__simplify__simplify_goal_4_0,87,89,88,91,93,94,95,70,98,99)
	MR_init_label10(check_hlds__simplify__simplify_goal_4_0,104,108,107,103,112,113,114,116,117,118)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0,
		check_hlds__simplify__simplify_goal_4_0_i2);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 13;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__simplify__simplify_goal_4_0_i4);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0,
		check_hlds__simplify__simplify_goal_4_0_i6);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i7);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 17;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__simplify__simplify_goal_4_0_i9);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_found_contains_trace_3_0,
		check_hlds__simplify__simplify_goal_4_0_i11);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(8) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(9) = MR_sv(8);
	MR_sv(8) = (MR_Integer) 1;
MR_def_label(check_hlds__simplify__simplify_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_goal_4_0_i13);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__simplify_goal_4_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_4_0_i15);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_form__goal_can_loop_or_throw_4_0,
		check_hlds__simplify__simplify_goal_4_0_i16);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_4_0_i17);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__simplify__simplify_goal_4_0_i18);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),7)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i20);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i23);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i22);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i20);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(8),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i25);
	}
	MR_sv(2) = MR_r1;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i19);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_fully_strict_2_0,
		check_hlds__simplify__simplify_goal_4_0_i28);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i27);
	}
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i26);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i19);
	}
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_4_0_i30);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_simple_code_1_0,
		check_hlds__simplify__simplify_goal_4_0_i32);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i31);
	}
	MR_sv(11) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(12) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(13));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__simplify__simplify_goal_4_0_i37);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__goal_util__goal_contains_goal_2_0,
		check_hlds__simplify__simplify_goal_4_0_i38);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i40);
	}
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i40);
	}
	MR_r2 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i39);
	}
MR_def_label(check_hlds__simplify__simplify_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__goal_is_call_to_builtin_false_1_0,
		check_hlds__simplify__simplify_goal_4_0_i43);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_sv(10);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(13));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i45);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i35);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i31);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,22);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,10,1);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_4_0_i59);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__simplify_goal_4_0_i61);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_sv(10);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__simplify_goal_4_0_i61);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__is_empty_1_0,
		check_hlds__simplify__simplify_goal_4_0_i63);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i62);
	}
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_sv(7);
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__simplify__simplify_goal_4_0_i67);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_4_0_i65);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__simplify__simplify_goal_4_0_i67);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__simplify__simplify_goal_4_0_i68);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_4_0_i98);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_4_0_i71);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i70);
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i70);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__simplify__simplify_goal_4_0_i74);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__simplify_goal_4_0_i75);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_4_0_i76);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_no_output_vars_4_0,
		check_hlds__simplify__simplify_goal_4_0_i77);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i70);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i80);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i79);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i70);
	}
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i70);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_fully_strict_2_0,
		check_hlds__simplify__simplify_goal_4_0_i85);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i84);
	}
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i83);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i70);
	}
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__simplify_goal_4_0_i87);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__is_empty_1_0,
		check_hlds__simplify__simplify_goal_4_0_i89);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i88);
	}
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_sv(10);
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__simplify__simplify_goal_4_0_i93);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_4_0_i91);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__simplify__simplify_goal_4_0_i93);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__simplify__simplify_goal_4_0_i94);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_4_0_i95);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_4_0_i98);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(7) = MR_sv(10);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i99);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(check_hlds__simplify__nested_scopes_4_0,
		check_hlds__simplify__simplify_goal_4_0_i99);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_elim_removable_scopes_1_0,
		check_hlds__simplify__simplify_goal_4_0_i104);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i103);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(6), 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i103);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i108);
	}
	MR_r6 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i103);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i107);
	}
MR_def_label(check_hlds__simplify__simplify_goal_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i103);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r5, 2);
	if (MR_INT_NE(MR_tempr1,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i103);
	}
	MR_r2 = MR_tfield(3, MR_r4, 2);
	MR_r3 = MR_sv(7);
	}
MR_def_label(check_hlds__simplify__simplify_goal_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_4_0_i112);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r1 = (MR_Integer) 0;
MR_def_label(check_hlds__simplify__simplify_goal_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,
		check_hlds__simplify__simplify_goal_4_0_i113);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_expr_6_0,
		check_hlds__simplify__simplify_goal_4_0_i114);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,
		check_hlds__simplify__simplify_goal_4_0_i116);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0,
		check_hlds__simplify__simplify_goal_4_0_i117);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__enforce_unreachability_invariant_4_0,
		check_hlds__simplify__simplify_goal_4_0_i118);
MR_def_label(check_hlds__simplify__simplify_goal_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module73)
	MR_init_entry1(check_hlds__simplify__simplify_goal_expr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_expr_6_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_expr_6_0,3,5,7,9,13,11,16,18,20,22)
	MR_init_label3(check_hlds__simplify__simplify_goal_expr_6_0,26,28,110)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_expr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_expr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i3);
	}
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_neg_6_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i5);
	}
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_plain_call_6_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i7);
	}
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_unify_6_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i9);
	}
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_foreign_proc_6_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i13);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_parallel_conj_6_0);
	}
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_plain_conj_6_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i16);
	}
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_disj_6_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i18);
	}
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_generic_call_6_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i20);
	}
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_ite_6_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i22);
	}
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_scope_6_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i110);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r10 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i26);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	MR_r4 = MR_tfield(1, MR_tempr1, 3);
	MR_r5 = MR_tfield(1, MR_tempr1, 4);
	MR_r6 = MR_tfield(1, MR_tempr1, 5);
	MR_r7 = MR_tfield(1, MR_tempr1, 6);
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_atomic_goal_12_0);
	}
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r10,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_expr_6_0_i28);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.simplify_goal_expr\'/6", 52);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.simplify_goal_expr\'/6", 52);
	MR_r3 = (MR_Word) MR_string_const("try_goal", 8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__simplify__simplify_goal_expr_6_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_switch_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module74)
	MR_init_entry1(check_hlds__simplify__simplify_goal_plain_conj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_plain_conj_6_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_plain_conj_6_0,2,3,7,8,6,10,12,14,16,18)
	MR_init_label7(check_hlds__simplify__simplify_goal_plain_conj_6_0,19,20,17,21,22,23,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_plain_conj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_plain_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r3, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__excess_assigns_in_conj_5_0,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i2);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i3);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_sv(4) = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_conj_6_0_i6);
	}
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i7);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i8);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_conj_6_0_i10);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__simplify__maybe_wrap_goal_7_0);
	}
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_once_1_0,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_conj_6_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i16);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_conj_6_0_i13);
	}
	MR_sv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(7));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__simplify__simplify_goal_plain_conj_6_0_i17);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i18);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i19);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i20);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(7));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_conj_6_0_i21);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(6);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_plain_conj_6_0_i13);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i22);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__simplify__simplify_goal_plain_conj_6_0_i23);
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,23)
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
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__simplify__simplify_goal_plain_conj_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module75)
	MR_init_entry1(check_hlds__simplify__simplify_goal_parallel_conj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_parallel_conj_6_0);
	MR_init_label9(check_hlds__simplify__simplify_goal_parallel_conj_6_0,4,5,3,8,10,11,9,7,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_parallel_conj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_parallel_conj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_parallel_conj_6_0_i3);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_parallel_conj_6_0_i4);
MR_def_label(check_hlds__simplify__simplify_goal_parallel_conj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_parallel_conj_6_0_i5);
MR_def_label(check_hlds__simplify__simplify_goal_parallel_conj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__simplify__simplify_goal_parallel_conj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_parallel_conj_6_0_i7);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_parallel_conj_6_0_i8);
MR_def_label(check_hlds__simplify__simplify_goal_parallel_conj_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_goal_parallel_conj_6_0_i10);
MR_def_label(check_hlds__simplify__simplify_goal_parallel_conj_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_goal_parallel_conj_6_0_i11);
MR_def_label(check_hlds__simplify__simplify_goal_parallel_conj_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_parallel_conj_6_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__simplify__simplify_goal_parallel_conj_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(3, MR_r1, 2) = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(5);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_r3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr2 = ((MR_Integer) MR_tfield(0, MR_tempr6, 11) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = MR_tfield(0, MR_tempr6, 5);
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr5, 7) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | ((MR_Integer) 1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = ((MR_Integer) MR_tempr2 | (((MR_Integer) MR_tempr1 << (MR_Integer) 1) | (((MR_Integer) MR_r3 << (MR_Integer) 2) | ((MR_Integer) MR_r2 << (MR_Integer) 3))));
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr5;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__simplify__simplify_goal_parallel_conj_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_par_conj_5_0,
		check_hlds__simplify__simplify_goal_parallel_conj_6_0_i16);
MR_def_label(check_hlds__simplify__simplify_goal_parallel_conj_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr2 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) 1 << (MR_Integer) 1) | (((MR_Integer) MR_tempr4 << (MR_Integer) 2) | ((MR_Integer) MR_tempr3 << (MR_Integer) 3))));
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr8;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__merge_instmap_deltas_7_0);
MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module76)
	MR_init_entry1(check_hlds__simplify__simplify_goal_disj_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_disj_6_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_disj_6_0,2,5,6,4,9,8,12,11,14,15)
	MR_init_label10(check_hlds__simplify__simplify_goal_disj_6_0,16,17,18,19,3,21,22,24,25,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_disj'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_disj_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r4;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_disj_8_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i2);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_disj_6_0_i4);
	}
	MR_sv(9) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i5);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i6);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_sv(9);
	MR_sv(8) = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_disj_6_0_i3);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_disj_6_0_i8);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_sv(9), 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__simplify__maybe_wrap_goal_7_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i9);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(9);
	MR_sv(8) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_disj_6_0_i3);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(9) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_disj_6_0_i11);
	}
	MR_r2 = MR_sv(9);
	MR_sv(8) = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_disj_6_0_i3);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(7), 0);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i15);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i16);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_7_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i17);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i18);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i19);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i21);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i22);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) == MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_disj_6_0_i23);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i24);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__simplify__simplify_goal_disj_6_0_i25);
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__simplify__simplify_goal_disj_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_bound_to_functors_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(parse_tree__prog_mode__bound_inst_to_cons_id_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(list__sort_2_0);
MR_decl_entry(check_hlds__det_util__delete_unreachable_cases_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0);
MR_decl_entry(fn__parse_tree__prog_util__cons_id_arity_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(check_hlds__type_util__is_existq_cons_3_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_bind_var_to_functor_8_0);
MR_decl_entry(parse_tree__prog_data__det_conjunction_detism_3_0);
MR_decl_entry(hlds__hlds_goal__goal_list_purity_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module77)
	MR_init_entry1(check_hlds__simplify__simplify_goal_switch_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_switch_6_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_switch_6_0,2,3,4,5,8,11,12,14,15,16)
	MR_init_label10(check_hlds__simplify__simplify_goal_switch_6_0,6,18,19,20,23,24,25,26,21,31)
	MR_init_label10(check_hlds__simplify__simplify_goal_switch_6_0,39,35,36,43,44,47,50,51,52,53)
	MR_init_label10(check_hlds__simplify__simplify_goal_switch_6_0,45,54,55,57,58,59,60,61,62,63)
	MR_init_label10(check_hlds__simplify__simplify_goal_switch_6_0,64,65,66,67,33,71,72,27,78,77)
	MR_init_label10(check_hlds__simplify__simplify_goal_switch_6_0,76,74,81,82,83,84,85,88,89,90)
	MR_init_label3(check_hlds__simplify__simplify_goal_switch_6_0,91,92,93)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_switch'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_switch_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r2;
	MR_sv(10) = MR_tfield(3, MR_r1, 1);
	MR_sv(12) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(13) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i2);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i3);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i4);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i5);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_to_functors_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i8);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i6);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i11);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_mode__bound_inst_to_cons_id_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i15);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__det_util__delete_unreachable_cases_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i16);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r6 = MR_sv(12);
	MR_r2 = MR_r8;
	MR_sv(12) = MR_tempr1;
	MR_r7 = MR_sv(13);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i18);
	}
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r1 = MR_sv(10);
	MR_r6 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(13);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 0;
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r8 = MR_r7;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_switch_13_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i19);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i20);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i21);
	}
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i23);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i24);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i25);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i26);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_tfield(0, MR_r1, 0);
	MR_sv(11) = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i88);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i27);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i27);
	}
	MR_sv(5) = MR_r1;
	MR_sv(13) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__cons_id_arity_1_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i31);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i33);
	}
	if (MR_LTAGS_TEST(MR_sv(12),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(12), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i36);
	}
	MR_sv(12) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i39);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i35);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i33);
	}
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i43);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i44);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__type_util__is_existq_cons_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i47);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i45);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(10);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i50);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_7_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i51);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i52);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i53);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i71);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__simplify__create_test_unification_6_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i54);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i55);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(12);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i57);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__insert_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i58);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i59);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i60);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i61);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i62);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i63);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i64);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i65);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i66);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i67);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(12);
	MR_sv(12) = MR_r1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i71);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i71);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i72);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i88);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_sv(10) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i78);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i77);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(15);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i76);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(13),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i74);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(15);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_sv(14);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i88);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i81);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i82);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_7_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i83);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i84);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i85);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(15);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i89);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i90);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(12))) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_switch_6_0_i91);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_decr_sp_and_return(17);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i92);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__simplify__simplify_goal_switch_6_0_i93);
MR_def_label(check_hlds__simplify__simplify_goal_switch_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__pre_lambda_update_5_0);
MR_decl_entry(fn__check_hlds__common__common_info_init_0_0);
MR_decl_entry(check_hlds__common__common_optimise_unification_11_0);

MR_BEGIN_MODULE(check_hlds__simplify_module78)
	MR_init_entry1(check_hlds__simplify__simplify_goal_unify_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_unify_6_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_unify_6_0,4,5,6,7,8,9,10,11,12,13)
	MR_init_label10(check_hlds__simplify__simplify_goal_unify_6_0,14,16,3,21,23,24,18,19,29,28)
	MR_init_label8(check_hlds__simplify__simplify_goal_unify_6_0,25,31,39,37,41,36,43,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_unify'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_unify_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_unify_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_r1, 3);
	MR_sv(5) = MR_tfield(1, MR_r1, 4);
	MR_sv(14) = ((MR_Integer) MR_tfield(2, MR_tempr1, 0) & (MR_Integer) 3);
	MR_sv(6) = (((MR_Integer) MR_tfield(2, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(15) = (((MR_Integer) MR_tfield(2, MR_tempr1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(9) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(10) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(13) = MR_tfield(2, MR_tempr1, 6);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_enter_lambda_2_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i4);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i5);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i6);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i7);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(hlds__instmap__pre_lambda_update_5_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i8);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_instmap_3_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i9);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__common__common_info_init_0_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i10);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i11);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i13);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_instmap_3_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_r2, 0) = ((MR_Integer) MR_sv(14) | (((MR_Integer) MR_sv(6) << (MR_Integer) 2) | ((MR_Integer) MR_sv(15) << (MR_Integer) 3)));
	MR_tfield(2, MR_r2, 2) = MR_sv(7);
	MR_tfield(2, MR_r2, 3) = MR_sv(8);
	MR_tfield(2, MR_r2, 4) = MR_sv(9);
	MR_tfield(2, MR_r2, 5) = MR_sv(10);
	MR_tfield(2, MR_r2, 6) = MR_sv(13);
	MR_sv(14) = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_leave_lambda_2_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i16);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(17);
	}
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r1, 4);
	MR_sv(4) = MR_tfield(1, MR_r1, 3);
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_unify_6_0_i19);
	}
	MR_sv(14) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(6) = MR_tempr2;
	MR_sv(15) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i21);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_unify_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i23);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i24);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(15);
	MR_decr_sp_and_return(17);
	}
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(15);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_unify_6_0_i25);
	}
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_unify_6_0_i28);
	}
	MR_r1 = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_tempr2 = MR_r3;
	MR_tempr3 = MR_sv(4);
	MR_r3 = MR_tfield(3, MR_tempr3, 1);
	MR_r4 = MR_tfield(3, MR_tempr3, 2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i29);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(17);
	}
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.simplify_goal_unify\'/6", 53);
	MR_r3 = (MR_Word) MR_string_const("invalid RHS for complicated unify", 33);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_tempr4, 2), 0) >> (MR_Integer) 10) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_unify_6_0_i31);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r5;
	MR_tempr3 = MR_tempr4;
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(check_hlds__common__common_optimise_unification_11_0);
	}
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(15) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i39);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_unify_6_0_i37);
	}
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r8 = MR_sv(15);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_unify_6_0_i36);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(6);
	MR_tempr3 = MR_sv(15);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i41);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_unify_6_0_i34);
	}
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r8 = MR_sv(15);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r6;
	MR_sv(1) = MR_r7;
	MR_np_call_localret_ent(check_hlds__common__common_optimise_unification_11_0,
		check_hlds__simplify__simplify_goal_unify_6_0_i43);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(17);
MR_def_label(check_hlds__simplify__simplify_goal_unify_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(15);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__det_negation_det_2_0);
MR_decl_entry(builtin__semidet_fail_0_0);

MR_BEGIN_MODULE(check_hlds__simplify_module79)
	MR_init_entry1(check_hlds__simplify__simplify_goal_ite_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_ite_6_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_ite_6_0,2,3,8,12,9,10,18,21,15,23)
	MR_init_label10(check_hlds__simplify__simplify_goal_ite_6_0,24,25,28,32,33,36,35,34,47,7)
	MR_init_label10(check_hlds__simplify__simplify_goal_ite_6_0,5,50,51,52,55,56,59,58,57,70)
	MR_init_label1(check_hlds__simplify__simplify_goal_ite_6_0,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_ite'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_ite_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_sv(8) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(4) = MR_tfield(0, MR_sv(2), 1);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i2);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i3);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ite_6_0_i5);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ite_6_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__det_negation_det_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i8);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ite_6_0_i10);
	}
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_np_call_localret_ent(builtin__semidet_fail_0_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ite_6_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_sv(6) = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i28);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ite_6_0_i15);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ite_6_0_i18);
	}
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i21);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,6)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ite_6_0_i15);
	}
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i21);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_tempr1;
	MR_sv(6) = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i24);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.simplify_goal_ite\'/6", 51);
	MR_r3 = (MR_Word) MR_string_const("cannot get negated determinism", 30);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i23);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i24);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i25);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_sv(2));
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i28);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i32);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i33);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ite_6_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i36);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,10,1);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i34);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i47);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i71);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_ordinary_ite_9_0);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i50);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i51);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__simplify__simplify_goal_ite_6_0_i52);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i55);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i56);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ite_6_0_i58);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i59);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,30);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,10,1);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i57);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i70);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__simplify__simplify_goal_ite_6_0_i71);
MR_def_label(check_hlds__simplify__simplify_goal_ite_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_apply_instmap_delta_4_0);

MR_BEGIN_MODULE(check_hlds__simplify_module80)
	MR_init_entry1(check_hlds__simplify__simplify_goal_ordinary_ite_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_ordinary_ite_9_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,5,6,7,10,11,12,2,13,14,15)
	MR_init_label10(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,16,17,18,19,20,21,22,23,24,25)
	MR_init_label10(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,26,29,30,31,33,34,35,36,40,42)
	MR_init_label10(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,46,38,48,49,51,52,53,55,54,68)
	MR_init_label6(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,69,50,81,86,87,80)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_ordinary_ite'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_ordinary_ite_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i2);
	}
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i5);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i6);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i7);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(7);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i10);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_sv(10) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i11);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(7) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i13);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_update_instmap_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i15);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i16);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_post_branch_update_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i17);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i18);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_post_branch_update_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i19);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_sv(11), 1);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i20);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i21);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i22);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(9), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i23);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i24);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i25);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i26);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_r5 = MR_sv(13);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_7_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i29);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i30);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i31);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(5);
	MR_tfield(3, MR_r2, 2) = MR_sv(11);
	MR_tfield(3, MR_r2, 3) = MR_sv(6);
	MR_tfield(3, MR_r2, 4) = MR_sv(9);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i33);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i34);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i35);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i36);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i40);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_undo_goal_updates_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i46);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i42);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_undo_goal_updates_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i46);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(9), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i38);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i38);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_undo_goal_updates_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i46);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_goal_expr_6_0);
	}
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i48);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__simplify__warn_switch_for_ite_cond_5_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i49);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i51);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i50);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i52);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i50);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i53);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,1,32);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_sv(3), 5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__search_name_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i55);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,8,16);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i68);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i68);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i69);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) 37 | ((MR_Integer) 1 << (MR_Integer) 10));
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,9,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,10,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i50);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_once_1_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i81);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i80);
	}
	if (MR_INT_NE(MR_sv(9),3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i80);
	}
	if (MR_INT_EQ(MR_sv(8),3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i80);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i86);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__simplify__simplify_goal_ordinary_ite_9_0_i87);
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(14);
	}
MR_def_label(check_hlds__simplify__simplify_goal_ordinary_ite_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module81)
	MR_init_entry1(check_hlds__simplify__simplify_goal_neg_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_neg_6_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_neg_6_0,2,3,4,5,6,7,8,35,37,38)
	MR_init_label4(check_hlds__simplify__simplify_goal_neg_6_0,46,43,50,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_neg'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_neg_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i2);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i3);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i4);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i5);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i6);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i7);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_neg_6_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,35);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(2,10,1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i35);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_neg_6_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,38);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(2,10,1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i35);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_neg_6_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_neg_6_0_i38);
	}
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_neg_6_0_i38);
	}
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i46);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_neg_6_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_neg_6_0_i43);
	}
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i46);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_neg_6_0_i48);
	}
	MR_r2 = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(builtin__semidet_fail_0_0,
		check_hlds__simplify__simplify_goal_neg_6_0_i50);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_neg_6_0_i48);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__simplify__maybe_wrap_goal_7_0);
MR_def_label(check_hlds__simplify__simplify_goal_neg_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_sv(2));
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module82)
	MR_init_entry1(check_hlds__simplify__simplify_goal_scope_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_goal_scope_6_0);
	MR_init_label10(check_hlds__simplify__simplify_goal_scope_6_0,5,6,7,10,9,2,13,14,18,20)
	MR_init_label10(check_hlds__simplify__simplify_goal_scope_6_0,21,23,27,50,29,33,35,31,37,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_goal_scope'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_scope_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i2);
	}
	MR_tempr2 = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(5) = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i5);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i6);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 331;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i7);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i10);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i13);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__simplify__nested_scopes_4_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i50);
	}
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i18);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i37);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i20);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 1);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i21);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i37);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i50);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i37);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i27);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i37);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i29);
	}
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 1);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i30);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(3, MR_r3, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_after_front_end_1_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i33);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_scope_6_0_i31);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_trace_goal_7_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i35);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i37);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_scope_6_0_i37);
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__simplify__simplify_goal_scope_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r3, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module83)
	MR_init_entry1(check_hlds__simplify__simplify_par_conj_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_par_conj_5_0);
	MR_init_label5(check_hlds__simplify__simplify_par_conj_5_0,20,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_par_conj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_par_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_par_conj_5_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(check_hlds__simplify__simplify_par_conj_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_par_conj_5_0_i4);
MR_def_label(check_hlds__simplify__simplify_par_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__simplify__simplify_par_conj_5_0_i5);
MR_def_label(check_hlds__simplify__simplify_par_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr8 = MR_sv(4);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr8, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr8, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_tempr8, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_tempr8, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 12);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr8, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr8, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr8, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr8, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr8, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr8, 6);
	MR_tfield(0, MR_r2, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr8, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr8, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr8, 10);
	MR_tfield(0, MR_r2, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_par_conj_5_0_i7);
MR_def_label(check_hlds__simplify__simplify_par_conj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__simplify__simplify_par_conj_5_0,
		check_hlds__simplify__simplify_par_conj_5_0_i8);
MR_def_label(check_hlds__simplify__simplify_par_conj_5_0,8)
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

MR_decl_entry(hlds__instmap__bind_var_to_functors_8_0);
MR_decl_entry(hlds__instmap__instmap_delta_bind_var_to_functors_9_0);

MR_BEGIN_MODULE(check_hlds__simplify_module84)
	MR_init_entry1(check_hlds__simplify__simplify_switch_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_switch_13_0);
	MR_init_label10(check_hlds__simplify__simplify_switch_13_0,68,3,4,5,6,8,9,10,11,12)
	MR_init_label8(check_hlds__simplify__simplify_switch_13_0,13,17,22,23,24,25,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_switch'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_switch_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__simplify_switch_13_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r8;
	MR_decr_sp_and_return(15);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(12) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(5) = MR_tempr1;
	MR_sv(13) = MR_r8;
	MR_sv(7) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_switch_13_0_i4);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tfield(0, MR_r2, 0);
	MR_sv(9) = MR_tfield(0, MR_r2, 1);
	MR_sv(10) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_switch_13_0_i5);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_switch_13_0_i6);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__simplify_switch_13_0_i8);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__bind_var_to_functors_8_0,
		check_hlds__simplify__simplify_switch_13_0_i9);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_switch_13_0_i10);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_instmap_3_0,
		check_hlds__simplify__simplify_switch_13_0_i11);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_switch_13_0_i12);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i13);
	}
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i13);
	}
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Integer) 0;
	MR_sv(14) = MR_sv(12);
	MR_sv(12) = MR_r3;
	MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i28);
	}
MR_def_label(check_hlds__simplify__simplify_switch_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r4 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i17);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_RTAGS_TESTR(MR_tempr3,3,4)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i17);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i17);
	}
	MR_sv(14) = MR_sv(12);
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_r4;
	MR_sv(10) = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__simplify__simplify_switch_13_0_i22);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r3;
	MR_r1 = MR_r4;
	MR_sv(10) = MR_r2;
	MR_sv(14) = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__simplify__simplify_switch_13_0_i22);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_switch_13_0_i23);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,
		check_hlds__simplify__simplify_switch_13_0_i24);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_switch_13_0_i25);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(2) = MR_sv(4);
	MR_r2 = MR_tempr3;
	MR_sv(3) = MR_tempr1;
	MR_sv(12) = MR_tempr2;
	}
MR_def_label(check_hlds__simplify__simplify_switch_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_post_branch_update_3_0,
		check_hlds__simplify__simplify_switch_13_0_i29);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i68);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module85)
	MR_init_entry1(check_hlds__simplify__simplify_disj_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_disj_8_0);
	MR_init_label10(check_hlds__simplify__simplify_disj_8_0,101,4,3,5,6,11,12,15,17,20)
	MR_init_label10(check_hlds__simplify__simplify_disj_8_0,22,32,14,33,37,40,41,34,43,8)
	MR_init_label3(check_hlds__simplify__simplify_disj_8_0,47,49,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_disj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_disj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__simplify_disj_8_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(7) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__simplify__simplify_disj_8_0_i4);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__simplify_disj_8_0_i5);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		check_hlds__simplify__simplify_disj_8_0_i6);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i8);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__simplify_disj_8_0_i11);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_disj_8_0_i12);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i8);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_simple_code_1_0,
		check_hlds__simplify__simplify_disj_8_0_i15);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i14);
	}
	MR_r2 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i14);
	}
	}
MR_def_label(check_hlds__simplify__simplify_disj_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0,
		check_hlds__simplify__simplify_disj_8_0_i20);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i14);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_disj_8_0_i22);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,42);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,10,1);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_disj_8_0_i32);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i33);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i37);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i49);
	}
	}
MR_def_label(check_hlds__simplify__simplify_disj_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__simplify_disj_8_0_i40);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_fully_strict_2_0,
		check_hlds__simplify__simplify_disj_8_0_i41);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i34);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i49);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__simplify__simplify_disj_8_0_i43);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i49);
	}
MR_def_label(check_hlds__simplify__simplify_disj_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__simplify__simplify_disj_8_0_i47);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_sv(1) = MR_tempr1;
	}
MR_def_label(check_hlds__simplify__simplify_disj_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_post_branch_update_3_0,
		check_hlds__simplify__simplify_disj_8_0_i50);
MR_def_label(check_hlds__simplify__simplify_disj_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__simplify__simplify_disj_8_0_i101);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module86)
	MR_init_entry1(check_hlds__simplify__simplify_info_requantify_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_requantify_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_requantify'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_requantify_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_r1, 7) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module87)
	MR_init_entry1(check_hlds__simplify__simplify_info_rerun_det_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_rerun_det_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_rerun_det'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_rerun_det_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__quantification__implicitly_quantify_goal_general_11_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_8_0);
MR_decl_entry(check_hlds__det_analysis__det_get_soln_context_2_0);
MR_decl_entry(check_hlds__det_analysis__det_infer_goal_10_0);

MR_BEGIN_MODULE(check_hlds__simplify_module88)
	MR_init_entry1(check_hlds__simplify__do_process_clause_body_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__do_process_clause_body_goal_4_0);
	MR_init_label10(check_hlds__simplify__do_process_clause_body_goal_4_0,2,3,4,7,9,10,11,12,13,14)
	MR_init_label10(check_hlds__simplify__do_process_clause_body_goal_4_0,15,16,17,5,19,22,24,25,26,27)
	MR_init_label10(check_hlds__simplify__do_process_clause_body_goal_4_0,28,29,30,31,32,33,34,35,36,37)
	MR_init_label4(check_hlds__simplify__do_process_clause_body_goal_4_0,38,39,40,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_process_clause_body_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__do_process_clause_body_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(10) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i2);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i3);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i4);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_requantify_1_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i7);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__do_process_clause_body_goal_4_0_i5);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i9);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i10);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i11);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_goal_general_11_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i12);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i13);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i14);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i15);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i16);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(0, MR_sv(8), 6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_8_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i17);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i19);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_rerun_det_1_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i22);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__do_process_clause_body_goal_4_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_get_soln_context_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i24);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i25);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i26);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i27);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i28);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i29);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i30);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i31);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i32);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i33);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i34);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i35);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i36);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i37);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i38);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_10_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i39);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_det_info_3_0,
		check_hlds__simplify__do_process_clause_body_goal_4_0_i40);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__worst_contains_trace_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_remove_feature_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module89)
	MR_init_entry1(check_hlds__simplify__goal_contains_trace_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__goal_contains_trace_3_0);
	MR_init_label10(check_hlds__simplify__goal_contains_trace_3_0,4,3,6,5,9,8,12,13,14,16)
	MR_init_label10(check_hlds__simplify__goal_contains_trace_3_0,11,56,22,20,25,26,18,31,32,35)
	MR_init_label9(check_hlds__simplify__goal_contains_trace_3_0,30,37,36,28,42,2,46,45,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_contains_trace'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__goal_contains_trace_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	}
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i4);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(6) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i5);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__goal_list_contains_trace_4_0,
		check_hlds__simplify__goal_contains_trace_3_0_i6);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i8);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__simplify__goal_list_contains_trace_4_0,
		check_hlds__simplify__goal_contains_trace_3_0_i9);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i11);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i12);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i13);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i14);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__simplify__goal_contains_trace_3_0_i16);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__simplify__goal_contains_trace_3_0_i35);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i18);
	}
	MR_r2 = MR_tfield(3, MR_r3, 1);
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 2);
	if (!((((MR_Integer) MR_tempr1 == (MR_Integer) 1) || ((MR_Integer) MR_tempr1 == (MR_Integer) 2)))) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i22);
	}
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_r3;
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r3, 2);
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i26);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i25);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_r3;
	MR_sv(1) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r3, 2);
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i26);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i28);
	}
	MR_r2 = MR_tfield(3, MR_r3, 1);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i30);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 3);
	MR_sv(5) = MR_tfield(1, MR_r2, 5);
	MR_sv(7) = MR_tfield(1, MR_r2, 6);
	MR_r1 = MR_tfield(1, MR_r2, 4);
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i31);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__goal_list_contains_trace_4_0,
		check_hlds__simplify__goal_contains_trace_3_0_i32);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 5) = MR_r1;
	MR_tfield(1, MR_tempr1, 6) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__simplify__goal_contains_trace_3_0_i35);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i36);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_r1 = MR_tfield(2, MR_r2, 2);
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i37);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.goal_contains_trace\'/3", 53);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i2);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i56);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__case_list_contains_trace_4_0,
		check_hlds__simplify__goal_contains_trace_3_0_i42);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i45);
	}
	MR_r1 = (MR_Integer) 17;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_remove_feature_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i46);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i48);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module90)
	MR_init_entry1(check_hlds__simplify__goal_list_contains_trace_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__goal_list_contains_trace_4_0);
	MR_init_label4(check_hlds__simplify__goal_list_contains_trace_4_0,18,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_list_contains_trace'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__goal_list_contains_trace_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_list_contains_trace_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__simplify__goal_list_contains_trace_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_list_contains_trace_4_0_i4);
MR_def_label(check_hlds__simplify__goal_list_contains_trace_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__simplify__goal_list_contains_trace_4_0_i5);
MR_def_label(check_hlds__simplify__goal_list_contains_trace_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__simplify__goal_list_contains_trace_4_0,
		check_hlds__simplify__goal_list_contains_trace_4_0_i6);
MR_def_label(check_hlds__simplify__goal_list_contains_trace_4_0,6)
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


MR_BEGIN_MODULE(check_hlds__simplify_module91)
	MR_init_entry1(check_hlds__simplify__case_list_contains_trace_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__case_list_contains_trace_4_0);
	MR_init_label4(check_hlds__simplify__case_list_contains_trace_4_0,19,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'case_list_contains_trace'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__case_list_contains_trace_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__case_list_contains_trace_4_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__simplify__case_list_contains_trace_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__case_list_contains_trace_4_0_i4);
MR_def_label(check_hlds__simplify__case_list_contains_trace_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__simplify__case_list_contains_trace_4_0_i6);
MR_def_label(check_hlds__simplify__case_list_contains_trace_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__simplify__case_list_contains_trace_4_0,
		check_hlds__simplify__case_list_contains_trace_4_0_i7);
MR_def_label(check_hlds__simplify__case_list_contains_trace_4_0,7)
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


MR_BEGIN_MODULE(check_hlds__simplify_module92)
	MR_init_entry1(check_hlds__simplify__simplify_info_reinit_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_reinit_4_0);
	MR_init_label1(check_hlds__simplify__simplify_info_reinit_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_reinit'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_reinit_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr9 = MR_r3;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr9, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr9, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr9, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr9, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr9, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_tempr9, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_tempr9, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_sv(2) = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_tempr9, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_tempr9, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_r1;
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_tempr9, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_tempr9, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_tempr9, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_tempr9, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_tempr9, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_tempr9, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_tempr9, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__check_hlds__common__common_info_init_0_0,
		check_hlds__simplify__simplify_info_reinit_4_0_i3);
MR_def_label(check_hlds__simplify__simplify_info_reinit_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr3, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr1 = ((MR_Integer) MR_tfield(0, MR_tempr3, 11) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_tfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = ((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1) | ((MR_Integer) 0 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr2, 8) = MR_tfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr2, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 10) = MR_tfield(0, MR_tempr3, 10);
	MR_tfield(0, MR_tempr2, 11) = ((MR_Integer) MR_tempr1 | (((MR_Integer) 0 << (MR_Integer) 1) | (((MR_Integer) MR_r2 << (MR_Integer) 2) | ((MR_Integer) 0 << (MR_Integer) 3))));
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module93)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_found_contains_trace_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_found_contains_trace_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_found_contains_trace'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_get_found_contains_trace_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module94)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_simplifications_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_set_simplifications_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_set_simplifications'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_simplifications_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_r2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_r2, 11) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_r2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr7 = ((MR_Integer) MR_tfield(0, MR_r2, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr8, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr8, 2) = MR_r1;
	MR_tfield(0, MR_tempr8, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr8, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr8, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr8, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr8, 7) = ((MR_Integer) MR_tempr7 | (((MR_Integer) MR_tempr6 << (MR_Integer) 1) | ((MR_Integer) MR_tempr1 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr8, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr8, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr8, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr8, 11) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | ((MR_Integer) MR_tempr2 << (MR_Integer) 3))));
	MR_r1 = MR_tempr8;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module95)
	MR_init_entry1(check_hlds__simplify__simplify_process_clause_body_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_process_clause_body_goal_4_0);
	MR_init_label10(check_hlds__simplify__simplify_process_clause_body_goal_4_0,2,3,9,7,11,6,14,15,17,5)
	MR_init_label4(check_hlds__simplify__simplify_process_clause_body_goal_4_0,19,20,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_process_clause_body_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_process_clause_body_goal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_simplifications_2_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i2);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i3);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_common_struct_1_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i9);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_process_clause_body_goal_4_0_i7);
	}
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__simplify__simplify_process_clause_body_goal_4_0_i6);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i11);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_process_clause_body_goal_4_0_i5);
	}
	MR_r2 = MR_sv(2);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tempr11 = MR_sv(3);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr7 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr8 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr9 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr10 = ((MR_Integer) MR_tfield(0, MR_tempr11, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_tempr10 | (((MR_Integer) MR_tempr9 << (MR_Integer) 1) | (((MR_Integer) MR_tempr8 << (MR_Integer) 2) | (((MR_Integer) MR_tempr7 << (MR_Integer) 3) | (((MR_Integer) 0 << (MR_Integer) 4) | (((MR_Integer) MR_tempr6 << (MR_Integer) 5) | (((MR_Integer) 0 << (MR_Integer) 6) | (((MR_Integer) MR_tempr5 << (MR_Integer) 7) | (((MR_Integer) MR_tempr4 << (MR_Integer) 8) | (((MR_Integer) MR_tempr3 << (MR_Integer) 9) | (((MR_Integer) MR_tempr2 << (MR_Integer) 10) | ((MR_Integer) MR_tempr1 << (MR_Integer) 11))))))))))));
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_simplifications_3_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i14);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__do_process_clause_body_goal_4_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i15);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tempr10 = MR_sv(3);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr7 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr8 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr9, 0) = ((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1) | (((MR_Integer) MR_tempr8 << (MR_Integer) 2) | (((MR_Integer) MR_tempr7 << (MR_Integer) 3) | (((MR_Integer) MR_tempr6 << (MR_Integer) 4) | (((MR_Integer) MR_tempr5 << (MR_Integer) 5) | (((MR_Integer) MR_tempr4 << (MR_Integer) 6) | (((MR_Integer) MR_tempr3 << (MR_Integer) 7) | (((MR_Integer) 0 << (MR_Integer) 8) | (((MR_Integer) MR_tempr2 << (MR_Integer) 9) | (((MR_Integer) 0 << (MR_Integer) 10) | ((MR_Integer) MR_tempr1 << (MR_Integer) 11))))))))))));
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr9;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_reinit_4_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i17);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__do_process_clause_body_goal_4_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i19);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__do_process_clause_body_goal_4_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i19);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_found_contains_trace_2_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i20);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_process_clause_body_goal_4_0_i22);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__simplify_process_clause_body_goal_4_0_i23);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__count_1_0);
MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(fn__string__split_at_char_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_3_2);
MR_decl_entry(fn__hlds__hlds_pred__pred_id_to_int_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module96)
	MR_init_entry1(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0);
	MR_init_label10(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,2,4,5,8,9,10,12,15,18,19)
	MR_init_label2(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,28,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_proc_maybe_vary_parameters'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i2);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__count_1_0,
		check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i4);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,1000)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tempr11 = MR_sv(3);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr7 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr8 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr9 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr10 = ((MR_Integer) MR_tfield(0, MR_tempr11, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_sv(3), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(3), 0) = ((MR_Integer) MR_tempr10 | (((MR_Integer) MR_tempr9 << (MR_Integer) 1) | (((MR_Integer) MR_tempr8 << (MR_Integer) 2) | (((MR_Integer) MR_tempr7 << (MR_Integer) 3) | (((MR_Integer) MR_tempr6 << (MR_Integer) 4) | (((MR_Integer) MR_tempr5 << (MR_Integer) 5) | (((MR_Integer) MR_tempr4 << (MR_Integer) 6) | (((MR_Integer) MR_tempr3 << (MR_Integer) 7) | (((MR_Integer) MR_tempr2 << (MR_Integer) 8) | (((MR_Integer) MR_tempr1 << (MR_Integer) 9) | (((MR_Integer) 0 << (MR_Integer) 10) | ((MR_Integer) MR_r2 << (MR_Integer) 11))))))))))));
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i8);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i8);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 332;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i9);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 44;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__split_at_char_2_0,
		check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i12);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_2,
		check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i15);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i28);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_id_to_int_1_0,
		check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i18);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i19);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0_i17);
	}
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tempr11 = MR_sv(3);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr7 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr8 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr9 = (((MR_Integer) MR_tfield(0, MR_tempr11, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr10 = ((MR_Integer) MR_tfield(0, MR_tempr11, 0) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_tempr10 | (((MR_Integer) MR_tempr9 << (MR_Integer) 1) | (((MR_Integer) MR_tempr8 << (MR_Integer) 2) | (((MR_Integer) MR_tempr7 << (MR_Integer) 3) | (((MR_Integer) MR_tempr6 << (MR_Integer) 4) | (((MR_Integer) MR_tempr5 << (MR_Integer) 5) | (((MR_Integer) MR_tempr4 << (MR_Integer) 6) | (((MR_Integer) MR_tempr3 << (MR_Integer) 7) | (((MR_Integer) MR_tempr2 << (MR_Integer) 8) | (((MR_Integer) MR_tempr1 << (MR_Integer) 9) | (((MR_Integer) 0 << (MR_Integer) 10) | ((MR_Integer) MR_r2 << (MR_Integer) 11))))))))))));
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(check_hlds__format_call__analyze_and_optimize_format_calls_8_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__quantification__requantify_proc_general_3_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_pred__remove_marker_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module97)
	MR_init_entry1(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0);
	MR_init_label10(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,2,3,4,5,7,8,9,10,11,12)
	MR_init_label10(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,13,14,15,16,17,18,19,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_proc_analyze_and_format_calls'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i2);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i3);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i4);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__format_call__analyze_and_optimize_format_calls_8_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i5);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i7);
	}
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i8);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i9);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i10);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__quantification__requantify_proc_general_3_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i11);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i12);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i13);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i14);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i15);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i16);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i17);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i18);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 24;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__remove_marker_3_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i19);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i20);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i21);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0_i22);
MR_def_label(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__get_may_duplicate_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module98)
	MR_init_entry1(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0);
	MR_init_label10(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,2,3,4,8,13,15,11,25,27,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_proc_maybe_warn_about_duplicates'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i2);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i3);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i4);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i6);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_duplicate_1_0,
		check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i8);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 7;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i13);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i15);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,47);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(2,10,0);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i25);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0_i27);
MR_def_label(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,51);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(2,10,0);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module99)
	MR_init_entry1(check_hlds__simplify__simplify_info_init_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_init_5_0);
	MR_init_label4(check_hlds__simplify__simplify_info_init_5_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_init'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_init_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__simplify__simplify_info_init_5_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_init_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		check_hlds__simplify__simplify_info_init_5_0_i3);
MR_def_label(check_hlds__simplify__simplify_info_init_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__simplify_info_init_5_0_i4);
MR_def_label(check_hlds__simplify__simplify_info_init_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__common__common_info_init_0_0,
		check_hlds__simplify__simplify_info_init_5_0_i5);
MR_def_label(check_hlds__simplify__simplify_info_init_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 12);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_tfield(0, MR_r2, 4) = MR_sv(3);
	MR_tfield(0, MR_r2, 5) = MR_sv(4);
	MR_tfield(0, MR_r2, 6) = MR_sv(5);
	MR_tfield(0, MR_r2, 7) = ((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1) | ((MR_Integer) 0 << (MR_Integer) 2)));
	MR_tfield(0, MR_r2, 8) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 10) = MR_sv(6);
	MR_tfield(0, MR_r2, 11) = ((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1) | (((MR_Integer) 0 << (MR_Integer) 2) | ((MR_Integer) 0 << (MR_Integer) 3))));
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module100)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_has_parallel_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_has_parallel_conj_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_has_parallel_conj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_get_has_parallel_conj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module101)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_has_user_event_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_has_user_event_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_has_user_event'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_get_has_user_event_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_init_7_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_var_name_remap_2_0);
MR_decl_entry(map__foldl_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_var_name_remap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_user_event_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module102)
	MR_init_entry1(check_hlds__simplify__simplify_proc_return_msgs_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_proc_return_msgs_8_0);
	MR_init_label10(check_hlds__simplify__simplify_proc_return_msgs_8_0,2,3,4,6,8,11,10,13,15,5)
	MR_init_label10(check_hlds__simplify__simplify_proc_return_msgs_8_0,17,19,22,18,23,24,25,26,27,28)
	MR_init_label10(check_hlds__simplify__simplify_proc_return_msgs_8_0,29,30,31,32,33,34,35,38,40,44)
	MR_init_label10(check_hlds__simplify__simplify_proc_return_msgs_8_0,45,46,36,48,49,50,51,52,53,54)
	MR_init_label5(check_hlds__simplify__simplify_proc_return_msgs_8_0,55,56,57,58,60)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_proc_return_msgs'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_proc_return_msgs_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(4) = MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_proc_maybe_vary_parameters_5_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i2);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i3);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i4);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 21;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i6);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_8_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i8);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_8_0_i11);
	}
	MR_sv(8) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_8_0_i10);
	}
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_8_0_i5);
	}
	MR_sv(8) = MR_r3;
	MR_r2 = MR_tfield(0, MR_r1, 1);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i13);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i15);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_8_0_i17);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_sv(4);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 24;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i19);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_8_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_sv(6), 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_8_0_i18);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_proc_analyze_and_format_calls_7_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i22);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r3;
	MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_8_0_i23);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i24);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_init_7_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i25);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i26);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_init_5_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i27);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i28);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_process_clause_body_goal_4_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i29);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i30);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i31);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i32);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i33);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i34);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i35);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_after_front_end_1_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i38);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_8_0_i36);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_var_name_remap_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i40);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,52);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i44);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i45);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_var_name_remap_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i46);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i48);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i48);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_has_parallel_conj_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i49);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i50);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_has_user_event_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i51);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_user_event_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i52);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i53);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_error_specs_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i54);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i55);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_proc_maybe_warn_about_duplicates_5_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i56);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i57);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		check_hlds__simplify__simplify_proc_return_msgs_8_0_i58);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_8_0_i60);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__hlds_module__module_info_set_contains_par_conj_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_user_event_2_0);
MR_decl_entry(hlds__hlds_module__module_info_set_contains_user_event_2_0);
MR_decl_entry(parse_tree__error_util__accumulate_error_specs_for_proc_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module103)
	MR_init_entry1(check_hlds__simplify__simplify_pred_procs_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_pred_procs_9_0);
	MR_init_label10(check_hlds__simplify__simplify_pred_procs_9_0,29,3,4,5,6,7,9,10,8,11)
	MR_init_label5(check_hlds__simplify__simplify_pred_procs_9_0,13,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_pred_procs'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_pred_procs_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_pred_procs_9_0_i3);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(13);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_sv(3) = MR_r6;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i4);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i5);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_proc_return_msgs_8_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i6);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i7);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_pred_procs_9_0_i9);
	}
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__simplify__simplify_pred_procs_9_0_i8);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_contains_par_conj_2_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i10);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_user_event_2_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i11);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_pred_procs_9_0_i13);
	}
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_sv(10);
	MR_r5 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i15);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_contains_user_event_2_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i14);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r5 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i15);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i16);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,
		check_hlds__simplify__simplify_pred_procs_9_0_i17);
MR_def_label(check_hlds__simplify__simplify_pred_procs_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(check_hlds__simplify__simplify_pred_procs_9_0_i29);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(fn__parse_tree__error_util__init_error_spec_accumulator_0_0);
MR_decl_entry(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module104)
	MR_init_entry1(check_hlds__simplify__simplify_pred_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_pred_8_0);
	MR_init_label10(check_hlds__simplify__simplify_pred_8_0,2,3,6,4,10,11,12,13,14,15)
	MR_init_label1(check_hlds__simplify__simplify_pred_8_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_pred'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_pred_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("% Simplifying ", 14);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__simplify__simplify_pred_8_0_i2);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		check_hlds__simplify__simplify_pred_8_0_i3);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		check_hlds__simplify__simplify_pred_8_0_i6);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_pred_8_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tempr10 = MR_sv(6);
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_tempr6 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr7 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr8 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr9 = (((MR_Integer) MR_tfield(0, MR_tempr10, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_sv(6), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(6), 0) = ((MR_Integer) 0 | (((MR_Integer) MR_tempr9 << (MR_Integer) 1) | (((MR_Integer) MR_tempr8 << (MR_Integer) 2) | (((MR_Integer) MR_tempr7 << (MR_Integer) 3) | (((MR_Integer) MR_tempr6 << (MR_Integer) 4) | (((MR_Integer) MR_tempr5 << (MR_Integer) 5) | (((MR_Integer) MR_tempr4 << (MR_Integer) 6) | (((MR_Integer) MR_tempr3 << (MR_Integer) 7) | (((MR_Integer) MR_tempr2 << (MR_Integer) 8) | (((MR_Integer) MR_tempr1 << (MR_Integer) 9) | (((MR_Integer) MR_r2 << (MR_Integer) 10) | ((MR_Integer) MR_r1 << (MR_Integer) 11))))))))))));
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__init_error_spec_accumulator_0_0,
		check_hlds__simplify__simplify_pred_8_0_i10);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__error_util__init_error_spec_accumulator_0_0,
		check_hlds__simplify__simplify_pred_8_0_i10);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_pred_procs_9_0,
		check_hlds__simplify__simplify_pred_8_0_i11);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__simplify_pred_8_0_i12);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0,
		check_hlds__simplify__simplify_pred_8_0_i13);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__simplify_pred_8_0_i14);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 52;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__simplify_pred_8_0_i15);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		check_hlds__simplify__simplify_pred_8_0_i16);
MR_def_label(check_hlds__simplify__simplify_pred_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module105)
	MR_init_entry1(check_hlds__simplify__simplify_proc_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_proc_7_0);
	MR_init_label1(check_hlds__simplify__simplify_proc_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_proc'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_proc_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("% Simplifying ", 14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__simplify__simplify_proc_7_0_i2);
MR_def_label(check_hlds__simplify__simplify_proc_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_proc_return_msgs_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module106)
	MR_init_entry1(check_hlds__simplify__simplify_may_introduce_calls_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_may_introduce_calls_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_may_introduce_calls'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_may_introduce_calls_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module107)
	MR_init_entry1(check_hlds__simplify__find_simplifications_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__find_simplifications_3_0);
	MR_init_label10(check_hlds__simplify__find_simplifications_3_0,2,3,4,5,6,14,11,9,8,18)
	MR_init_label10(check_hlds__simplify__find_simplifications_3_0,19,20,21,22,23,24,27,28,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_simplifications'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__find_simplifications_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 19;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i2);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 20;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i3);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 32;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i4);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 33;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i5);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 354;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i6);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i11);
	}
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i14);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i9);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i11);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i9);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i8);
	}
	MR_r1 = MR_sv(8);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Integer) 1;
	MR_r2 = (MR_Integer) 34;
	MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i18);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_sv(4) = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 34;
MR_def_label(check_hlds__simplify__find_simplifications_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i19);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 353;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i20);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 331;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i21);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 351;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i22);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 352;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i23);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i24);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i24);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i27);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
MR_def_label(check_hlds__simplify__find_simplifications_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i28);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i28);
	}
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i31);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
MR_def_label(check_hlds__simplify__find_simplifications_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i32);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r2 | (((MR_Integer) MR_r3 << (MR_Integer) 1) | (((MR_Integer) MR_sv(4) << (MR_Integer) 2) | (((MR_Integer) 1 << (MR_Integer) 3) | (((MR_Integer) 0 << (MR_Integer) 4) | (((MR_Integer) 0 << (MR_Integer) 5) | (((MR_Integer) MR_sv(6) << (MR_Integer) 6) | (((MR_Integer) 0 << (MR_Integer) 7) | (((MR_Integer) MR_sv(8) << (MR_Integer) 8) | (((MR_Integer) MR_r1 << (MR_Integer) 9) | (((MR_Integer) MR_sv(7) << (MR_Integer) 10) | ((MR_Integer) 0 << (MR_Integer) 11))))))))))));
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__simplify__find_simplifications_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_r2 | (((MR_Integer) MR_r3 << (MR_Integer) 1) | (((MR_Integer) MR_sv(4) << (MR_Integer) 2) | (((MR_Integer) 0 << (MR_Integer) 3) | (((MR_Integer) 0 << (MR_Integer) 4) | (((MR_Integer) 0 << (MR_Integer) 5) | (((MR_Integer) MR_sv(6) << (MR_Integer) 6) | (((MR_Integer) 0 << (MR_Integer) 7) | (((MR_Integer) MR_sv(8) << (MR_Integer) 8) | (((MR_Integer) MR_r1 << (MR_Integer) 9) | (((MR_Integer) MR_sv(7) << (MR_Integer) 10) | ((MR_Integer) 0 << (MR_Integer) 11))))))))))));
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module108)
	MR_init_entry1(fn__check_hlds__simplify__simplifications_to_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__simplify__simplifications_to_list_1_0);
	MR_init_label10(fn__check_hlds__simplify__simplifications_to_list_1_0,2,5,6,9,10,13,14,17,18,21)
	MR_init_label10(fn__check_hlds__simplify__simplifications_to_list_1_0,22,25,26,29,30,33,34,37,38,41)
	MR_init_label10(fn__check_hlds__simplify__simplifications_to_list_1_0,42,45,46,50,51,52,53,54,55,56)
	MR_init_label3(fn__check_hlds__simplify__simplifications_to_list_1_0,57,58,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplifications_to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__simplify__simplifications_to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_r4 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_r5 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_r6 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_r7 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_r8 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_r9 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_r10 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_r11 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_r12 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_r13 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r14 = (((MR_Integer) MR_tfield(0, MR_r1, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r15 = ((MR_Integer) MR_tfield(0, MR_r1, 0) & (MR_Integer) 1);
	if (MR_INT_NE(MR_r15,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i2);
	}
	MR_r1 = MR_r14;
	MR_r2 = MR_r13;
	MR_r3 = MR_r12;
	MR_r15 = MR_r4;
	MR_r4 = MR_r11;
	MR_r16 = MR_r5;
	MR_r5 = MR_r10;
	MR_r17 = MR_r6;
	MR_r6 = MR_r9;
	MR_r18 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r18;
	MR_r9 = MR_r17;
	MR_r10 = MR_r16;
	MR_r11 = MR_r15;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,12,7);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i5);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r14;
	MR_r2 = MR_r13;
	MR_r3 = MR_r12;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r11;
	MR_tempr2 = MR_r5;
	MR_r5 = MR_r10;
	MR_tempr3 = MR_r6;
	MR_r6 = MR_r9;
	MR_tempr4 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_tempr4;
	MR_r9 = MR_tempr3;
	MR_r10 = MR_tempr2;
	MR_r11 = MR_tempr1;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_r10 = MR_r11;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,12,8);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i9);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_r10 = MR_r11;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i10);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,12,9);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i13);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i14);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,12,10);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i17);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i18);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,12,11);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i21);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i22);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,12,12);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i25);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i26);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,12,13);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i29);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i30);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,12,14);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i33);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i34);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,12,15);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i37);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i38);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,12,16);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i41);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i42);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,12,17);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i45);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i46);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,12,18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i50);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i50);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i51);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i52);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i53);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i54);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i55);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i56);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i57);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i58);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i59);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module109)
	MR_init_entry1(fn__check_hlds__simplify__list_to_simplifications_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__simplify__list_to_simplifications_1_0);
	MR_init_label10(fn__check_hlds__simplify__list_to_simplifications_1_0,3,2,5,7,6,9,11,10,13,15)
	MR_init_label10(fn__check_hlds__simplify__list_to_simplifications_1_0,14,17,19,18,21,23,22,25,27,26)
	MR_init_label10(fn__check_hlds__simplify__list_to_simplifications_1_0,29,31,30,33,35,34,37,39,38,41)
	MR_init_label5(fn__check_hlds__simplify__list_to_simplifications_1_0,43,42,45,47,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_to_simplifications'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__simplify__list_to_simplifications_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i3);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i2);
	}
	MR_r3 = MR_sv(11);
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i5);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(1) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i7);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i6);
	}
	MR_r3 = MR_sv(11);
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i9);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(2) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i11);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i10);
	}
	MR_r3 = MR_sv(11);
	MR_sv(3) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i13);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(3) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i15);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i14);
	}
	MR_r3 = MR_sv(11);
	MR_sv(4) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i17);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(4) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i19);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i18);
	}
	MR_r3 = MR_sv(11);
	MR_sv(5) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i21);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(5) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i23);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i22);
	}
	MR_r3 = MR_sv(11);
	MR_sv(6) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i25);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(6) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i27);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i26);
	}
	MR_r3 = MR_sv(11);
	MR_sv(7) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i29);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(7) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i31);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i30);
	}
	MR_r3 = MR_sv(11);
	MR_sv(8) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i33);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(8) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i35);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i34);
	}
	MR_r3 = MR_sv(11);
	MR_sv(9) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i37);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(9) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i39);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i38);
	}
	MR_r3 = MR_sv(11);
	MR_sv(10) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i41);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(10) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i43);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i42);
	}
	MR_r3 = MR_sv(11);
	MR_sv(11) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i45);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_sv(11) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 11;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i47);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i46);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_sv(1) | (((MR_Integer) MR_sv(2) << (MR_Integer) 1) | (((MR_Integer) MR_sv(3) << (MR_Integer) 2) | (((MR_Integer) MR_sv(4) << (MR_Integer) 3) | (((MR_Integer) MR_sv(5) << (MR_Integer) 4) | (((MR_Integer) MR_sv(6) << (MR_Integer) 5) | (((MR_Integer) MR_sv(7) << (MR_Integer) 6) | (((MR_Integer) MR_sv(8) << (MR_Integer) 7) | (((MR_Integer) MR_sv(9) << (MR_Integer) 8) | (((MR_Integer) MR_sv(10) << (MR_Integer) 9) | (((MR_Integer) MR_sv(11) << (MR_Integer) 10) | ((MR_Integer) 1 << (MR_Integer) 11))))))))))));
	MR_decr_sp_and_return(12);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = ((MR_Integer) MR_sv(1) | (((MR_Integer) MR_sv(2) << (MR_Integer) 1) | (((MR_Integer) MR_sv(3) << (MR_Integer) 2) | (((MR_Integer) MR_sv(4) << (MR_Integer) 3) | (((MR_Integer) MR_sv(5) << (MR_Integer) 4) | (((MR_Integer) MR_sv(6) << (MR_Integer) 5) | (((MR_Integer) MR_sv(7) << (MR_Integer) 6) | (((MR_Integer) MR_sv(8) << (MR_Integer) 7) | (((MR_Integer) MR_sv(9) << (MR_Integer) 8) | (((MR_Integer) MR_sv(10) << (MR_Integer) 9) | (((MR_Integer) MR_sv(11) << (MR_Integer) 10) | ((MR_Integer) 0 << (MR_Integer) 11))))))))))));
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module110)
	MR_init_entry1(check_hlds__simplify__simplify_do_format_calls_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_do_format_calls_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_do_format_calls'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_format_calls_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tfield(0, MR_r1, 2), 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module111)
	MR_init_entry1(fn__check_hlds__simplify__make_arg_always_boxed_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__simplify__make_arg_always_boxed_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_arg_always_boxed'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__simplify__make_arg_always_boxed_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_r2, 3) = (MR_Integer) 1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module112)
	MR_init_entry1(check_hlds__simplify__simplify_info_recompute_atomic_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_recompute_atomic_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_recompute_atomic'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_recompute_atomic_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module113)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_cost_delta_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_get_cost_delta_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_get_cost_delta'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_cost_delta_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
MR_decl_entry(fn__map__singleton_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_var_info_duplicate_4_0);

MR_BEGIN_MODULE(check_hlds__simplify_module114)
	MR_init_entry1(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0);
	MR_init_label7(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0,2,5,6,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simplify_info_apply_substitutions_and_duplicate'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_vartypes_2_0,
		check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(3) = MR_tfield(0, MR_sv(5), 10);
	MR_sv(6) = (MR_Word) MR_CTOR1_ADDR(term, var);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__map_values_only_3_0,
		check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0_i5);
MR_def_label(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__singleton_2_0,
		check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0_i6);
MR_def_label(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,55);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0_i8);
MR_def_label(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,
		check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0_i9);
MR_def_label(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_var_info_duplicate_4_0,
		check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0_i10);
MR_def_label(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0_i11);
MR_def_label(check_hlds__simplify__simplify_info_apply_substitutions_and_duplicate_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_r1, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_r1, 11) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_r1, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_r1, 7) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr7, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr7, 4) = MR_tfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr7, 5) = MR_tfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr7, 6) = MR_tfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr7, 7) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | ((MR_Integer) MR_r2 << (MR_Integer) 2)));
	MR_tfield(0, MR_tempr7, 8) = MR_tfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr7, 9) = MR_tfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr7, 10) = MR_sv(4);
	MR_tfield(0, MR_tempr7, 11) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | ((MR_Integer) MR_tempr1 << (MR_Integer) 3))));
	MR_r1 = MR_tempr7;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module115)
	MR_init_entry1(__Unify___check_hlds__simplify__before_after_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__simplify__before_after_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__simplify__before_after_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module116)
	MR_init_entry1(__Compare___check_hlds__simplify__before_after_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__simplify__before_after_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__simplify__before_after_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module117)
	MR_init_entry1(__Unify___check_hlds__simplify__cond_can_switch_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__simplify__cond_can_switch_0_0);
	MR_init_label4(__Unify___check_hlds__simplify__cond_can_switch_0_0,5,15,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__simplify__cond_can_switch_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__cond_can_switch_0_0_i15);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__cond_can_switch_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__simplify__cond_can_switch_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__cond_can_switch_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___check_hlds__simplify__cond_can_switch_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__simplify__cond_can_switch_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__cond_can_switch_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__simplify__cond_can_switch_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module118)
	MR_init_entry1(__Compare___check_hlds__simplify__cond_can_switch_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__simplify__cond_can_switch_0_0);
	MR_init_label9(__Compare___check_hlds__simplify__cond_can_switch_0_0,7,5,11,33,9,25,14,26,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__simplify__cond_can_switch_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__cond_can_switch_0_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__cond_can_switch_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__cond_can_switch_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___check_hlds__simplify__cond_can_switch_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__cond_can_switch_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__simplify__cond_can_switch_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__cond_can_switch_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__cond_can_switch_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__simplify__cond_can_switch_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__cond_can_switch_0_0_i25);
	}
MR_def_label(__Compare___check_hlds__simplify__cond_can_switch_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__simplify__cond_can_switch_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__cond_can_switch_0_0_i14);
	}
MR_def_label(__Compare___check_hlds__simplify__cond_can_switch_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__simplify__cond_can_switch_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__cond_can_switch_0_0_i15);
	}
MR_def_label(__Compare___check_hlds__simplify__cond_can_switch_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__simplify__cond_can_switch_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module119)
	MR_init_entry1(__Unify___check_hlds__simplify__seen_non_ground_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__simplify__seen_non_ground_term_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__simplify__seen_non_ground_term_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module120)
	MR_init_entry1(__Compare___check_hlds__simplify__seen_non_ground_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__simplify__seen_non_ground_term_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__simplify__seen_non_ground_term_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module121)
	MR_init_entry1(__Unify___check_hlds__simplify__simplification_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__simplify__simplification_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__simplify__simplification_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module122)
	MR_init_entry1(__Compare___check_hlds__simplify__simplification_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__simplify__simplification_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__simplify__simplification_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module123)
	MR_init_entry1(__Unify___check_hlds__simplify__simplifications_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__simplify__simplifications_0_0);
	MR_init_label2(__Unify___check_hlds__simplify__simplifications_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__simplify__simplifications_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tempr1, 0) & (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr2, 0) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 10) & (MR_Integer) 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = (((MR_Integer) MR_tfield(0, MR_tempr1, 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr2, 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__simplify__simplifications_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__simplify__simplifications_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module124)
	MR_init_entry1(__Compare___check_hlds__simplify__simplifications_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__simplify__simplifications_0_0);
	MR_init_label10(__Compare___check_hlds__simplify__simplifications_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label4(__Compare___check_hlds__simplify__simplifications_0_0,37,41,45,101)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__simplify__simplifications_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i3);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i2);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(22) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_sv(21) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_sv(20) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_sv(19) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_sv(18) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_sv(17) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_sv(16) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(15) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(14) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(13) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(12) = (((MR_Integer) MR_tfield(0, MR_tempr5, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(11) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_sv(10) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_sv(9) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_sv(6) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_sv(5) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(4) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(3) = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 0) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tempr3, 0) & (MR_Integer) 1);
	MR_r2 = ((MR_Integer) MR_tfield(0, MR_tempr4, 0) & (MR_Integer) 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i5);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i9);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i13);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i17);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i21);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i25);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i29);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i33);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i37);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i41);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i45);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i101);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(22);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___check_hlds__det_util__det_info_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___check_hlds__common__common_info_0_0);
MR_decl_entry(__Unify___hlds__instmap__instmap_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(check_hlds__simplify_module125)
	MR_init_entry1(__Unify___check_hlds__simplify__simplify_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__simplify__simplify_info_0_0);
	MR_init_label10(__Unify___check_hlds__simplify__simplify_info_0_0,4,6,8,10,12,14,16,18,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__simplify__simplify_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i20);
	}
	MR_incr_sp(33);
	MR_sv(33) = (MR_Word) MR_succip;
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
	MR_sv(7) = ((MR_Integer) MR_tfield(0, MR_tempr1, 7) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(0, MR_tempr1, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(9) = (((MR_Integer) MR_tfield(0, MR_tempr1, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(13) = ((MR_Integer) MR_tfield(0, MR_tempr1, 11) & (MR_Integer) 1);
	MR_sv(14) = (((MR_Integer) MR_tfield(0, MR_tempr1, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(15) = (((MR_Integer) MR_tfield(0, MR_tempr1, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(16) = (((MR_Integer) MR_tfield(0, MR_tempr1, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(23) = ((MR_Integer) MR_tfield(0, MR_tempr2, 7) & (MR_Integer) 1);
	MR_sv(24) = (((MR_Integer) MR_tfield(0, MR_tempr2, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(25) = (((MR_Integer) MR_tfield(0, MR_tempr2, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(26) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(27) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(28) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(29) = ((MR_Integer) MR_tfield(0, MR_tempr2, 11) & (MR_Integer) 1);
	MR_sv(30) = (((MR_Integer) MR_tfield(0, MR_tempr2, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(31) = (((MR_Integer) MR_tfield(0, MR_tempr2, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(32) = (((MR_Integer) MR_tfield(0, MR_tempr2, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___check_hlds__det_util__det_info_0_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i4);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i6);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___check_hlds__simplify__simplifications_0_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i8);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___check_hlds__common__common_info_0_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i10);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___hlds__instmap__instmap_0_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i12);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i14);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i16);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(23))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(24))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(9) != MR_sv(25))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(10) != MR_sv(26))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(11) != MR_sv(27))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i18);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(13) != MR_sv(29))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(14) != MR_sv(30))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(15) != MR_sv(31))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = (MR_sv(16) == MR_sv(32));
	MR_decr_sp_and_return(33);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(33);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___check_hlds__det_util__det_info_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___check_hlds__common__common_info_0_0);
MR_decl_entry(__Compare___hlds__instmap__instmap_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);

MR_BEGIN_MODULE(check_hlds__simplify_module126)
	MR_init_entry1(__Compare___check_hlds__simplify__simplify_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__simplify__simplify_info_0_0);
	MR_init_label10(__Compare___check_hlds__simplify__simplify_info_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label9(__Compare___check_hlds__simplify__simplify_info_0_0,37,41,45,49,53,57,61,65,141)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__simplify__simplify_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i3);
	}
	MR_incr_sp(33);
	MR_sv(33) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i2);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(32) = (((MR_Integer) MR_tfield(0, MR_tempr5, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(31) = (((MR_Integer) MR_tfield(0, MR_tempr5, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(30) = (((MR_Integer) MR_tfield(0, MR_tempr5, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(29) = ((MR_Integer) MR_tfield(0, MR_tempr5, 11) & (MR_Integer) 1);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(25) = (((MR_Integer) MR_tfield(0, MR_tempr5, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(24) = (((MR_Integer) MR_tfield(0, MR_tempr5, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(23) = ((MR_Integer) MR_tfield(0, MR_tempr5, 7) & (MR_Integer) 1);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(16) = (((MR_Integer) MR_tfield(0, MR_tempr6, 11) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(15) = (((MR_Integer) MR_tfield(0, MR_tempr6, 11) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(14) = (((MR_Integer) MR_tfield(0, MR_tempr6, 11) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(13) = ((MR_Integer) MR_tfield(0, MR_tempr6, 11) & (MR_Integer) 1);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(9) = (((MR_Integer) MR_tfield(0, MR_tempr6, 7) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(0, MR_tempr6, 7) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(7) = ((MR_Integer) MR_tfield(0, MR_tempr6, 7) & (MR_Integer) 1);
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
	MR_np_call_localret_ent(__Compare___check_hlds__det_util__det_info_0_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i5);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i9);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___check_hlds__simplify__simplifications_0_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i13);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___check_hlds__common__common_info_0_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i17);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___hlds__instmap__instmap_0_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i21);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i25);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i29);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i33);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i37);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i41);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i45);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i49);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i53);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i57);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i61);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(31);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i65);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i141);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(32);
	MR_succip_word = MR_sv(33);
	MR_decr_sp(33);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(33);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module127)
	MR_init_entry1(__Unify___check_hlds__simplify__var_renaming_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__simplify__var_renaming_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__simplify__var_renaming_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module128)
	MR_init_entry1(__Compare___check_hlds__simplify__var_renaming_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__simplify__var_renaming_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__simplify__var_renaming_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module129)
	MR_init_entry1(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1);
	MR_init_label1(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__name_var_4_0);

MR_BEGIN_MODULE(check_hlds__simplify_module130)
	MR_init_entry1(check_hlds__simplify__IntroducedFrom__pred__simplify_proc_return_msgs__439__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__IntroducedFrom__pred__simplify_proc_return_msgs__439__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__simplify_proc_return_msgs__439__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__IntroducedFrom__pred__simplify_proc_return_msgs__439__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(varset__name_var_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module131)
	MR_init_entry1(check_hlds__simplify__IntroducedFrom__pred__create_test_unification__3505__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__simplify__IntroducedFrom__pred__create_test_unification__3505__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__create_test_unification__3505__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__IntroducedFrom__pred__create_test_unification__3505__1_2_0)
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


MR_BEGIN_MODULE(check_hlds__simplify_module132)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0);
	MR_init_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0,3,5,10,16,190,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__simplify_may_introduce_calls__[3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("io", 2)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i3);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r2, MR_string_const("write_string", 12)) == 0);
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i5);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("*", 1)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("unchecked_rem", 13)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r2, MR_string_const("unchecked_quotient", 18)) == 0);
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("string", 6)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i10);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("++", 2)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("int_to_string", 13)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("char_to_string", 14)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r2, MR_string_const("float_to_string", 15)) == 0);
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("table_builtin", 13)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i16);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_error", 11)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_setup", 14)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_loop_setup", 16)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_io_in_range", 17)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_completion", 19)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_det_setup", 20)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_non_setup", 20)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_io_has_occurred", 21)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_semi_setup", 21)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_completion", 21)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_io_copy_io_state", 22)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_save_inputs", 22)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_gen", 23)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_int", 23)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_addr", 24)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_char", 24)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_enum", 24)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_poly", 24)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_pickup_inputs", 24)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_return_answer", 24)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_float", 25)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_loop_setup_shortcut", 25)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_mark_as_failed", 25)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_get_answer_table", 25)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_return_all_multi", 25)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_suspend_consumer", 25)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_setup_consumer", 25)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_string", 26)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_return_all_nondet", 26)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_restore_answers", 26)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_loop_mark_as_inactive", 27)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_get_answer_block", 27)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_typeinfo", 28)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_save_any_answer", 28)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_save_int_answer", 28)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_mark_as_succeeded", 28)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_create_answer_block", 28)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_return_all_shortcut", 28)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_poly_addr", 29)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_start_int", 29)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_save_char_answer", 29)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_det_setup_shortcut", 29)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_mark_as_incomplete", 29)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_save_float_answer", 30)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_create_answer_block", 30)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_semi_setup_shortcut", 30)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_create_answer_block", 30)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_restore_any_answer", 31)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_restore_int_answer", 31)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_save_string_answer", 31)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_non_get_answer_table", 31)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_foreign_enum", 32)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_restore_char_answer", 32)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_answer_is_not_duplicate", 32)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_insert_typeclassinfo", 33)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_restore_float_answer", 33)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_save_io_state_answer", 33)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_restore_string_answer", 34)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_loop_mark_as_active_and_fail", 34)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_mark_as_active_and_fail", 34)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_non_return_all_shortcut", 34)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_answer_is_not_duplicate", 34)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_io_left_bracket_unitized_goal", 35)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_return_all_answers_multi", 35)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_fill_answer_block_shortcut", 35)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_io_right_bracket_unitized_goal", 36)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_lookup_restore_io_state_answer", 36)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_loop_mark_as_inactive_and_fail", 36)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_mark_as_complete_and_fail", 36)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_return_all_answers_nondet", 36)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_consume_next_answer_multi", 36)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_consume_next_answer_nondet", 37)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_non_answer_is_not_duplicate", 38)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mm_answer_is_not_duplicate_shortcut", 41)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_mmos_answer_is_not_duplicate_shortcut", 43)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r2, MR_string_const("table_memo_non_answer_is_not_duplicate_shortcut", 47)) == 0);
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("private_builtin", 15)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("state_var_copy", 14)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin_compound_eq", 19)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i190);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin_compound_lt", 19)) == 0);
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_0);
MR_decl_entry(hlds__hlds_goal__make_const_construction_3_0);
MR_decl_entry(fn__parse_tree__set_of_var__list_to_set_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module133)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,4,11,14,15,9,21,26,3,40,44)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,45,46,47,49,50,53,54,55,56,57)
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,58,59,64,67,70,72,73,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__simplify_library_call__[3]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i3);
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_const_prop_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("bits_per_int", 12)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__int__bits_per_int_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(5) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr2;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 5);
	MR_tfield(1, MR_r2, 0) = MR_tempr3;
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
	MR_tfield(1, MR_r2, 2) = MR_tempr1;
	MR_tfield(1, MR_r2, 3) = MR_tempr2;
	MR_tfield(1, MR_r2, 4) = (MR_Word) MR_TAG_COMMON(0,1,56);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("rem_bits_per_int", 16)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(6);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("unchecked_rem", 13);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_library_call_int_arity2_8_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("quot_bits_per_int", 17)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(6);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("unchecked_quotient", 18);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_library_call_int_arity2_8_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("times_bits_per_int", 18)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(6);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("*", 1);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_library_call_int_arity2_8_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("compare", 7)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(list__reverse_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i40);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i44);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i45);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i46);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i47);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i49);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i50);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(4) = MR_r1;
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i53);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("builtin_compound_eq", 19);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(9);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i54);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i55);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i56);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("builtin_compound_lt", 19);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(9);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i57);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i58);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i59);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("comparison_result", 17);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("=", 1);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tfield(3, MR_r2, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 3) = MR_tempr2;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i64);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("<", 1);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tfield(3, MR_r2, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 3) = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i67);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const(">", 1);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tfield(3, MR_r2, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 3) = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__make_const_construction_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i70);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_sv(9);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i72);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0_i73);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_sv(2);
	MR_tfield(3, MR_r2, 4) = MR_tempr2;
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_11_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_is_higher_order_1_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_det_3_0);
MR_decl_entry(check_hlds__unify_proc__lookup_mode_num_5_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(hlds__special_pred__special_pred_is_generated_lazily_2_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module134)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,2,3,5,8,6,13,15,16,20,21)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,22,11,25,26,27,28,29,30,32,34)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,36,31,39,41,42,40,45,46,50,51)
	MR_init_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,38,53,54,55,62,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__process_compl_unify__[5]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(12) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i6);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_sv(4), 1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__type_info_locn_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_tempr2 = MR_sv(11);
	MR_sv(11) = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i51);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i16);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(11);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,10,0);
	}
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_string_const("builtin_unify_pred", 18);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(11);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(12);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(3);
	MR_r11 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i21);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_expr_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i22);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i62);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_det_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i25);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i26);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__lookup_mode_num_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i28);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 260;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i29);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 255;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i30);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i32);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i31);
	}
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i31);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i34);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i31);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__call_builtin_compound_eq_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i36);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i62);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i38);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i41);
	}
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i40);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__special_pred__special_pred_is_generated_lazily_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i42);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i38);
	}
	MR_r2 = MR_sv(9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__simplify__make_type_info_vars_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i45);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i46);
	}
	MR_r6 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i46);
	}
	MR_r6 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_r7 = MR_r3;
	MR_r3 = MR_sv(11);
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_sv(10) = MR_r6;
	MR_sv(11) = MR_r7;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i50);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.simplify", 19);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.simplify.process_compl_unify\'/10", 54);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("more than one typeinfo for one type var", 39);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i50);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i51);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i62);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__make_type_info_vars_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i53);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_tempr2 = MR_sv(11);
	MR_sv(11) = MR_r3;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__simplify__call_specific_unify_10_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i54);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_expr_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i55);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(10);
	MR_sv(11) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i62);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0_i63);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module135)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0);
	MR_init_label3(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,5,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__call_generic_unify__[5, 6]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r5;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0_i6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,10,0);
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_no_var_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(2);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_tempr1;
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_is_unreachable_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module136)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,96,4,3,5,10,14,15,11,21,23)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,24,19,28,29,25,31,35,34,33,39)
	MR_init_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,40,41,43,17,44,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__simplify_conj__[4]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i3);
	}
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i5);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i5);
	}
	MR_sv(5) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i11);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i11);
	}
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_undo_goal_updates_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i96);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(hlds__instmap__instmap_is_unreachable_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i21);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i19);
	}
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i23);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i24);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i17);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i25);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i25);
	}
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i28);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i29);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i31);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_sv(5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i35);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i34);
	}
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i33);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i43);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i40);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i41);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i43);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i44);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_update_instmap_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i45);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_6_0_i96);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__simplify_maybe_bunch_0(void)
{
	check_hlds__simplify_module0();
	check_hlds__simplify_module1();
	check_hlds__simplify_module2();
	check_hlds__simplify_module3();
	check_hlds__simplify_module4();
	check_hlds__simplify_module5();
	check_hlds__simplify_module6();
	check_hlds__simplify_module7();
	check_hlds__simplify_module8();
	check_hlds__simplify_module9();
	check_hlds__simplify_module10();
	check_hlds__simplify_module11();
	check_hlds__simplify_module12();
	check_hlds__simplify_module13();
	check_hlds__simplify_module14();
	check_hlds__simplify_module15();
	check_hlds__simplify_module16();
	check_hlds__simplify_module17();
	check_hlds__simplify_module18();
	check_hlds__simplify_module19();
	check_hlds__simplify_module20();
	check_hlds__simplify_module21();
	check_hlds__simplify_module22();
	check_hlds__simplify_module23();
	check_hlds__simplify_module24();
	check_hlds__simplify_module25();
	check_hlds__simplify_module26();
	check_hlds__simplify_module27();
	check_hlds__simplify_module28();
	check_hlds__simplify_module29();
	check_hlds__simplify_module30();
	check_hlds__simplify_module31();
	check_hlds__simplify_module32();
	check_hlds__simplify_module33();
	check_hlds__simplify_module34();
	check_hlds__simplify_module35();
	check_hlds__simplify_module36();
	check_hlds__simplify_module37();
	check_hlds__simplify_module38();
	check_hlds__simplify_module39();
}

static void mercury__check_hlds__simplify_maybe_bunch_1(void)
{
	check_hlds__simplify_module40();
	check_hlds__simplify_module41();
	check_hlds__simplify_module42();
	check_hlds__simplify_module43();
	check_hlds__simplify_module44();
	check_hlds__simplify_module45();
	check_hlds__simplify_module46();
	check_hlds__simplify_module47();
	check_hlds__simplify_module48();
	check_hlds__simplify_module49();
	check_hlds__simplify_module50();
	check_hlds__simplify_module51();
	check_hlds__simplify_module52();
	check_hlds__simplify_module53();
	check_hlds__simplify_module54();
	check_hlds__simplify_module55();
	check_hlds__simplify_module56();
	check_hlds__simplify_module57();
	check_hlds__simplify_module58();
	check_hlds__simplify_module59();
	check_hlds__simplify_module60();
	check_hlds__simplify_module61();
	check_hlds__simplify_module62();
	check_hlds__simplify_module63();
	check_hlds__simplify_module64();
	check_hlds__simplify_module65();
	check_hlds__simplify_module66();
	check_hlds__simplify_module67();
	check_hlds__simplify_module68();
	check_hlds__simplify_module69();
	check_hlds__simplify_module70();
	check_hlds__simplify_module71();
	check_hlds__simplify_module72();
	check_hlds__simplify_module73();
	check_hlds__simplify_module74();
	check_hlds__simplify_module75();
	check_hlds__simplify_module76();
	check_hlds__simplify_module77();
	check_hlds__simplify_module78();
	check_hlds__simplify_module79();
}

static void mercury__check_hlds__simplify_maybe_bunch_2(void)
{
	check_hlds__simplify_module80();
	check_hlds__simplify_module81();
	check_hlds__simplify_module82();
	check_hlds__simplify_module83();
	check_hlds__simplify_module84();
	check_hlds__simplify_module85();
	check_hlds__simplify_module86();
	check_hlds__simplify_module87();
	check_hlds__simplify_module88();
	check_hlds__simplify_module89();
	check_hlds__simplify_module90();
	check_hlds__simplify_module91();
	check_hlds__simplify_module92();
	check_hlds__simplify_module93();
	check_hlds__simplify_module94();
	check_hlds__simplify_module95();
	check_hlds__simplify_module96();
	check_hlds__simplify_module97();
	check_hlds__simplify_module98();
	check_hlds__simplify_module99();
	check_hlds__simplify_module100();
	check_hlds__simplify_module101();
	check_hlds__simplify_module102();
	check_hlds__simplify_module103();
	check_hlds__simplify_module104();
	check_hlds__simplify_module105();
	check_hlds__simplify_module106();
	check_hlds__simplify_module107();
	check_hlds__simplify_module108();
	check_hlds__simplify_module109();
	check_hlds__simplify_module110();
	check_hlds__simplify_module111();
	check_hlds__simplify_module112();
	check_hlds__simplify_module113();
	check_hlds__simplify_module114();
	check_hlds__simplify_module115();
	check_hlds__simplify_module116();
	check_hlds__simplify_module117();
	check_hlds__simplify_module118();
	check_hlds__simplify_module119();
}

static void mercury__check_hlds__simplify_maybe_bunch_3(void)
{
	check_hlds__simplify_module120();
	check_hlds__simplify_module121();
	check_hlds__simplify_module122();
	check_hlds__simplify_module123();
	check_hlds__simplify_module124();
	check_hlds__simplify_module125();
	check_hlds__simplify_module126();
	check_hlds__simplify_module127();
	check_hlds__simplify_module128();
	check_hlds__simplify_module129();
	check_hlds__simplify_module130();
	check_hlds__simplify_module131();
	check_hlds__simplify_module132();
	check_hlds__simplify_module133();
	check_hlds__simplify_module134();
	check_hlds__simplify_module135();
	check_hlds__simplify_module136();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__simplify__init(void);
void mercury__check_hlds__simplify__init_type_tables(void);
void mercury__check_hlds__simplify__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__simplify__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__simplify__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__simplify__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__simplify__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__simplify_maybe_bunch_0();
	mercury__check_hlds__simplify_maybe_bunch_1();
	mercury__check_hlds__simplify_maybe_bunch_2();
	mercury__check_hlds__simplify_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_before_after_0,
		check_hlds__simplify__before_after_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_cond_can_switch_0,
		check_hlds__simplify__cond_can_switch_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_seen_non_ground_term_0,
		check_hlds__simplify__seen_non_ground_term_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_simplification_0,
		check_hlds__simplify__simplification_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0,
		check_hlds__simplify__simplifications_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_simplify_info_0,
		check_hlds__simplify__simplify_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_var_renaming_0,
		check_hlds__simplify__var_renaming_0_0);
	mercury__check_hlds__simplify__init_debugger();
}

void mercury__check_hlds__simplify__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_before_after_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_cond_can_switch_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_seen_non_ground_term_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_simplification_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_simplify_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_var_renaming_0);
	}
}


void mercury__check_hlds__simplify__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__simplify__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__simplify);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__simplify__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__simplify__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
