/*
** Automatically generated from `det_report.m'
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
INIT mercury__check_hlds__det_report__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.det_report.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "check_hlds.det_report.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "check_hlds.det_report.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "check_hlds.det_report.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "check_hlds.det_report.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "check_hlds.det_report.c"
#line 49 "check_hlds.det_report.c"
#include "check_hlds.det_report.mh"

#line 52 "check_hlds.det_report.c"
#line 53 "check_hlds.det_report.c"
#ifndef CHECK_HLDS__DET_REPORT_DECL_GUARD
#define CHECK_HLDS__DET_REPORT_DECL_GUARD

#line 57 "check_hlds.det_report.c"
#line 58 "check_hlds.det_report.c"

#endif
#line 61 "check_hlds.det_report.c"

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
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_String f2;
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
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

MR_STATIC_LINKAGE const struct mercury_type_8 mercury_vector_common_8_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__det_report__type_ctor_info_cc_unify_context_0,
	mercury_data_check_hlds__det_report__type_ctor_info_det_comparison_0,
	mercury_data_check_hlds__det_report__type_ctor_info_failing_context_0,
	mercury_data_check_hlds__det_report__type_ctor_info_failing_goal_0,
	mercury_data_check_hlds__det_report__type_ctor_info_options_to_restore_0,
	mercury_data_check_hlds__det_report__type_ctor_info_seen_call_id_0,
	mercury_data_check_hlds__det_report__type_ctor_info_switch_context_0,
	mercury_data_check_hlds__det_report__type_ctor_info_switch_match_0;
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0, 2,4,6,11,12,17,20,16,23,24)
MR_decl_label5(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0, 25,30,38,39,3)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0, 2,3,4,5,9,7,11,6,13,19)
MR_decl_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0, 23,24,16,31,32,35,36,12,46,47)
MR_decl_label10(check_hlds__det_report__check_determinism_8_0, 2,3,5,6,9,10,11,12,17,20)
MR_decl_label10(check_hlds__det_report__check_determinism_8_0, 23,27,114,33,34,36,37,38,39,40)
MR_decl_label10(check_hlds__det_report__check_determinism_8_0, 8,116,44,45,46,47,48,49,50,51)
MR_decl_label10(check_hlds__det_report__check_determinism_8_0, 52,53,54,55,56,57,4,60,61,62)
MR_decl_label10(check_hlds__det_report__check_determinism_8_0, 65,66,67,68,72,81,83,84,85,88)
MR_decl_label2(check_hlds__det_report__check_determinism_8_0, 97,64)
MR_decl_label10(check_hlds__det_report__compare_determinisms_3_0, 2,3,44,7,5,4,13,117,11,18)
MR_decl_label10(check_hlds__det_report__compare_determinisms_3_0, 16,23,24,57,21,27,28,10,32,31)
MR_decl_label2(check_hlds__det_report__compare_determinisms_3_0, 37,36)
MR_decl_label4(check_hlds__det_report__compute_covered_cons_ids_3_0, 11,3,4,5)
MR_decl_label7(check_hlds__det_report__cons_id_list_to_pieces_2_0, 43,4,7,6,11,16,19)
MR_decl_label10(check_hlds__det_report__det_check_lambda_7_0, 2,4,5,6,7,8,9,11,17,21)
MR_decl_label5(check_hlds__det_report__det_check_lambda_7_0, 34,35,36,37,42)
MR_decl_label5(check_hlds__det_report__det_diagnose_conj_7_0, 18,4,5,6,7)
MR_decl_label10(check_hlds__det_report__det_diagnose_disj_10_0, 46,4,5,6,10,11,13,14,12,16)
MR_decl_label1(check_hlds__det_report__det_diagnose_disj_10_0, 17)
MR_decl_label3(check_hlds__det_report__det_diagnose_goal_7_0, 2,4,3)
MR_decl_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0, 4,5,9,6,20,16,3,30,31,32)
MR_decl_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0, 29,35,36,34,39,40,42,43,38,51)
MR_decl_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0, 54,55,61,62,66,67,56,53,75,76)
MR_decl_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0, 77,80,74,82,83,84,89,90,85,91)
MR_decl_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0, 92,93,94,95,81,98,99,100,101,97)
MR_decl_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0, 107,108,106,110,318,116,117,118,119,121)
MR_decl_label8(check_hlds__det_report__det_diagnose_goal_expr_9_0, 134,113,114,139,140,142,143,144)
MR_decl_label4(check_hlds__det_report__det_diagnose_orelse_goals_7_0, 17,4,5,6)
MR_decl_label10(check_hlds__det_report__det_diagnose_primitive_goal_5_0, 2,3,113,5,4,15,16,13,20,210)
MR_decl_label10(check_hlds__det_report__det_diagnose_primitive_goal_5_0, 18,33,44,31,53,62,73,12,80,81)
MR_decl_label5(check_hlds__det_report__det_diagnose_primitive_goal_5_0, 86,90,83,106,107)
MR_decl_label9(check_hlds__det_report__det_diagnose_switch_arms_9_0, 25,4,6,9,10,11,12,13,14)
MR_decl_label9(check_hlds__det_report__det_diagnose_switch_context_3_0, 37,4,5,6,8,10,11,23,25)
MR_decl_label10(check_hlds__det_report__det_report_call_context_7_0, 2,3,4,9,12,5,14,15,18,23)
MR_decl_label4(check_hlds__det_report__det_report_call_context_7_0, 24,25,26,27)
MR_decl_label4(check_hlds__det_report__disable_det_warnings_3_0, 2,3,5,6)
MR_decl_label10(check_hlds__det_report__find_missing_cons_ids_6_0, 2,3,4,5,9,10,12,14,15,8)
MR_decl_label9(check_hlds__det_report__find_missing_cons_ids_6_0, 18,20,22,24,25,26,27,28,7)
MR_decl_label10(check_hlds__det_report__find_switch_var_matches_6_0, 125,6,3,11,14,17,18,20,21,19)
MR_decl_label8(check_hlds__det_report__find_switch_var_matches_6_0, 7,8,31,27,28,39,34,35)
MR_decl_label10(check_hlds__det_report__find_switch_var_submatches_6_0, 125,9,14,16,18,12,23,25,27,28)
MR_decl_label5(check_hlds__det_report__find_switch_var_submatches_6_0, 30,31,29,126,1)
MR_decl_label4(check_hlds__det_report__find_uncovered_consids_4_0, 19,3,5,4)
MR_decl_label5(check_hlds__det_report__get_valid_dets_2_0, 2,3,4,1,5)
MR_decl_label10(check_hlds__det_report__global_checking_pass_5_0, 74,3,4,5,6,8,10,12,17,16)
MR_decl_label5(check_hlds__det_report__global_checking_pass_5_0, 15,19,7,28,29)
MR_decl_label4(check_hlds__det_report__lambda_update_instmap_4_0, 11,3,4,5)
MR_decl_label9(check_hlds__det_report__make_reqscope_checks_if_needed_7_0, 2,4,6,7,8,9,10,11,3)
MR_decl_label7(check_hlds__det_report__report_determinism_problem_7_0, 2,3,5,11,15,28,29)
MR_decl_label4(check_hlds__det_report__reqscope_check_conj_4_0, 11,3,4,5)
MR_decl_label3(check_hlds__det_report__reqscope_check_disj_4_0, 10,3,4)
MR_decl_label10(check_hlds__det_report__reqscope_check_goal_4_0, 121,3,5,8,11,12,13,6,15,16)
MR_decl_label10(check_hlds__det_report__reqscope_check_goal_4_0, 18,49,20,22,23,24,21,27,26,32)
MR_decl_label5(check_hlds__det_report__reqscope_check_goal_4_0, 31,34,29,37,39)
MR_decl_label10(check_hlds__det_report__reqscope_check_scope_6_0, 3,4,5,6,7,187,10,12,13,9)
MR_decl_label10(check_hlds__det_report__reqscope_check_scope_6_0, 19,23,25,42,16,17,15,51,91,52)
MR_decl_label3(check_hlds__det_report__reqscope_check_scope_6_0, 53,54,68)
MR_decl_label6(check_hlds__det_report__reqscope_check_switch_6_0, 13,3,4,5,6,7)
MR_decl_label2(fn__check_hlds__det_report__det_report_seen_call_id_2_0, 19,6)
MR_decl_label2(fn__check_hlds__det_report__detism_decl_name_1_0, 3,4)
MR_decl_label10(fn__check_hlds__det_report__failing_context_description_3_0, 3,7,12,11,21,22,20,35,36,34)
MR_decl_label7(fn__check_hlds__det_report__failing_context_description_3_0, 45,46,44,58,59,60,66)
MR_decl_label2(fn__check_hlds__det_report__promise_solutions_kind_str_1_0, 3,4)
MR_decl_label3(__Unify___check_hlds__det_report__cc_unify_context_0_0, 12,5,1)
MR_decl_label3(__Unify___check_hlds__det_report__failing_context_0_0, 4,8,1)
MR_decl_label10(__Unify___check_hlds__det_report__failing_goal_0_0, 5,6,7,13,11,17,21,48,19,1)
MR_decl_label3(__Unify___check_hlds__det_report__seen_call_id_0_0, 10,5,1)
MR_decl_label4(__Unify___check_hlds__det_report__switch_context_0_0, 4,6,10,1)
MR_decl_label3(__Unify___check_hlds__det_report__switch_match_0_0, 4,10,1)
MR_decl_label4(__Compare___check_hlds__det_report__cc_unify_context_0_0, 18,7,5,9)
MR_decl_label4(__Compare___check_hlds__det_report__failing_context_0_0, 3,2,5,21)
MR_decl_label10(__Compare___check_hlds__det_report__failing_goal_0_0, 7,8,9,10,11,5,15,143,16,17)
MR_decl_label10(__Compare___check_hlds__det_report__failing_goal_0_0, 18,19,13,23,24,25,27,28,21,32)
MR_decl_label10(__Compare___check_hlds__det_report__failing_goal_0_0, 33,34,37,35,42,30,46,47,48,49)
MR_decl_label10(__Compare___check_hlds__det_report__failing_goal_0_0, 52,50,44,60,61,62,63,64,67,58)
MR_decl_label9(__Compare___check_hlds__det_report__failing_goal_0_0, 73,128,74,75,76,77,132,78,80)
MR_decl_label6(__Compare___check_hlds__det_report__seen_call_id_0_0, 24,7,5,9,11,16)
MR_decl_label5(__Compare___check_hlds__det_report__switch_context_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___check_hlds__det_report__switch_match_0_0, 3,2,5,29)
MR_def_extern_entry(check_hlds__det_report__compare_determinisms_3_0)
MR_decl_static(check_hlds__det_report__find_uncovered_consids_4_0)
MR_decl_static(check_hlds__det_report__compute_covered_cons_ids_3_0)
MR_decl_static(check_hlds__det_report__cons_id_list_to_pieces_2_0)
MR_decl_static(check_hlds__det_report__find_missing_cons_ids_6_0)
MR_decl_static(check_hlds__det_report__reqscope_check_scope_6_0)
MR_decl_static(check_hlds__det_report__lambda_update_instmap_4_0)
MR_decl_static(check_hlds__det_report__reqscope_check_goal_4_0)
MR_decl_static(check_hlds__det_report__reqscope_check_conj_4_0)
MR_decl_static(check_hlds__det_report__reqscope_check_disj_4_0)
MR_decl_static(check_hlds__det_report__reqscope_check_switch_6_0)
MR_decl_static(check_hlds__det_report__make_reqscope_checks_if_needed_7_0)
MR_decl_static(fn__check_hlds__det_report__detism_decl_name_1_0)
MR_decl_static(check_hlds__det_report__report_determinism_problem_7_0)
MR_decl_static(check_hlds__det_report__det_diagnose_primitive_goal_5_0)
MR_decl_static(check_hlds__det_report__find_switch_var_submatches_6_0)
MR_decl_static(check_hlds__det_report__make_switch_match_no_args_2_0)
MR_decl_static(check_hlds__det_report__find_switch_var_matches_6_0)
MR_decl_static(fn__check_hlds__det_report__switch_match_to_string_2_0)
MR_decl_static(check_hlds__det_report__det_diagnose_switch_context_3_0)
MR_decl_static(check_hlds__det_report__det_report_call_context_7_0)
MR_def_extern_entry(check_hlds__det_report__det_diagnose_conj_7_0)
MR_decl_static(check_hlds__det_report__det_diagnose_goal_7_0)
MR_decl_static(check_hlds__det_report__det_diagnose_goal_expr_9_0)
MR_decl_static(check_hlds__det_report__det_diagnose_disj_10_0)
MR_decl_static(check_hlds__det_report__det_diagnose_switch_arms_9_0)
MR_decl_static(check_hlds__det_report__det_diagnose_orelse_goals_7_0)
MR_decl_static(check_hlds__det_report__check_determinism_8_0)
MR_def_extern_entry(check_hlds__det_report__global_checking_pass_5_0)
MR_def_extern_entry(check_hlds__det_report__det_check_lambda_7_0)
MR_def_extern_entry(fn__check_hlds__det_report__promise_solutions_kind_str_1_0)
MR_def_extern_entry(fn__check_hlds__det_report__lookup_var_name_in_varset_2_0)
MR_def_extern_entry(fn__check_hlds__det_report__failing_contexts_description_3_0)
MR_def_extern_entry(fn__check_hlds__det_report__det_report_seen_call_id_2_0)
MR_def_extern_entry(check_hlds__det_report__disable_det_warnings_3_0)
MR_def_extern_entry(check_hlds__det_report__restore_det_warnings_3_0)
MR_decl_static(check_hlds__det_report__get_valid_dets_2_0)
MR_decl_static(fn__check_hlds__det_report__failing_context_description_3_0)
MR_decl_static(check_hlds__det_report__restore_option_3_0)
MR_def_extern_entry(__Unify___check_hlds__det_report__cc_unify_context_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_report__cc_unify_context_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_report__det_comparison_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_report__det_comparison_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_report__failing_context_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_report__failing_context_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_report__failing_goal_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_report__failing_goal_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_report__options_to_restore_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_report__options_to_restore_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_report__seen_call_id_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_report__seen_call_id_0_0)
MR_def_extern_entry(__Unify___check_hlds__det_report__switch_context_0_0)
MR_def_extern_entry(__Compare___check_hlds__det_report__switch_context_0_0)
MR_decl_static(__Unify___check_hlds__det_report__switch_match_0_0)
MR_decl_static(__Compare___check_hlds__det_report__switch_match_0_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("or", 2)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[38] =
{
{
{
MR_TAG_COMMON(1,0,0),
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
MR_TAG_COMMON(3,3,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,1),
MR_TAG_COMMON(1,1,2)
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
MR_TAG_COMMON(3,3,7),
MR_TAG_COMMON(1,1,4)
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
MR_TAG_COMMON(3,3,7),
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
MR_TAG_COMMON(3,3,13),
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
MR_TAG_COMMON(3,3,15),
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
MR_TAG_COMMON(3,3,9),
MR_TAG_COMMON(1,1,4)
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
MR_TAG_COMMON(3,3,21),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,3,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,6,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,24),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,6,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,28),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,34),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,3,36),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,37),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,38),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,40),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,1)
}
},
{
{
MR_TAG_COMMON(3,3,44),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,46),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,47),
MR_TAG_COMMON(1,1,31)
}
},
{
{
MR_TAG_COMMON(3,3,48),
MR_TAG_COMMON(1,1,32)
}
},
{
{
MR_TAG_COMMON(3,3,49),
MR_TAG_COMMON(1,1,33)
}
},
{
{
MR_TAG_COMMON(3,3,50),
MR_TAG_COMMON(1,1,34)
}
},
{
{
MR_TAG_COMMON(3,3,51),
MR_TAG_COMMON(1,1,35)
}
},
{
{
MR_TAG_COMMON(2,6,3),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__find_missing_cons_ids_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__det_diagnose_switch_context_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_switch_match_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__restore_det_warnings_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_report__find_missing_cons_ids_6_0_1,
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
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_report__det_diagnose_switch_context_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,12),
MR_CTOR0_ADDR(check_hlds__det_report, switch_match),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_report__restore_det_warnings_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(9,1),
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(libs__globals, globals)
}
},
};

static const struct mercury_type_3 mercury_common_3[53] =
{
{
4,
MR_string_const("Error: the switch on", 20)
},
{
4,
MR_string_const("is required to be complete,", 27)
},
{
4,
MR_string_const("but it is not.", 14)
},
{
4,
MR_string_const("but it does not cover", 21)
},
{
4,
MR_string_const("Error: required determinism is", 30)
},
{
3,
MR_string_const(",", 1)
},
{
4,
MR_string_const("but actual determinism is", 25)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("In", 2)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("Declared", 8)
},
{
4,
MR_string_const("inferred", 8)
},
{
4,
MR_string_const("can fail", 8)
},
{
4,
MR_string_const("can succeed", 11)
},
{
4,
MR_string_const("and", 3)
},
{
4,
MR_string_const("can succeed more than once", 26)
},
{
4,
MR_string_const("has unknown determinism problem;", 32)
},
{
4,
MR_string_const("desired determinism is", 22)
},
{
4,
MR_string_const("while actual determinism is", 27)
},
{
4,
MR_string_const("Inside the case", 15)
},
{
4,
MR_string_const("of the switch on", 16)
},
{
4,
MR_string_const("Some weird unification(or explicit call to a type-specific unify predicate\?)", 76)
},
{
4,
MR_string_const("call to", 7)
},
{
4,
MR_string_const("Negated goal can succeed.", 25)
},
{
4,
MR_string_const("Negated goal can fail.", 22)
},
{
4,
MR_string_const("Determinism declaration not satisfied.", 38)
},
{
4,
MR_string_const("Disjunction has multiple clauses with solutions.", 48)
},
{
4,
MR_string_const("The switch on", 13)
},
{
4,
MR_string_const("can fail.", 9)
},
{
4,
MR_string_const("does not cover", 14)
},
{
4,
MR_string_const("declaration not allowed for procedure", 37)
},
{
4,
MR_string_const("with determinism", 16)
},
{
4,
MR_string_const("The pragma requested is only valid", 34)
},
{
4,
MR_string_const("for the following", 17)
},
{
4,
MR_string_const("Error: main/2 must be \140det\' or \140cc_multi\'.", 42)
},
{
4,
MR_string_const("Determinism error in lambda expression.", 39)
},
{
3,
MR_string_const("\'.", 2)
},
{
4,
MR_string_const("higher-order call", 17)
},
{
4,
MR_string_const("Fail goal can fail.", 19)
},
{
4,
MR_string_const("Switch on", 9)
},
{
4,
MR_string_const("is incomplete.", 14)
},
{
4,
MR_string_const("Unification of", 14)
},
{
4,
MR_string_const("Call to", 7)
},
{
4,
MR_string_const("with", 4)
},
{
4,
MR_string_const("Error: invalid determinism for", 30)
},
{
4,
MR_string_const("the primary mode of a function cannot be", 40)
},
{
4,
MR_string_const("Most likely, this procedure should be a predicate, not a function.", 66)
},
{
4,
MR_string_const("arguments would break referential transparency.)", 48)
},
{
4,
MR_string_const("(Allowing functions to have more than one result for the same", 61)
},
{
4,
MR_string_const("result should be determined only by the values of its arguments.", 64)
},
{
4,
MR_string_const("function of its arguments; that is, the value of the function\'s", 63)
},
{
4,
MR_string_const("In Mercury, a function is supposed to be a true mathematical", 60)
},
{
4,
MR_string_const("of", 2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__find_switch_var_matches_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__check_determinism_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__check_determinism_8_0_2;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_report__find_switch_var_matches_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(check_hlds__det_report, switch_match)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_report__check_determinism_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, eval_method),
MR_CTOR0_ADDR(parse_tree__prog_data, determinism)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__det_report__check_determinism_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, determinism),
MR_STRING_CTOR_ADDR
},
};

MR_decl_entry(fn__parse_tree__prog_out__determinism_to_string_1_0);
static const struct mercury_type_5 mercury_common_5[3] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(check_hlds__det_report__make_switch_match_no_args_2_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(fn__parse_tree__prog_out__determinism_to_string_1_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(check_hlds__det_report__restore_option_3_0),
0
},
};

static const struct mercury_type_6 mercury_common_6[4] =
{
{
MR_TAG_COMMON(1,1,17)
},
{
MR_TAG_COMMON(1,1,19)
},
{
MR_TAG_COMMON(1,1,23)
},
{
MR_TAG_COMMON(1,1,36)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__det_report__failing_contexts_description_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_failing_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__check_hlds__det_report__failing_contexts_description_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(1,12),
MR_CTOR0_ADDR(check_hlds__det_report, failing_context),
MR_CTOR0_ADDR(parse_tree__error_util, error_msg)
}
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
static const struct mercury_type_9 mercury_common_9[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, option_data)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(libs__options, option),
MR_CTOR0_ADDR(getopt_io, option_data)
}
},
};

static const struct mercury_type_8 mercury_vector_common_8_0[8] =
{
{
0
},
{
1
},
{
2
},
{
3
},
{
4
},
{
5
},
{
6
},
{
7
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_unify_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_unify_context_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__det_report__field_types_cc_unify_context_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_unify_context_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_cc_unify_context_0_0 = {
	"ccuc_unify",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_report__field_types_cc_unify_context_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_cc_unify_context_0_1 = {
	"ccuc_switch",
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

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_cc_unify_context_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_cc_unify_context_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__det_report__du_ptag_ordered_cc_unify_context_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_name_ordered_cc_unify_context_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_cc_unify_context_0_1,
	&mercury_data_check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

const MR_Integer mercury_data_check_hlds__det_report__functor_number_map_cc_unify_context_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_cc_unify_context_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_report__cc_unify_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_report__cc_unify_context_0_0)),
	"check_hlds.det_report",
	"cc_unify_context",
	{ (void *)mercury_data_check_hlds__det_report__du_name_ordered_cc_unify_context_0 },
	{ (void *)mercury_data_check_hlds__det_report__du_ptag_ordered_cc_unify_context_0 },
	2,
	4,
	mercury_data_check_hlds__det_report__functor_number_map_cc_unify_context_0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_report__enum_functor_desc_det_comparison_0_0 = {
	"tighter",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_report__enum_functor_desc_det_comparison_0_1 = {
	"sameas",
	1
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__det_report__enum_functor_desc_det_comparison_0_2 = {
	"looser",
	2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_report__enum_value_ordered_det_comparison_0[] = {
	&mercury_data_check_hlds__det_report__enum_functor_desc_det_comparison_0_0,
	&mercury_data_check_hlds__det_report__enum_functor_desc_det_comparison_0_1,
	&mercury_data_check_hlds__det_report__enum_functor_desc_det_comparison_0_2
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__det_report__enum_name_ordered_det_comparison_0[] = {
	&mercury_data_check_hlds__det_report__enum_functor_desc_det_comparison_0_2,
	&mercury_data_check_hlds__det_report__enum_functor_desc_det_comparison_0_1,
	&mercury_data_check_hlds__det_report__enum_functor_desc_det_comparison_0_0
};

const MR_Integer mercury_data_check_hlds__det_report__functor_number_map_det_comparison_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_det_comparison_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_report__det_comparison_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_report__det_comparison_0_0)),
	"check_hlds.det_report",
	"det_comparison",
	{ (void *)mercury_data_check_hlds__det_report__enum_name_ordered_det_comparison_0 },
	{ (void *)mercury_data_check_hlds__det_report__enum_value_ordered_det_comparison_0 },
	3,
	4,
	mercury_data_check_hlds__det_report__functor_number_map_det_comparison_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_failing_goal_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__det_report__field_types_failing_context_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__det_report__type_ctor_info_failing_goal_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_failing_context_0_0 = {
	"failing_context",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_report__field_types_failing_context_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_failing_context_0_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_context_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__det_report__du_ptag_ordered_failing_context_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__det_report__du_stag_ordered_failing_context_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_name_ordered_failing_context_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_context_0_0
};

const MR_Integer mercury_data_check_hlds__det_report__functor_number_map_failing_context_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_failing_context_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_report__failing_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_report__failing_context_0_0)),
	"check_hlds.det_report",
	"failing_context",
	{ (void *)mercury_data_check_hlds__det_report__du_name_ordered_failing_context_0 },
	{ (void *)mercury_data_check_hlds__det_report__du_ptag_ordered_failing_context_0 },
	1,
	4,
	mercury_data_check_hlds__det_report__functor_number_map_failing_context_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__det_report__field_types_failing_goal_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_0 = {
	"incomplete_switch",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_report__field_types_failing_goal_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_1 = {
	"fail_goal",
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

const MR_PseudoTypeInfo mercury_data_check_hlds__det_report__field_types_failing_goal_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_2 = {
	"test_goal",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_report__field_types_failing_goal_0_2,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__det_report__field_types_failing_goal_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_3 = {
	"deconstruct_goal",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_report__field_types_failing_goal_0_3,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__det_report__field_types_failing_goal_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_4 = {
	"call_goal",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_report__field_types_failing_goal_0_4,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_generic_call_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_generic_call_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__det_report__field_types_failing_goal_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_generic_call_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_5 = {
	"generic_call_goal",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_report__field_types_failing_goal_0_5,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_6 = {
	"negated_goal",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_failing_goal_0_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_1,
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_6

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_failing_goal_0_1[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_failing_goal_0_2[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_2

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_failing_goal_0_3[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_3,
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_4,
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_5

};

const MR_DuPtagLayout mercury_data_check_hlds__det_report__du_ptag_ordered_failing_goal_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__det_report__du_stag_ordered_failing_goal_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__det_report__du_stag_ordered_failing_goal_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__det_report__du_stag_ordered_failing_goal_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_check_hlds__det_report__du_stag_ordered_failing_goal_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_name_ordered_failing_goal_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_4,
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_3,
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_1,
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_5,
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_0,
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_6,
	&mercury_data_check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

const MR_Integer mercury_data_check_hlds__det_report__functor_number_map_failing_goal_0[] = {
	4,
	2,
	6,
	1,
	0,
	3,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_failing_goal_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_report__failing_goal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_report__failing_goal_0_0)),
	"check_hlds.det_report",
	"failing_goal",
	{ (void *)mercury_data_check_hlds__det_report__du_name_ordered_failing_goal_0 },
	{ (void *)mercury_data_check_hlds__det_report__du_ptag_ordered_failing_goal_0 },
	7,
	4,
	mercury_data_check_hlds__det_report__functor_number_map_failing_goal_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_libs__options__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt_io__type_ctor_info_option_data_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_options_to_restore_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_report__options_to_restore_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_report__options_to_restore_0_0)),
	"check_hlds.det_report",
	"options_to_restore",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__det_report__field_types_seen_call_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_seen_call_id_0_0 = {
	"seen_call",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_report__field_types_seen_call_id_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_seen_call_id_0_1 = {
	"higher_order_call",
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

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_seen_call_id_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_seen_call_id_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__det_report__du_ptag_ordered_seen_call_id_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_check_hlds__det_report__du_stag_ordered_seen_call_id_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__det_report__du_stag_ordered_seen_call_id_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_name_ordered_seen_call_id_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_seen_call_id_0_1,
	&mercury_data_check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

const MR_Integer mercury_data_check_hlds__det_report__functor_number_map_seen_call_id_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_seen_call_id_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_report__seen_call_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_report__seen_call_id_0_0)),
	"check_hlds.det_report",
	"seen_call_id",
	{ (void *)mercury_data_check_hlds__det_report__du_name_ordered_seen_call_id_0 },
	{ (void *)mercury_data_check_hlds__det_report__du_ptag_ordered_seen_call_id_0 },
	2,
	4,
	mercury_data_check_hlds__det_report__functor_number_map_seen_call_id_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_switch_match_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__det_report__type_ctor_info_switch_match_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__det_report__field_types_switch_context_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__det_report__type_ctor_info_switch_match_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_switch_context_0_0 = {
	"switch_context",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_report__field_types_switch_context_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_switch_context_0_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_switch_context_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__det_report__du_ptag_ordered_switch_context_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__det_report__du_stag_ordered_switch_context_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_name_ordered_switch_context_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_switch_context_0_0
};

const MR_Integer mercury_data_check_hlds__det_report__functor_number_map_switch_context_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_switch_context_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_report__switch_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_report__switch_context_0_0)),
	"check_hlds.det_report",
	"switch_context",
	{ (void *)mercury_data_check_hlds__det_report__du_name_ordered_switch_context_0 },
	{ (void *)mercury_data_check_hlds__det_report__du_ptag_ordered_switch_context_0 },
	1,
	4,
	mercury_data_check_hlds__det_report__functor_number_map_switch_context_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__det_report__field_types_switch_match_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__det_report__du_functor_desc_switch_match_0_0 = {
	"switch_match",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__det_report__field_types_switch_match_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_stag_ordered_switch_match_0_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_switch_match_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__det_report__du_ptag_ordered_switch_match_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__det_report__du_stag_ordered_switch_match_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__det_report__du_name_ordered_switch_match_0[] = {
	&mercury_data_check_hlds__det_report__du_functor_desc_switch_match_0_0
};

const MR_Integer mercury_data_check_hlds__det_report__functor_number_map_switch_match_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__det_report__type_ctor_info_switch_match_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__det_report__switch_match_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__det_report__switch_match_0_0)),
	"check_hlds.det_report",
	"switch_match",
	{ (void *)mercury_data_check_hlds__det_report__du_name_ordered_switch_match_0 },
	{ (void *)mercury_data_check_hlds__det_report__du_ptag_ordered_switch_match_0 },
	1,
	4,
	mercury_data_check_hlds__det_report__functor_number_map_switch_match_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__restore_det_warnings_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.det_report",
"check_hlds.det_report",
"restore_option",
3,
0
},
"check_hlds.det_report",
"det_report.m",
1588,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__check_hlds__det_report__failing_contexts_description_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.det_report",
"check_hlds.det_report",
"failing_context_description",
4,
0
},
"check_hlds.det_report",
"det_report.m",
1489,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__check_determinism_8_0_2 = {
{
MR_FUNCTION,
"parse_tree.prog_out",
"parse_tree.prog_out",
"determinism_to_string",
2,
0
},
"check_hlds.det_report",
"det_report.m",
299,
"130"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__check_determinism_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.det_report",
"check_hlds.det_report",
"get_valid_dets",
2,
0
},
"check_hlds.det_report",
"det_report.m",
298,
"127"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__det_diagnose_switch_context_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.det_report",
"check_hlds.det_report",
"switch_match_to_string",
3,
0
},
"check_hlds.det_report",
"det_report.m",
1347,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__find_switch_var_matches_6_0_1 = {
{
MR_PREDICATE,
"check_hlds.det_report",
"check_hlds.det_report",
"make_switch_match_no_args",
2,
0
},
"check_hlds.det_report",
"det_report.m",
900,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__det_report__find_missing_cons_ids_6_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_mode",
"parse_tree.prog_mode",
"bound_inst_to_cons_id",
3,
0
},
"check_hlds.det_report",
"det_report.m",
1240,
"22"
};


MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);

MR_BEGIN_MODULE(check_hlds__det_report_module0)
	MR_init_entry1(check_hlds__det_report__compare_determinisms_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__compare_determinisms_3_0);
	MR_init_label10(check_hlds__det_report__compare_determinisms_3_0,2,3,44,7,5,4,13,117,11,18)
	MR_init_label10(check_hlds__det_report__compare_determinisms_3_0,16,23,24,57,21,27,28,10,32,31)
	MR_init_label2(check_hlds__det_report__compare_determinisms_3_0,37,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_determinisms'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_report__compare_determinisms_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__compare_determinisms_3_0_i2);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__compare_determinisms_3_0_i3);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i5);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i7);
	}
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i4);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_sv(1) = (MR_Integer) 2;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i4);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i44);
	}
	MR_r1 = MR_r2;
	MR_sv(1) = (MR_Integer) 0;
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),3)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i11);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i13);
	}
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i10);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i117);
	}
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 2;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i10);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i16);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i18);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i10);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i117);
	}
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i10);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i21);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i23);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i10);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i24);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i10);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i117);
	}
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i10);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i27);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i10);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i28);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i10);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i57);
	}
	MR_sv(2) = (MR_Integer) 0;
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i32);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i31);
	}
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(1),2)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i37);
	}
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(check_hlds__det_report__compare_determinisms_3_0_i36);
	}
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__det_report__compare_determinisms_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__contains_2_0);

MR_BEGIN_MODULE(check_hlds__det_report_module1)
	MR_init_entry1(check_hlds__det_report__find_uncovered_consids_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__find_uncovered_consids_4_0);
	MR_init_label4(check_hlds__det_report__find_uncovered_consids_4_0,19,3,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_uncovered_consids'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__find_uncovered_consids_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_report__find_uncovered_consids_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__find_uncovered_consids_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__det_report__find_uncovered_consids_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__contains_2_0,
		check_hlds__det_report__find_uncovered_consids_4_0_i5);
MR_def_label(check_hlds__det_report__find_uncovered_consids_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_uncovered_consids_4_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__det_report__find_uncovered_consids_4_0_i19);
MR_def_label(check_hlds__det_report__find_uncovered_consids_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__det_report__find_uncovered_consids_4_0_i19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__insert_3_0);
MR_decl_entry(set_tree234__insert_list_3_0);

MR_BEGIN_MODULE(check_hlds__det_report_module2)
	MR_init_entry1(check_hlds__det_report__compute_covered_cons_ids_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__compute_covered_cons_ids_3_0);
	MR_init_label4(check_hlds__det_report__compute_covered_cons_ids_3_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_covered_cons_ids'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__compute_covered_cons_ids_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_report__compute_covered_cons_ids_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__compute_covered_cons_ids_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__det_report__compute_covered_cons_ids_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set_tree234__insert_3_0,
		check_hlds__det_report__compute_covered_cons_ids_3_0_i4);
MR_def_label(check_hlds__det_report__compute_covered_cons_ids_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set_tree234__insert_list_3_0,
		check_hlds__det_report__compute_covered_cons_ids_3_0_i5);
MR_def_label(check_hlds__det_report__compute_covered_cons_ids_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__det_report__compute_covered_cons_ids_3_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__det_report_module3)
	MR_init_entry1(check_hlds__det_report__cons_id_list_to_pieces_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__cons_id_list_to_pieces_2_0);
	MR_init_label7(check_hlds__det_report__cons_id_list_to_pieces_2_0,43,4,7,6,11,16,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_list_to_pieces'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__cons_id_list_to_pieces_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__cons_id_list_to_pieces_2_0_i43);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__det_report__cons_id_list_to_pieces_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,
		check_hlds__det_report__cons_id_list_to_pieces_2_0_i4);
MR_def_label(check_hlds__det_report__cons_id_list_to_pieces_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__cons_id_list_to_pieces_2_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_report__cons_id_list_to_pieces_2_0_i7);
MR_def_label(check_hlds__det_report__cons_id_list_to_pieces_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__det_report__cons_id_list_to_pieces_2_0,
		check_hlds__det_report__cons_id_list_to_pieces_2_0_i19);
MR_def_label(check_hlds__det_report__cons_id_list_to_pieces_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__cons_id_list_to_pieces_2_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_r1 = MR_tempr3;
	MR_sv(1) = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__det_report__cons_id_list_to_pieces_2_0,
		check_hlds__det_report__cons_id_list_to_pieces_2_0_i19);
MR_def_label(check_hlds__det_report__cons_id_list_to_pieces_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(",", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_report__cons_id_list_to_pieces_2_0_i16);
MR_def_label(check_hlds__det_report__cons_id_list_to_pieces_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__det_report__cons_id_list_to_pieces_2_0,
		check_hlds__det_report__cons_id_list_to_pieces_2_0_i19);
MR_def_label(check_hlds__det_report__cons_id_list_to_pieces_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
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

MR_decl_entry(check_hlds__det_util__det_get_proc_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
MR_decl_entry(check_hlds__det_util__det_info_get_module_info_2_0);
MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_to_functors_3_0);
MR_decl_entry(check_hlds__det_util__det_info_get_vartypes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);
MR_decl_entry(parse_tree__prog_mode__bound_inst_to_cons_id_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(check_hlds__det_util__det_lookup_var_type_4_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(map__keys_2_0);
MR_decl_entry(fn__set_tree234__init_0_0);
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(check_hlds__det_report_module4)
	MR_init_entry1(check_hlds__det_report__find_missing_cons_ids_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__find_missing_cons_ids_6_0);
	MR_init_label10(check_hlds__det_report__find_missing_cons_ids_6_0,2,3,4,5,9,10,12,14,15,8)
	MR_init_label9(check_hlds__det_report__find_missing_cons_ids_6_0,18,20,22,24,25,26,27,28,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_missing_cons_ids'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__find_missing_cons_ids_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(check_hlds__det_util__det_get_proc_info_2_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i2);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i3);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i4);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i5);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i9);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_to_functors_3_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i10);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_missing_cons_ids_6_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_vartypes_2_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i12);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i14);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i15);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_mode__bound_inst_to_cons_id_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i22);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__det_util__det_lookup_var_type_4_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i18);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_missing_cons_ids_6_0_i7);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i20);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_missing_cons_ids_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i22);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__set_tree234__init_0_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i24);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_report__compute_covered_cons_ids_3_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i25);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_report__find_uncovered_consids_4_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i26);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i27);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_report__cons_id_list_to_pieces_2_0,
		check_hlds__det_report__find_missing_cons_ids_6_0_i28);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__det_report__find_missing_cons_ids_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(check_hlds__det_util__det_info_add_error_spec_3_0);

MR_BEGIN_MODULE(check_hlds__det_report_module5)
	MR_init_entry1(check_hlds__det_report__reqscope_check_scope_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__reqscope_check_scope_6_0);
	MR_init_label10(check_hlds__det_report__reqscope_check_scope_6_0,3,4,5,6,7,187,10,12,13,9)
	MR_init_label10(check_hlds__det_report__reqscope_check_scope_6_0,19,23,25,42,16,17,15,51,91,52)
	MR_init_label3(check_hlds__det_report__reqscope_check_scope_6_0,53,54,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reqscope_check_scope'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__reqscope_check_scope_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i4);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i5);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i6);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i7);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i187);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i9);
	}
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__det_report__reqscope_check_scope_6_0_i10);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i12);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i13);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_report", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_report.reqscope_check_scope\'/6", 56);
	MR_r3 = (MR_Word) MR_string_const("Loop control scope with strange determinism", 43);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i17);
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_r5;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__det_report__reqscope_check_scope_6_0_i19);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i16);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i91);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__det_report__find_missing_cons_ids_6_0,
		check_hlds__det_report__reqscope_check_scope_6_0_i23);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i25);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__reqscope_check_scope_6_0_i42);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,3);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,1);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__reqscope_check_scope_6_0_i42);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__det_util__det_info_add_error_spec_3_0);
	}
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(6);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i17);
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(6) = MR_r5;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__det_report__reqscope_check_scope_6_0_i51);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(1))) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_scope_6_0_i52);
	}
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_report__reqscope_check_scope_6_0_i53);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_report__reqscope_check_scope_6_0_i54);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__reqscope_check_scope_6_0_i68);
MR_def_label(check_hlds__det_report__reqscope_check_scope_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(check_hlds__det_util__det_info_add_error_spec_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_get_insts_4_0);
MR_decl_entry(hlds__instmap__instmap_set_var_4_0);

MR_BEGIN_MODULE(check_hlds__det_report_module6)
	MR_init_entry1(check_hlds__det_report__lambda_update_instmap_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__lambda_update_instmap_4_0);
	MR_init_label4(check_hlds__det_report__lambda_update_instmap_4_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lambda_update_instmap'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__lambda_update_instmap_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_report__lambda_update_instmap_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__lambda_update_instmap_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__det_report__lambda_update_instmap_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__det_report__lambda_update_instmap_4_0_i4);
MR_def_label(check_hlds__det_report__lambda_update_instmap_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_set_var_4_0,
		check_hlds__det_report__lambda_update_instmap_4_0_i5);
MR_def_label(check_hlds__det_report__lambda_update_instmap_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__det_report__lambda_update_instmap_4_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(hlds__goal_util__update_instmap_3_0);

MR_BEGIN_MODULE(check_hlds__det_report_module7)
	MR_init_entry1(check_hlds__det_report__reqscope_check_goal_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__reqscope_check_goal_4_0);
	MR_init_label10(check_hlds__det_report__reqscope_check_goal_4_0,121,3,5,8,11,12,13,6,15,16)
	MR_init_label10(check_hlds__det_report__reqscope_check_goal_4_0,18,49,20,22,23,24,21,27,26,32)
	MR_init_label5(check_hlds__det_report__reqscope_check_goal_4_0,31,34,29,37,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reqscope_check_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__reqscope_check_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i3);
	}
	MR_r1 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_succip_word = MR_sv(5);
	continue;
	}
	break;
	} /* end while */
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i5);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i6);
	}
	MR_r5 = MR_tfield(1, MR_r4, 1);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i8);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i49);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 6);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_tfield(2, MR_tempr1, 3);
	MR_r4 = MR_tfield(2, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		check_hlds__det_report__reqscope_check_goal_4_0_i11);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_report__reqscope_check_goal_4_0_i12);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__det_report__lambda_update_instmap_4_0,
		check_hlds__det_report__reqscope_check_goal_4_0_i13);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i121);
	}
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i15);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__det_report__reqscope_check_conj_4_0);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i18);
	}
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__det_report__reqscope_check_disj_4_0);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i20);
	}
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i21);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__det_report__reqscope_check_goal_4_0,
		check_hlds__det_report__reqscope_check_goal_4_0_i22);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__det_report__reqscope_check_goal_4_0_i23);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__det_report__reqscope_check_goal_4_0,
		check_hlds__det_report__reqscope_check_goal_4_0_i24);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i121);
	}
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i26);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_report__reqscope_check_scope_6_0,
		check_hlds__det_report__reqscope_check_goal_4_0_i27);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i121);
	}
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,7)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i31);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 5);
	MR_r1 = MR_tfield(1, MR_tempr1, 4);
	}
	MR_np_localcall_lab(check_hlds__det_report__reqscope_check_goal_4_0,
		check_hlds__det_report__reqscope_check_goal_4_0_i32);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__det_report__reqscope_check_disj_4_0);
	}
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i34);
	}
	MR_r1 = MR_tfield(2, MR_r5, 2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(check_hlds__det_report__reqscope_check_goal_4_0_i121);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_report", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_report.reqscope_check_goal\'/4", 55);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_vartypes_2_0,
		check_hlds__det_report__reqscope_check_goal_4_0_i37);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__det_report__reqscope_check_goal_4_0_i39);
MR_def_label(check_hlds__det_report__reqscope_check_goal_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__det_report__reqscope_check_switch_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module8)
	MR_init_entry1(check_hlds__det_report__reqscope_check_conj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__reqscope_check_conj_4_0);
	MR_init_label4(check_hlds__det_report__reqscope_check_conj_4_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reqscope_check_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__reqscope_check_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_report__reqscope_check_conj_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_conj_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__det_report__reqscope_check_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__det_report__reqscope_check_goal_4_0,
		check_hlds__det_report__reqscope_check_conj_4_0_i4);
MR_def_label(check_hlds__det_report__reqscope_check_conj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__det_report__reqscope_check_conj_4_0_i5);
MR_def_label(check_hlds__det_report__reqscope_check_conj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__det_report__reqscope_check_conj_4_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module9)
	MR_init_entry1(check_hlds__det_report__reqscope_check_disj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__reqscope_check_disj_4_0);
	MR_init_label3(check_hlds__det_report__reqscope_check_disj_4_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reqscope_check_disj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__reqscope_check_disj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_report__reqscope_check_disj_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_disj_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__det_report__reqscope_check_disj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__det_report__reqscope_check_goal_4_0,
		check_hlds__det_report__reqscope_check_disj_4_0_i4);
MR_def_label(check_hlds__det_report__reqscope_check_disj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__det_report__reqscope_check_disj_4_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__bind_var_to_functors_8_0);
MR_decl_entry(check_hlds__det_util__det_info_set_module_info_3_0);

MR_BEGIN_MODULE(check_hlds__det_report_module10)
	MR_init_entry1(check_hlds__det_report__reqscope_check_switch_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__reqscope_check_switch_6_0);
	MR_init_label6(check_hlds__det_report__reqscope_check_switch_6_0,13,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reqscope_check_switch'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__reqscope_check_switch_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_report__reqscope_check_switch_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__reqscope_check_switch_6_0_i3);
	}
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__det_report__reqscope_check_switch_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_sv(8) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_report__reqscope_check_switch_6_0_i4);
MR_def_label(check_hlds__det_report__reqscope_check_switch_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__bind_var_to_functors_8_0,
		check_hlds__det_report__reqscope_check_switch_6_0_i5);
MR_def_label(check_hlds__det_report__reqscope_check_switch_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_set_module_info_3_0,
		check_hlds__det_report__reqscope_check_switch_6_0_i6);
MR_def_label(check_hlds__det_report__reqscope_check_switch_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_report__reqscope_check_goal_4_0,
		check_hlds__det_report__reqscope_check_switch_6_0_i7);
MR_def_label(check_hlds__det_report__reqscope_check_switch_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__det_report__reqscope_check_switch_6_0_i13);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(check_hlds__det_util__det_info_init_7_0);
MR_decl_entry(check_hlds__det_util__det_info_get_error_specs_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

MR_BEGIN_MODULE(check_hlds__det_report_module11)
	MR_init_entry1(check_hlds__det_report__make_reqscope_checks_if_needed_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__make_reqscope_checks_if_needed_7_0);
	MR_init_label9(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,2,4,6,7,8,9,10,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_reqscope_checks_if_needed'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__make_reqscope_checks_if_needed_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__det_report__make_reqscope_checks_if_needed_7_0_i2);
MR_def_label(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 23;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__det_report__make_reqscope_checks_if_needed_7_0_i4);
MR_def_label(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__make_reqscope_checks_if_needed_7_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__det_report__make_reqscope_checks_if_needed_7_0_i6);
MR_def_label(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__det_report__make_reqscope_checks_if_needed_7_0_i7);
MR_def_label(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__det_report__make_reqscope_checks_if_needed_7_0_i8);
MR_def_label(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_init_7_0,
		check_hlds__det_report__make_reqscope_checks_if_needed_7_0_i9);
MR_def_label(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_report__reqscope_check_goal_4_0,
		check_hlds__det_report__make_reqscope_checks_if_needed_7_0_i10);
MR_def_label(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_error_specs_2_0,
		check_hlds__det_report__make_reqscope_checks_if_needed_7_0_i11);
MR_def_label(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module12)
	MR_init_entry1(fn__check_hlds__det_report__detism_decl_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__det_report__detism_decl_name_1_0);
	MR_init_label2(fn__check_hlds__det_report__detism_decl_name_1_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'detism_decl_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__det_report__detism_decl_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__detism_decl_name_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("determinism declaration", 23);
	MR_proceed();
MR_def_label(fn__check_hlds__det_report__detism_decl_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__detism_decl_name_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("implicit determinism declaration", 32);
	MR_proceed();
MR_def_label(fn__check_hlds__det_report__detism_decl_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("nonexistent determinism declaration", 35);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0);

MR_BEGIN_MODULE(check_hlds__det_report_module13)
	MR_init_entry1(check_hlds__det_report__report_determinism_problem_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__report_determinism_problem_7_0);
	MR_init_label7(check_hlds__det_report__report_determinism_problem_7_0,2,3,5,11,15,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_determinism_problem'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__report_determinism_problem_7_0)
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
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__det_report__report_determinism_problem_7_0_i2);
MR_def_label(check_hlds__det_report__report_determinism_problem_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__det_report__report_determinism_problem_7_0_i3);
MR_def_label(check_hlds__det_report__report_determinism_problem_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,
		check_hlds__det_report__report_determinism_problem_7_0_i5);
MR_def_label(check_hlds__det_report__report_determinism_problem_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,3,9);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,3,10);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_report__report_determinism_problem_7_0_i11);
MR_def_label(check_hlds__det_report__report_determinism_problem_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(3,3,5);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,3,11);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_report__report_determinism_problem_7_0_i15);
MR_def_label(check_hlds__det_report__report_determinism_problem_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__report_determinism_problem_7_0_i28);
MR_def_label(check_hlds__det_report__report_determinism_problem_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__report_determinism_problem_7_0_i29);
MR_def_label(check_hlds__det_report__report_determinism_problem_7_0,29)
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
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module14)
	MR_init_entry1(check_hlds__det_report__det_diagnose_primitive_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__det_diagnose_primitive_goal_5_0);
	MR_init_label10(check_hlds__det_report__det_diagnose_primitive_goal_5_0,2,3,113,5,4,15,16,13,20,210)
	MR_init_label10(check_hlds__det_report__det_diagnose_primitive_goal_5_0,18,33,44,31,53,62,73,12,80,81)
	MR_init_label5(check_hlds__det_report__det_diagnose_primitive_goal_5_0,86,90,83,106,107)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_diagnose_primitive_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__det_diagnose_primitive_goal_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_primitive_goal_5_0_i2);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_primitive_goal_5_0_i3);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i5);
	}
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i4);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i113);
	}
	MR_r1 = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,1,8);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),3)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i13);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i15);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i16);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i210);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i18);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i20);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i73);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i210);
	}
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i31);
	}
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i33);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i44);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i210);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i44);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i53);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i73);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i62);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i73);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i210);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i73);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_primitive_goal_5_0_i80);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_primitive_goal_5_0_i81);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_primitive_goal_5_0_i83);
	}
	MR_r2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,3,16);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,3,17);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_report__det_diagnose_primitive_goal_5_0_i86);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,3,5);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(3,3,18);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_report__det_diagnose_primitive_goal_5_0_i90);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_primitive_goal_5_0_i107);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_primitive_goal_5_0_i106);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_primitive_goal_5_0_i107);
MR_def_label(check_hlds__det_report__det_diagnose_primitive_goal_5_0,107)
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
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(list__delete_first_3_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(parse_tree__set_of_var__list_to_set_2_0);
MR_decl_entry(parse_tree__set_of_var__intersect_3_0);
MR_decl_entry(parse_tree__set_of_var__is_non_empty_1_0);

MR_BEGIN_MODULE(check_hlds__det_report_module15)
	MR_init_entry1(check_hlds__det_report__find_switch_var_submatches_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__find_switch_var_submatches_6_0);
	MR_init_label10(check_hlds__det_report__find_switch_var_submatches_6_0,125,9,14,16,18,12,23,25,27,28)
	MR_init_label5(check_hlds__det_report__find_switch_var_submatches_6_0,30,31,29,126,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_switch_var_submatches'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__find_switch_var_submatches_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i125);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i126);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i126);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 3);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__det_report__find_switch_var_submatches_6_0_i9);
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i1);
	}
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_sv(6), 0);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		check_hlds__det_report__find_switch_var_submatches_6_0_i14);
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(7);
	MR_np_localcall_lab(check_hlds__det_report__find_switch_var_submatches_6_0,
		check_hlds__det_report__find_switch_var_submatches_6_0_i16);
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, switch_match);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		check_hlds__det_report__find_switch_var_submatches_6_0_i18);
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__delete_first_3_0,
		check_hlds__det_report__find_switch_var_submatches_6_0_i23);
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i1);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__det_report__find_switch_var_submatches_6_0,
		check_hlds__det_report__find_switch_var_submatches_6_0_i25);
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i1);
	}
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__det_report__find_switch_var_submatches_6_0_i27);
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__set_of_var__list_to_set_2_0,
		check_hlds__det_report__find_switch_var_submatches_6_0_i28);
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		check_hlds__det_report__find_switch_var_submatches_6_0_i30);
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__is_non_empty_1_0,
		check_hlds__det_report__find_switch_var_submatches_6_0_i31);
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_submatches_6_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_report__find_switch_var_submatches_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module16)
	MR_init_entry1(check_hlds__det_report__make_switch_match_no_args_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__make_switch_match_no_args_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_switch_match_no_args'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__make_switch_match_no_args_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__set_of_var__list_to_set_1_0);

MR_BEGIN_MODULE(check_hlds__det_report_module17)
	MR_init_entry1(check_hlds__det_report__find_switch_var_matches_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__find_switch_var_matches_6_0);
	MR_init_label10(check_hlds__det_report__find_switch_var_matches_6_0,125,6,3,11,14,17,18,20,21,19)
	MR_init_label8(check_hlds__det_report__find_switch_var_matches_6_0,7,8,31,27,28,39,34,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_switch_var_matches'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__find_switch_var_matches_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, switch_match);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__det_report__find_switch_var_matches_6_0_i6);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i8);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 3);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i8);
	}
	MR_sv(7) = MR_r2;
	MR_tempr4 = MR_r3;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr3, 2);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		check_hlds__det_report__find_switch_var_matches_6_0_i11);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__det_report__find_switch_var_matches_6_0_i14);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i7);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__det_report__find_switch_var_matches_6_0_i17);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__list_to_set_1_0,
		check_hlds__det_report__find_switch_var_matches_6_0_i18);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__intersect_3_0,
		check_hlds__det_report__find_switch_var_matches_6_0_i20);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__is_non_empty_1_0,
		check_hlds__det_report__find_switch_var_matches_6_0_i21);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,3)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_report__find_switch_var_submatches_6_0,
		check_hlds__det_report__find_switch_var_matches_6_0_i31);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i27);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i27);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(8), 3);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i35);
	}
	MR_sv(7) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(8) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__det_report__find_switch_var_matches_6_0_i39);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i34);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i125);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
MR_def_label(check_hlds__det_report__find_switch_var_matches_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__det_report__find_switch_var_matches_6_0_i125);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_0);

MR_BEGIN_MODULE(check_hlds__det_report_module18)
	MR_init_entry1(fn__check_hlds__det_report__switch_match_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__det_report__switch_match_to_string_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'switch_match_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__det_report__switch_match_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(check_hlds__det_report_module19)
	MR_init_entry1(check_hlds__det_report__det_diagnose_switch_context_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__det_diagnose_switch_context_3_0);
	MR_init_label9(check_hlds__det_report__det_diagnose_switch_context_3_0,37,4,5,6,8,10,11,23,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_diagnose_switch_context'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__det_diagnose_switch_context_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_switch_context_3_0_i37);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__det_report__det_diagnose_switch_context_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(check_hlds__det_util__det_get_proc_info_2_0,
		check_hlds__det_report__det_diagnose_switch_context_3_0_i4);
MR_def_label(check_hlds__det_report__det_diagnose_switch_context_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		check_hlds__det_report__det_diagnose_switch_context_3_0_i5);
MR_def_label(check_hlds__det_report__det_diagnose_switch_context_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_0,
		check_hlds__det_report__det_diagnose_switch_context_3_0_i6);
MR_def_label(check_hlds__det_report__det_diagnose_switch_context_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__det_report__switch_match_to_string_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, switch_match);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__det_report__det_diagnose_switch_context_3_0_i8);
MR_def_label(check_hlds__det_report__det_diagnose_switch_context_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		check_hlds__det_report__det_diagnose_switch_context_3_0_i10);
MR_def_label(check_hlds__det_report__det_diagnose_switch_context_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		check_hlds__det_report__det_diagnose_switch_context_3_0_i11);
MR_def_label(check_hlds__det_report__det_diagnose_switch_context_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,13);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,20);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,19);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(check_hlds__det_report__det_diagnose_switch_context_3_0,
		check_hlds__det_report__det_diagnose_switch_context_3_0_i23);
MR_def_label(check_hlds__det_report__det_diagnose_switch_context_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_switch_context_3_0_i25);
MR_def_label(check_hlds__det_report__det_diagnose_switch_context_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_declared_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0);

MR_BEGIN_MODULE(check_hlds__det_report_module20)
	MR_init_entry1(check_hlds__det_report__det_report_call_context_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__det_report_call_context_7_0);
	MR_init_label10(check_hlds__det_report__det_report_call_context_7_0,2,3,4,9,12,5,14,15,18,23)
	MR_init_label4(check_hlds__det_report__det_report_call_context_7_0,24,25,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_report_call_context'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__det_report_call_context_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_report__det_report_call_context_7_0_i2);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		check_hlds__det_report__det_report_call_context_7_0_i3);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		check_hlds__det_report__det_report_call_context_7_0_i4);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_report_call_context_7_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_report_call_context_7_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_report_call_context_7_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,15);
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(7), 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,
		check_hlds__det_report__det_report_call_context_7_0_i12);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_report_call_context_7_0_i14);
	}
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__det_report__det_report_call_context_7_0_i23);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(7), 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,
		check_hlds__det_report__det_report_call_context_7_0_i15);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,16);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_report_call_context_7_0_i18);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		check_hlds__det_report__det_report_call_context_7_0_i23);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__det_report__det_report_call_context_7_0_i24);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_declared_argmodes_2_0,
		check_hlds__det_report__det_report_call_context_7_0_i25);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		check_hlds__det_report__det_report_call_context_7_0_i26);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,
		check_hlds__det_report__det_report_call_context_7_0_i27);
MR_def_label(check_hlds__det_report__det_report_call_context_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,22);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_msg_0;

MR_BEGIN_MODULE(check_hlds__det_report_module21)
	MR_init_entry1(check_hlds__det_report__det_diagnose_conj_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__det_diagnose_conj_7_0);
	MR_init_label5(check_hlds__det_report__det_diagnose_conj_7_0,18,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_diagnose_conj'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_report__det_diagnose_conj_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_conj_7_0_i18);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__det_report__det_diagnose_conj_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_goal_7_0,
		check_hlds__det_report__det_diagnose_conj_7_0_i4);
MR_def_label(check_hlds__det_report__det_diagnose_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__det_report__det_diagnose_conj_7_0_i5);
MR_def_label(check_hlds__det_report__det_diagnose_conj_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	}
	MR_np_localcall_lab(check_hlds__det_report__det_diagnose_conj_7_0,
		check_hlds__det_report__det_diagnose_conj_7_0_i6);
MR_def_label(check_hlds__det_report__det_diagnose_conj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_conj_7_0_i7);
MR_def_label(check_hlds__det_report__det_diagnose_conj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module22)
	MR_init_entry1(check_hlds__det_report__det_diagnose_goal_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__det_diagnose_goal_7_0);
	MR_init_label3(check_hlds__det_report__det_diagnose_goal_7_0,2,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_diagnose_goal'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__det_diagnose_goal_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_r5;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__det_report__det_diagnose_goal_7_0_i2);
MR_def_label(check_hlds__det_report__det_diagnose_goal_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__det_report__compare_determinisms_3_0,
		check_hlds__det_report__det_diagnose_goal_7_0_i4);
MR_def_label(check_hlds__det_report__det_diagnose_goal_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_7_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(check_hlds__det_report__det_diagnose_goal_expr_9_0);
MR_def_label(check_hlds__det_report__det_diagnose_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__generic_call_id_2_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_1);

MR_BEGIN_MODULE(check_hlds__det_report_module23)
	MR_init_entry1(check_hlds__det_report__det_diagnose_goal_expr_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__det_diagnose_goal_expr_9_0);
	MR_init_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0,4,5,9,6,20,16,3,30,31,32)
	MR_init_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0,29,35,36,34,39,40,42,43,38,51)
	MR_init_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0,54,55,61,62,66,67,56,53,75,76)
	MR_init_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0,77,80,74,82,83,84,89,90,85,91)
	MR_init_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0,92,93,94,95,81,98,99,100,101,97)
	MR_init_label10(check_hlds__det_report__det_diagnose_goal_expr_9_0,107,108,106,110,318,116,117,118,119,121)
	MR_init_label8(check_hlds__det_report__det_diagnose_goal_expr_9_0,134,113,114,139,140,142,143,144)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_diagnose_goal_expr'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__det_diagnose_goal_expr_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i4);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i5);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i6);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i9);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,18);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i16);
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i16);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i20);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,20);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i29);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_tfield(2, MR_r1, 0);
	MR_sv(5) = MR_tfield(2, MR_r1, 1);
	MR_sv(6) = MR_tfield(2, MR_r1, 4);
	MR_sv(8) = MR_r7;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i30);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_report_call_context_7_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i31);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_primitive_goal_5_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i32);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i80);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i34);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(6) = MR_tfield(1, MR_r1, 4);
	MR_sv(8) = MR_r7;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i35);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i36);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_primitive_goal_5_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i80);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i38);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i39);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i40);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,3,25);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i42);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Desired determinism is ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i43);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i51);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_tailcall_ent(check_hlds__det_report__det_diagnose_conj_7_0);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i53);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_r7;
	MR_r7 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_disj_10_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i54);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i55);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i56);
	}
	if (MR_INT_EQ(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i56);
	}
	if (MR_INT_LE(MR_sv(5),1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i56);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i61);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_switch_context_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i62);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,14);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,21);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i66);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i67);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i144);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i74);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_tfield(3, MR_r1, 1);
	MR_sv(8) = MR_r7;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i75);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_goal__generic_call_id_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i76);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i77);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_primitive_goal_5_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i80);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i81);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(6) = MR_r6;
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i82);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i83);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i84);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i85);
	}
	if (MR_INT_EQ(MR_sv(7),3)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i85);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i89);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_goal_7_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i90);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i91);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_sv(8);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__update_instmap_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i92);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_goal_7_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i93);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_goal_7_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i94);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i95);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i144);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i97);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tfield(0, MR_sv(4), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i98);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(2) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i99);
	}
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__det_report__det_diagnose_goal_7_0);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i100);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i101);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r5 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(check_hlds__det_report__det_diagnose_goal_7_0);
	}
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i318);
	}
	MR_r8 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r8,1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i106);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_sv(6) = MR_tempr3;
	MR_tempr4 = MR_r8;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 5);
	MR_r1 = MR_tfield(1, MR_tempr4, 4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_r7;
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_goal_7_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i107);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_orelse_goals_7_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i108);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i144);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i110);
	}
	MR_r1 = MR_tfield(2, MR_r8, 2);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_np_tailcall_ent(check_hlds__det_report__det_diagnose_goal_7_0);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.det_report", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.det_report.det_diagnose_goal_expr\'/9", 58);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i114);
	}
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(1) = MR_tempr2;
	MR_sv(6) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i116);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i113);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i117);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_switch_context_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i118);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__det_report__find_missing_cons_ids_6_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i119);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i121);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,22);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,3,27);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i134);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,29);
	MR_tfield(1, MR_tempr2, 1) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,3,27);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i134);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__det_report__det_diagnose_goal_expr_9_0_i139);
	}
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_r7;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_vartypes_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i140);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i142);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_switch_arms_9_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i143);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_goal_expr_9_0_i144);
MR_def_label(check_hlds__det_report__det_diagnose_goal_expr_9_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module24)
	MR_init_entry1(check_hlds__det_report__det_diagnose_disj_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__det_diagnose_disj_10_0);
	MR_init_label10(check_hlds__det_report__det_diagnose_disj_10_0,46,4,5,6,10,11,13,14,12,16)
	MR_init_label1(check_hlds__det_report__det_diagnose_disj_10_0,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_diagnose_disj'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__det_diagnose_disj_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_disj_10_0_i46);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(9) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_disj_10_0_i4);
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_disj_10_0_i5);
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_disj_10_0_i6);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_disj_10_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_report__det_diagnose_disj_10_0_i10);
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_1,
		check_hlds__det_report__det_diagnose_disj_10_0_i10);
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_goal_7_0,
		check_hlds__det_report__det_diagnose_disj_10_0_i11);
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		check_hlds__det_report__det_diagnose_disj_10_0_i13);
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__det_report__det_diagnose_disj_10_0_i14);
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_disj_10_0_i12);
	}
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(4);
	MR_np_localcall_lab(check_hlds__det_report__det_diagnose_disj_10_0,
		check_hlds__det_report__det_diagnose_disj_10_0_i16);
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_r6 = MR_sv(9);
	MR_r7 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_localcall_lab(check_hlds__det_report__det_diagnose_disj_10_0,
		check_hlds__det_report__det_diagnose_disj_10_0_i16);
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_disj_10_0_i17);
MR_def_label(check_hlds__det_report__det_diagnose_disj_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);

MR_BEGIN_MODULE(check_hlds__det_report_module25)
	MR_init_entry1(check_hlds__det_report__det_diagnose_switch_arms_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__det_diagnose_switch_arms_9_0);
	MR_init_label9(check_hlds__det_report__det_diagnose_switch_arms_9_0,25,4,6,9,10,11,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_diagnose_switch_arms'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__det_diagnose_switch_arms_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_switch_arms_9_0_i25);
	}
	MR_r1 = MR_r7;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__det_report__det_diagnose_switch_arms_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(10) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		check_hlds__det_report__det_diagnose_switch_arms_9_0_i4);
MR_def_label(check_hlds__det_report__det_diagnose_switch_arms_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(11);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__det_report__find_switch_var_matches_6_0,
		check_hlds__det_report__det_diagnose_switch_arms_9_0_i6);
MR_def_label(check_hlds__det_report__det_diagnose_switch_arms_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(9) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_sv(10);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_report__det_diagnose_switch_arms_9_0_i9);
MR_def_label(check_hlds__det_report__det_diagnose_switch_arms_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__bind_var_to_functors_8_0,
		check_hlds__det_report__det_diagnose_switch_arms_9_0_i10);
MR_def_label(check_hlds__det_report__det_diagnose_switch_arms_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_set_module_info_3_0,
		check_hlds__det_report__det_diagnose_switch_arms_9_0_i11);
MR_def_label(check_hlds__det_report__det_diagnose_switch_arms_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_goal_7_0,
		check_hlds__det_report__det_diagnose_switch_arms_9_0_i12);
MR_def_label(check_hlds__det_report__det_diagnose_switch_arms_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__det_report__det_diagnose_switch_arms_9_0,
		check_hlds__det_report__det_diagnose_switch_arms_9_0_i13);
MR_def_label(check_hlds__det_report__det_diagnose_switch_arms_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_switch_arms_9_0_i14);
MR_def_label(check_hlds__det_report__det_diagnose_switch_arms_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module26)
	MR_init_entry1(check_hlds__det_report__det_diagnose_orelse_goals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__det_diagnose_orelse_goals_7_0);
	MR_init_label4(check_hlds__det_report__det_diagnose_orelse_goals_7_0,17,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_diagnose_orelse_goals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__det_diagnose_orelse_goals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__det_diagnose_orelse_goals_7_0_i17);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__det_report__det_diagnose_orelse_goals_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_goal_7_0,
		check_hlds__det_report__det_diagnose_orelse_goals_7_0_i4);
MR_def_label(check_hlds__det_report__det_diagnose_orelse_goals_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_localcall_lab(check_hlds__det_report__det_diagnose_orelse_goals_7_0,
		check_hlds__det_report__det_diagnose_orelse_goals_7_0_i5);
MR_def_label(check_hlds__det_report__det_diagnose_orelse_goals_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_diagnose_orelse_goals_7_0_i6);
MR_def_label(check_hlds__det_report__det_diagnose_orelse_goals_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_detism_decl_2_0);
MR_decl_entry(parse_tree__error_util__sort_error_msgs_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_eval_method_2_0);
MR_decl_entry(fn__hlds__hlds_pred__valid_determinism_for_eval_method_2_0);
MR_decl_entry(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(list__sort_2_0);
MR_decl_entry(fn__parse_tree__error_util__list_to_pieces_1_0);
MR_decl_entry(fn__parse_tree__error_util__choose_number_3_0);

MR_BEGIN_MODULE(check_hlds__det_report_module27)
	MR_init_entry1(check_hlds__det_report__check_determinism_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__check_determinism_8_0);
	MR_init_label10(check_hlds__det_report__check_determinism_8_0,2,3,5,6,9,10,11,12,17,20)
	MR_init_label10(check_hlds__det_report__check_determinism_8_0,23,27,114,33,34,36,37,38,39,40)
	MR_init_label10(check_hlds__det_report__check_determinism_8_0,8,116,44,45,46,47,48,49,50,51)
	MR_init_label10(check_hlds__det_report__check_determinism_8_0,52,53,54,55,56,57,4,60,61,62)
	MR_init_label10(check_hlds__det_report__check_determinism_8_0,65,66,67,68,72,81,83,84,85,88)
	MR_init_label2(check_hlds__det_report__check_determinism_8_0,97,64)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_determinism'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__check_determinism_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(8) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		check_hlds__det_report__check_determinism_8_0_i2);
MR_def_label(check_hlds__det_report__check_determinism_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		check_hlds__det_report__check_determinism_8_0_i3);
MR_def_label(check_hlds__det_report__check_determinism_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i5);
	}
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r6 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i4);
MR_def_label(check_hlds__det_report__check_determinism_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(9) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__det_report__compare_determinisms_3_0,
		check_hlds__det_report__check_determinism_8_0_i6);
MR_def_label(check_hlds__det_report__check_determinism_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i8);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__det_report__check_determinism_8_0_i9);
MR_def_label(check_hlds__det_report__check_determinism_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_report__check_determinism_8_0_i10);
MR_def_label(check_hlds__det_report__check_determinism_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__det_report__check_determinism_8_0_i11);
MR_def_label(check_hlds__det_report__check_determinism_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		check_hlds__det_report__check_determinism_8_0_i12);
MR_def_label(check_hlds__det_report__check_determinism_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i116);
	}
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__det_report__check_determinism_8_0_i17);
MR_def_label(check_hlds__det_report__check_determinism_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i116);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__det_report__check_determinism_8_0_i20);
MR_def_label(check_hlds__det_report__check_determinism_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i116);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		check_hlds__det_report__check_determinism_8_0_i23);
MR_def_label(check_hlds__det_report__check_determinism_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i116);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		check_hlds__det_report__check_determinism_8_0_i27);
MR_def_label(check_hlds__det_report__check_determinism_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i116);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i114);
	}
	if (MR_INT_EQ(MR_sv(2),6)) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i116);
	}
MR_def_label(check_hlds__det_report__check_determinism_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		check_hlds__det_report__check_determinism_8_0_i33);
MR_def_label(check_hlds__det_report__check_determinism_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		check_hlds__det_report__check_determinism_8_0_i34);
MR_def_label(check_hlds__det_report__check_determinism_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i116);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_detism_decl_2_0,
		check_hlds__det_report__check_determinism_8_0_i36);
MR_def_label(check_hlds__det_report__check_determinism_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__det_report__detism_decl_name_1_0,
		check_hlds__det_report__check_determinism_8_0_i37);
MR_def_label(check_hlds__det_report__check_determinism_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" could be tighter.\n", 19);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_report__check_determinism_8_0_i38);
MR_def_label(check_hlds__det_report__check_determinism_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("warning: ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_report__check_determinism_8_0_i39);
MR_def_label(check_hlds__det_report__check_determinism_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__det_report__report_determinism_problem_7_0,
		check_hlds__det_report__check_determinism_8_0_i40);
MR_def_label(check_hlds__det_report__check_determinism_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r7 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i4);
	}
MR_def_label(check_hlds__det_report__check_determinism_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i44);
	}
MR_def_label(check_hlds__det_report__check_determinism_8_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r1 = MR_sv(8);
	MR_r6 = MR_sv(10);
	MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i4);
MR_def_label(check_hlds__det_report__check_determinism_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_detism_decl_2_0,
		check_hlds__det_report__check_determinism_8_0_i45);
MR_def_label(check_hlds__det_report__check_determinism_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__det_report__detism_decl_name_1_0,
		check_hlds__det_report__check_determinism_8_0_i46);
MR_def_label(check_hlds__det_report__check_determinism_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" not satisfied.\n", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_report__check_determinism_8_0_i47);
MR_def_label(check_hlds__det_report__check_determinism_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("error: ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_report__check_determinism_8_0_i48);
MR_def_label(check_hlds__det_report__check_determinism_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__det_report__report_determinism_problem_7_0,
		check_hlds__det_report__check_determinism_8_0_i49);
MR_def_label(check_hlds__det_report__check_determinism_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__det_report__check_determinism_8_0_i50);
MR_def_label(check_hlds__det_report__check_determinism_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__det_report__check_determinism_8_0_i51);
MR_def_label(check_hlds__det_report__check_determinism_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__det_report__check_determinism_8_0_i52);
MR_def_label(check_hlds__det_report__check_determinism_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__det_util__det_info_init_7_0,
		check_hlds__det_report__check_determinism_8_0_i53);
MR_def_label(check_hlds__det_report__check_determinism_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_goal_7_0,
		check_hlds__det_report__check_determinism_8_0_i54);
MR_def_label(check_hlds__det_report__check_determinism_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_report__check_determinism_8_0_i55);
MR_def_label(check_hlds__det_report__check_determinism_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__error_util__sort_error_msgs_2_0,
		check_hlds__det_report__check_determinism_8_0_i56);
MR_def_label(check_hlds__det_report__check_determinism_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__check_determinism_8_0_i57);
MR_def_label(check_hlds__det_report__check_determinism_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r1 = MR_sv(9);
	}
MR_def_label(check_hlds__det_report__check_determinism_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r5;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(check_hlds__det_report__make_reqscope_checks_if_needed_7_0,
		check_hlds__det_report__check_determinism_8_0_i60);
MR_def_label(check_hlds__det_report__check_determinism_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		check_hlds__det_report__check_determinism_8_0_i61);
MR_def_label(check_hlds__det_report__check_determinism_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__valid_determinism_for_eval_method_2_0,
		check_hlds__det_report__check_determinism_8_0_i62);
MR_def_label(check_hlds__det_report__check_determinism_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__det_report__check_determinism_8_0_i64);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__det_report__check_determinism_8_0_i65);
MR_def_label(check_hlds__det_report__check_determinism_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0,
		check_hlds__det_report__check_determinism_8_0_i66);
MR_def_label(check_hlds__det_report__check_determinism_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_report__check_determinism_8_0_i67);
MR_def_label(check_hlds__det_report__check_determinism_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error: \140pragma ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		check_hlds__det_report__check_determinism_8_0_i68);
MR_def_label(check_hlds__det_report__check_determinism_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,3,30);
	MR_r2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,3,31);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_report__check_determinism_8_0_i72);
MR_def_label(check_hlds__det_report__check_determinism_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__det_report__get_valid_dets_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,3,7);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		check_hlds__det_report__check_determinism_8_0_i81);
MR_def_label(check_hlds__det_report__check_determinism_8_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__det_report__check_determinism_8_0_i83);
MR_def_label(check_hlds__det_report__check_determinism_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_2_0,
		check_hlds__det_report__check_determinism_8_0_i84);
MR_def_label(check_hlds__det_report__check_determinism_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__list_to_pieces_1_0,
		check_hlds__det_report__check_determinism_8_0_i85);
MR_def_label(check_hlds__det_report__check_determinism_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,3,32);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,3,33);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, determinism);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("determinism", 11);
	MR_r5 = (MR_Word) MR_string_const("determinisms", 12);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__choose_number_3_0,
		check_hlds__det_report__check_determinism_8_0_i88);
MR_def_label(check_hlds__det_report__check_determinism_8_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,9);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__check_determinism_8_0_i97);
MR_def_label(check_hlds__det_report__check_determinism_8_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(9);
	MR_decr_sp_and_return(12);
	}
MR_def_label(check_hlds__det_report__check_determinism_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_exported_1_0);

MR_BEGIN_MODULE(check_hlds__det_report_module28)
	MR_init_entry1(check_hlds__det_report__global_checking_pass_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__global_checking_pass_5_0);
	MR_init_label10(check_hlds__det_report__global_checking_pass_5_0,74,3,4,5,6,8,10,12,17,16)
	MR_init_label5(check_hlds__det_report__global_checking_pass_5_0,15,19,7,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'global_checking_pass'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_report__global_checking_pass_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__det_report__global_checking_pass_5_0_i4);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__det_report__check_determinism_8_0,
		check_hlds__det_report__global_checking_pass_5_0_i5);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		check_hlds__det_report__global_checking_pass_5_0_i6);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		check_hlds__det_report__global_checking_pass_5_0_i8);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		check_hlds__det_report__global_checking_pass_5_0_i10);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_exported_1_0,
		check_hlds__det_report__global_checking_pass_5_0_i12);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i7);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i7);
	}
	MR_r2 = MR_tfield(1, MR_sv(7), 0);
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i17);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i16);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i15);
	}
	MR_r1 = MR_sv(4);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i7);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		check_hlds__det_report__global_checking_pass_5_0_i19);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,24);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i28);
	}
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,
		check_hlds__det_report__global_checking_pass_5_0_i29);
MR_def_label(check_hlds__det_report__global_checking_pass_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__det_report__global_checking_pass_5_0_i74);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__det_util__det_info_get_pred_id_2_0);
MR_decl_entry(check_hlds__det_util__det_info_get_proc_id_2_0);

MR_BEGIN_MODULE(check_hlds__det_report_module29)
	MR_init_entry1(check_hlds__det_report__det_check_lambda_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__det_check_lambda_7_0);
	MR_init_label10(check_hlds__det_report__det_check_lambda_7_0,2,4,5,6,7,8,9,11,17,21)
	MR_init_label5(check_hlds__det_report__det_check_lambda_7_0,34,35,36,37,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_check_lambda'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_report__det_check_lambda_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_np_call_localret_ent(check_hlds__det_report__compare_determinisms_3_0,
		check_hlds__det_report__det_check_lambda_7_0_i2);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(check_hlds__det_report__det_check_lambda_7_0_i4);
	}
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__det_report__det_check_lambda_7_0_i5);
	}
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(14);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_pred_id_2_0,
		check_hlds__det_report__det_check_lambda_7_0_i6);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_proc_id_2_0,
		check_hlds__det_report__det_check_lambda_7_0_i7);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		check_hlds__det_report__det_check_lambda_7_0_i8);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		check_hlds__det_report__det_check_lambda_7_0_i9);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_mode_3_0,
		check_hlds__det_report__det_check_lambda_7_0_i11);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,1,6);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(3,3,9);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,3,35);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(3,3,10);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_report__det_check_lambda_7_0_i17);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(3,3,5);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(3,3,11);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		check_hlds__det_report__det_check_lambda_7_0_i21);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,25);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_check_lambda_7_0_i34);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_check_lambda_7_0_i35);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__det_report__det_diagnose_goal_7_0,
		check_hlds__det_report__det_check_lambda_7_0_i36);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__error_util__sort_error_msgs_2_0,
		check_hlds__det_report__det_check_lambda_7_0_i37);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		check_hlds__det_report__det_check_lambda_7_0_i42);
MR_def_label(check_hlds__det_report__det_check_lambda_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(check_hlds__det_util__det_info_add_error_spec_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module30)
	MR_init_entry1(fn__check_hlds__det_report__promise_solutions_kind_str_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__det_report__promise_solutions_kind_str_1_0);
	MR_init_label2(fn__check_hlds__det_report__promise_solutions_kind_str_1_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'promise_solutions_kind_str'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__det_report__promise_solutions_kind_str_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__promise_solutions_kind_str_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("promise_equivalent_solution_sets", 32);
	MR_proceed();
MR_def_label(fn__check_hlds__det_report__promise_solutions_kind_str_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__promise_solutions_kind_str_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("arbitrary", 9);
	MR_proceed();
MR_def_label(fn__check_hlds__det_report__promise_solutions_kind_str_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("promise_equivalent_solutions", 28);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module31)
	MR_init_entry1(fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_var_name_in_varset'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__det_report__lookup_var_name_in_varset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module32)
	MR_init_entry1(fn__check_hlds__det_report__failing_contexts_description_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__det_report__failing_contexts_description_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'failing_contexts_description'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__det_report__failing_contexts_description_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__det_report__failing_context_description_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, failing_context);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_msg);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_error_util__describe_one_pred_name_3_0);

MR_BEGIN_MODULE(check_hlds__det_report_module33)
	MR_init_entry1(fn__check_hlds__det_report__det_report_seen_call_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__det_report__det_report_seen_call_id_2_0);
	MR_init_label2(fn__check_hlds__det_report__det_report_seen_call_id_2_0,19,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_report_seen_call_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__det_report__det_report_seen_call_id_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__det_report_seen_call_id_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_proceed();
MR_def_label(fn__check_hlds__det_report__det_report_seen_call_id_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_3_0,
		fn__check_hlds__det_report__det_report_seen_call_id_2_0_i6);
MR_def_label(fn__check_hlds__det_report__det_report_seen_call_id_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,22);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_option_3_0);
MR_decl_entry(libs__globals__set_option_4_0);

MR_BEGIN_MODULE(check_hlds__det_report_module34)
	MR_init_entry1(check_hlds__det_report__disable_det_warnings_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__disable_det_warnings_3_0);
	MR_init_label4(check_hlds__det_report__disable_det_warnings_3_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'disable_det_warnings'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_report__disable_det_warnings_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 19;
	MR_np_call_localret_ent(libs__globals__lookup_option_3_0,
		check_hlds__det_report__disable_det_warnings_3_0_i2);
MR_def_label(check_hlds__det_report__disable_det_warnings_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 7;
	MR_np_call_localret_ent(libs__globals__lookup_option_3_0,
		check_hlds__det_report__disable_det_warnings_3_0_i3);
MR_def_label(check_hlds__det_report__disable_det_warnings_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_r1 = (MR_Integer) 19;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		check_hlds__det_report__disable_det_warnings_3_0_i5);
MR_def_label(check_hlds__det_report__disable_det_warnings_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 7;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__globals__set_option_4_0,
		check_hlds__det_report__disable_det_warnings_3_0_i6);
MR_def_label(check_hlds__det_report__disable_det_warnings_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(check_hlds__det_report_module35)
	MR_init_entry1(check_hlds__det_report__restore_det_warnings_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__restore_det_warnings_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_det_warnings'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__det_report__restore_det_warnings_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__globals, globals);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(check_hlds__det_report_module36)
	MR_init_entry1(check_hlds__det_report__get_valid_dets_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__get_valid_dets_2_0);
	MR_init_label5(check_hlds__det_report__get_valid_dets_2_0,2,3,4,1,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_valid_dets'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__get_valid_dets_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.det_report.get_valid_dets/2-0", 3,
		MR_LABEL_AP(check_hlds__det_report__get_valid_dets_2_0_i2));
	MR_r3 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, 0);
	MR_fv(3) = (MR_Integer) 1;
	MR_fv(1) = MR_r1;
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_GOTO_LAB(check_hlds__det_report__get_valid_dets_2_0_i1);
MR_def_label(check_hlds__det_report__get_valid_dets_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(3);
	if (MR_INT_GE(MR_r3,7)) {
		MR_GOTO_LAB(check_hlds__det_report__get_valid_dets_2_0_i3);
	}
	MR_fv(3) = ((MR_Integer) MR_fv(3) + (MR_Integer) 1);
	MR_GOTO_LAB(check_hlds__det_report__get_valid_dets_2_0_i4);
MR_def_label(check_hlds__det_report__get_valid_dets_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(check_hlds__det_report__get_valid_dets_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_8_0, (MR_Integer) MR_r3);
	MR_r1 = MR_fv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
MR_def_label(check_hlds__det_report__get_valid_dets_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__valid_determinism_for_eval_method_2_0,
		check_hlds__det_report__get_valid_dets_2_0_i5);
MR_def_label(check_hlds__det_report__get_valid_dets_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(2);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__error_util__capitalize_1_0);

MR_BEGIN_MODULE(check_hlds__det_report_module37)
	MR_init_entry1(fn__check_hlds__det_report__failing_context_description_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__det_report__failing_context_description_3_0);
	MR_init_label10(fn__check_hlds__det_report__failing_context_description_3_0,3,7,12,11,21,22,20,35,36,34)
	MR_init_label7(fn__check_hlds__det_report__failing_context_description_3_0,45,46,44,58,59,60,66)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'failing_context_description'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__det_report__failing_context_description_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__failing_context_description_3_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,27);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i66);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__failing_context_description_3_0_i7);
	}
	MR_sv(1) = MR_tfield(0, MR_r3, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,1,19);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i66);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__failing_context_description_3_0_i11);
	}
	MR_sv(1) = MR_tfield(0, MR_r3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i12);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,39);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i66);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__failing_context_description_3_0_i20);
	}
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_r3, 0);
	MR_sv(2) = MR_tfield(2, MR_r4, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tfield(2, MR_r4, 0);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i21);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i22);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,22);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,14);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,41);
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i66);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__failing_context_description_3_0_i34);
	}
	MR_sv(1) = MR_tfield(0, MR_r3, 0);
	MR_r2 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i35);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i36);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,22);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,42);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i66);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(fn__check_hlds__det_report__failing_context_description_3_0_i44);
	}
	MR_sv(1) = MR_tfield(0, MR_r3, 0);
	MR_sv(3) = MR_tfield(3, MR_r4, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i45);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i46);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,1,22);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,43);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,41);
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i66);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r3, 0);
	MR_r1 = MR_tfield(3, MR_r4, 1);
	MR_np_call_localret_ent(hlds__hlds_goal__generic_call_id_2_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i58);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i59);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__capitalize_1_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i60);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,22);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__det_report__failing_context_description_3_0_i66);
MR_def_label(fn__check_hlds__det_report__failing_context_description_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module38)
	MR_init_entry1(check_hlds__det_report__restore_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__det_report__restore_option_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__det_report__restore_option_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(libs__globals__set_option_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__unify_context_0_0);

MR_BEGIN_MODULE(check_hlds__det_report_module39)
	MR_init_entry1(__Unify___check_hlds__det_report__cc_unify_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_report__cc_unify_context_0_0);
	MR_init_label3(__Unify___check_hlds__det_report__cc_unify_context_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_report__cc_unify_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__cc_unify_context_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__cc_unify_context_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__det_report__cc_unify_context_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__det_report__cc_unify_context_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__cc_unify_context_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__unify_context_0_0);
MR_def_label(__Unify___check_hlds__det_report__cc_unify_context_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_goal__unify_context_0_0);

MR_BEGIN_MODULE(check_hlds__det_report_module40)
	MR_init_entry1(__Compare___check_hlds__det_report__cc_unify_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_report__cc_unify_context_0_0);
	MR_init_label4(__Compare___check_hlds__det_report__cc_unify_context_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_report__cc_unify_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__cc_unify_context_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__cc_unify_context_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__cc_unify_context_0_0_i7);
	}
MR_def_label(__Compare___check_hlds__det_report__cc_unify_context_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__cc_unify_context_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__cc_unify_context_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__cc_unify_context_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__cc_unify_context_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__unify_context_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module41)
	MR_init_entry1(__Unify___check_hlds__det_report__det_comparison_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_report__det_comparison_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_report__det_comparison_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__det_report_module42)
	MR_init_entry1(__Compare___check_hlds__det_report__det_comparison_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_report__det_comparison_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_report__det_comparison_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(check_hlds__det_report_module43)
	MR_init_entry1(__Unify___check_hlds__det_report__failing_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_report__failing_context_0_0);
	MR_init_label3(__Unify___check_hlds__det_report__failing_context_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_report__failing_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_context_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___check_hlds__det_report__failing_context_0_0_i4);
MR_def_label(__Unify___check_hlds__det_report__failing_context_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_context_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___check_hlds__det_report__failing_goal_0_0);
MR_def_label(__Unify___check_hlds__det_report__failing_context_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__det_report__failing_context_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(check_hlds__det_report_module44)
	MR_init_entry1(__Compare___check_hlds__det_report__failing_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_report__failing_context_0_0);
	MR_init_label4(__Compare___check_hlds__det_report__failing_context_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_report__failing_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_context_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_context_0_0_i2);
MR_def_label(__Compare___check_hlds__det_report__failing_context_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__det_report__failing_context_0_0,2)
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
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___check_hlds__det_report__failing_context_0_0_i5);
MR_def_label(__Compare___check_hlds__det_report__failing_context_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_context_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___check_hlds__det_report__failing_goal_0_0);
MR_def_label(__Compare___check_hlds__det_report__failing_context_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_goal__generic_call_0_0);

MR_BEGIN_MODULE(check_hlds__det_report_module45)
	MR_init_entry1(__Unify___check_hlds__det_report__failing_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_report__failing_goal_0_0);
	MR_init_label10(__Unify___check_hlds__det_report__failing_goal_0_0,5,6,7,13,11,17,21,48,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_report__failing_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i48);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__det_report__failing_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___check_hlds__det_report__failing_goal_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__det_report__failing_goal_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__det_report__failing_goal_0_0_i13);
MR_def_label(__Unify___check_hlds__det_report__failing_goal_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
MR_def_label(__Unify___check_hlds__det_report__failing_goal_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___check_hlds__det_report__failing_goal_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i19);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i1);
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
		__Unify___check_hlds__det_report__failing_goal_0_0_i21);
MR_def_label(__Unify___check_hlds__det_report__failing_goal_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_def_label(__Unify___check_hlds__det_report__failing_goal_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__det_report__failing_goal_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__failing_goal_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___hlds__hlds_goal__generic_call_0_0);
MR_def_label(__Unify___check_hlds__det_report__failing_goal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);
MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__generic_call_0_0);

MR_BEGIN_MODULE(check_hlds__det_report_module46)
	MR_init_entry1(__Compare___check_hlds__det_report__failing_goal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_report__failing_goal_0_0);
	MR_init_label10(__Compare___check_hlds__det_report__failing_goal_0_0,7,8,9,10,11,5,15,143,16,17)
	MR_init_label10(__Compare___check_hlds__det_report__failing_goal_0_0,18,19,13,23,24,25,27,28,21,32)
	MR_init_label10(__Compare___check_hlds__det_report__failing_goal_0_0,33,34,37,35,42,30,46,47,48,49)
	MR_init_label10(__Compare___check_hlds__det_report__failing_goal_0_0,52,50,44,60,61,62,63,64,67,58)
	MR_init_label9(__Compare___check_hlds__det_report__failing_goal_0_0,73,128,74,75,76,77,132,78,80)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_report__failing_goal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i143);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i128);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i16);
	}
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i132);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i21);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i25);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i128);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i30);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i32);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(2) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___check_hlds__det_report__failing_goal_0_0_i37);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i80);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i42);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i128);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i44);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i46);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i48);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i50);
	}
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
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__det_report__failing_goal_0_0_i52);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i80);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i128);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i58);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i60);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i61);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i128);
	}
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
		__Compare___check_hlds__det_report__failing_goal_0_0_i67);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i80);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__cons_id_0_0);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i73);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i74);
	}
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i75);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i76);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i77);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__failing_goal_0_0_i78);
	}
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___hlds__hlds_goal__generic_call_0_0);
MR_def_label(__Compare___check_hlds__det_report__failing_goal_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__det_report_module47)
	MR_init_entry1(__Unify___check_hlds__det_report__options_to_restore_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_report__options_to_restore_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_report__options_to_restore_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
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

MR_BEGIN_MODULE(check_hlds__det_report_module48)
	MR_init_entry1(__Compare___check_hlds__det_report__options_to_restore_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_report__options_to_restore_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_report__options_to_restore_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,9,0);
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


MR_BEGIN_MODULE(check_hlds__det_report_module49)
	MR_init_entry1(__Unify___check_hlds__det_report__seen_call_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_report__seen_call_id_0_0);
	MR_init_label3(__Unify___check_hlds__det_report__seen_call_id_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_report__seen_call_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__seen_call_id_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__seen_call_id_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__det_report__seen_call_id_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__det_report__seen_call_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__seen_call_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__seen_call_id_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__det_report__seen_call_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module50)
	MR_init_entry1(__Compare___check_hlds__det_report__seen_call_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_report__seen_call_id_0_0);
	MR_init_label6(__Compare___check_hlds__det_report__seen_call_id_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_report__seen_call_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__seen_call_id_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__seen_call_id_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__seen_call_id_0_0_i7);
	}
MR_def_label(__Compare___check_hlds__det_report__seen_call_id_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__seen_call_id_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__seen_call_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__seen_call_id_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__det_report__seen_call_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__det_report__seen_call_id_0_0_i11);
MR_def_label(__Compare___check_hlds__det_report__seen_call_id_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__seen_call_id_0_0_i16);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__det_report__seen_call_id_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module51)
	MR_init_entry1(__Unify___check_hlds__det_report__switch_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_report__switch_context_0_0);
	MR_init_label4(__Unify___check_hlds__det_report__switch_context_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__det_report__switch_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__switch_context_0_0_i10);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___check_hlds__det_report__switch_context_0_0_i4);
MR_def_label(__Unify___check_hlds__det_report__switch_context_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__switch_context_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___check_hlds__det_report__switch_match_0_0,
		__Unify___check_hlds__det_report__switch_context_0_0_i6);
MR_def_label(__Unify___check_hlds__det_report__switch_context_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__switch_context_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, switch_match);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__det_report__switch_context_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__det_report__switch_context_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module52)
	MR_init_entry1(__Compare___check_hlds__det_report__switch_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_report__switch_context_0_0);
	MR_init_label5(__Compare___check_hlds__det_report__switch_context_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__det_report__switch_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__switch_context_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__det_report__switch_context_0_0_i2);
MR_def_label(__Compare___check_hlds__det_report__switch_context_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__det_report__switch_context_0_0,2)
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
		__Compare___check_hlds__det_report__switch_context_0_0_i5);
MR_def_label(__Compare___check_hlds__det_report__switch_context_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__switch_context_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___check_hlds__det_report__switch_match_0_0,
		__Compare___check_hlds__det_report__switch_context_0_0_i9);
MR_def_label(__Compare___check_hlds__det_report__switch_context_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__switch_context_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__det_report, switch_match);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__det_report__switch_context_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__det_report_module53)
	MR_init_entry1(__Unify___check_hlds__det_report__switch_match_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__det_report__switch_match_0_0);
	MR_init_label3(__Unify___check_hlds__det_report__switch_match_0_0,4,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__det_report__switch_match_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__switch_match_0_0_i10);
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
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___check_hlds__det_report__switch_match_0_0_i4);
MR_def_label(__Unify___check_hlds__det_report__switch_match_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__det_report__switch_match_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,29);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___check_hlds__det_report__switch_match_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__det_report__switch_match_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(check_hlds__det_report_module54)
	MR_init_entry1(__Compare___check_hlds__det_report__switch_match_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__det_report__switch_match_0_0);
	MR_init_label4(__Compare___check_hlds__det_report__switch_match_0_0,3,2,5,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__det_report__switch_match_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__switch_match_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__det_report__switch_match_0_0_i2);
MR_def_label(__Compare___check_hlds__det_report__switch_match_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__det_report__switch_match_0_0,2)
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___check_hlds__det_report__switch_match_0_0_i5);
MR_def_label(__Compare___check_hlds__det_report__switch_match_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__det_report__switch_match_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,29);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___check_hlds__det_report__switch_match_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(check_hlds__mode_util__mode_is_fully_input_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_det_to_string_1_0);

MR_BEGIN_MODULE(check_hlds__det_report_module55)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,2,4,6,11,12,17,20,16,23,24)
	MR_init_label5(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,25,30,38,39,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__check_for_multisoln_func__[2]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i3);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i3);
	}
	if (MR_INT_EQ(MR_r2,1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i11);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i17);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_fully_input_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i20);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i23);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i24);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_pred_name_mode_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i25);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,1,30);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,3,9);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,3,45);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_det_to_string_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i30);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,1,7);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i38);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0_i39);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,37);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(11);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_102_111_114_95_109_117_108_116_105_115_111_108_110_95_102_117_110_99_95_95_91_50_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0);
MR_decl_entry(varset__search_name_3_0);
MR_decl_entry(fn__parse_tree__error_util__add_quotes_1_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0);

MR_BEGIN_MODULE(check_hlds__det_report_module56)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0);
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,2,3,4,5,9,7,11,6,13,19)
	MR_init_label10(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,23,24,16,31,32,35,36,12,46,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__det_report_unify_context__[3]_0'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__det_util__det_get_proc_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i3);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(check_hlds__det_util__det_info_get_module_info_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i7);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i9);
	}
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_sv(5) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("Unification", 11);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_sv(5) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("unification", 11);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i11);
	}
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_sv(5) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("In unification", 14);
	MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_sv(5) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("in unification", 14);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__search_name_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i13);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(varset__search_name_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i19);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,3,43);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i23);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__add_quotes_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i24);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,3,52);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i31);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__add_quotes_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i32);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,3,14);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i35);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__add_quotes_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i36);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,3,43);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i46);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__error_util__add_quotes_1_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0_i47);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_116_95_114_101_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
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

static void mercury__check_hlds__det_report_maybe_bunch_0(void)
{
	check_hlds__det_report_module0();
	check_hlds__det_report_module1();
	check_hlds__det_report_module2();
	check_hlds__det_report_module3();
	check_hlds__det_report_module4();
	check_hlds__det_report_module5();
	check_hlds__det_report_module6();
	check_hlds__det_report_module7();
	check_hlds__det_report_module8();
	check_hlds__det_report_module9();
	check_hlds__det_report_module10();
	check_hlds__det_report_module11();
	check_hlds__det_report_module12();
	check_hlds__det_report_module13();
	check_hlds__det_report_module14();
	check_hlds__det_report_module15();
	check_hlds__det_report_module16();
	check_hlds__det_report_module17();
	check_hlds__det_report_module18();
	check_hlds__det_report_module19();
	check_hlds__det_report_module20();
	check_hlds__det_report_module21();
	check_hlds__det_report_module22();
	check_hlds__det_report_module23();
	check_hlds__det_report_module24();
	check_hlds__det_report_module25();
	check_hlds__det_report_module26();
	check_hlds__det_report_module27();
	check_hlds__det_report_module28();
	check_hlds__det_report_module29();
	check_hlds__det_report_module30();
	check_hlds__det_report_module31();
	check_hlds__det_report_module32();
	check_hlds__det_report_module33();
	check_hlds__det_report_module34();
	check_hlds__det_report_module35();
	check_hlds__det_report_module36();
	check_hlds__det_report_module37();
	check_hlds__det_report_module38();
	check_hlds__det_report_module39();
}

static void mercury__check_hlds__det_report_maybe_bunch_1(void)
{
	check_hlds__det_report_module40();
	check_hlds__det_report_module41();
	check_hlds__det_report_module42();
	check_hlds__det_report_module43();
	check_hlds__det_report_module44();
	check_hlds__det_report_module45();
	check_hlds__det_report_module46();
	check_hlds__det_report_module47();
	check_hlds__det_report_module48();
	check_hlds__det_report_module49();
	check_hlds__det_report_module50();
	check_hlds__det_report_module51();
	check_hlds__det_report_module52();
	check_hlds__det_report_module53();
	check_hlds__det_report_module54();
	check_hlds__det_report_module55();
	check_hlds__det_report_module56();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__det_report__init(void);
void mercury__check_hlds__det_report__init_type_tables(void);
void mercury__check_hlds__det_report__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__det_report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__det_report__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__det_report__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__det_report__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__det_report_maybe_bunch_0();
	mercury__check_hlds__det_report_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_report__type_ctor_info_cc_unify_context_0,
		check_hlds__det_report__cc_unify_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_report__type_ctor_info_det_comparison_0,
		check_hlds__det_report__det_comparison_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_report__type_ctor_info_failing_context_0,
		check_hlds__det_report__failing_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_report__type_ctor_info_failing_goal_0,
		check_hlds__det_report__failing_goal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_report__type_ctor_info_options_to_restore_0,
		check_hlds__det_report__options_to_restore_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_report__type_ctor_info_seen_call_id_0,
		check_hlds__det_report__seen_call_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_report__type_ctor_info_switch_context_0,
		check_hlds__det_report__switch_context_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__det_report__type_ctor_info_switch_match_0,
		check_hlds__det_report__switch_match_0_0);
	mercury__check_hlds__det_report__init_debugger();
}

void mercury__check_hlds__det_report__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_report__type_ctor_info_cc_unify_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_report__type_ctor_info_det_comparison_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_report__type_ctor_info_failing_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_report__type_ctor_info_failing_goal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_report__type_ctor_info_options_to_restore_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_report__type_ctor_info_seen_call_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_report__type_ctor_info_switch_context_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__det_report__type_ctor_info_switch_match_0);
	}
}


void mercury__check_hlds__det_report__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__det_report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__det_report);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__det_report__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__det_report__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
