/*
** Automatically generated from `simplify.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__simplify__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.simplify.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.simplify.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.simplify.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.simplify.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "check_hlds.simplify.c"
#line 44 "check_hlds.simplify.c"
#include "check_hlds.simplify.mh"

#line 47 "check_hlds.simplify.c"
#line 48 "check_hlds.simplify.c"
#ifndef CHECK_HLDS__SIMPLIFY_DECL_GUARD
#define CHECK_HLDS__SIMPLIFY_DECL_GUARD

#line 52 "check_hlds.simplify.c"
#line 53 "check_hlds.simplify.c"

#endif
#line 56 "check_hlds.simplify.c"

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
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1[2];
	MR_Word * f2[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__simplify__type_ctor_info_var_renaming_0,
	mercury_data_check_hlds__simplify__type_ctor_info_simplify_info_0,
	mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0,
	mercury_data_check_hlds__simplify__type_ctor_info_simplification_0,
	mercury_data_check_hlds__simplify__type_ctor_info_before_after_0;
MR_decl_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0, 2,3)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0, 2,3,4,7,5,11,13,14)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0, 15,16,9,19,17,21,23,24)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0, 25,26,27,29,31,32,30,34)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0, 35,38,40,41,28,42,43,44)
MR_decl_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0, 48,49)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0, 96,4,3,5,10,14,15,11)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0, 21,22,20,24,25,19,26,30)
MR_decl_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0, 29,28,34,35,36,38,17,39)
MR_decl_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0, 40)
MR_decl_label7(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0, 8,9,10,6,11,16,1)
MR_decl_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0, 3,1)
MR_decl_label8(check_hlds__simplify__call_goal_10_0, 2,3,4,6,8,9,11,12)
MR_decl_label8(check_hlds__simplify__call_goal_10_0, 13,14,16,18,19,20,5,22)
MR_decl_label8(check_hlds__simplify__call_goal_10_0, 24,26,27,28,33,35,36,37)
MR_decl_label8(check_hlds__simplify__call_goal_10_0, 38,39,40,46,47,51,45,55)
MR_decl_label8(check_hlds__simplify__call_goal_10_0, 56,58,23,62,64,66,67,63)
MR_decl_label8(check_hlds__simplify__call_goal_10_0, 69,71,72,68,74,76,77,80)
MR_decl_label8(check_hlds__simplify__call_goal_10_0, 81,82,84,85,86,87,90,89)
MR_decl_label5(check_hlds__simplify__call_goal_10_0, 94,95,96,98,75)
MR_decl_label8(check_hlds__simplify__call_specific_unify_10_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(check_hlds__simplify__call_specific_unify_10_0, 10)
MR_decl_label4(check_hlds__simplify__case_list_contains_trace_4_0, 4,5,6,3)
MR_decl_label2(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0, 5,2)
MR_decl_label4(check_hlds__simplify__contains_multisoln_goal_1_0, 3,4,5,2)
MR_decl_label8(check_hlds__simplify__create_test_unification_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__simplify__create_test_unification_6_0, 10,11,13,14,12,17,18,19)
MR_decl_label2(check_hlds__simplify__create_test_unification_6_0, 20,21)
MR_decl_label8(check_hlds__simplify__do_process_clause_body_goal_6_0, 2,3,4,5,6,9,11,12)
MR_decl_label8(check_hlds__simplify__do_process_clause_body_goal_6_0, 13,14,15,16,17,8,19,22)
MR_decl_label8(check_hlds__simplify__do_process_clause_body_goal_6_0, 24,25,26,27,28,29,30,31)
MR_decl_label8(check_hlds__simplify__do_process_clause_body_goal_6_0, 32,33,34,35,36,37,38,39)
MR_decl_label2(check_hlds__simplify__do_process_clause_body_goal_6_0, 40,20)
MR_decl_label8(check_hlds__simplify__enforce_unreachability_invariant_4_0, 2,3,4,8,10,5,6,13)
MR_decl_label3(check_hlds__simplify__enforce_unreachability_invariant_4_0, 17,18,12)
MR_decl_label8(check_hlds__simplify__excess_assigns_in_conj_5_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(check_hlds__simplify__excess_assigns_in_conj_5_0, 14,12,16,17,18,19,20,21)
MR_decl_label6(check_hlds__simplify__excess_assigns_in_conj_5_0, 22,23,24,25,26,2)
MR_decl_label7(check_hlds__simplify__extract_type_info_8_0, 2,3,4,5,6,7,8)
MR_decl_label4(check_hlds__simplify__find_excess_assigns_in_conj_9_0, 19,6,4,3)
MR_decl_label3(check_hlds__simplify__find_renamed_var_3_0, 12,3,2)
MR_decl_label8(check_hlds__simplify__find_simplifications_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__simplify__find_simplifications_3_0, 10,11,14,15,18,19,22,23)
MR_decl_label2(check_hlds__simplify__find_simplifications_3_0, 26,27)
MR_decl_label8(check_hlds__simplify__goal_contains_trace_3_0, 8,9,10,11,12,13,14,15)
MR_decl_label8(check_hlds__simplify__goal_contains_trace_3_0, 16,17,18,19,20,21,22,23)
MR_decl_label5(check_hlds__simplify__goal_contains_trace_3_0, 24,25,2,28,30)
MR_decl_label3(check_hlds__simplify__goal_is_call_to_builtin_false_1_0, 4,5,1)
MR_decl_label8(check_hlds__simplify__goal_is_excess_assign_7_0, 4,5,7,6,9,11,10,13)
MR_decl_label8(check_hlds__simplify__goal_is_excess_assign_7_0, 18,21,23,20,17,14,26,30)
MR_decl_label8(check_hlds__simplify__goal_is_excess_assign_7_0, 31,33,36,39,41,38,44,47)
MR_decl_label3(check_hlds__simplify__goal_is_excess_assign_7_0, 49,32,1)
MR_decl_label4(check_hlds__simplify__goal_list_contains_trace_4_0, 4,5,6,3)
MR_decl_label8(check_hlds__simplify__inequality_goal_10_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__simplify__inequality_goal_10_0, 10,11,14,18,16,12,23,21)
MR_decl_label8(check_hlds__simplify__inequality_goal_10_0, 27,28,29,30,31,32,33,34)
MR_decl_label1(check_hlds__simplify__inequality_goal_10_0, 36)
MR_decl_label6(check_hlds__simplify__input_args_are_equiv_5_0, 35,3,9,11,21,1)
MR_decl_label8(check_hlds__simplify__make_type_info_vars_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__simplify__make_type_info_vars_5_0, 10,11,12,13,14,15,16,17)
MR_decl_label5(check_hlds__simplify__make_type_info_vars_5_0, 18,19,20,21,22)
MR_decl_label3(check_hlds__simplify__maybe_wrap_goal_7_0, 3,4,2)
MR_decl_label5(check_hlds__simplify__nested_scopes_4_0, 2,6,7,3,4)
MR_decl_label8(check_hlds__simplify__nested_scopes_2_4_0, 85,8,5,9,11,16,13,22)
MR_decl_label1(check_hlds__simplify__nested_scopes_2_4_0, 93)
MR_decl_label8(check_hlds__simplify__simplify_disj_10_0, 66,4,5,10,11,14,16,19)
MR_decl_label8(check_hlds__simplify__simplify_disj_10_0, 20,13,21,25,28,29,22,30)
MR_decl_label6(check_hlds__simplify__simplify_disj_10_0, 7,32,33,34,3,36)
MR_decl_label8(check_hlds__simplify__simplify_goal_6_0, 2,4,6,3,7,9,11,8)
MR_decl_label8(check_hlds__simplify__simplify_goal_6_0, 12,13,14,15,16,17,18,23)
MR_decl_label8(check_hlds__simplify__simplify_goal_6_0, 22,27,26,25,29,31,37,39)
MR_decl_label8(check_hlds__simplify__simplify_goal_6_0, 42,38,36,44,34,45,30,47)
MR_decl_label8(check_hlds__simplify__simplify_goal_6_0, 49,48,51,53,54,19,20,57)
MR_decl_label8(check_hlds__simplify__simplify_goal_6_0, 60,61,62,63,66,70,69,68)
MR_decl_label8(check_hlds__simplify__simplify_goal_6_0, 72,74,73,76,78,79,80,56)
MR_decl_label8(check_hlds__simplify__simplify_goal_6_0, 83,84,89,93,92,88,96,97)
MR_decl_label4(check_hlds__simplify__simplify_goal_6_0, 98,99,100,101)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 4,8,10,5,6,14,15,16)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 17,18,19,20,21,22,23,24)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 25,12,30,28,31,26,36,34)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 44,42,46,41,48,39,54,55)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 56,57,58,61,63,59,64,71)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 72,75,76,77,66,82,85,87)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 86,92,95,91,99,102,103,105)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 107,108,109,110,113,114,115,116)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 117,118,104,121,123,124,125,122)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 127,129,131,132,126,135,138,139)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 140,141,144,143,147,149,151,153)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 154,156,157,150,137,161,162,160)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 165,164,167,169,170,171,174,175)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 173,178,177,180,179,182,183,184)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 185,186,187,189,190,192,195,196)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 197,198,201,203,204,205,200,206)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 207,210,211,212,213,209,216,224)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 220,221,227,228,229,232,234,235)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 236,237,238,230,239,240,241,242)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 243,244,245,246,247,248,249,250)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 251,218,254,255,215,257,256,259)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 260,261,262,263,264,266,267,269)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 268,272,273,274,275,276,277,278)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 279,284,286,287,295,292,299,297)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 305,306,307,308,316,324,327,328)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 326,331,330,334,335,336,337,338)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 340,341,351,352,354,355,339,356)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 357,358,359,360,361,362,363,364)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 365,322,318,544,317,311,369,368)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 309,371,372,373,376,377,378,379)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 380,383,382,381,385,374,389,393)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 390,391,399,402,396,403,405,406)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 407,409,410,411,414,413,412,416)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 387,421,422,423,424,425,426,418)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 427,428,429,430,431,432,433,434)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 435,436,437,438,439,440,441,442)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 443,444,445,446,447,451,453,457)
MR_decl_label8(check_hlds__simplify__simplify_goal_2_8_0, 449,460,465,466,459,472,473,950)
MR_decl_label1(check_hlds__simplify__simplify_info_add_error_spec_3_0, 2)
MR_decl_label6(check_hlds__simplify__simplify_info_apply_type_substitution_3_0, 2,3,4,5,6,7)
MR_decl_label2(check_hlds__simplify__simplify_info_get_pred_info_2_0, 2,3)
MR_decl_label5(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0, 2,3,4,5,6)
MR_decl_label4(check_hlds__simplify__simplify_info_init_5_0, 2,3,4,5)
MR_decl_label1(check_hlds__simplify__simplify_info_leave_lambda_2_0, 4)
MR_decl_label5(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0, 7,9,10,2,3)
MR_decl_label1(check_hlds__simplify__simplify_info_reinit_4_0, 2)
MR_decl_label1(check_hlds__simplify__simplify_info_set_module_info_3_0, 2)
MR_decl_label1(check_hlds__simplify__simplify_info_set_var_types_3_0, 2)
MR_decl_label1(check_hlds__simplify__simplify_info_update_instmap_3_0, 2)
MR_decl_label8(check_hlds__simplify__simplify_library_call_int_arity2_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__simplify__simplify_library_call_int_arity2_8_0, 10,11,12,13,14,15,16,17)
MR_decl_label6(check_hlds__simplify__simplify_library_call_int_arity2_8_0, 18,22,23,24,25,1)
MR_decl_label5(check_hlds__simplify__simplify_par_conj_7_0, 4,5,6,7,3)
MR_decl_label8(check_hlds__simplify__simplify_pred_10_0, 2,3,6,4,9,10,11,12)
MR_decl_label3(check_hlds__simplify__simplify_pred_10_0, 13,14,15)
MR_decl_label1(check_hlds__simplify__simplify_proc_9_0, 2)
MR_decl_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0, 2,3,5,4,6,7,8,9)
MR_decl_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0, 10,11,12,14,17,16,19,13)
MR_decl_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0, 21,22,25,27,28,29,30,23)
MR_decl_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0, 31,32,33,34,35,36,37,38)
MR_decl_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0, 39,40,41,42,43,48,47,45)
MR_decl_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0, 56,61,63,59,66,68,54,71)
MR_decl_label2(check_hlds__simplify__simplify_proc_return_msgs_10_0, 72,74)
MR_decl_label8(check_hlds__simplify__simplify_process_clause_body_goal_6_0, 2,3,9,7,11,6,13,14)
MR_decl_label6(check_hlds__simplify__simplify_process_clause_body_goal_6_0, 15,5,17,18,20,21)
MR_decl_label8(check_hlds__simplify__simplify_procs_11_0, 32,4,5,6,7,9,10,8)
MR_decl_label7(check_hlds__simplify__simplify_procs_11_0, 11,13,14,15,16,17,3)
MR_decl_label8(check_hlds__simplify__simplify_switch_13_0, 36,4,5,6,7,8,9,10)
MR_decl_label8(check_hlds__simplify__simplify_switch_13_0, 11,12,15,16,17,18,19,20)
MR_decl_label2(check_hlds__simplify__simplify_switch_13_0, 3,22)
MR_decl_label3(check_hlds__simplify__type_info_locn_6_0, 2,4,5)
MR_decl_label8(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0, 14,15,32,34,33,20,21,22)
MR_decl_label8(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0, 23,24,25,26,27,29,18,7)
MR_decl_label5(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0, 8,9,11,4,5)
MR_decl_label8(fn__check_hlds__simplify__list_to_simplifications_1_0, 3,2,5,7,6,9,11,10)
MR_decl_label8(fn__check_hlds__simplify__list_to_simplifications_1_0, 13,15,14,17,19,18,21,23)
MR_decl_label8(fn__check_hlds__simplify__list_to_simplifications_1_0, 22,25,27,26,29,31,30,33)
MR_decl_label8(fn__check_hlds__simplify__list_to_simplifications_1_0, 35,34,37,39,38,41,43,42)
MR_decl_label6(fn__check_hlds__simplify__list_to_simplifications_1_0, 45,47,46,49,51,50)
MR_decl_label8(fn__check_hlds__simplify__simplifications_to_list_1_0, 2,4,5,7,8,10,11,13)
MR_decl_label8(fn__check_hlds__simplify__simplifications_to_list_1_0, 14,16,17,19,20,22,23,25)
MR_decl_label8(fn__check_hlds__simplify__simplifications_to_list_1_0, 26,28,29,31,32,34,35,37)
MR_decl_label8(fn__check_hlds__simplify__simplifications_to_list_1_0, 38,41,42,43,44,45,46,47)
MR_decl_label4(fn__check_hlds__simplify__simplifications_to_list_1_0, 48,49,50,51)
MR_decl_label8(fn__check_hlds__simplify__will_flush_2_0, 4,8,9,14,18,20,15,44)
MR_decl_label8(fn__check_hlds__simplify__will_flush_2_0, 23,24,27,30,36,55,39,89)
MR_decl_label2(__Unify___check_hlds__simplify__simplifications_0_0, 4,1)
MR_decl_label8(__Unify___check_hlds__simplify__simplify_info_0_0, 4,6,8,10,12,14,16,18)
MR_decl_label2(__Unify___check_hlds__simplify__simplify_info_0_0, 20,1)
MR_decl_label1(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1, 1)
MR_decl_label8(__Compare___check_hlds__simplify__simplifications_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label7(__Compare___check_hlds__simplify__simplifications_0_0, 29,33,37,41,45,49,109)
MR_decl_label8(__Compare___check_hlds__simplify__simplify_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label8(__Compare___check_hlds__simplify__simplify_info_0_0, 29,33,37,41,45,49,53,57)
MR_decl_label4(__Compare___check_hlds__simplify__simplify_info_0_0, 61,65,69,149)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_simplifications_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_common_struct_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_warn_simple_code_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_elim_removable_scopes_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_set_rerun_det_2_0)
MR_decl_static(check_hlds__simplify__enforce_unreachability_invariant_4_0)
MR_decl_static(check_hlds__simplify__goal_is_call_to_builtin_false_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_once_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_after_front_end_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_const_prop_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_det_info_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_module_info_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0)
MR_decl_static(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_instmap_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_var_types_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_var_types_3_0)
MR_decl_static(check_hlds__simplify__inequality_goal_10_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_warn_obsolete_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_varset_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_varset_3_0)
MR_decl_static(check_hlds__simplify__simplify_library_call_int_arity2_8_0)
MR_decl_static(check_hlds__simplify__input_args_are_equiv_5_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_common_info_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_set_requantify_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_error_specs_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_do_add_error_spec_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_add_error_spec_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_inside_lambda_1_0)
MR_decl_static(check_hlds__simplify__call_goal_10_0)
MR_decl_static(check_hlds__simplify__call_specific_unify_10_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_module_info_3_0)
MR_decl_static(check_hlds__simplify__make_type_info_vars_5_0)
MR_decl_static(check_hlds__simplify__extract_type_info_8_0)
MR_decl_static(check_hlds__simplify__type_info_locn_6_0)
MR_decl_static(fn__check_hlds__simplify__this_file_0_0)
MR_decl_static(check_hlds__simplify__nested_scopes_2_4_0)
MR_decl_static(check_hlds__simplify__nested_scopes_4_0)
MR_decl_static(check_hlds__simplify__maybe_wrap_goal_7_0)
MR_decl_static(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_update_instmap_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_set_common_info_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_instmap_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_undo_goal_updates_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_excess_assign_1_0)
MR_decl_static(check_hlds__simplify__find_renamed_var_3_0)
MR_decl_static(check_hlds__simplify__goal_is_excess_assign_7_0)
MR_decl_static(check_hlds__simplify__find_excess_assigns_in_conj_9_0)
MR_decl_static(check_hlds__simplify__renaming_transitive_closure_2_0)
MR_decl_static(check_hlds__simplify__excess_assigns_in_conj_5_0)
MR_decl_static(check_hlds__simplify__simplify_info_post_branch_update_3_0)
MR_decl_static(check_hlds__simplify__create_test_unification_6_0)
MR_decl_static(check_hlds__simplify__contains_multisoln_goal_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_incr_cost_delta_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_format_calls_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_has_parallel_conj_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_has_user_event_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_enter_lambda_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_leave_lambda_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_found_contains_trace_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_extra_common_struct_1_0)
MR_decl_static(fn__check_hlds__simplify__will_flush_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0)
MR_decl_static(check_hlds__simplify__simplify_goal_6_0)
MR_decl_static(check_hlds__simplify__simplify_goal_2_8_0)
MR_decl_static(check_hlds__simplify__simplify_par_conj_7_0)
MR_decl_static(check_hlds__simplify__simplify_switch_13_0)
MR_decl_static(check_hlds__simplify__simplify_disj_10_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_requantify_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_rerun_det_1_0)
MR_decl_static(check_hlds__simplify__do_process_clause_body_goal_6_0)
MR_decl_static(check_hlds__simplify__goal_contains_trace_3_0)
MR_decl_static(check_hlds__simplify__goal_list_contains_trace_4_0)
MR_decl_static(check_hlds__simplify__case_list_contains_trace_4_0)
MR_decl_static(check_hlds__simplify__simplify_info_reinit_4_0)
MR_decl_static(check_hlds__simplify__simplify_info_get_found_contains_trace_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_set_simplifications_3_0)
MR_def_extern_entry(check_hlds__simplify__simplify_process_clause_body_goal_6_0)
MR_decl_static(fn__check_hlds__simplify__turn_off_common_struct_threshold_0_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_init_5_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_pred_info_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_get_has_parallel_conj_2_0)
MR_decl_static(check_hlds__simplify__simplify_info_get_has_user_event_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_proc_return_msgs_10_0)
MR_decl_static(check_hlds__simplify__simplify_procs_11_0)
MR_def_extern_entry(check_hlds__simplify__simplify_pred_10_0)
MR_def_extern_entry(check_hlds__simplify__simplify_proc_9_0)
MR_def_extern_entry(check_hlds__simplify__simplify_may_introduce_calls_3_0)
MR_def_extern_entry(check_hlds__simplify__find_simplifications_3_0)
MR_def_extern_entry(fn__check_hlds__simplify__simplifications_to_list_1_0)
MR_def_extern_entry(fn__check_hlds__simplify__list_to_simplifications_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_warn_known_bad_format_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_do_warn_unknown_format_1_0)
MR_decl_static(fn__check_hlds__simplify__make_arg_always_boxed_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_recompute_atomic_1_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_get_cost_delta_2_0)
MR_def_extern_entry(check_hlds__simplify__simplify_info_apply_type_substitution_3_0)
MR_decl_static(__Unify___check_hlds__simplify__before_after_0_0)
MR_decl_static(__Compare___check_hlds__simplify__before_after_0_0)
MR_def_extern_entry(__Unify___check_hlds__simplify__simplification_0_0)
MR_def_extern_entry(__Compare___check_hlds__simplify__simplification_0_0)
MR_def_extern_entry(__Unify___check_hlds__simplify__simplifications_0_0)
MR_def_extern_entry(__Compare___check_hlds__simplify__simplifications_0_0)
MR_def_extern_entry(__Unify___check_hlds__simplify__simplify_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__simplify__simplify_info_0_0)
MR_decl_static(__Unify___check_hlds__simplify__var_renaming_0_0)
MR_decl_static(__Compare___check_hlds__simplify__var_renaming_0_0)
MR_decl_static(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1)
MR_decl_static(check_hlds__simplify__IntroducedFrom__pred__simplify_proc_return_msgs__408__1_4_0)
MR_decl_static(check_hlds__simplify__IntroducedFrom__pred__renaming_transitive_closure__2609__1_4_0)
MR_decl_static(check_hlds__simplify__IntroducedFrom__pred__create_test_unification__2691__1_2_0)
MR_decl_static(check_hlds__simplify__IntroducedFrom__pred__simplify_info_apply_type_substitution__3232__1_4_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_110_97_109_105_110_103_95_116_114_97_110_115_105_116_105_118_101_95_99_108_111_115_117_114_101_95_95_50_54_48_57_95_95_49_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_110_102_111_95_97_112_112_108_121_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_51_50_51_50_95_95_49_95_95_91_50_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_0 mercury_common_0[56] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_TAG_COMMON(3,2,0),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,3,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,1),
MR_TAG_COMMON(1,0,2)
}
},
{
{
MR_TAG_COMMON(3,3,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,2),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_TAG_COMMON(3,3,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,6),
MR_TAG_COMMON(1,0,7)
}
},
{
{
MR_TAG_COMMON(3,3,5),
MR_TAG_COMMON(1,0,8)
}
},
{
{
MR_TAG_COMMON(3,3,4),
MR_TAG_COMMON(1,0,9)
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
MR_TAG_COMMON(0,6,0),
MR_TAG_COMMON(1,0,11)
}
},
{
{
MR_TAG_COMMON(1,1,1),
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_TAG_COMMON(3,3,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,11),
MR_TAG_COMMON(1,0,18)
}
},
{
{
MR_TAG_COMMON(3,3,10),
MR_TAG_COMMON(1,0,19)
}
},
{
{
MR_TAG_COMMON(3,3,9),
MR_TAG_COMMON(1,0,20)
}
},
{
{
MR_TAG_COMMON(2,6,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,6,2),
MR_TAG_COMMON(1,0,22)
}
},
{
{
MR_TAG_COMMON(1,1,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,6,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,1,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,14),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,6,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,1,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,16),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,15),
MR_TAG_COMMON(1,0,31)
}
},
{
{
MR_TAG_COMMON(0,6,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,1,5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,17),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,15),
MR_TAG_COMMON(1,0,35)
}
},
{
{
MR_TAG_COMMON(0,6,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,1,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,19),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,18),
MR_TAG_COMMON(1,0,39)
}
},
{
{
MR_TAG_COMMON(0,6,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,1,7),
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
MR_TAG_COMMON(3,3,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,22),
MR_TAG_COMMON(1,0,45)
}
},
{
{
MR_TAG_COMMON(3,3,21),
MR_TAG_COMMON(1,0,46)
}
},
{
{
MR_TAG_COMMON(3,3,20),
MR_TAG_COMMON(1,0,47)
}
},
{
{
MR_TAG_COMMON(0,6,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,25),
MR_TAG_COMMON(1,0,45)
}
},
{
{
MR_TAG_COMMON(3,3,21),
MR_TAG_COMMON(1,0,50)
}
},
{
{
MR_TAG_COMMON(3,3,24),
MR_TAG_COMMON(1,0,51)
}
},
{
{
MR_TAG_COMMON(0,6,10),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,2,2),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_1 mercury_common_1[8] =
{
{
1,
1,
MR_tbmkword(0, 0)
},
{
16,
1,
MR_TAG_COMMON(1,0,12)
},
{
16,
1,
MR_TAG_COMMON(1,0,23)
},
{
16,
1,
MR_TAG_COMMON(1,0,26)
},
{
16,
1,
MR_TAG_COMMON(1,0,29)
},
{
16,
1,
MR_TAG_COMMON(1,0,33)
},
{
16,
1,
MR_TAG_COMMON(1,0,37)
},
{
16,
1,
MR_TAG_COMMON(1,0,41)
},
};

static const struct mercury_type_2 mercury_common_2[3] =
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

static const struct mercury_type_3 mercury_common_3[26] =
{
{
3,
MR_string_const("Warning: call to obsolete", 25)
},
{
2,
MR_string_const(".", 1)
},
{
3,
MR_string_const("Warning: recursive call will lead to", 36)
},
{
3,
MR_string_const("infinite recursion.", 19)
},
{
3,
MR_string_const("If this recursive call is executed,", 35)
},
{
3,
MR_string_const("the procedure will call itself", 30)
},
{
3,
MR_string_const("with exactly the same input arguments,", 38)
},
{
3,
MR_string_const("leading to infinite recursion.", 30)
},
{
3,
MR_string_const("Warning: this goal cannot succeed.", 34)
},
{
3,
MR_string_const("The compiler will optimize away this goal,", 42)
},
{
3,
MR_string_const("replacing it with \140fail\'.", 25)
},
{
3,
MR_string_const("To disable this optimization, use", 33)
},
{
3,
MR_string_const("the \140--fully-strict\' option.", 28)
},
{
3,
MR_string_const("Warning: the negated goal cannot fail.", 38)
},
{
3,
MR_string_const("Warning: the negated goal cannot succeed.", 41)
},
{
3,
MR_string_const("Warning: the condition of this if-then-else", 43)
},
{
3,
MR_string_const("cannot fail.", 12)
},
{
3,
MR_string_const("cannot succeed.", 15)
},
{
3,
MR_string_const("Warning: this disjunct", 22)
},
{
3,
MR_string_const("will never have any solutions.", 30)
},
{
3,
MR_string_const("Error: the \140may_duplicate\' attribute", 36)
},
{
3,
MR_string_const("on the foreign_proc", 19)
},
{
3,
MR_string_const("contradicts the \140no_inline\' pragma", 34)
},
{
3,
MR_string_const("on the predicate.", 17)
},
{
3,
MR_string_const("Error: the \140may_not_duplicate\' attribute", 40)
},
{
3,
MR_string_const("contradicts the \140inline\' pragma", 31)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
16,
1
},
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
0
},
{
1
},
};

static const struct mercury_type_6 mercury_common_6[11] =
{
{
MR_TAG_COMMON(1,0,6)
},
{
MR_TAG_COMMON(1,0,10)
},
{
MR_TAG_COMMON(1,0,17)
},
{
MR_TAG_COMMON(1,0,21)
},
{
MR_TAG_COMMON(1,0,25)
},
{
MR_TAG_COMMON(1,0,28)
},
{
MR_TAG_COMMON(1,0,32)
},
{
MR_TAG_COMMON(1,0,36)
},
{
MR_TAG_COMMON(1,0,40)
},
{
MR_TAG_COMMON(1,0,48)
},
{
MR_TAG_COMMON(1,0,52)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_7 mercury_common_7[3] =
{
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
MR_COMMON(0,14),
MR_COMMON(0,14)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,54),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const struct mercury_type_8 mercury_common_8[3] =
{
{
{
1,
1
}
},
{
{
0,
0
}
},
{
{
0,
1
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__renaming_transitive_closure_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_proc_return_msgs_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_info_apply_type_substitution_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_9 mercury_common_9[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__renaming_transitive_closure_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(7,1),
MR_COMMON(0,15),
MR_COMMON(0,15),
MR_COMMON(0,15)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_proc_return_msgs_10_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,15),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,44),
MR_COMMON(0,44)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_info_apply_type_substitution_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(7,2),
MR_COMMON(0,15),
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
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_4;
static const struct mercury_type_10 mercury_common_10[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__create_test_unification_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,15)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,15)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_11 mercury_common_11[6] =
{
{
MR_COMMON(10,0),
MR_ENTRY_AP(check_hlds__simplify__IntroducedFrom__pred__create_test_unification__2691__1_2_0),
0
},
{
MR_COMMON(10,1),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(10,2),
MR_ENTRY_AP(fn__check_hlds__simplify__make_arg_always_boxed_1_0),
0
},
{
MR_COMMON(10,3),
MR_ENTRY_AP(fn__check_hlds__simplify__make_arg_always_boxed_1_0),
0
},
{
MR_COMMON(10,4),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(9,1),
MR_ENTRY_AP(check_hlds__simplify__IntroducedFrom__pred__simplify_proc_return_msgs__408__1_4_0),
0
},
};

static const struct mercury_type_12 mercury_common_12[13] =
{
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
{
12,
MR_tbmkword(0, 0)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_var_renaming_0 = {
	0,
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_util__type_ctor_info_det_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__common__type_ctor_info_common_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__instmap__type_ctor_info_instmap_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
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
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_check_hlds__simplify__field_names_simplify_info_0_0[] = {
	"det_info",
	"error_specs",
	"simplifications",
	"common_info",
	"instmap",
	"varset",
	"inst_varset",
	"requantify",
	"recompute_atomic",
	"rerun_det",
	"cost_delta",
	"lambdas",
	"rtti_varmaps",
	"format_calls",
	"inside_dupl_for_switch",
	"has_parallel_conj",
	"found_contains_trace",
	"has_user_event"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__simplify__du_functor_desc_simplify_info_0_0 = {
	"simplify_info",
	18,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__simplify__field_types_simplify_info_0_0,
	mercury_data_check_hlds__simplify__field_names_simplify_info_0_0,
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
	13,
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
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_check_hlds__simplify__field_names_simplifications_0_0[] = {
	"do_warn_simple_code",
	"do_warn_duplicate_calls",
	"do_warn_known_bad_format",
	"do_warn_unknown_format",
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

static const MR_DuFunctorDesc mercury_data_check_hlds__simplify__du_functor_desc_simplifications_0_0 = {
	"simplifications",
	13,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__simplify__field_types_simplifications_0_0,
	mercury_data_check_hlds__simplify__field_names_simplifications_0_0,
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
	13,
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

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_0 = {
	"simp_warn_simple_code",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_1 = {
	"simp_warn_duplicate_calls",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_2 = {
	"simp_warn_known_bad_format",
	2
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_3 = {
	"simp_warn_unknown_format",
	3
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_4 = {
	"simp_warn_obsolete",
	4
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_5 = {
	"simp_do_once",
	5
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_6 = {
	"simp_after_front_end",
	6
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_7 = {
	"simp_excess_assigns",
	7
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_8 = {
	"simp_elim_removable_scopes",
	8
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_9 = {
	"simp_opt_duplicate_calls",
	9
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_10 = {
	"simp_constant_prop",
	10
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_11 = {
	"simp_common_struct",
	11
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_12 = {
	"simp_extra_common_struct",
	12
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
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_11,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_12
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__simplify__enum_name_ordered_simplification_0[] = {
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_6,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_11,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_10,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_5,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_8,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_7,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_12,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_9,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_1,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_2,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_4,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_0,
	&mercury_data_check_hlds__simplify__enum_functor_desc_simplification_0_3
};

const MR_Integer mercury_data_check_hlds__simplify__functor_number_map_simplification_0[] = {
	11,
	8,
	9,
	12,
	10,
	3,
	0,
	5,
	4,
	7,
	2,
	1,
	6 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__simplify__type_ctor_info_simplification_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__simplify__simplification_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__simplify__simplification_0_0)),
	"check_hlds.simplify",
	"simplification",
	{ (void *)mercury_data_check_hlds__simplify__enum_name_ordered_simplification_0 },
	{ (void *)mercury_data_check_hlds__simplify__enum_value_ordered_simplification_0 },
	13,
	4,
	mercury_data_check_hlds__simplify__functor_number_map_simplification_0
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
	13,
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

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__renaming_transitive_closure_2_0_1 = {
{
MR_PREDICATE,
"check_hlds.simplify",
"check_hlds.simplify",
"lambda_simplify_m_2609",
4,
0
},
"check_hlds.simplify",
"simplify.m",
2607,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__create_test_unification_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.simplify",
"check_hlds.simplify",
"lambda_simplify_m_2691",
2,
0
},
"check_hlds.simplify",
"simplify.m",
2691,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_1 = {
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
1596,
"d10;c10;?;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_2 = {
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
1611,
"d10;c10;e;c2;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_3 = {
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
1612,
"d10;c10;e;c2;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_goal_2_8_0_4 = {
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
1621,
"d10;c10;e;c3;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_proc_return_msgs_10_0_1 = {
{
MR_PREDICATE,
"check_hlds.simplify",
"check_hlds.simplify",
"lambda_simplify_m_408",
4,
0
},
"check_hlds.simplify",
"simplify.m",
408,
"d1;c23;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__simplify__simplify_info_apply_type_substitution_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.simplify",
"check_hlds.simplify",
"lambda_simplify_m_3232",
4,
0
},
"check_hlds.simplify",
"simplify.m",
3231,
"d1;c6;"
};


MR_BEGIN_MODULE(check_hlds__simplify_module0)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_simplifications_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_simplifications_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module1)
	MR_init_entry1(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 9);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module2)
	MR_init_entry1(check_hlds__simplify__simplify_do_common_struct_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_common_struct_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 11);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module3)
	MR_init_entry1(check_hlds__simplify__simplify_do_warn_simple_code_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_warn_simple_code_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 0);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module4)
	MR_init_entry1(check_hlds__simplify__simplify_do_elim_removable_scopes_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_elim_removable_scopes_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 8);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module5)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_rerun_det_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_set_rerun_det_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_r1, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_r1, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_r1, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_r1, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_r1, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_r1, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_r1, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_r1, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_instmap_delta_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_unreachable_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_unreachable_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_1);
MR_decl_entry(hlds__hlds_goal__goal_info_set_determinism_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module6)
	MR_init_entry1(check_hlds__simplify__enforce_unreachability_invariant_4_0);
	MR_init_label8(check_hlds__simplify__enforce_unreachability_invariant_4_0,2,3,4,8,10,5,6,13)
	MR_init_label3(check_hlds__simplify__enforce_unreachability_invariant_4_0,17,18,12)
MR_BEGIN_CODE

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
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i2);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i3);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
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
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i18);
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
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i13);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__enforce_unreachability_invariant_4_0_i12);
	}
	if (MR_INT_EQ(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__simplify__enforce_unreachability_invariant_4_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i17);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__simplify__enforce_unreachability_invariant_4_0_i18);
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__simplify__enforce_unreachability_invariant_4_0,12)
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
	MR_init_label3(check_hlds__simplify__goal_is_call_to_builtin_false_1_0,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__goal_is_call_to_builtin_false_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_call_to_builtin_false_1_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_tempr1, 5);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_call_to_builtin_false_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__goal_is_call_to_builtin_false_1_0_i4);
MR_def_label(check_hlds__simplify__goal_is_call_to_builtin_false_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__simplify__goal_is_call_to_builtin_false_1_0_i5);
MR_def_label(check_hlds__simplify__goal_is_call_to_builtin_false_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_call_to_builtin_false_1_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("false", 5)) == 0);
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
	MR_init_entry1(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 1);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module9)
	MR_init_entry1(check_hlds__simplify__simplify_do_once_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_once_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 5);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module10)
	MR_init_entry1(check_hlds__simplify__simplify_do_after_front_end_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_after_front_end_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 6);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module11)
	MR_init_entry1(check_hlds__simplify__simplify_do_const_prop_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_const_prop_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 10);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module12)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_det_info_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_det_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_get_module_info_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module13)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_module_info_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_module_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(check_hlds__det_util__det_info_get_module_info_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_get_pred_id_2_0);
MR_decl_entry(check_hlds__det_util__det_info_get_proc_id_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_proc_info_4_0);

MR_BEGIN_MODULE(check_hlds__simplify_module14)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0);
	MR_init_label5(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_pred_proc_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__simplify_info_get_pred_proc_info_3_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__simplify_info_get_pred_proc_info_3_0_i3);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		check_hlds__simplify__simplify_info_get_pred_proc_info_3_0_i4);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__simplify_info_get_pred_proc_info_3_0_i5);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		check_hlds__simplify__simplify_info_get_pred_proc_info_3_0_i6);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_proc_info_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(libs__globals__get_trace_level_2_0);
MR_decl_entry(fn__libs__trace_params__eff_trace_level_4_0);
MR_decl_entry(fn__libs__trace_params__at_least_at_shallow_1_0);
MR_decl_entry(fn__libs__trace_params__at_least_at_deep_1_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(fn__bool__or_2_0);
MR_decl_entry(fn__bool__and_2_0);
MR_decl_entry(fn__bool__not_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module15)
	MR_init_entry1(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0);
	MR_init_label8(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,14,15,32,34,33,20,21,22)
	MR_init_label8(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,23,24,25,26,27,29,18,7)
	MR_init_label5(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,8,9,11,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i14);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i15);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i18);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i20);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 100;
	}
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i32);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i34);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(2, MR_r3, 0);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i21);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i22);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i23);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i24);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i25);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_4_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i26);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__libs__trace_params__eff_trace_level_4_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i27);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i29);
	}
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__libs__trace_params__at_least_at_shallow_1_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__libs__trace_params__at_least_at_deep_1_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 151;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_r1, 0);
	MR_sv(3) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_np_localcall_lab(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i8);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i9);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i11);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__bool__or_2_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__bool__and_2_0);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,
		fn__check_hlds__simplify__evaluate_compile_time_condition_2_0_i5);
MR_def_label(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__bool__not_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module16)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_instmap_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_instmap_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_get_vartypes_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module17)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_var_types_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_var_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(check_hlds__det_util__det_info_get_vartypes_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_set_vartypes_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module18)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_var_types_3_0);
	MR_init_label1(check_hlds__simplify__simplify_info_set_var_types_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_var_types_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_set_vartypes_3_0,
		check_hlds__simplify__simplify_info_set_var_types_3_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_set_var_types_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__new_var_3_0);
MR_decl_entry(fn__parse_tree__prog_type__comparison_result_type_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(hlds__instmap__lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_unique_2_0);
MR_decl_entry(hlds__goal_util__generate_simple_call_12_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_nonlocals_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module19)
	MR_init_entry1(check_hlds__simplify__inequality_goal_10_0);
	MR_init_label8(check_hlds__simplify__inequality_goal_10_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__simplify__inequality_goal_10_0,10,11,14,18,16,12,23,21)
	MR_init_label8(check_hlds__simplify__inequality_goal_10_0,27,28,29,30,31,32,33,34)
	MR_init_label1(check_hlds__simplify__inequality_goal_10_0,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__inequality_goal_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_sv(8) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr2, 5);
	}
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__simplify__inequality_goal_10_0_i2);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r2;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__inequality_goal_10_0_i3);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__comparison_result_type_0_0,
		check_hlds__simplify__inequality_goal_10_0_i4);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_108_101_109_32_58_61_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__inequality_goal_10_0_i5);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__inequality_goal_10_0_i6);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__inequality_goal_10_0_i7);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__inequality_goal_10_0_i8);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__simplify__inequality_goal_10_0_i9);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__simplify__inequality_goal_10_0_i10);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__inequality_goal_10_0_i11);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_unique_2_0,
		check_hlds__simplify__inequality_goal_10_0_i14);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__inequality_goal_10_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_unique_2_0,
		check_hlds__simplify__inequality_goal_10_0_i18);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__inequality_goal_10_0_i16);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(8);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,1,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Integer) 1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,1,0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__inequality_goal_10_0_i27);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(8);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Integer) 2;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,1,0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__inequality_goal_10_0_i27);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(7);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_unique_2_0,
		check_hlds__simplify__inequality_goal_10_0_i23);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__inequality_goal_10_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(8);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,1,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Integer) 3;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,1,0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__inequality_goal_10_0_i27);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_sv(7);
	MR_r1 = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(11) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Integer) 0;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,1,0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__inequality_goal_10_0_i27);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_sv(4);
	MR_r11 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("compare", 7);
	MR_r3 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(9);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_sv(3);
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		check_hlds__simplify__inequality_goal_10_0_i28);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__inequality_goal_10_0_i29);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__simplify__inequality_goal_10_0_i30);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__simplify__inequality_goal_10_0_i31);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr4, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 6);
	MR_tempr8 = MR_sv(8);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr6, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr6, 4) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr6, 5) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr7, 1) = MR_tempr4;
	MR_tfield(0, MR_tempr7, 2) = MR_tempr5;
	MR_tfield(0, MR_tempr7, 3) = MR_tempr6;
	MR_tfield(0, MR_tempr7, 4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__inequality_goal_10_0_i32);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(14);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__simplify__inequality_goal_10_0_i33);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__simplify__inequality_goal_10_0_i34);
MR_def_label(check_hlds__simplify__inequality_goal_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(check_hlds__simplify__inequality_goal_10_0_i36);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_tempr3;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(12);
	MR_decr_sp_and_return(15);
	}
MR_def_label(check_hlds__simplify__inequality_goal_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(12);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module20)
	MR_init_entry1(check_hlds__simplify__simplify_do_warn_obsolete_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_warn_obsolete_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 4);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module21)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_varset_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_varset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module22)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_varset_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_varset_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__int_type_0_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(fn__int__bits_per_int_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__ground_inst_0_0);
MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_from_assoc_list_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_search_func_sym_arity_5_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_1);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module23)
	MR_init_entry1(check_hlds__simplify__simplify_library_call_int_arity2_8_0);
	MR_init_label8(check_hlds__simplify__simplify_library_call_int_arity2_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__simplify__simplify_library_call_int_arity2_8_0,10,11,12,13,14,15,16,17)
	MR_init_label6(check_hlds__simplify__simplify_library_call_int_arity2_8_0,18,22,23,24,25,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_library_call_int_arity2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(8) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i2);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i3);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__new_var_3_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i4);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__int_type_0_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i5);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i6);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i7);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i8);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__int__bits_per_int_0_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i9);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_sv(4) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_sv(6) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,2);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i10);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,10)
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
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i11);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__ground_inst_0_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i12);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_assoc_list_2_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i13);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i14);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i15);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i16);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i17);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_func_sym_arity_5_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i18);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_library_call_int_arity2_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_library_call_int_arity2_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_library_call_int_arity2_8_0_i1);
	}
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_1,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i22);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = MR_r1;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 3) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr3, 5) = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i23);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i24);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__simplify__simplify_library_call_int_arity2_8_0_i25);
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(9);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__simplify__simplify_library_call_int_arity2_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
MR_decl_entry(check_hlds__common__common_vars_are_equivalent_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module24)
	MR_init_entry1(check_hlds__simplify__input_args_are_equiv_5_0);
	MR_init_label6(check_hlds__simplify__input_args_are_equiv_5_0,35,3,9,11,21,1)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r4;
	MR_tempr3 = MR_r5;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 0);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
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


MR_BEGIN_MODULE(check_hlds__simplify_module25)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_common_info_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_common_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module26)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_requantify_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_set_requantify_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_r1, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_r1, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_r1, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_r1, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_r1, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_r1, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_r1, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_r1, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module27)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_error_specs_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_error_specs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module28)
	MR_init_entry1(check_hlds__simplify__simplify_info_do_add_error_spec_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_do_add_error_spec_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_r1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_r1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_r1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_r1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_r1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_r1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_r1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_r1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_r1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_r1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module29)
	MR_init_entry1(check_hlds__simplify__simplify_info_add_error_spec_3_0);
	MR_init_label1(check_hlds__simplify__simplify_info_add_error_spec_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_add_error_spec_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 2), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_info_add_error_spec_3_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_r1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_r1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_r1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_r1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_r1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_r1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_r1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_r1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_r1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_r1, 17) = MR_ctfield(0, MR_tempr2, 17);
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


MR_BEGIN_MODULE(check_hlds__simplify_module30)
	MR_init_entry1(check_hlds__simplify__simplify_info_inside_lambda_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_inside_lambda_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 11);
	MR_r1 = ((MR_Integer) MR_tempr1 > (MR_Integer) 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(check_hlds__mode_util__mode_is_fully_input_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_eval_method_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_purity_2_0);
MR_decl_entry(check_hlds__common__common_optimise_call_8_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(mdbcomp__prim_data__is_std_lib_module_name_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(transform_hlds__const_prop__evaluate_call_10_0);

MR_BEGIN_MODULE(check_hlds__simplify_module31)
	MR_init_entry1(check_hlds__simplify__call_goal_10_0);
	MR_init_label8(check_hlds__simplify__call_goal_10_0,2,3,4,6,8,9,11,12)
	MR_init_label8(check_hlds__simplify__call_goal_10_0,13,14,16,18,19,20,5,22)
	MR_init_label8(check_hlds__simplify__call_goal_10_0,24,26,27,28,33,35,36,37)
	MR_init_label8(check_hlds__simplify__call_goal_10_0,38,39,40,46,47,51,45,55)
	MR_init_label8(check_hlds__simplify__call_goal_10_0,56,58,23,62,64,66,67,63)
	MR_init_label8(check_hlds__simplify__call_goal_10_0,69,71,72,68,74,76,77,80)
	MR_init_label8(check_hlds__simplify__call_goal_10_0,81,82,84,85,86,87,90,89)
	MR_init_label5(check_hlds__simplify__call_goal_10_0,94,95,96,98,75)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__call_goal_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(10) = MR_r5;
	MR_sv(11) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__call_goal_10_0_i2);
MR_def_label(check_hlds__simplify__call_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__simplify__call_goal_10_0_i3);
MR_def_label(check_hlds__simplify__call_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__call_goal_10_0_i4);
MR_def_label(check_hlds__simplify__call_goal_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_obsolete_1_0,
		check_hlds__simplify__call_goal_10_0_i6);
MR_def_label(check_hlds__simplify__call_goal_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__simplify__call_goal_10_0_i8);
MR_def_label(check_hlds__simplify__call_goal_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__call_goal_10_0_i9);
MR_def_label(check_hlds__simplify__call_goal_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i5);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__call_goal_10_0_i11);
MR_def_label(check_hlds__simplify__call_goal_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__call_goal_10_0_i12);
MR_def_label(check_hlds__simplify__call_goal_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) == MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i5);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__call_goal_10_0_i13);
MR_def_label(check_hlds__simplify__call_goal_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__simplify__call_goal_10_0_i14);
MR_def_label(check_hlds__simplify__call_goal_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__call_goal_10_0_i16);
MR_def_label(check_hlds__simplify__call_goal_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i5);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		check_hlds__simplify__call_goal_10_0_i18);
MR_def_label(check_hlds__simplify__call_goal_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__call_goal_10_0_i19);
MR_def_label(check_hlds__simplify__call_goal_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__call_goal_10_0_i20);
MR_def_label(check_hlds__simplify__call_goal_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__call_goal_10_0_i22);
MR_def_label(check_hlds__simplify__call_goal_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
MR_def_label(check_hlds__simplify__call_goal_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_simple_code_1_0,
		check_hlds__simplify__call_goal_10_0_i24);
MR_def_label(check_hlds__simplify__call_goal_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i23);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__call_goal_10_0_i26);
MR_def_label(check_hlds__simplify__call_goal_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__call_goal_10_0_i27);
MR_def_label(check_hlds__simplify__call_goal_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i23);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		check_hlds__simplify__call_goal_10_0_i28);
MR_def_label(check_hlds__simplify__call_goal_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i23);
	}
	if (MR_INT_EQ(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i23);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_inside_lambda_1_0,
		check_hlds__simplify__call_goal_10_0_i33);
MR_def_label(check_hlds__simplify__call_goal_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i23);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__call_goal_10_0_i35);
MR_def_label(check_hlds__simplify__call_goal_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__simplify__call_goal_10_0_i36);
MR_def_label(check_hlds__simplify__call_goal_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		check_hlds__simplify__call_goal_10_0_i37);
MR_def_label(check_hlds__simplify__call_goal_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__simplify__call_goal_10_0_i38);
MR_def_label(check_hlds__simplify__call_goal_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__simplify__call_goal_10_0_i39);
MR_def_label(check_hlds__simplify__call_goal_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__input_args_are_equiv_5_0,
		check_hlds__simplify__call_goal_10_0_i40);
MR_def_label(check_hlds__simplify__call_goal_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i23);
	}
	MR_sv(13) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(14) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(15));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__simplify__call_goal_10_0_i45);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__simplify__call_goal_10_0_i46);
MR_def_label(check_hlds__simplify__call_goal_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		check_hlds__simplify__call_goal_10_0_i47);
MR_def_label(check_hlds__simplify__call_goal_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		check_hlds__simplify__call_goal_10_0_i51);
MR_def_label(check_hlds__simplify__call_goal_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(15));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i23);
MR_def_label(check_hlds__simplify__call_goal_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(13);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(14);
	MR_tag_alloc_heap(MR_sv(4), 2, (MR_Integer) 1);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__simplify__call_goal_10_0_i55);
MR_def_label(check_hlds__simplify__call_goal_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1,
		check_hlds__simplify__call_goal_10_0_i56);
MR_def_label(check_hlds__simplify__call_goal_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i23);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		check_hlds__simplify__call_goal_10_0_i58);
MR_def_label(check_hlds__simplify__call_goal_10_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,13);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__call_goal_10_0_i62);
MR_def_label(check_hlds__simplify__call_goal_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
MR_def_label(check_hlds__simplify__call_goal_10_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0,
		check_hlds__simplify__call_goal_10_0_i64);
MR_def_label(check_hlds__simplify__call_goal_10_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i63);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		check_hlds__simplify__call_goal_10_0_i66);
MR_def_label(check_hlds__simplify__call_goal_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i63);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__common__common_optimise_call_8_0,
		check_hlds__simplify__call_goal_10_0_i67);
MR_def_label(check_hlds__simplify__call_goal_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i74);
MR_def_label(check_hlds__simplify__call_goal_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0,
		check_hlds__simplify__call_goal_10_0_i69);
MR_def_label(check_hlds__simplify__call_goal_10_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i68);
	}
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		check_hlds__simplify__call_goal_10_0_i71);
MR_def_label(check_hlds__simplify__call_goal_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i68);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__common__common_optimise_call_8_0,
		check_hlds__simplify__call_goal_10_0_i72);
MR_def_label(check_hlds__simplify__call_goal_10_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(10);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i74);
MR_def_label(check_hlds__simplify__call_goal_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(10);
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__simplify__call_goal_10_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__call_goal_10_0_i76);
MR_def_label(check_hlds__simplify__call_goal_10_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_const_prop_1_0,
		check_hlds__simplify__call_goal_10_0_i77);
MR_def_label(check_hlds__simplify__call_goal_10_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i75);
	}
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i75);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__call_goal_10_0_i80);
MR_def_label(check_hlds__simplify__call_goal_10_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__simplify__call_goal_10_0_i81);
MR_def_label(check_hlds__simplify__call_goal_10_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__prim_data__is_std_lib_module_name_2_0,
		check_hlds__simplify__call_goal_10_0_i82);
MR_def_label(check_hlds__simplify__call_goal_10_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i75);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__call_goal_10_0_i84);
MR_def_label(check_hlds__simplify__call_goal_10_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__call_goal_10_0_i85);
MR_def_label(check_hlds__simplify__call_goal_10_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__simplify__call_goal_10_0_i86);
MR_def_label(check_hlds__simplify__call_goal_10_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		check_hlds__simplify__call_goal_10_0_i87);
MR_def_label(check_hlds__simplify__call_goal_10_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(11);
	MR_np_call_localret_ent(transform_hlds__const_prop__evaluate_call_10_0,
		check_hlds__simplify__call_goal_10_0_i90);
MR_def_label(check_hlds__simplify__call_goal_10_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i89);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__call_goal_10_0_i98);
MR_def_label(check_hlds__simplify__call_goal_10_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__call_goal_10_0_i94);
MR_def_label(check_hlds__simplify__call_goal_10_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 538;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__call_goal_10_0_i95);
MR_def_label(check_hlds__simplify__call_goal_10_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0,
		check_hlds__simplify__call_goal_10_0_i96);
MR_def_label(check_hlds__simplify__call_goal_10_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__call_goal_10_0_i75);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__call_goal_10_0_i98);
MR_def_label(check_hlds__simplify__call_goal_10_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__call_goal_10_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);
MR_decl_entry(hlds__hlds_module__module_info_get_special_pred_map_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module32)
	MR_init_entry1(check_hlds__simplify__call_specific_unify_10_0);
	MR_init_label8(check_hlds__simplify__call_specific_unify_10_0,2,3,4,5,6,7,8,9)
	MR_init_label1(check_hlds__simplify__call_specific_unify_10_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__call_specific_unify_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
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
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(11);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__simplify__call_specific_unify_10_0_i2);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		check_hlds__simplify__call_specific_unify_10_0_i3);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__simplify__call_specific_unify_10_0_i4);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__call_specific_unify_10_0_i5);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__simplify__call_specific_unify_10_0_i6);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__simplify__call_specific_unify_10_0_i7);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 2) = MR_sv(9);
	MR_tfield(1, MR_tempr3, 3) = (MR_Integer) 2;
	MR_tfield(1, MR_tempr3, 4) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 5) = MR_tempr1;
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__call_specific_unify_10_0_i8);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__call_specific_unify_10_0_i9);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_nonlocals_3_0,
		check_hlds__simplify__call_specific_unify_10_0_i10);
MR_def_label(check_hlds__simplify__call_specific_unify_10_0,10)
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


MR_BEGIN_MODULE(check_hlds__simplify_module33)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module34)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_r1;
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_set_module_info_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module35)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_module_info_3_0);
	MR_init_label1(check_hlds__simplify__simplify_info_set_module_info_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_module_info_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_set_module_info_3_0,
		check_hlds__simplify__simplify_info_set_module_info_3_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_set_module_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
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

MR_BEGIN_MODULE(check_hlds__simplify_module36)
	MR_init_entry1(check_hlds__simplify__make_type_info_vars_5_0);
	MR_init_label8(check_hlds__simplify__make_type_info_vars_5_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__simplify__make_type_info_vars_5_0,10,11,12,13,14,15,16,17)
	MR_init_label5(check_hlds__simplify__make_type_info_vars_5_0,18,19,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__make_type_info_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i2);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i3);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i4);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i5);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i6);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__simplify__make_type_info_vars_5_0_i7);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i8);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i9);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i10);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		check_hlds__simplify__make_type_info_vars_5_0_i11);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__simplify__make_type_info_vars_5_0_i12);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_vars_6_0,
		check_hlds__simplify__make_type_info_vars_5_0_i13);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r3;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		check_hlds__simplify__make_type_info_vars_5_0_i14);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i15);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i16);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__make_type_info_vars_5_0_i17);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i18);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i19);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i20);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		check_hlds__simplify__make_type_info_vars_5_0_i21);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__make_type_info_vars_5_0_i22);
MR_def_label(check_hlds__simplify__make_type_info_vars_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__polymorphism__gen_extract_type_info_13_0);

MR_BEGIN_MODULE(check_hlds__simplify_module37)
	MR_init_entry1(check_hlds__simplify__extract_type_info_8_0);
	MR_init_label7(check_hlds__simplify__extract_type_info_8_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

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
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__extract_type_info_8_0_i2);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_vartypes_2_0,
		check_hlds__simplify__extract_type_info_8_0_i3);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__extract_type_info_8_0_i4);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__polymorphism__gen_extract_type_info_13_0,
		check_hlds__simplify__extract_type_info_8_0_i5);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__extract_type_info_8_0_i6);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__extract_type_info_8_0_i7);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__extract_type_info_8_0_i8);
MR_def_label(check_hlds__simplify__extract_type_info_8_0,8)
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

MR_BEGIN_MODULE(check_hlds__simplify_module38)
	MR_init_entry1(check_hlds__simplify__type_info_locn_6_0);
	MR_init_label3(check_hlds__simplify__type_info_locn_6_0,2,4,5)
MR_BEGIN_CODE

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
	MR_r1 = MR_ctfield(0, MR_tempr1, 12);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		check_hlds__simplify__type_info_locn_6_0_i2);
MR_def_label(check_hlds__simplify__type_info_locn_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__type_info_locn_6_0_i4);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
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
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__simplify__extract_type_info_8_0,
		check_hlds__simplify__type_info_locn_6_0_i5);
MR_def_label(check_hlds__simplify__type_info_locn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module39)
	MR_init_entry1(fn__check_hlds__simplify__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__simplify__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("simplify.m", 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module40)
	MR_init_entry1(check_hlds__simplify__nested_scopes_2_4_0);
	MR_init_label8(check_hlds__simplify__nested_scopes_2_4_0,85,8,5,9,11,16,13,22)
	MR_init_label1(check_hlds__simplify__nested_scopes_2_4_0,93)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__nested_scopes_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i93);
	}
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__nested_scopes_2_4_0_i8);
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i85);
	}
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_r5;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i85);
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i85);
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i13);
	}
	if (MR_RTAGS_TESTR(MR_r5,3,1)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i16);
	}
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i85);
	}
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,8,0);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i85);
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i93);
	}
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i93);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i22);
	}
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i85);
	}
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,8,1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__nested_scopes_2_4_0_i85);
MR_def_label(check_hlds__simplify__nested_scopes_2_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module41)
	MR_init_entry1(check_hlds__simplify__nested_scopes_4_0);
	MR_init_label5(check_hlds__simplify__nested_scopes_4_0,2,6,7,3,4)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__nested_scopes_4_0_i6);
MR_def_label(check_hlds__simplify__nested_scopes_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
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


MR_BEGIN_MODULE(check_hlds__simplify_module42)
	MR_init_entry1(check_hlds__simplify__maybe_wrap_goal_7_0);
	MR_init_label3(check_hlds__simplify__maybe_wrap_goal_7_0,3,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__maybe_wrap_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__maybe_wrap_goal_7_0_i3);
MR_def_label(check_hlds__simplify__maybe_wrap_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,8,2);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 18);
	MR_r3 = MR_tempr2;
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr2, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr2, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr2, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_tempr2, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr2, 8) = MR_ctfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr2, 9) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 10) = MR_ctfield(0, MR_tempr3, 10);
	MR_tfield(0, MR_tempr2, 11) = MR_ctfield(0, MR_tempr3, 11);
	MR_tfield(0, MR_tempr2, 12) = MR_ctfield(0, MR_tempr3, 12);
	MR_tfield(0, MR_tempr2, 13) = MR_ctfield(0, MR_tempr3, 13);
	MR_tfield(0, MR_tempr2, 14) = MR_ctfield(0, MR_tempr3, 14);
	MR_tfield(0, MR_tempr2, 15) = MR_ctfield(0, MR_tempr3, 15);
	MR_tfield(0, MR_tempr2, 16) = MR_ctfield(0, MR_tempr3, 16);
	MR_tfield(0, MR_tempr2, 17) = MR_ctfield(0, MR_tempr3, 17);
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

MR_BEGIN_MODULE(check_hlds__simplify_module43)
	MR_init_entry1(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0);
	MR_init_label2(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0_i2);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0_i5);
MR_def_label(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__append_3_1);
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

MR_decl_entry(hlds__goal_util__update_instmap_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module44)
	MR_init_entry1(check_hlds__simplify__simplify_info_update_instmap_3_0);
	MR_init_label1(check_hlds__simplify__simplify_info_update_instmap_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_update_instmap_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 4);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__simplify__simplify_info_update_instmap_3_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_update_instmap_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module45)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_common_info_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_set_common_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module46)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_instmap_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_instmap_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module47)
	MR_init_entry1(check_hlds__simplify__simplify_info_undo_goal_updates_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_undo_goal_updates_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module48)
	MR_init_entry1(check_hlds__simplify__simplify_do_excess_assign_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_excess_assign_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 7);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module49)
	MR_init_entry1(check_hlds__simplify__find_renamed_var_3_0);
	MR_init_label3(check_hlds__simplify__find_renamed_var_3_0,12,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__find_renamed_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__find_renamed_var_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__find_renamed_var_3_0_i3);
MR_def_label(check_hlds__simplify__find_renamed_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_renamed_var_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__simplify__find_renamed_var_3_0_i12);
MR_def_label(check_hlds__simplify__find_renamed_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(string__append_3_1);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module50)
	MR_init_entry1(check_hlds__simplify__goal_is_excess_assign_7_0);
	MR_init_label8(check_hlds__simplify__goal_is_excess_assign_7_0,4,5,7,6,9,11,10,13)
	MR_init_label8(check_hlds__simplify__goal_is_excess_assign_7_0,18,21,23,20,17,14,26,30)
	MR_init_label8(check_hlds__simplify__goal_is_excess_assign_7_0,31,33,36,39,41,38,44,47)
	MR_init_label3(check_hlds__simplify__goal_is_excess_assign_7_0,49,32,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__goal_is_excess_assign_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i1);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr3 = MR_r6;
	MR_sv(7) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_ctfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(check_hlds__simplify__find_renamed_var_3_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i4);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__find_renamed_var_3_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i5);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i7);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i6);
	}
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_sv(4) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i9);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_sv(4) = (MR_Integer) 1;
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i11);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i10);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i13);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r1 = (MR_Integer) 1;
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i14);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i14);
	}
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__search_name_3_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i18);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("HeadVar__", 9);
	MR_np_call_localret_ent(string__append_3_1,
		check_hlds__simplify__goal_is_excess_assign_7_0_i21);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i20);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i23);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i17);
	}
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i30);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i30);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i26);
	}
	MR_sv(3) = MR_r2;
	MR_r5 = MR_r3;
	MR_r6 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i30);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i1);
	}
	MR_sv(3) = MR_r2;
	MR_r5 = MR_sv(6);
	MR_r6 = MR_r3;
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i31);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_needs_meaningful_var_names_1_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i33);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i32);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i32);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(varset__search_name_3_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i36);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i32);
	}
	MR_r1 = (MR_Word) MR_string_const("HeadVar__", 9);
	MR_np_call_localret_ent(string__append_3_1,
		check_hlds__simplify__goal_is_excess_assign_7_0_i39);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i38);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i41);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i32);
	}
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(varset__search_name_3_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i44);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("HeadVar__", 9);
	MR_np_call_localret_ent(string__append_3_1,
		check_hlds__simplify__goal_is_excess_assign_7_0_i47);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i32);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__to_int_2_0,
		check_hlds__simplify__goal_is_excess_assign_7_0_i49);
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__simplify__goal_is_excess_assign_7_0_i1);
	}
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__simplify__goal_is_excess_assign_7_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module51)
	MR_init_entry1(check_hlds__simplify__find_excess_assigns_in_conj_9_0);
	MR_init_label4(check_hlds__simplify__find_excess_assigns_in_conj_9_0,19,6,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__find_excess_assigns_in_conj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_tempr3 = MR_r7;
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_tempr1;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__simplify__goal_is_excess_assign_7_0,
		check_hlds__simplify__find_excess_assigns_in_conj_9_0_i6);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i19);
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r6;
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__simplify__find_excess_assigns_in_conj_9_0_i19);
	}
MR_def_label(check_hlds__simplify__find_excess_assigns_in_conj_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_values_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module52)
	MR_init_entry1(check_hlds__simplify__renaming_transitive_closure_2_0);
MR_BEGIN_CODE

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
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__simplify__IntroducedFrom__pred__renaming_transitive_closure__2609__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_r1;
	MR_r5 = MR_ctfield(0, MR_tempr1, 3);
	MR_np_tailcall_ent(map__map_values_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(hlds__goal_util__rename_vars_in_goals_4_0);
MR_decl_entry(map__keys_2_0);
MR_decl_entry(varset__delete_vars_3_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0);

MR_BEGIN_MODULE(check_hlds__simplify_module53)
	MR_init_entry1(check_hlds__simplify__excess_assigns_in_conj_5_0);
	MR_init_label8(check_hlds__simplify__excess_assigns_in_conj_5_0,4,5,6,7,8,9,10,11)
	MR_init_label8(check_hlds__simplify__excess_assigns_in_conj_5_0,14,12,16,17,18,19,20,21)
	MR_init_label6(check_hlds__simplify__excess_assigns_in_conj_5_0,22,23,24,25,26,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__excess_assigns_in_conj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r3, 2), 7);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__excess_assigns_in_conj_5_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i4);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i5);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i6);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i7);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i8);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r2 = (MR_Integer) 93;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i9);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i10);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__find_excess_assigns_in_conj_9_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i11);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__is_empty_1_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i14);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__excess_assigns_in_conj_5_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__renaming_transitive_closure_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i16);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i17);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__rename_vars_in_goals_4_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i18);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i19);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(varset__delete_vars_3_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i20);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i21);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i22);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i23);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i24);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i25);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__excess_assigns_in_conj_5_0_i26);
MR_def_label(check_hlds__simplify__excess_assigns_in_conj_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
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


MR_BEGIN_MODULE(check_hlds__simplify_module54)
	MR_init_entry1(check_hlds__simplify__simplify_info_post_branch_update_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_post_branch_update_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
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
MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(parse_tree__prog_mode__get_arg_insts_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(set__singleton_set_2_1);
MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module55)
	MR_init_entry1(check_hlds__simplify__create_test_unification_6_0);
	MR_init_label8(check_hlds__simplify__create_test_unification_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__simplify__create_test_unification_6_0,10,11,13,14,12,17,18,19)
	MR_init_label2(check_hlds__simplify__create_test_unification_6_0,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__create_test_unification_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__create_test_unification_6_0_i2);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(varset__new_vars_4_0,
		check_hlds__simplify__create_test_unification_6_0_i3);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__create_test_unification_6_0_i4);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__create_test_unification_6_0_i5);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_arg_types_4_0,
		check_hlds__simplify__create_test_unification_6_0_i6);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__det_insert_from_corresponding_lists_4_0,
		check_hlds__simplify__create_test_unification_6_0_i7);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__create_test_unification_6_0_i8);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__create_test_unification_6_0_i9);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__create_test_unification_6_0_i10);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__simplify__create_test_unification_6_0_i11);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__simplify__create_test_unification_6_0_i13);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_mode__get_arg_insts_4_0,
		check_hlds__simplify__create_test_unification_6_0_i14);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__create_test_unification_6_0_i12);
	}
	MR_r4 = MR_r2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__simplify__create_test_unification_6_0_i18);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("simplify.m", 10);
	MR_r2 = (MR_Word) MR_string_const("create_test_unification - get_arg_insts failed", 46);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__simplify__create_test_unification_6_0_i17);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__simplify__create_test_unification_6_0_i18);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_sv(4);
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
	MR_tempr8 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr8;
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 5) = (MR_Integer) 1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr3, 2) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 3) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 4) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(1) = MR_tempr4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(set__singleton_set_2_1,
		check_hlds__simplify__create_test_unification_6_0_i19);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		check_hlds__simplify__create_test_unification_6_0_i20);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		check_hlds__simplify__create_test_unification_6_0_i21);
MR_def_label(check_hlds__simplify__create_test_unification_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module56)
	MR_init_entry1(check_hlds__simplify__contains_multisoln_goal_1_0);
	MR_init_label4(check_hlds__simplify__contains_multisoln_goal_1_0,3,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__contains_multisoln_goal_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(2) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(3));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__simplify__contains_multisoln_goal_1_0_i2);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__simplify__contains_multisoln_goal_1_0_i3);
MR_def_label(check_hlds__simplify__contains_multisoln_goal_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__contains_multisoln_goal_1_0_i4);
MR_def_label(check_hlds__simplify__contains_multisoln_goal_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__contains_multisoln_goal_1_0_i5);
MR_def_label(check_hlds__simplify__contains_multisoln_goal_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 3 != (MR_Integer) MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(3));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__simplify__contains_multisoln_goal_1_0,2)
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


MR_BEGIN_MODULE(check_hlds__simplify_module57)
	MR_init_entry1(check_hlds__simplify__simplify_info_incr_cost_delta_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_incr_cost_delta_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 10) + (MR_Integer) MR_r1);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module58)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module59)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_format_calls_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_format_calls_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_r1;
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module60)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_has_parallel_conj_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_has_parallel_conj_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_r1;
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module61)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_has_user_event_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_has_user_event_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module62)
	MR_init_entry1(check_hlds__simplify__simplify_info_enter_lambda_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_enter_lambda_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_r1, 10);
	MR_tfield(0, MR_tempr1, 11) = ((MR_Integer) MR_ctfield(0, MR_r1, 11) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_r1, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_r1, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_r1, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_r1, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_r1, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_r1, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module63)
	MR_init_entry1(check_hlds__simplify__simplify_info_leave_lambda_2_0);
	MR_init_label1(check_hlds__simplify__simplify_info_leave_lambda_2_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_leave_lambda_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = ((MR_Integer) MR_ctfield(0, MR_r1, 11) - (MR_Integer) 1);
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_info_leave_lambda_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("simplify.m", 10);
	MR_r2 = (MR_Word) MR_string_const("simplify_info_leave_lambda: Left too many lambdas", 49);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__simplify__simplify_info_leave_lambda_2_0_i4);
MR_def_label(check_hlds__simplify__simplify_info_leave_lambda_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_r1, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_r2;
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_r1, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_r1, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_r1, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_r1, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_r1, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_r1, 17);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module64)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_r1;
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module65)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_found_contains_trace_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_found_contains_trace_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_r1;
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module66)
	MR_init_entry1(check_hlds__simplify__simplify_do_extra_common_struct_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_extra_common_struct_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 12);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module67)
	MR_init_entry1(fn__check_hlds__simplify__will_flush_2_0);
	MR_init_label8(fn__check_hlds__simplify__will_flush_2_0,4,8,9,14,18,20,15,44)
	MR_init_label8(fn__check_hlds__simplify__will_flush_2_0,23,24,27,30,36,55,39,89)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__simplify__will_flush_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i4) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i8) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i14) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i23));
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(2, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i18) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i18) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i20) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i20));
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i15);
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i89);
	}
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i24) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i27) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i30) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i44) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i55) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i44) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i36) MR_AND
		MR_LABEL_AP(fn__check_hlds__simplify__will_flush_2_0_i39));
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__will_flush_2_0_i44);
	}
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("simplify.m", 10);
	MR_r2 = (MR_Word) MR_string_const("will_flush: unexpected shorthand", 32);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__check_hlds__simplify__will_flush_2_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__common__common_info_clear_structs_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module68)
	MR_init_entry1(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0);
	MR_init_label5(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,7,9,10,2,3)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 2), 11);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i3);
	}
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 2), 12);
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i3);
	}
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__check_hlds__simplify__will_flush_2_0,
		check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i7);
MR_def_label(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i9);
MR_def_label(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__common__common_info_clear_structs_2_0,
		check_hlds__simplify__simplify_info_maybe_clear_structs_4_0_i10);
MR_def_label(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,10)
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
MR_decl_entry(hlds__goal_form__goal_can_loop_or_throw_6_0);
MR_decl_entry(check_hlds__det_util__det_info_get_fully_strict_2_0);
MR_decl_entry(hlds__goal_util__goal_contains_goal_2_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(transform_hlds__pd_cost__goal_cost_2_0);
MR_decl_entry(fn__hlds__hlds_goal__fail_goal_with_context_1_0);
MR_decl_entry(check_hlds__det_util__det_no_output_vars_4_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_with_context_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module69)
	MR_init_entry1(check_hlds__simplify__simplify_goal_6_0);
	MR_init_label8(check_hlds__simplify__simplify_goal_6_0,2,4,6,3,7,9,11,8)
	MR_init_label8(check_hlds__simplify__simplify_goal_6_0,12,13,14,15,16,17,18,23)
	MR_init_label8(check_hlds__simplify__simplify_goal_6_0,22,27,26,25,29,31,37,39)
	MR_init_label8(check_hlds__simplify__simplify_goal_6_0,42,38,36,44,34,45,30,47)
	MR_init_label8(check_hlds__simplify__simplify_goal_6_0,49,48,51,53,54,19,20,57)
	MR_init_label8(check_hlds__simplify__simplify_goal_6_0,60,61,62,63,66,70,69,68)
	MR_init_label8(check_hlds__simplify__simplify_goal_6_0,72,74,73,76,78,79,80,56)
	MR_init_label8(check_hlds__simplify__simplify_goal_6_0,83,84,89,93,92,88,96,97)
	MR_init_label4(check_hlds__simplify__simplify_goal_6_0,98,99,100,101)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0,
		check_hlds__simplify__simplify_goal_6_0_i2);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__simplify__simplify_goal_6_0_i4);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0,
		check_hlds__simplify__simplify_goal_6_0_i6);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i7);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__simplify__simplify_goal_6_0_i9);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_found_contains_trace_3_0,
		check_hlds__simplify__simplify_goal_6_0_i11);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i12);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(6) = MR_sv(4);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__simplify_goal_6_0_i13);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__simplify_goal_6_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_6_0_i15);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_form__goal_can_loop_or_throw_6_0,
		check_hlds__simplify__simplify_goal_6_0_i16);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_6_0_i17);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		check_hlds__simplify__simplify_goal_6_0_i18);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),7)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i20);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i23);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i22);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i20);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_fully_strict_2_0,
		check_hlds__simplify__simplify_goal_6_0_i27);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i26);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i25);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i19);
	}
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_6_0_i29);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_simple_code_1_0,
		check_hlds__simplify__simplify_goal_6_0_i31);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i30);
	}
	MR_sv(10) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(11) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(12));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__simplify__simplify_goal_6_0_i36);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__goal_contains_goal_2_0,
		check_hlds__simplify__simplify_goal_6_0_i37);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i39);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i39);
	}
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i38);
	}
MR_def_label(check_hlds__simplify__simplify_goal_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__goal_is_call_to_builtin_false_1_0,
		check_hlds__simplify__simplify_goal_6_0_i42);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r2 = MR_sv(9);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(12));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i44);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(10);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(11);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i34);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i30);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,24);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,5,1);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_6_0_i45);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__simplify_goal_6_0_i47);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__simplify_goal_6_0_i47);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__simplify__simplify_goal_6_0_i49);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i48);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__simplify__simplify_goal_6_0_i53);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_6_0_i51);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__simplify__simplify_goal_6_0_i53);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__simplify__simplify_goal_6_0_i54);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_6_0_i83);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_6_0_i57);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i56);
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i56);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		check_hlds__simplify__simplify_goal_6_0_i60);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__simplify_goal_6_0_i61);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_6_0_i62);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__det_util__det_no_output_vars_4_0,
		check_hlds__simplify__simplify_goal_6_0_i63);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i56);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i66);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_fully_strict_2_0,
		check_hlds__simplify__simplify_goal_6_0_i70);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i56);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_fully_strict_2_0,
		check_hlds__simplify__simplify_goal_6_0_i70);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i68);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i56);
	}
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__simplify_goal_6_0_i72);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(set__empty_1_0,
		check_hlds__simplify__simplify_goal_6_0_i74);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i73);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__simplify__simplify_goal_6_0_i78);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_6_0_i76);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__pd_cost__goal_cost_2_0,
		check_hlds__simplify__simplify_goal_6_0_i78);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__simplify__simplify_goal_6_0_i79);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_6_0_i80);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_6_0_i83);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_sv(9);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i84);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(check_hlds__simplify__nested_scopes_4_0,
		check_hlds__simplify__simplify_goal_6_0_i84);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_elim_removable_scopes_1_0,
		check_hlds__simplify__simplify_goal_6_0_i89);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i88);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i88);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i93);
	}
	MR_r6 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i88);
	}
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i92);
	}
MR_def_label(check_hlds__simplify__simplify_goal_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i88);
	}
	MR_r2 = MR_ctfield(3, MR_r4, 2);
	MR_r3 = MR_sv(2);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_6_0_i96);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = (MR_Integer) 0;
MR_def_label(check_hlds__simplify__simplify_goal_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,
		check_hlds__simplify__simplify_goal_6_0_i97);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_2_8_0,
		check_hlds__simplify__simplify_goal_6_0_i98);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_maybe_clear_structs_4_0,
		check_hlds__simplify__simplify_goal_6_0_i99);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_inside_duplicated_for_switch_3_0,
		check_hlds__simplify__simplify_goal_6_0_i100);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__enforce_unreachability_invariant_4_0,
		check_hlds__simplify__simplify_goal_6_0_i101);
MR_def_label(check_hlds__simplify__simplify_goal_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(hlds__instmap__pre_lambda_update_5_0);
MR_decl_entry(fn__check_hlds__common__common_info_init_0_0);
MR_decl_entry(check_hlds__common__common_optimise_unification_11_0);
MR_decl_entry(check_hlds__format_call__is_format_call_5_0);
MR_decl_entry(check_hlds__common__common_optimise_higher_order_call_9_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__parse_tree__prog_data__get_box_policy_1_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__instmap__merge_instmap_deltas_7_0);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_to_functors_3_0);
MR_decl_entry(parse_tree__prog_mode__functors_to_cons_ids_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
MR_decl_entry(list__sort_2_0);
MR_decl_entry(check_hlds__det_util__delete_unreachable_cases_3_0);
MR_decl_entry(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
MR_decl_entry(fn__parse_tree__prog_util__cons_id_arity_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(check_hlds__type_util__is_existq_cons_3_0);
MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_bind_var_to_functor_8_0);
MR_decl_entry(parse_tree__prog_data__det_conjunction_detism_3_0);
MR_decl_entry(hlds__hlds_goal__goal_list_purity_2_0);
MR_decl_entry(builtin__semidet_fail_0_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(fn__parse_tree__prog_data__default_attributes_1_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mercury_3_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(parse_tree__prog_data__set_thread_safe_3_0);
MR_decl_entry(parse_tree__prog_data__set_purity_3_0);
MR_decl_entry(parse_tree__prog_data__set_terminates_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_throw_exception_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_modify_trail_3_0);
MR_decl_entry(parse_tree__prog_data__set_may_call_mm_tabled_3_0);
MR_decl_entry(hlds__goal_util__generate_foreign_proc_16_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);
MR_decl_entry(parse_tree__prog_data__det_negation_det_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_apply_instmap_delta_4_0);

MR_BEGIN_MODULE(check_hlds__simplify_module70)
	MR_init_entry1(check_hlds__simplify__simplify_goal_2_8_0);
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,4,8,10,5,6,14,15,16)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,17,18,19,20,21,22,23,24)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,25,12,30,28,31,26,36,34)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,44,42,46,41,48,39,54,55)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,56,57,58,61,63,59,64,71)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,72,75,76,77,66,82,85,87)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,86,92,95,91,99,102,103,105)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,107,108,109,110,113,114,115,116)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,117,118,104,121,123,124,125,122)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,127,129,131,132,126,135,138,139)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,140,141,144,143,147,149,151,153)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,154,156,157,150,137,161,162,160)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,165,164,167,169,170,171,174,175)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,173,178,177,180,179,182,183,184)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,185,186,187,189,190,192,195,196)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,197,198,201,203,204,205,200,206)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,207,210,211,212,213,209,216,224)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,220,221,227,228,229,232,234,235)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,236,237,238,230,239,240,241,242)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,243,244,245,246,247,248,249,250)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,251,218,254,255,215,257,256,259)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,260,261,262,263,264,266,267,269)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,268,272,273,274,275,276,277,278)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,279,284,286,287,295,292,299,297)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,305,306,307,308,316,324,327,328)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,326,331,330,334,335,336,337,338)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,340,341,351,352,354,355,339,356)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,357,358,359,360,361,362,363,364)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,365,322,318,544,317,311,369,368)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,309,371,372,373,376,377,378,379)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,380,383,382,381,385,374,389,393)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,390,391,399,402,396,403,405,406)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,407,409,410,411,414,413,412,416)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,387,421,422,423,424,425,426,418)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,427,428,429,430,431,432,433,434)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,435,436,437,438,439,440,441,442)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,443,444,445,446,447,451,453,457)
	MR_init_label8(check_hlds__simplify__simplify_goal_2_8_0,449,460,465,466,459,472,473,950)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_goal_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i54) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i82) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i102));
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_ctfield(0, MR_r1, 4);
	MR_sv(7) = MR_ctfield(0, MR_r1, 3);
	MR_sv(6) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_r1, 0);
	MR_r5 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i8);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i10);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i162);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(3);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i12);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 3);
	MR_sv(9) = MR_ctfield(2, MR_tempr1, 4);
	MR_sv(10) = MR_ctfield(2, MR_tempr1, 5);
	MR_sv(11) = MR_ctfield(2, MR_tempr1, 6);
	MR_sv(12) = MR_ctfield(2, MR_tempr1, 7);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_enter_lambda_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i14);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i15);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i17);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_sv(14) = MR_r4;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(hlds__instmap__pre_lambda_update_5_0,
		check_hlds__simplify__simplify_goal_2_8_0_i18);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_instmap_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i19);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__common__common_info_init_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i20);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i21);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i22);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i23);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_instmap_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i24);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 8);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(11);
	MR_tfield(2, MR_tempr1, 7) = MR_sv(12);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_leave_lambda_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i25);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(7),3,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i26);
	}
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i28);
	}
	MR_r1 = MR_r5;
	MR_r6 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_sv(5), 0);
	MR_r7 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,
		check_hlds__simplify__simplify_goal_2_8_0_i30);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__simplify__this_file_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i31);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("invalid RHS for complicated unify", 33);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_common_struct_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i36);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i34);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(4);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(check_hlds__common__common_optimise_unification_11_0);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(3);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i44);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i42);
	}
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i41);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(3);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i46);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i39);
	}
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r5 = MR_sv(8);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_np_call_localret_ent(check_hlds__common__common_optimise_unification_11_0,
		check_hlds__simplify__simplify_goal_2_8_0_i48);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(6) = MR_ctfield(1, MR_r1, 2);
	MR_sv(7) = MR_ctfield(1, MR_r1, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i55);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i56);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i57);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i58);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__format_call__is_format_call_5_0,
		check_hlds__simplify__simplify_goal_2_8_0_i61);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i59);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_format_calls_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i63);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i64);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_sv(12) = MR_sv(4);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i66);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(6);
	MR_r1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i66);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i66);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i66);
	}
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(10) = MR_ctfield(1, MR_r1, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i71);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i72);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i66);
	}
	if ((strcmp((char *)MR_sv(9), (char *)(MR_Word) MR_string_const("\100<", 2)) != 0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i75);
	}
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const("<", 1);
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(check_hlds__simplify__inequality_goal_10_0);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(9), (char *)(MR_Word) MR_string_const("\100=<", 3)) != 0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i76);
	}
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r5 = (MR_Integer) 1;
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(check_hlds__simplify__inequality_goal_10_0);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(9), (char *)(MR_Word) MR_string_const("\100>", 2)) != 0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i77);
	}
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const(">", 1);
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(check_hlds__simplify__inequality_goal_10_0);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(9), (char *)(MR_Word) MR_string_const("\100>=", 3)) != 0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i66);
	}
	MR_r6 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Word) MR_string_const("<", 1);
	MR_r5 = (MR_Integer) 1;
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(check_hlds__simplify__inequality_goal_10_0);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(check_hlds__simplify__call_goal_10_0);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(2, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r5),
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i85) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i950) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i99) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i950));
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(2, MR_r1, 3);
	MR_sv(6) = MR_ctfield(2, MR_r1, 2);
	MR_sv(5) = MR_ctfield(2, MR_r1, 1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i87);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i86);
	}
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i86);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__common__common_optimise_higher_order_call_9_0,
		check_hlds__simplify__simplify_goal_2_8_0_i132);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_duplicate_calls_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i92);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i91);
	}
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i91);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__common__common_optimise_higher_order_call_9_0,
		check_hlds__simplify__simplify_goal_2_8_0_i95);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_has_user_event_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i426);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i103) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i135) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i169) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i195) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i272) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i305) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i371) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i472));
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_ctfield(3, MR_r1, 7);
	MR_sv(9) = MR_ctfield(3, MR_r1, 6);
	MR_sv(8) = MR_ctfield(3, MR_r1, 5);
	MR_sv(7) = MR_ctfield(3, MR_r1, 4);
	MR_sv(6) = MR_ctfield(3, MR_r1, 3);
	MR_sv(5) = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_ctfield(3, MR_r1, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_const_prop_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i105);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i104);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i107);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i108);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i109);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__prim_data__is_std_lib_module_name_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i110);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i104);
	}
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i104);
	}
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i113);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i114);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i115);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 538;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i116);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i117);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(11);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0,
		check_hlds__simplify__simplify_goal_2_8_0_i118);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i104);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i426);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_box_policy_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i121);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i123);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_sv(7);
	MR_sv(3) = MR_sv(8);
	MR_sv(7) = MR_r2;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i122);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i124);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i125);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 8);
	MR_sv(7) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(10);
	MR_r1 = MR_sv(4);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 5);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i127);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i126);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i129);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i126);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i126);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,11,4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i131);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__common__common_optimise_call_8_0,
		check_hlds__simplify__simplify_goal_2_8_0_i132);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i137);
	}
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i138);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__excess_assigns_in_conj_5_0,
		check_hlds__simplify__simplify_goal_2_8_0_i139);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,
		check_hlds__simplify__simplify_goal_2_8_0_i140);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_instmap_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i141);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i143);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i144);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i162);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i147);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(check_hlds__simplify__maybe_wrap_goal_7_0);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i149);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_once_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i151);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i150);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i153);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i150);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__contains_multisoln_goal_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i154);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i150);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__simplify__simplify_goal_2_8_0_i156);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i157);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,8,2);
	MR_tfield(3, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i160);
	}
	MR_sv(4) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i161);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i162);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i164);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i165);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(check_hlds__simplify__maybe_wrap_goal_7_0);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r5;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_par_conj_7_0,
		check_hlds__simplify__simplify_goal_2_8_0_i167);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_has_parallel_conj_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i426);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i170);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_r4;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_disj_10_0,
		check_hlds__simplify__simplify_goal_2_8_0_i171);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i173);
	}
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i174);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i175);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_sv(4);
	MR_sv(6) = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i189);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i177);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_sv(4), 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__simplify__maybe_wrap_goal_7_0,
		check_hlds__simplify__simplify_goal_2_8_0_i178);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i189);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 13;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i180);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i179);
	}
	MR_sv(3) = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_sv(6) = MR_sv(9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i189);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i182);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i183);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i184);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_7_0,
		check_hlds__simplify__simplify_goal_2_8_0_i185);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i186);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i187);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i189);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i190);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) == MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i268);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i192);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i426);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(5) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i196);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i197);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__lookup_var_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i198);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_to_functors_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i201);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i200);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_mode__functors_to_cons_ids_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i203);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_np_call_localret_ent(list__sort_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i204);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__det_util__delete_unreachable_cases_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i205);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r9 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_r6 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i206);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r7 = MR_r6;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_switch_13_0,
		check_hlds__simplify__simplify_goal_2_8_0_i207);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i209);
	}
	MR_sv(4) = MR_r1;
	MR_sv(13) = MR_r4;
	MR_np_call_localret_ent(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i210);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i211);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i212);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i213);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i266);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i215);
	}
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__cons_id_arity_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i216);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i218);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i221);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(3), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i221);
	}
	MR_sv(3) = MR_r1;
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i224);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i220);
	}
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i218);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i227);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i228);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i229);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__type_util__is_existq_cons_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i232);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i230);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i234);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i235);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(12);
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_7_0,
		check_hlds__simplify__simplify_goal_2_8_0_i236);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i237);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i238);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i254);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__create_test_unification_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i239);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i240);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i241);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i242);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i243);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i244);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(12);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,
		check_hlds__simplify__simplify_goal_2_8_0_i245);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i246);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i247);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__det_conjunction_detism_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i248);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_list_purity_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i249);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		check_hlds__simplify__simplify_goal_2_8_0_i250);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i251);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i254);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__transform_hlds__pd_cost__cost_of_eliminate_switch_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i254);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_incr_cost_delta_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i255);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i266);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 13;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i257);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i256);
	}
	MR_sv(3) = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_sv(6) = MR_sv(13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i266);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i259);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i260);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i261);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_7_0,
		check_hlds__simplify__simplify_goal_2_8_0_i262);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i263);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i264);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i266);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i267);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_sv(2))) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i268);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i269);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i426);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i273);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i274);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i275);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i276);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i277);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i278);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i279);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,27);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(2,5,1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i284);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i286);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(2,5,1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i284);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i287);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i287);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i287);
	}
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i295);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i292);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i292);
	}
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i295);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i297);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(builtin__semidet_fail_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i299);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i297);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(check_hlds__simplify__maybe_wrap_goal_7_0);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_common_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i306);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i307);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__nested_scopes_4_0,
		check_hlds__simplify__simplify_goal_2_8_0_i308);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i309);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i317) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i317) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i544) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i316));
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,316)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i317);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i318);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r4, 0),2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i544);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_ctfield(3, MR_r3, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_after_front_end_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i324);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i322);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i327);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i326);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(6), 0);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__simplify__evaluate_compile_time_condition_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i328);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i330);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i331);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_with_context_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i317);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i334);
	}
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i311);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i335);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i336);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i337);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i338);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(6),
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i340) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i351) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i351) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i351) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i351) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i354));
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i341);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i356);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__simplify__this_file_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i352);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("NYI: runtime trace conditions in languages other than C", 55);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i339);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 5;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__default_attributes_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i355);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,339)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mercury_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i356);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_thread_safe_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i357);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_purity_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i358);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_data__set_terminates_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i359);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_throw_exception_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i360);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,360)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_modify_trail_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i361);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,361)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__set_may_call_mm_tabled_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i362);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i363);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,363)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r15 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("trace_evaluate_runtime_condition", 32);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_sv(2);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(7);
	MR_r11 = (MR_Word) MR_string_const("", 0);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = (MR_Word) MR_tbmkword(0, 0);
	MR_r14 = MR_sv(1);
	MR_np_call_localret_ent(hlds__goal_util__generate_foreign_proc_16_0,
		check_hlds__simplify__simplify_goal_2_8_0_i364);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i365);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i311);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i311);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i317);
	}
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,544)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i311);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i368);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i369);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,369)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,309)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,371)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = MR_ctfield(3, MR_r1, 2);
	MR_sv(5) = MR_ctfield(3, MR_r1, 3);
	MR_sv(6) = MR_ctfield(3, MR_r1, 4);
	MR_sv(7) = MR_ctfield(0, MR_sv(3), 1);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i372);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i373);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,373)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i374);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i376);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,376)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i377);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__simplify__simplify_goal_2_8_0_i378);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i379);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,379)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i380);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,380)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i382);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i383);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,383)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,34);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,5,1);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i381);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,381)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i385);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,385)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i426);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,374)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i387);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_data__det_negation_det_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i389);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,389)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i391);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(builtin__semidet_fail_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i393);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i390);
	}
	MR_r1 = MR_sv(6);
	MR_sv(1) = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i409);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,390)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,391)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i396);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i399);
	}
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i402);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,399)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,6)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i396);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i402);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,402)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i406);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__simplify__this_file_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i403);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,403)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_2: cannot get negated determinism", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i405);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,405)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i406);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,406)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i407);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,407)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i409);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,409)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i410);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,410)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_inside_duplicated_for_switch_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i411);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,411)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i413);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i414);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,414)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,38);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,5,1);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i412);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,413)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,412)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i416);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,416)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i426);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,387)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(6), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i418);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i418);
	}
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i421);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,421)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i422);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,422)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__simplify__simplify_goal_2_8_0_i423);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i424);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,424)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_requantify_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i425);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,425)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rerun_det_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i426);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,426)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,418)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i427);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,427)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i428);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,428)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_update_instmap_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i429);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,429)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i430);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,430)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_post_branch_update_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i431);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,431)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_goal_2_8_0_i432);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,432)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_post_branch_update_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i433);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,433)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(0, MR_sv(13), 1);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i434);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,434)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(5), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i435);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,435)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,
		check_hlds__simplify__simplify_goal_2_8_0_i436);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,436)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i437);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,437)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i438);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,438)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i439);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,439)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i440);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,440)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_r5 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_7_0,
		check_hlds__simplify__simplify_goal_2_8_0_i441);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,441)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i442);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,442)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i443);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,443)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(13);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i444);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,444)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i445);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,445)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__simplify_goal_2_8_0_i446);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,446)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i447);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,447)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i451);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_undo_goal_updates_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i457);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,451)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i453);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_undo_goal_updates_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i457);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,453)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(6), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i449);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i449);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_undo_goal_updates_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i457);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,457)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(16);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i4) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i54) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i82) MR_AND
		MR_LABEL_AP(check_hlds__simplify__simplify_goal_2_8_0_i102));
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,449)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_once_1_0,
		check_hlds__simplify__simplify_goal_2_8_0_i460);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,460)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i459);
	}
	if (MR_INT_NE(MR_sv(4),3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i459);
	}
	if (MR_INT_EQ(MR_sv(5),3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_goal_2_8_0_i459);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__simplify__simplify_goal_2_8_0_i465);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,465)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_determinism_3_0,
		check_hlds__simplify__simplify_goal_2_8_0_i466);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,466)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(3,8,2);
	MR_tfield(3, MR_r1, 2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(16);
	}
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,459)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(16);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,472)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__simplify__this_file_0_0,
		check_hlds__simplify__simplify_goal_2_8_0_i473);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,473)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_2: unexpected shorthand", 28);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__simplify__simplify_goal_2_8_0,950)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module71)
	MR_init_entry1(check_hlds__simplify__simplify_par_conj_7_0);
	MR_init_label5(check_hlds__simplify__simplify_par_conj_7_0,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_par_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_par_conj_7_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_par_conj_7_0_i4);
MR_def_label(check_hlds__simplify__simplify_par_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 4);
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__simplify__simplify_par_conj_7_0_i5);
MR_def_label(check_hlds__simplify__simplify_par_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_ctfield(0, MR_sv(1), 3);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_common_info_3_0,
		check_hlds__simplify__simplify_par_conj_7_0_i6);
MR_def_label(check_hlds__simplify__simplify_par_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(check_hlds__simplify__simplify_par_conj_7_0,
		check_hlds__simplify__simplify_par_conj_7_0_i7);
MR_def_label(check_hlds__simplify__simplify_par_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__simplify__simplify_par_conj_7_0,3)
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

MR_BEGIN_MODULE(check_hlds__simplify_module72)
	MR_init_entry1(check_hlds__simplify__simplify_switch_13_0);
	MR_init_label8(check_hlds__simplify__simplify_switch_13_0,36,4,5,6,7,8,9,10)
	MR_init_label8(check_hlds__simplify__simplify_switch_13_0,11,12,15,16,17,18,19,20)
	MR_init_label2(check_hlds__simplify__simplify_switch_13_0,3,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_switch_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__simplify_switch_13_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_tempr2 = MR_r2;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_switch_13_0_i4);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_switch_13_0_i5);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_switch_13_0_i6);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__simplify__simplify_switch_13_0_i7);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__bind_var_to_functor_7_0,
		check_hlds__simplify__simplify_switch_13_0_i8);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_switch_13_0_i9);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_instmap_3_0,
		check_hlds__simplify__simplify_switch_13_0_i10);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_switch_13_0_i11);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i12);
	}
	MR_r5 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i12);
	}
	MR_r1 = MR_sv(5);
	MR_sv(4) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i19);
	}
MR_def_label(check_hlds__simplify__simplify_switch_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		check_hlds__simplify__simplify_switch_13_0_i15);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_switch_13_0_i16);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_bind_var_to_functor_8_0,
		check_hlds__simplify__simplify_switch_13_0_i17);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__simplify_switch_13_0_i18);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	}
MR_def_label(check_hlds__simplify__simplify_switch_13_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_post_branch_update_3_0,
		check_hlds__simplify__simplify_switch_13_0_i20);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(check_hlds__simplify__simplify_switch_13_0_i36);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__simplify__simplify_switch_13_0_i22);
MR_def_label(check_hlds__simplify__simplify_switch_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module73)
	MR_init_entry1(check_hlds__simplify__simplify_disj_10_0);
	MR_init_label8(check_hlds__simplify__simplify_disj_10_0,66,4,5,10,11,14,16,19)
	MR_init_label8(check_hlds__simplify__simplify_disj_10_0,20,13,21,25,28,29,22,30)
	MR_init_label6(check_hlds__simplify__simplify_disj_10_0,7,32,33,34,3,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_disj_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__simplify_disj_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__simplify_disj_10_0_i4);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		check_hlds__simplify__simplify_disj_10_0_i5);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i7);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__simplify_disj_10_0_i10);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__simplify__simplify_disj_10_0_i11);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i7);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_warn_simple_code_1_0,
		check_hlds__simplify__simplify_disj_10_0_i14);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i16);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i13);
	}
	}
MR_def_label(check_hlds__simplify__simplify_disj_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_disj_10_0_i19);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,42);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(2,5,1);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_add_error_spec_3_0,
		check_hlds__simplify__simplify_disj_10_0_i20);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i21);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i25);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i33);
	}
	}
MR_def_label(check_hlds__simplify__simplify_disj_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__simplify_disj_10_0_i28);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_fully_strict_2_0,
		check_hlds__simplify__simplify_disj_10_0_i29);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i33);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		check_hlds__simplify__simplify_disj_10_0_i30);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i33);
	}
MR_def_label(check_hlds__simplify__simplify_disj_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		check_hlds__simplify__simplify_disj_10_0_i32);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
MR_def_label(check_hlds__simplify__simplify_disj_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_post_branch_update_3_0,
		check_hlds__simplify__simplify_disj_10_0_i34);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__simplify__simplify_disj_10_0_i66);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__simplify__simplify_disj_10_0_i36);
MR_def_label(check_hlds__simplify__simplify_disj_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module74)
	MR_init_entry1(check_hlds__simplify__simplify_info_requantify_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_requantify_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 7);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module75)
	MR_init_entry1(check_hlds__simplify__simplify_info_rerun_det_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_rerun_det_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 9);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__quantification__implicitly_quantify_goal_10_0);
MR_decl_entry(check_hlds__mode_util__recompute_instmap_delta_8_0);
MR_decl_entry(check_hlds__det_analysis__det_get_soln_context_2_0);
MR_decl_entry(check_hlds__det_analysis__det_infer_goal_11_0);

MR_BEGIN_MODULE(check_hlds__simplify_module76)
	MR_init_entry1(check_hlds__simplify__do_process_clause_body_goal_6_0);
	MR_init_label8(check_hlds__simplify__do_process_clause_body_goal_6_0,2,3,4,5,6,9,11,12)
	MR_init_label8(check_hlds__simplify__do_process_clause_body_goal_6_0,13,14,15,16,17,8,19,22)
	MR_init_label8(check_hlds__simplify__do_process_clause_body_goal_6_0,24,25,26,27,28,29,30,31)
	MR_init_label8(check_hlds__simplify__do_process_clause_body_goal_6_0,32,33,34,35,36,37,38,39)
	MR_init_label2(check_hlds__simplify__do_process_clause_body_goal_6_0,40,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__do_process_clause_body_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i2);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i3);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i4);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i5);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i6);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_requantify_1_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i9);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__do_process_clause_body_goal_6_0_i8);
	}
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i11);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(hlds__quantification__implicitly_quantify_goal_10_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i12);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_varset_3_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i13);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i14);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i15);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i16);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_ctfield(0, MR_sv(5), 6);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_8_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i17);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i19);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_rerun_det_1_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i22);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__do_process_clause_body_goal_6_0_i20);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i24);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_analysis__det_get_soln_context_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i25);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i26);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i27);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i28);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i29);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i30);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i31);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i32);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i33);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i34);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i35);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i36);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i37);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_module_info_3_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i38);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_det_info_2_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i39);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__det_analysis__det_infer_goal_11_0,
		check_hlds__simplify__do_process_clause_body_goal_6_0_i40);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(check_hlds__simplify__do_process_clause_body_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__worst_contains_trace_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_add_feature_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_remove_feature_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module77)
	MR_init_entry1(check_hlds__simplify__goal_contains_trace_3_0);
	MR_init_label8(check_hlds__simplify__goal_contains_trace_3_0,8,9,10,11,12,13,14,15)
	MR_init_label8(check_hlds__simplify__goal_contains_trace_3_0,16,17,18,19,20,21,22,23)
	MR_init_label5(check_hlds__simplify__goal_contains_trace_3_0,24,25,2,28,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__goal_contains_trace_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i8);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(check_hlds__simplify__goal_contains_trace_3_0_i8) MR_AND
		MR_LABEL_AP(check_hlds__simplify__goal_contains_trace_3_0_i9) MR_AND
		MR_LABEL_AP(check_hlds__simplify__goal_contains_trace_3_0_i11) MR_AND
		MR_LABEL_AP(check_hlds__simplify__goal_contains_trace_3_0_i13) MR_AND
		MR_LABEL_AP(check_hlds__simplify__goal_contains_trace_3_0_i15) MR_AND
		MR_LABEL_AP(check_hlds__simplify__goal_contains_trace_3_0_i17) MR_AND
		MR_LABEL_AP(check_hlds__simplify__goal_contains_trace_3_0_i19) MR_AND
		MR_LABEL_AP(check_hlds__simplify__goal_contains_trace_3_0_i25));
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_r3;
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__goal_list_contains_trace_4_0,
		check_hlds__simplify__goal_contains_trace_3_0_i10);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(check_hlds__simplify__goal_list_contains_trace_4_0,
		check_hlds__simplify__goal_contains_trace_3_0_i12);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr1, 3);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__case_list_contains_trace_4_0,
		check_hlds__simplify__goal_contains_trace_3_0_i14);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i16);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i18);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
	}
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i20);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_r2;
	}
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i21);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_r2;
	}
	MR_np_localcall_lab(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i22);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__simplify__goal_contains_trace_3_0_i23);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__simplify__goal_contains_trace_3_0_i24);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i2);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("simplify.m", 10);
	MR_r2 = (MR_Word) MR_string_const("goal_contains_trace: shorthand", 30);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__simplify__goal_contains_trace_3_0_i2);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_contains_trace_3_0_i28);
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i30);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_remove_feature_3_0,
		check_hlds__simplify__goal_contains_trace_3_0_i30);
MR_def_label(check_hlds__simplify__goal_contains_trace_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module78)
	MR_init_entry1(check_hlds__simplify__goal_list_contains_trace_4_0);
	MR_init_label4(check_hlds__simplify__goal_list_contains_trace_4_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__goal_list_contains_trace_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__goal_list_contains_trace_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__goal_list_contains_trace_4_0_i4);
MR_def_label(check_hlds__simplify__goal_list_contains_trace_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__simplify__goal_list_contains_trace_4_0_i5);
MR_def_label(check_hlds__simplify__goal_list_contains_trace_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__simplify__goal_list_contains_trace_4_0,
		check_hlds__simplify__goal_list_contains_trace_4_0_i6);
MR_def_label(check_hlds__simplify__goal_list_contains_trace_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__simplify__goal_list_contains_trace_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module79)
	MR_init_entry1(check_hlds__simplify__case_list_contains_trace_4_0);
	MR_init_label4(check_hlds__simplify__case_list_contains_trace_4_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__case_list_contains_trace_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__case_list_contains_trace_4_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__case_list_contains_trace_4_0_i4);
MR_def_label(check_hlds__simplify__case_list_contains_trace_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__worst_contains_trace_2_0,
		check_hlds__simplify__case_list_contains_trace_4_0_i5);
MR_def_label(check_hlds__simplify__case_list_contains_trace_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(check_hlds__simplify__case_list_contains_trace_4_0,
		check_hlds__simplify__case_list_contains_trace_4_0_i6);
MR_def_label(check_hlds__simplify__case_list_contains_trace_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__simplify__case_list_contains_trace_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module80)
	MR_init_entry1(check_hlds__simplify__simplify_info_reinit_4_0);
	MR_init_label1(check_hlds__simplify__simplify_info_reinit_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_reinit_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(fn__check_hlds__common__common_info_init_0_0,
		check_hlds__simplify__simplify_info_reinit_4_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_reinit_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module81)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_found_contains_trace_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_get_found_contains_trace_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module82)
	MR_init_entry1(check_hlds__simplify__simplify_info_set_simplifications_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_set_simplifications_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_ctfield(0, MR_tempr2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_tfield(0, MR_tempr1, 13) = MR_ctfield(0, MR_tempr2, 13);
	MR_tfield(0, MR_tempr1, 14) = MR_ctfield(0, MR_tempr2, 14);
	MR_tfield(0, MR_tempr1, 15) = MR_ctfield(0, MR_tempr2, 15);
	MR_tfield(0, MR_tempr1, 16) = MR_ctfield(0, MR_tempr2, 16);
	MR_tfield(0, MR_tempr1, 17) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module83)
	MR_init_entry1(check_hlds__simplify__simplify_process_clause_body_goal_6_0);
	MR_init_label8(check_hlds__simplify__simplify_process_clause_body_goal_6_0,2,3,9,7,11,6,13,14)
	MR_init_label6(check_hlds__simplify__simplify_process_clause_body_goal_6_0,15,5,17,18,20,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_process_clause_body_goal_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_simplifications_2_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i2);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i3);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_common_struct_1_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i9);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_process_clause_body_goal_6_0_i7);
	}
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__simplify__simplify_process_clause_body_goal_6_0_i6);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_opt_duplicate_calls_1_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i11);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_process_clause_body_goal_6_0_i5);
	}
	MR_r2 = MR_sv(4);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 13);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 8) = MR_ctfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r1, 9) = MR_ctfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r1, 10) = MR_ctfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r1, 11) = MR_ctfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r1, 12) = MR_ctfield(0, MR_tempr1, 12);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_simplifications_3_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i13);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__do_process_clause_body_goal_6_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i14);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_reinit_4_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i15);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__do_process_clause_body_goal_6_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i17);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__do_process_clause_body_goal_6_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i17);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_found_contains_trace_2_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i18);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_process_clause_body_goal_6_0_i20);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__goal_contains_trace_3_0,
		check_hlds__simplify__simplify_process_clause_body_goal_6_0_i21);
MR_def_label(check_hlds__simplify__simplify_process_clause_body_goal_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module84)
	MR_init_entry1(fn__check_hlds__simplify__turn_off_common_struct_threshold_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__simplify__turn_off_common_struct_threshold_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1000;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module85)
	MR_init_entry1(check_hlds__simplify__simplify_info_init_5_0);
	MR_init_label4(check_hlds__simplify__simplify_info_init_5_0,2,3,4,5)
MR_BEGIN_CODE

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
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__simplify__simplify_info_init_5_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_init_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		check_hlds__simplify__simplify_info_init_5_0_i3);
MR_def_label(check_hlds__simplify__simplify_info_init_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__simplify_info_init_5_0_i4);
MR_def_label(check_hlds__simplify__simplify_info_init_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__common__common_info_init_0_0,
		check_hlds__simplify__simplify_info_init_5_0_i5);
MR_def_label(check_hlds__simplify__simplify_info_init_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 18);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 10) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 12) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 13) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 14) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 15) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 16) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 17) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module86)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_pred_info_2_0);
	MR_init_label2(check_hlds__simplify__simplify_info_get_pred_info_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_pred_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__simplify__simplify_info_get_pred_info_2_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__simplify__simplify_info_get_pred_info_2_0_i3);
MR_def_label(check_hlds__simplify__simplify_info_get_pred_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_pred_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module87)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_has_parallel_conj_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_get_has_parallel_conj_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module88)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_has_user_event_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_info_get_has_user_event_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 17);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__count_1_0);
MR_decl_entry(check_hlds__det_util__det_info_init_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_var_name_remap_2_0);
MR_decl_entry(map__foldl_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_var_name_remap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_has_user_event_3_0);
MR_decl_entry(check_hlds__format_call__find_format_call_errors_4_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_duplicate_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module89)
	MR_init_entry1(check_hlds__simplify__simplify_proc_return_msgs_10_0);
	MR_init_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0,2,3,5,4,6,7,8,9)
	MR_init_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0,10,11,12,14,17,16,19,13)
	MR_init_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0,21,22,25,27,28,29,30,23)
	MR_init_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0,31,32,33,34,35,36,37,38)
	MR_init_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0,39,40,41,42,43,48,47,45)
	MR_init_label8(check_hlds__simplify__simplify_proc_return_msgs_10_0,56,61,63,59,66,68,54,71)
	MR_init_label2(check_hlds__simplify__simplify_proc_return_msgs_10_0,72,74)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_proc_return_msgs_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i2);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__map__count_1_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i3);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__check_hlds__simplify__turn_off_common_struct_threshold_0_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i5);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(5) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 12) = MR_ctfield(0, MR_tempr2, 12);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i6);
	}
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(6);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_init_5_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i7);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i8);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_init_5_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i9);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i10);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_pred_info_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i11);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i12);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 19;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i14);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i17);
	}
	MR_sv(6) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr2, 1);
	MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i16);
	}
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i13);
	}
	MR_sv(6) = MR_r3;
	MR_r2 = MR_ctfield(0, MR_sv(3), 1);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_add_feature_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i19);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_process_clause_body_goal_6_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i21);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_process_clause_body_goal_6_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i21);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_varset_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i22);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_do_after_front_end_1_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i25);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i23);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_var_name_remap_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i27);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,43);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,11,5);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(map__foldl_4_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i28);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i29);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_var_name_remap_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i30);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i31);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = MR_sv(6);
	MR_sv(9) = MR_sv(8);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i32);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_rtti_varmaps_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i33);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_varset_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i34);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_vartypes_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i35);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i36);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_rtti_varmaps_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i37);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_has_parallel_conj_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i38);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_parallel_conj_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i39);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_has_user_event_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i40);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_has_user_event_3_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i41);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i42);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_error_specs_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i43);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_sv(6), 13);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i48);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i47);
	}
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i45);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__format_call__find_format_call_errors_4_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i45);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i54);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_duplicate_1_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i56);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i54);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i59);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i61);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i54);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i63);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,49);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i71);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i66);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i54);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i68);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,53);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(2,5,0);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(2);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i71);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(1) = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i71);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		check_hlds__simplify__simplify_proc_return_msgs_10_0_i72);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_proc_return_msgs_10_0_i74);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
MR_def_label(check_hlds__simplify__simplify_proc_return_msgs_10_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__hlds_module__module_info_set_contains_par_conj_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_user_event_2_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_contains_user_event_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(parse_tree__error_util__accumulate_error_specs_for_proc_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module90)
	MR_init_entry1(check_hlds__simplify__simplify_procs_11_0);
	MR_init_label8(check_hlds__simplify__simplify_procs_11_0,32,4,5,6,7,9,10,8)
	MR_init_label7(check_hlds__simplify__simplify_procs_11_0,11,13,14,15,16,17,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__simplify_procs_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(check_hlds__simplify__simplify_procs_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_procs_11_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__simplify__simplify_procs_11_0_i4);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__simplify__simplify_procs_11_0_i5);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_proc_return_msgs_10_0,
		check_hlds__simplify__simplify_procs_11_0_i6);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		check_hlds__simplify__simplify_procs_11_0_i7);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_procs_11_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(check_hlds__simplify__simplify_procs_11_0_i8);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_contains_par_conj_2_0,
		check_hlds__simplify__simplify_procs_11_0_i10);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_user_event_2_0,
		check_hlds__simplify__simplify_procs_11_0_i11);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_procs_11_0_i13);
	}
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_sv(3);
	MR_sv(6) = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__simplify__simplify_procs_11_0_i15);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_contains_user_event_2_0,
		check_hlds__simplify__simplify_procs_11_0_i14);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_sv(3);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__simplify__simplify_procs_11_0_i15);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		check_hlds__simplify__simplify_procs_11_0_i16);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__error_util__accumulate_error_specs_for_proc_3_0,
		check_hlds__simplify__simplify_procs_11_0_i17);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(check_hlds__simplify__simplify_procs_11_0_i32);
MR_def_label(check_hlds__simplify__simplify_procs_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_r3 = MR_r6;
	MR_decr_sp_and_return(11);
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
MR_decl_entry(parse_tree__prog_out__maybe_report_stats_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module91)
	MR_init_entry1(check_hlds__simplify__simplify_pred_10_0);
	MR_init_label8(check_hlds__simplify__simplify_pred_10_0,2,3,6,4,9,10,11,12)
	MR_init_label3(check_hlds__simplify__simplify_pred_10_0,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_pred_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("% Simplifying ", 14);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		check_hlds__simplify__simplify_pred_10_0_i2);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		check_hlds__simplify__simplify_pred_10_0_i3);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		check_hlds__simplify__simplify_pred_10_0_i6);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__simplify__simplify_pred_10_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_r1, 0) = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r1, 8) = MR_ctfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r1, 9) = MR_ctfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r1, 10) = MR_ctfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r1, 11) = MR_ctfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r1, 12) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__init_error_spec_accumulator_0_0,
		check_hlds__simplify__simplify_pred_10_0_i9);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__error_util__init_error_spec_accumulator_0_0,
		check_hlds__simplify__simplify_pred_10_0_i9);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_procs_11_0,
		check_hlds__simplify__simplify_pred_10_0_i10);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__simplify__simplify_pred_10_0_i11);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__error_spec_accumulator_to_list_1_0,
		check_hlds__simplify__simplify_pred_10_0_i12);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__simplify__simplify_pred_10_0_i13);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 43;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__simplify_pred_10_0_i14);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_report_stats_3_0,
		check_hlds__simplify__simplify_pred_10_0_i15);
MR_def_label(check_hlds__simplify__simplify_pred_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module92)
	MR_init_entry1(check_hlds__simplify__simplify_proc_9_0);
	MR_init_label1(check_hlds__simplify__simplify_proc_9_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_proc_9_0);
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
		check_hlds__simplify__simplify_proc_9_0_i2);
MR_def_label(check_hlds__simplify__simplify_proc_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_proc_return_msgs_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module93)
	MR_init_entry1(check_hlds__simplify__simplify_may_introduce_calls_3_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(check_hlds__simplify_module94)
	MR_init_entry1(check_hlds__simplify__find_simplifications_3_0);
	MR_init_label8(check_hlds__simplify__find_simplifications_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(check_hlds__simplify__find_simplifications_3_0,10,11,14,15,18,19,22,23)
	MR_init_label2(check_hlds__simplify__find_simplifications_3_0,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__find_simplifications_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 16;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i2);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 17;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i3);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 29;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i4);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 30;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i5);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 31;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i6);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 293;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i7);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 274;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i8);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 291;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i9);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = (MR_Integer) 292;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__simplify__find_simplifications_3_0_i10);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i11);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i11);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i14);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
MR_def_label(check_hlds__simplify__find_simplifications_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i15);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i15);
	}
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i18);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
MR_def_label(check_hlds__simplify__find_simplifications_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i19);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i19);
	}
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i22);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
MR_def_label(check_hlds__simplify__find_simplifications_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i23);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i23);
	}
	MR_r5 = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i26);
MR_def_label(check_hlds__simplify__find_simplifications_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Integer) 0;
MR_def_label(check_hlds__simplify__find_simplifications_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i27);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__simplify__find_simplifications_3_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 9) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 10) = MR_r1;
	MR_tfield(0, MR_tempr1, 11) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 12) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__simplify__find_simplifications_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 6) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 9) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 10) = MR_r1;
	MR_tfield(0, MR_tempr1, 11) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 12) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module95)
	MR_init_entry1(fn__check_hlds__simplify__simplifications_to_list_1_0);
	MR_init_label8(fn__check_hlds__simplify__simplifications_to_list_1_0,2,4,5,7,8,10,11,13)
	MR_init_label8(fn__check_hlds__simplify__simplifications_to_list_1_0,14,16,17,19,20,22,23,25)
	MR_init_label8(fn__check_hlds__simplify__simplifications_to_list_1_0,26,28,29,31,32,34,35,37)
	MR_init_label8(fn__check_hlds__simplify__simplifications_to_list_1_0,38,41,42,43,44,45,46,47)
	MR_init_label4(fn__check_hlds__simplify__simplifications_to_list_1_0,48,49,50,51)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__simplify__simplifications_to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(0, MR_r1, 12);
	MR_r5 = MR_ctfield(0, MR_r1, 11);
	MR_r6 = MR_ctfield(0, MR_r1, 10);
	MR_r7 = MR_ctfield(0, MR_r1, 9);
	MR_r8 = MR_ctfield(0, MR_r1, 8);
	MR_r9 = MR_ctfield(0, MR_r1, 7);
	MR_r10 = MR_ctfield(0, MR_r1, 6);
	MR_r11 = MR_ctfield(0, MR_r1, 5);
	MR_r12 = MR_ctfield(0, MR_r1, 4);
	MR_r13 = MR_ctfield(0, MR_r1, 3);
	MR_r14 = MR_ctfield(0, MR_r1, 2);
	MR_r15 = MR_ctfield(0, MR_r1, 1);
	MR_r16 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r16,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i2);
	}
	MR_r1 = MR_r15;
	MR_r2 = MR_r14;
	MR_r3 = MR_r13;
	MR_r16 = MR_r12;
	MR_r12 = MR_r4;
	MR_r4 = MR_r16;
	MR_r17 = MR_r11;
	MR_r11 = MR_r5;
	MR_r5 = MR_r17;
	MR_r18 = MR_r10;
	MR_r10 = MR_r6;
	MR_r6 = MR_r18;
	MR_r19 = MR_r9;
	MR_r9 = MR_r7;
	MR_r7 = MR_r19;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,12,0);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i4);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r15;
	MR_r2 = MR_r14;
	MR_r3 = MR_r13;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r12;
	MR_r12 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_r11;
	MR_r11 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr3 = MR_r10;
	MR_r10 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr4 = MR_r9;
	MR_r9 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i5);
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
	MR_r11 = MR_r12;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,12,1);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i7);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,5)
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
	MR_r11 = MR_r12;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i8);
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
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,12,2);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i10);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,8)
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
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i11);
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
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,12,3);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i13);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,11)
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
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
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
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(1,12,4);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i16);
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
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i17);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,12,5);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i19);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i20);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,12,6);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i22);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i23);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,12,7);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i25);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i26);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,12,8);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i28);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i29);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,12,9);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i31);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i32);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(1,12,10);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i34);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(11) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i35);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,12,11);
	MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i37);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__simplifications_to_list_1_0_i38);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,12,12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i41);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i41);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i42);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i43);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i44);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i45);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i46);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i47);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i48);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i49);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i50);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__simplify__simplifications_to_list_1_0_i51);
MR_def_label(fn__check_hlds__simplify__simplifications_to_list_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module96)
	MR_init_entry1(fn__check_hlds__simplify__list_to_simplifications_1_0);
	MR_init_label8(fn__check_hlds__simplify__list_to_simplifications_1_0,3,2,5,7,6,9,11,10)
	MR_init_label8(fn__check_hlds__simplify__list_to_simplifications_1_0,13,15,14,17,19,18,21,23)
	MR_init_label8(fn__check_hlds__simplify__list_to_simplifications_1_0,22,25,27,26,29,31,30,33)
	MR_init_label8(fn__check_hlds__simplify__list_to_simplifications_1_0,35,34,37,39,38,41,43,42)
	MR_init_label6(fn__check_hlds__simplify__list_to_simplifications_1_0,45,47,46,49,51,50)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__simplify__list_to_simplifications_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i3);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i2);
	}
	MR_r3 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i5);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i7);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_sv(3) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i9);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(3) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i11);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i10);
	}
	MR_r3 = MR_sv(1);
	MR_sv(4) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i13);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(4) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i15);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i14);
	}
	MR_r3 = MR_sv(1);
	MR_sv(5) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i17);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(5) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i19);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i18);
	}
	MR_r3 = MR_sv(1);
	MR_sv(6) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i21);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(6) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i23);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i22);
	}
	MR_r3 = MR_sv(1);
	MR_sv(7) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i25);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(7) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i27);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i26);
	}
	MR_r3 = MR_sv(1);
	MR_sv(8) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i29);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(8) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i31);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i30);
	}
	MR_r3 = MR_sv(1);
	MR_sv(9) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i33);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(9) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i35);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i34);
	}
	MR_r3 = MR_sv(1);
	MR_sv(10) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i37);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(10) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i39);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i38);
	}
	MR_r3 = MR_sv(1);
	MR_sv(11) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i41);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(11) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i43);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i42);
	}
	MR_r3 = MR_sv(1);
	MR_sv(12) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i45);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(12) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 11;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i47);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i46);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i49);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__simplify, simplification);
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(list__member_2_0,
		fn__check_hlds__simplify__list_to_simplifications_1_0_i51);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__simplify__list_to_simplifications_1_0_i50);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_tfield(0, MR_r1, 5) = MR_sv(7);
	MR_tfield(0, MR_r1, 6) = MR_sv(8);
	MR_tfield(0, MR_r1, 7) = MR_sv(9);
	MR_tfield(0, MR_r1, 8) = MR_sv(10);
	MR_tfield(0, MR_r1, 9) = MR_sv(11);
	MR_tfield(0, MR_r1, 10) = MR_sv(12);
	MR_tfield(0, MR_r1, 11) = MR_sv(1);
	MR_tfield(0, MR_r1, 12) = (MR_Integer) 1;
	MR_decr_sp_and_return(13);
MR_def_label(fn__check_hlds__simplify__list_to_simplifications_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(3);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(6);
	MR_tfield(0, MR_r1, 5) = MR_sv(7);
	MR_tfield(0, MR_r1, 6) = MR_sv(8);
	MR_tfield(0, MR_r1, 7) = MR_sv(9);
	MR_tfield(0, MR_r1, 8) = MR_sv(10);
	MR_tfield(0, MR_r1, 9) = MR_sv(11);
	MR_tfield(0, MR_r1, 10) = MR_sv(12);
	MR_tfield(0, MR_r1, 11) = MR_sv(1);
	MR_tfield(0, MR_r1, 12) = (MR_Integer) 0;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module97)
	MR_init_entry1(check_hlds__simplify__simplify_do_warn_known_bad_format_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_warn_known_bad_format_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 2);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module98)
	MR_init_entry1(check_hlds__simplify__simplify_do_warn_unknown_format_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_do_warn_unknown_format_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 3);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module99)
	MR_init_entry1(fn__check_hlds__simplify__make_arg_always_boxed_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__simplify__make_arg_always_boxed_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module100)
	MR_init_entry1(check_hlds__simplify__simplify_info_recompute_atomic_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_recompute_atomic_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 8);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module101)
	MR_init_entry1(check_hlds__simplify__simplify_info_get_cost_delta_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_get_cost_delta_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module102)
	MR_init_entry1(check_hlds__simplify__simplify_info_apply_type_substitution_3_0);
	MR_init_label6(check_hlds__simplify__simplify_info_apply_type_substitution_3_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__simplify__simplify_info_apply_type_substitution_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_vartypes_2_0,
		check_hlds__simplify__simplify_info_apply_type_substitution_3_0_i2);
MR_def_label(check_hlds__simplify__simplify_info_apply_type_substitution_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__simplify__IntroducedFrom__pred__simplify_info_apply_type_substitution__3232__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(2) = MR_ctfield(0, MR_sv(4), 12);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(map__map_values_3_0,
		check_hlds__simplify__simplify_info_apply_type_substitution_3_0_i3);
MR_def_label(check_hlds__simplify__simplify_info_apply_type_substitution_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__simplify__simplify_info_apply_type_substitution_3_0_i4);
MR_def_label(check_hlds__simplify__simplify_info_apply_type_substitution_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__simplify__simplify_info_apply_type_substitution_3_0_i5);
MR_def_label(check_hlds__simplify__simplify_info_apply_type_substitution_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,
		check_hlds__simplify__simplify_info_apply_type_substitution_3_0_i6);
MR_def_label(check_hlds__simplify__simplify_info_apply_type_substitution_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_set_var_types_3_0,
		check_hlds__simplify__simplify_info_apply_type_substitution_3_0_i7);
MR_def_label(check_hlds__simplify__simplify_info_apply_type_substitution_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__simplify__simplify_info_set_rtti_varmaps_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module103)
	MR_init_entry1(__Unify___check_hlds__simplify__before_after_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(check_hlds__simplify_module104)
	MR_init_entry1(__Compare___check_hlds__simplify__before_after_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(check_hlds__simplify_module105)
	MR_init_entry1(__Unify___check_hlds__simplify__simplification_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(check_hlds__simplify_module106)
	MR_init_entry1(__Compare___check_hlds__simplify__simplification_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(check_hlds__simplify_module107)
	MR_init_entry1(__Unify___check_hlds__simplify__simplifications_0_0);
	MR_init_label2(__Unify___check_hlds__simplify__simplifications_0_0,4,1)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 5);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 6);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 7);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 7);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 8);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 8);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 9);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 9);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 10);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 10);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 11);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 11);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplifications_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 12);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 12);
	MR_r1 = (MR_r1 == MR_tempr3);
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


MR_BEGIN_MODULE(check_hlds__simplify_module108)
	MR_init_entry1(__Compare___check_hlds__simplify__simplifications_0_0);
	MR_init_label8(__Compare___check_hlds__simplify__simplifications_0_0,3,2,5,9,13,17,21,25)
	MR_init_label7(__Compare___check_hlds__simplify__simplifications_0_0,29,33,37,41,45,49,109)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__simplify__simplifications_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i3);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
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
	MR_sv(24) = MR_ctfield(0, MR_tempr5, 12);
	MR_sv(23) = MR_ctfield(0, MR_tempr5, 11);
	MR_sv(22) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(21) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(12) = MR_ctfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i5);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i9);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i13);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i17);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i21);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i25);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i29);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i33);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i37);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i41);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i45);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplifications_0_0_i49);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplifications_0_0_i109);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(24);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__simplify__simplifications_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(25);
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

MR_BEGIN_MODULE(check_hlds__simplify_module109)
	MR_init_entry1(__Unify___check_hlds__simplify__simplify_info_0_0);
	MR_init_label8(__Unify___check_hlds__simplify__simplify_info_0_0,4,6,8,10,12,14,16,18)
	MR_init_label2(__Unify___check_hlds__simplify__simplify_info_0_0,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__simplify__simplify_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i20);
	}
	MR_incr_sp(35);
	MR_sv(35) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_ctfield(0, MR_tempr1, 15);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 16);
	MR_sv(17) = MR_ctfield(0, MR_tempr1, 17);
	MR_sv(18) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(19) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(20) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(21) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(22) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(23) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(24) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(25) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(26) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(27) = MR_ctfield(0, MR_tempr2, 10);
	MR_sv(28) = MR_ctfield(0, MR_tempr2, 11);
	MR_sv(29) = MR_ctfield(0, MR_tempr2, 12);
	MR_sv(30) = MR_ctfield(0, MR_tempr2, 13);
	MR_sv(31) = MR_ctfield(0, MR_tempr2, 14);
	MR_sv(32) = MR_ctfield(0, MR_tempr2, 15);
	MR_sv(33) = MR_ctfield(0, MR_tempr2, 16);
	MR_sv(34) = MR_ctfield(0, MR_tempr2, 17);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
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
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i6);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___check_hlds__simplify__simplifications_0_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i8);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___check_hlds__common__common_info_0_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i10);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___hlds__instmap__instmap_0_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i12);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i14);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i16);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(24))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(25))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(9) != MR_sv(26))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(10) != MR_sv(27))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(11) != MR_sv(28))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Unify___check_hlds__simplify__simplify_info_0_0_i18);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(13) != MR_sv(30))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(14) != MR_sv(31))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(15) != MR_sv(32))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	if ((MR_sv(16) != MR_sv(33))) {
		MR_GOTO_LAB(__Unify___check_hlds__simplify__simplify_info_0_0_i1);
	}
	MR_r1 = (MR_sv(17) == MR_sv(34));
	MR_decr_sp_and_return(35);
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__simplify__simplify_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(35);
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

MR_BEGIN_MODULE(check_hlds__simplify_module110)
	MR_init_entry1(__Compare___check_hlds__simplify__simplify_info_0_0);
	MR_init_label8(__Compare___check_hlds__simplify__simplify_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label8(__Compare___check_hlds__simplify__simplify_info_0_0,29,33,37,41,45,49,53,57)
	MR_init_label4(__Compare___check_hlds__simplify__simplify_info_0_0,61,65,69,149)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__simplify__simplify_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i3);
	}
	MR_incr_sp(35);
	MR_sv(35) = (MR_Word) MR_succip;
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
	MR_sv(34) = MR_ctfield(0, MR_tempr5, 17);
	MR_sv(33) = MR_ctfield(0, MR_tempr5, 16);
	MR_sv(32) = MR_ctfield(0, MR_tempr5, 15);
	MR_sv(31) = MR_ctfield(0, MR_tempr5, 14);
	MR_sv(30) = MR_ctfield(0, MR_tempr5, 13);
	MR_sv(29) = MR_ctfield(0, MR_tempr5, 12);
	MR_sv(28) = MR_ctfield(0, MR_tempr5, 11);
	MR_sv(27) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(26) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(25) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(24) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(23) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(22) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(21) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(17) = MR_ctfield(0, MR_tempr6, 17);
	MR_sv(16) = MR_ctfield(0, MR_tempr6, 16);
	MR_sv(15) = MR_ctfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_ctfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_ctfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_ctfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
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
	MR_np_call_localret_ent(__Compare___check_hlds__det_util__det_info_0_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i5);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i9);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___check_hlds__simplify__simplifications_0_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i13);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___check_hlds__common__common_info_0_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i17);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___hlds__instmap__instmap_0_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i21);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i25);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i29);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i33);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i37);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i41);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i45);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i49);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i53);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i57);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(31);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i61);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(32);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i65);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__simplify__simplify_info_0_0_i69);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__simplify__simplify_info_0_0_i149);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(34);
	MR_succip_word = MR_sv(35);
	MR_decr_sp(35);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__simplify__simplify_info_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(35);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__simplify_module111)
	MR_init_entry1(__Unify___check_hlds__simplify__var_renaming_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__simplify__var_renaming_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
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

MR_BEGIN_MODULE(check_hlds__simplify_module112)
	MR_init_entry1(__Compare___check_hlds__simplify__var_renaming_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__simplify__var_renaming_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
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


MR_BEGIN_MODULE(check_hlds__simplify_module113)
	MR_init_entry1(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1);
	MR_init_label1(__Unify___check_hlds__simplify__parse_tree__prog_data__eval_method_0_1,1)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
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

MR_decl_entry(svvarset__name_var_4_0);

MR_BEGIN_MODULE(check_hlds__simplify_module114)
	MR_init_entry1(check_hlds__simplify__IntroducedFrom__pred__simplify_proc_return_msgs__408__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__IntroducedFrom__pred__simplify_proc_return_msgs__408__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_tailcall_ent(svvarset__name_var_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module115)
	MR_init_entry1(check_hlds__simplify__IntroducedFrom__pred__renaming_transitive_closure__2609__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__IntroducedFrom__pred__renaming_transitive_closure__2609__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_110_97_109_105_110_103_95_116_114_97_110_115_105_116_105_118_101_95_99_108_111_115_117_114_101_95_95_50_54_48_57_95_95_49_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module116)
	MR_init_entry1(check_hlds__simplify__IntroducedFrom__pred__create_test_unification__2691__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__IntroducedFrom__pred__create_test_unification__2691__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module117)
	MR_init_entry1(check_hlds__simplify__IntroducedFrom__pred__simplify_info_apply_type_substitution__3232__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__simplify__IntroducedFrom__pred__simplify_info_apply_type_substitution__3232__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_110_102_111_95_97_112_112_108_121_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_51_50_51_50_95_95_49_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module118)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0);
	MR_init_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i1);
	}
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("*", 1)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i3);
	}
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("unchecked_quotient", 18)) == 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0_i3);
	}
	MR_r1 = (strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("unchecked_rem", 13)) == 0);
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_0,3)
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

MR_BEGIN_MODULE(check_hlds__simplify_module119)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0);
	MR_init_label7(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0,8,9,10,6,11,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("bits_per_int", 12)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i6);
	}
	MR_r1 = MR_ctfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(fn__int__bits_per_int_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_sv(1) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tempr4 = MR_sv(6);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 5) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 4) = (MR_Word) MR_TAG_COMMON(0,0,55);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("quot_bits_per_int", 17)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("unchecked_quotient", 18);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(check_hlds__simplify__simplify_library_call_int_arity2_8_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("rem_bits_per_int", 16)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("unchecked_rem", 13);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(check_hlds__simplify__simplify_library_call_int_arity2_8_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("times_bits_per_int", 18)) != 0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("*", 1);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(check_hlds__simplify__simplify_library_call_int_arity2_8_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_108_105_98_114_97_114_121_95_99_97_108_108_95_95_91_51_93_95_48_10_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_is_higher_order_1_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(check_hlds__unify_proc__lookup_mode_num_5_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(hlds__special_pred__special_pred_is_generated_lazily_2_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module120)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0);
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,2,3,4,7,5,11,13,14)
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,15,16,9,19,17,21,23,24)
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,25,26,27,29,31,32,30,34)
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,35,38,40,41,28,42,43,44)
	MR_init_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,48,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_module_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_var_types_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i5);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_sv(8), 1);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__simplify__type_info_locn_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i7);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i41);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i9);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("builtin_unify_pred", 18);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(7);
	MR_r11 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__goal_util__generate_simple_call_12_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_2_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i16);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,16)
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
	MR_sv(4) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i48);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i19);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i17);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i24);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__check_hlds__simplify__this_file_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i21);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("type_to_ctor_and_args failed", 28);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i23);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i24);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__unify_proc__lookup_mode_num_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i25);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i26);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 217;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i27);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i29);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i28);
	}
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i31);
	}
	MR_r2 = MR_sv(11);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i30);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__special_pred__special_pred_is_generated_lazily_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i32);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i28);
	}
	MR_r2 = MR_sv(11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__simplify__make_type_info_vars_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i34);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i35);
	}
	MR_r6 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i35);
	}
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(4) = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i40);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(fn__check_hlds__simplify__this_file_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i38);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("process_compl_unify: more than one typeinfo for one type var", 60);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i40);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r5;
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i41);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i48);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(check_hlds__simplify__make_type_info_vars_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i42);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__simplify__call_specific_unify_10_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i43);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_2_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i44);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_sv(4) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i48);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0_i49);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_99_111_109_112_108_95_117_110_105_102_121_95_95_91_53_93_95_48_12_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module121)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0);
	MR_init_label2(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
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
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_53_44_32_54_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unify", 5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_sv(2);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_r10 = MR_sv(1);
	MR_r11 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__goal_util__generate_simple_call_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__is_unreachable_1_0);

MR_BEGIN_MODULE(check_hlds__simplify_module122)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0);
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,96,4,3,5,10,14,15,11)
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,21,22,20,24,25,19,26,30)
	MR_init_label8(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,29,28,34,35,36,38,17,39)
	MR_init_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i5);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_r5;
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_goal_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i10);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i11);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_undo_goal_updates_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__append_3_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i15);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i96);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_get_instmap_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i21);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__is_unreachable_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i22);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i20);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i19);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i24);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i25);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i17);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i26);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i30);
	}
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i30);
	}
	MR_r2 = MR_r1;
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i29);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i28);
	}
	MR_r2 = MR_r1;
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i38);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i34);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_goal__fail_goal_with_context_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i35);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i36);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_np_call_localret_ent(list__reverse_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i38);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__simplify__conjoin_goal_and_rev_goal_list_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_info_update_instmap_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i40);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_99_111_110_106_95_95_91_52_93_95_48_8_0_i96);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__simplify_module123)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_110_97_109_105_110_103_95_116_114_97_110_115_105_116_105_118_101_95_99_108_111_115_117_114_101_95_95_50_54_48_57_95_95_49_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_110_97_109_105_110_103_95_116_114_97_110_115_105_116_105_118_101_95_99_108_111_115_117_114_101_95_95_50_54_48_57_95_95_49_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(check_hlds__simplify__find_renamed_var_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);

MR_BEGIN_MODULE(check_hlds__simplify_module124)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_110_102_111_95_97_112_112_108_121_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_51_50_51_50_95_95_49_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_115_105_109_112_108_105_102_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_110_102_111_95_97_112_112_108_121_95_116_121_112_101_95_115_117_98_115_116_105_116_117_116_105_111_110_95_95_51_50_51_50_95_95_49_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__simplify__init(void);
void mercury__check_hlds__simplify__init_type_tables(void);
void mercury__check_hlds__simplify__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__simplify__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__simplify__init_complexity_procs(void);
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
		mercury_data_check_hlds__simplify__type_ctor_info_var_renaming_0,
		check_hlds__simplify__var_renaming_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_simplify_info_0,
		check_hlds__simplify__simplify_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0,
		check_hlds__simplify__simplifications_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_simplification_0,
		check_hlds__simplify__simplification_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__simplify__type_ctor_info_before_after_0,
		check_hlds__simplify__before_after_0_0);
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
		&mercury_data_check_hlds__simplify__type_ctor_info_var_renaming_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_simplify_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_simplifications_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_simplification_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__simplify__type_ctor_info_before_after_0);
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

void mercury__check_hlds__simplify__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__simplify__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
