/*
** Automatically generated from `hlds_out_goal.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__hlds_out__hlds_out_goal__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "hlds.hlds_out.hlds_out_goal.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "hlds.hlds_out.hlds_out_goal.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "hlds.hlds_out.hlds_out_goal.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "hlds.hlds_out.hlds_out_goal.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "hlds.hlds_out.hlds_out_goal.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.hlds_out.hlds_out_goal.c"
#line 49 "hlds.hlds_out.hlds_out_goal.c"
#include "hlds.hlds_out.hlds_out_goal.mh"

#line 52 "hlds.hlds_out.hlds_out_goal.c"
#line 53 "hlds.hlds_out.hlds_out_goal.c"
#ifndef HLDS__HLDS_OUT__HLDS_OUT_GOAL_DECL_GUARD
#define HLDS__HLDS_OUT__HLDS_OUT_GOAL_DECL_GUARD

#line 57 "hlds.hlds_out.hlds_out_goal.c"
#line 58 "hlds.hlds_out.hlds_out_goal.c"

#endif
#line 61 "hlds.hlds_out.hlds_out_goal.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0, 2,19,4,6,7,8,10,12,13,3)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0, 12,13,14,15,39,17,18,19,21,16)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0, 23,24,25,26,27,40,29,30,31,32)
MR_decl_label4(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0, 34,35,36,37)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0, 4,6,8,5,15,17,18,19,20,14)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0, 25,26,28,3,33,35,37,38,43,47)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0, 31,52,54,51,57,58,59,61,50,68)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0, 70,67,77,78,79,80,81,66,85,87)
MR_decl_label4(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0, 84,90,91,94)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0, 4,5,6,7,3,11,12,13,14,15)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0, 17,21,22,23,24,25,26,28,31,29)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0, 36,37,38,39,35,43,44,47,48,46)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0, 50,51,33,56,55,59,60,58,63,64)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0, 10,70,72,73,74,69,77,78,79,82)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0, 81,83,68,86,87,89,91,92,93,94)
MR_decl_label9(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0, 95,96,85,99,100,101,102,103,2)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 3,5,6,7,11,12,13,14,15,2)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 20,22,310,23,24,25,26,29,31,33)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 35,312,37,38,39,40,42,44,47,49)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 51,52,53,46,57,59,61,62,63,43)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 68,70,73,75,76,77,78,71,81,84)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 86,87,88,89,82,92,95,97,98,99)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 100,93,103,106,108,109,110,111,67,116)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 118,119,120,121,122,115,126,128,325,130)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 131,132,134,136,137,138,139,140,142,143)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 144,145,146,148,149,150,151,152,154,155)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 156,157,158,160,162,164,166,169,168,328)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 171,172,174,176,178,330,180,183,184,182)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 181,187,189,191,192,194,197,198,200,202)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 204,206,208,337,203,210,212,214,215,211)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 217,218,222,224,227,229,231,232,233,226)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 237,239,241,242,243,223,248,251,253,255)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 258,259,260,261,262,263,264,265,266,267)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 268,269,271,273,276,278,275,281,282,280)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 284,285,286,247,290,352,292,291,295,297)
MR_decl_label5(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0, 298,301,302,304,306)
MR_decl_label2(hlds__hlds_out__hlds_out_goal__dump_goal_5_0, 2,3)
MR_decl_label1(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0, 2)
MR_decl_label1(hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_0, 2)
MR_decl_label5(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0, 2,3,4,5,6)
MR_decl_label7(hlds__hlds_out__hlds_out_goal__write_case_10_0, 2,3,4,5,6,8,9)
MR_decl_label5(hlds__hlds_out__hlds_out_goal__write_cases_10_0, 12,4,5,6,14)
MR_decl_label7(hlds__hlds_out__hlds_out_goal__write_conj_12_0, 23,3,8,9,10,5,11)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0, 64,4,7,8,9,11,12,10,16,17)
MR_decl_label8(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0, 15,20,5,25,27,28,31,66)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0, 4,6,3,12,13,14,15,16,11,22)
MR_decl_label5(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0, 23,24,25,26,19)
MR_decl_label7(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0, 2,4,7,8,9,10,11)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0, 3,5,7,9,11,13,15,17,19,86)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label3(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0, 16,18,19)
MR_decl_label5(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0, 12,4,5,6,14)
MR_decl_label5(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0, 2,3,4,5,6)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0, 3,7,6,56,9,10,12,13,15,57)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0, 14,16,17,18,19,23,24,26,27,28)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0, 30,32,33,34,35,36,37,38,39,43)
MR_decl_label8(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0, 45,42,47,48,49,50,51,53)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0, 2,5,6,7,4,10,12,14,15,8)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0, 18,20,22,23,24,25,16,29,30,31)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0, 28,32,33,34,26,38,39,40,37,41)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0, 42,43,35,45,46,47,48,49,51,53)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0, 55,56,44,58,59,60,57,63,65,67)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0, 69,71,73,75,77,78,61,79,80,81)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0, 136,83,84,85,87,82,91,92,94,95)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0, 89,97,99,100,101,102,104,105,106,107)
MR_decl_label4(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0, 108,109,110,111)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0, 4,5,6,7,8,9,46,11,12,13)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0, 15,16,17,18,3,22,23,24,25,26)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0, 27,28,21,31,32,34,35,36,39,40)
MR_decl_label3(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0, 41,42,43)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0, 2,3,4,5,6,7,8,11,10,13)
MR_decl_label3(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0, 14,15,16)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0, 2,3,4,6,8,10,11,16,18,14)
MR_decl_label2(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0, 20,30)
MR_decl_label3(hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0, 4,2,7)
MR_decl_label4(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0, 4,2,7,9)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0, 3,5,116,7,9,10,11,12,13,15)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0, 17,19,118,21,22,23,24,26,28,30)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0, 32,33,35,37,39,41,43,44,36,48)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0, 50,52,53,54,55,56,58,60,61,62)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0, 63,65,67,68,69,70,72,74,47,78)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0, 80,82,83,84,86,88,89,90,92,94)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0, 95,96,97,99,101,77,105,107,109,110)
MR_decl_label3(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0, 111,112,114)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0, 51,6,7,8,10,5,13,15,17,18)
MR_decl_label1(hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_0, 3)
MR_decl_label6(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0, 2,3,4,5,6,7)
MR_decl_label1(hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_0, 2)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0, 7,4,9,10,14,3,18,23,25,26)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0, 28,35,36,37,38,40,41,42,43,22)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0, 47,49,56,57,58,59,60,61,20,67)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0, 69,70,72,79,80,81,82,84,85,86)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0, 87,88,89,66,91,93,100,101,102,103)
MR_decl_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0, 104,105,106,107,19,112,109,116,120,121)
MR_decl_label2(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0, 17,232)
MR_decl_label9(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0, 16,4,5,6,7,8,9,10,18)
MR_decl_label8(hlds__hlds_out__hlds_out_goal__write_vars_5_0, 28,5,7,8,10,12,13,32)
MR_decl_label3(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0, 3,7,8)
MR_decl_label4(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0, 7,4,3,11)
MR_def_extern_entry(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_vars_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_conj_12_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_cases_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_case_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_goal__dump_goal_5_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_goal__write_goal_9_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_goal__write_unify_rhs_9_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__308__1_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__312__1_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__316__1_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__320__1_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__324__1_3_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
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
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_6;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_case_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_compiletime_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_1;
static const struct mercury_type_1 mercury_common_1[10] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_case_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, trace_compiletime),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_trace_compiletime_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_trace_runtime_3_0);
static const struct mercury_type_2 mercury_common_2[10] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__308__1_3_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__312__1_3_0),
0
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__316__1_3_0),
0
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__320__1_3_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__324__1_3_0),
0
},
{
MR_COMMON(1,5),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(1,6),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_0),
0
},
{
MR_COMMON(1,7),
MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_trace_compiletime_3_0),
0
},
{
MR_COMMON(1,8),
MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_trace_runtime_3_0),
0
},
{
MR_COMMON(1,9),
MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_trace_runtime_3_0),
0
},
};

static const struct mercury_type_3 mercury_common_3[15] =
{
{
MR_string_const(")", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("any_func", 8),
MR_TAG_COMMON(1,3,0)
},
{
MR_string_const("(", 1),
MR_TAG_COMMON(1,3,1)
},
{
MR_string_const("(", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("any_func", 8),
MR_TAG_COMMON(1,3,3)
},
{
MR_string_const("any_pred", 8),
MR_TAG_COMMON(1,3,0)
},
{
MR_string_const("(", 1),
MR_TAG_COMMON(1,3,5)
},
{
MR_string_const("any_pred", 8),
MR_TAG_COMMON(1,3,3)
},
{
MR_string_const("func", 4),
MR_TAG_COMMON(1,3,0)
},
{
MR_string_const("(", 1),
MR_TAG_COMMON(1,3,8)
},
{
MR_string_const("func", 4),
MR_TAG_COMMON(1,3,3)
},
{
MR_string_const("pred", 4),
MR_TAG_COMMON(1,3,0)
},
{
MR_string_const("(", 1),
MR_TAG_COMMON(1,3,11)
},
{
MR_string_const("pred", 4),
MR_TAG_COMMON(1,3,3)
},
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_4;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
MR_string_const("class_method_call", 17)
},
{
MR_string_const("apply", 5)
},
{
MR_string_const("call", 4)
},
};


static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_1 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_trace_runtime",
3,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
1464,
"41"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_4 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"write_trace_mutable_var_hlds",
4,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
1958,
"213"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_3 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"write_trace_mutable_var_hlds",
4,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
1958,
"213"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_2 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_trace_runtime",
3,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
1945,
"192"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_1 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_trace_compiletime",
3,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
1935,
"177"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__write_case_10_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"write_alternative_cons_id",
3,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
1710,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_6 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
474,
"410"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_5 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"lambda_hlds_out_goal_m_324",
3,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
324,
"224"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_4 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"lambda_hlds_out_goal_m_320",
3,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
320,
"216"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_3 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"lambda_hlds_out_goal_m_316",
3,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
316,
"208"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"lambda_hlds_out_goal_m_312",
3,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
312,
"200"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_goal",
"hlds.hlds_out.hlds_out_goal",
"lambda_hlds_out_goal_m_308",
3,
0
},
"hlds.hlds_out.hlds_out_goal",
"hlds_out_goal.m",
308,
"192"
};


MR_decl_entry(hlds__hlds_out__hlds_out_util__write_indent_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
MR_decl_entry(fn__hlds__hlds_llds__abs_locn_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module0)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0);
	MR_init_label9(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,16,4,5,6,7,8,9,10,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_var_to_abs_locns'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0_i18);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_llds__abs_locn_to_string_1_0,
		hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module1)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_vars_5_0);
	MR_init_label8(hlds__hlds_out__hlds_out_goal__write_vars_5_0,28,5,7,8,10,12,13,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_goal__write_vars_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_vars_5_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_r6 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_vars_5_0_i5);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_tempr4;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(1, MR_tempr3, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_vars_5_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_vars_5_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_vars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_vars_5_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_vars_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_vars_5_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_vars_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_vars_5_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_vars_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_vars_5_0_i28);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_vars_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__contains_char_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_follow_vars_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(io__write_int_3_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_resume_point_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__to_sorted_list_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_vars_5_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module2)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,3,5,116,7,9,10,11,12,13,15)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,17,19,118,21,22,23,24,26,28,30)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,32,33,35,37,39,41,43,44,36,48)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,50,52,53,54,55,56,58,60,61,62)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,63,65,67,68,69,70,72,74,47,78)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,80,82,83,84,86,88,89,90,92,94)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,95,96,97,99,101,77,105,107,109,110)
	MR_init_label3(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,111,112,114)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_llds_code_gen_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 102;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i116);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_follow_vars_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i7);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% follow vars: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i116);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 114;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i118);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i21);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% resume point ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const("orig and stack ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i28);
	}
	MR_r1 = (MR_Word) MR_string_const("orig only ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),3)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const("stack and orig ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stack only ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i33);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i118);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 115;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i36);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i36);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% store map:\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 115;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i47);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i50);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i52);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i53);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i54);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i55);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need across call forward vars: ", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i58);
	}
	MR_r1 = (MR_Word) MR_string_const("none\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i60);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i62);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need across call resume vars: ", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i63);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i65);
	}
	MR_r1 = (MR_Word) MR_string_const("none\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i68);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i67);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i68);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i69);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need across call nondet vars: ", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i70);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i72);
	}
	MR_r1 = (MR_Word) MR_string_const("none\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i74);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 115;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i78);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i77);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i80);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i77);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i82);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i83);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i84);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i86);
	}
	MR_r1 = (MR_Word) MR_string_const("% resume point has no stack label\n", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i88);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% resume point has stack label\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i88);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i89);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need in resume resume vars: ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i90);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i92);
	}
	MR_r1 = (MR_Word) MR_string_const("none\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i95);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i94);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i95);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i96);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need in resume nondet vars: ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i97);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i99);
	}
	MR_r1 = (MR_Word) MR_string_const("none\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i101);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 115;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i105);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i114);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i107);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i114);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i110);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need in par_conj vars: ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i111);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0_i112);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_is_unreachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_to_assoc_list_2_0);
MR_decl_entry(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module3)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0);
	MR_init_label3(hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0,4,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_instmap_delta'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("unreachable", 11);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(assoc_list__keys_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module4)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0);
	MR_init_label4(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0,4,2,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_instmap_delta_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("unreachable", 11);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_vars_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module5)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,51,6,7,8,10,5,13,15,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_short_reuse_description'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i51);
	}
	MR_r1 = (MR_Word) MR_string_const("cell died", 9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i5);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("cell reuse - ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" - ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("with condition", 14);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("always safe", 11);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(2, MR_r1, 1);
	MR_sv(4) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("reuse call - ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("with condition", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("always safe", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", no clobbers = ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_util__write_qualified_functor_7_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module6)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_0);
	MR_init_label1(hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_sym_name_and_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_util__write_qualified_functor_7_0);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r5 = (MR_Integer) 0;
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_type_5_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module7)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,64,4,7,8,9,11,12,10,16,17)
	MR_init_label8(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,15,20,5,25,27,28,31,66)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_foreign_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i66);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = (MR_Word) MR_string_const("(", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("in", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("out", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("\044alwaysboxed", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\100", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i28);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i66);
	}
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0_i64);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module8)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0);
	MR_init_label5(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_atomic_interface_vars'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0);
MR_decl_entry(fn__hlds__hlds_goal__producing_vars_1_0);
MR_decl_entry(set__non_empty_1_0);
MR_decl_entry(fn__hlds__hlds_goal__consuming_vars_1_0);
MR_decl_entry(fn__hlds__hlds_goal__make_visible_vars_1_0);
MR_decl_entry(fn__hlds__hlds_goal__need_visible_vars_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
MR_decl_entry(fn__parse_tree__prog_out__determinism_to_string_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_maybe_rbmm_1_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(io__write_list_5_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_purity_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_maybe_dp_info_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_changed_vars_2_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_maybe_lfu_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_maybe_lbu_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_maybe_reuse_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_features_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module9)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,3,5,6,7,11,12,13,14,15,2)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,20,22,310,23,24,25,26,29,31,33)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,35,312,37,38,39,40,42,44,47,49)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,51,52,53,46,57,59,61,62,63,43)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,68,70,73,75,76,77,78,71,81,84)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,86,87,88,89,82,92,95,97,98,99)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,100,93,103,106,108,109,110,111,67,116)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,118,119,120,121,122,115,126,128,325,130)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,131,132,134,136,137,138,139,140,142,143)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,144,145,146,148,149,150,151,152,154,155)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,156,157,158,160,162,164,166,169,168,328)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,171,172,174,176,178,330,180,183,184,182)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,181,187,189,191,192,194,197,198,200,202)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,204,206,208,337,203,210,212,214,215,211)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,217,218,222,224,227,229,231,232,233,226)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,237,239,241,242,243,223,248,251,253,255)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,258,259,260,261,262,263,264,265,266,267)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,268,269,271,273,276,278,275,281,282,280)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,284,285,286,247,290,352,292,291,295,297)
	MR_init_label5(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,298,301,302,304,306)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_write_goal'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(9) = MR_tfield(0, MR_r2, 1);
	MR_sv(8) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 99;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i2);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(14), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i2);
	}
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% context: file \140", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\', line ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 80;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i310);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_goal_id_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i23);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% goal id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i310);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 110;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i312);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i33);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i37);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% nonlocals: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i312);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 112;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i43);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i46);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i49);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i46);
	}
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i51);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pre-deaths: ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i52);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i53);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i57);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i43);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i59);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i43);
	}
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pre-births: ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i62);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i63);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 66;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i68);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i67);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i70);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(set__non_empty_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i73);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i71);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i75);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i76);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% producing vars: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i78);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i71);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i81);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(set__non_empty_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i84);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i82);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i86);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i87);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% consuming vars: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i88);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i89);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i82);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i92);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(set__non_empty_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i95);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i93);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i97);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i98);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% make_visible vars: ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i99);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i100);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i93);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i103);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(set__non_empty_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i106);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i67);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i108);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need_visible vars: ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i110);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i111);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i67);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 100;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i116);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i115);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i118);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% determinism: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i119);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i120);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_out__determinism_to_string_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i121);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i122);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i115);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 101;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i126);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i325);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_maybe_rbmm_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i128);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i130);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i162);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i131);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Created regions: ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i132);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i134);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i136);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i137);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i138);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Removed regions: ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i139);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i140);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i142);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i143);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i144);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Carried regions: ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i145);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i146);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i148);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i149);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i150);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Allocated into regions: ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i151);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i152);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,3);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i154);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i155);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i156);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Used regions: ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i157);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i158);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,4);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i160);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i325);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 122;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i164);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i328);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_purity_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i166);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i168);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i169);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% impure\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i328);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i171);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i174);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i172);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% semipure\n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i328);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 69;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i176);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i330);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_maybe_dp_info_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i178);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i180);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i197);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i182);
	}
	MR_sv(14) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i183);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% mdprof instrumentation\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i184);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i181);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 1);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(14),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i197);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r6;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r2;
	MR_tempr1 = MR_sv(14);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i187);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(14),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i189);
	}
	MR_r1 = (MR_Word) MR_string_const("% nontrivial goal\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i191);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% trivial goal\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i191);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i192);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(15),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i194);
	}
	MR_r1 = (MR_Word) MR_string_const("% no port counts give coverage after\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i330);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% port counts give coverage after\n", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i330);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i198);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 105;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i200);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i337);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i202);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i204);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i203);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i206);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__empty_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i208);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i203);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i222);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i210);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i212);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i211);
	}
	MR_r1 = (MR_Word) MR_string_const("% new insts: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i214);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i215);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i337);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% vars with new insts: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i217);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i218);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i337);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 112;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i224);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i223);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i227);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i226);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i229);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i226);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i231);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% post-deaths: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i232);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i233);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i226);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i237);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i223);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i239);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i223);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i241);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% post-births: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i242);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i243);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i223);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 82;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i248);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i247);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_maybe_lfu_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i251);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i247);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_maybe_lbu_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i253);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i247);
	}
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_maybe_reuse_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i255);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i247);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i258);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i259);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i260);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% LFU: ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i261);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i262);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i263);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i264);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% LBU: ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i265);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i266);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i267);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i268);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Reuse: ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i269);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i271);
	}
	MR_r1 = (MR_Word) MR_string_const("no possible reuse", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i286);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i273);
	}
	MR_r1 = (MR_Word) MR_string_const("no reuse info", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i286);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i275);
	}
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("missed (", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i276);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i278);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i286);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i280);
	}
	MR_sv(1) = MR_tfield(2, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("potential reuse (", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i281);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i282);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i286);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("reuse (", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i284);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,284)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i285);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i286);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i247);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_info_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i290);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i292);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i291);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i352);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 103;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i295);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i306);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_features_1_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i297);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i298);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i306);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i301);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,301)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Goal features:  ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i302);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_goal__do_write_goal_10_0_i304);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,304)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module10)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_list_10_0);
	MR_init_label5(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0,12,4,5,6,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_list'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_goal__write_goal_list_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	MR_sv(9) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_list_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_list_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_list_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module11)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,3,5,7,9,11,13,15,17,19,86)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_expr'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0_i3);
	}
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0_i5);
	}
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0_i7);
	}
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0_i11);
	}
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0_i13);
	}
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0_i15);
	}
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0_i17);
	}
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0_i19);
	}
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0_i86);
	}
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_expr_10_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(varset__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module12)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,2,3,4,6,8,10,11,16,18,14)
	MR_init_label2(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,20,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_unify'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(11) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(10) = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	MR_sv(8) = MR_tfield(1, MR_r2, 3);
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i6);
	}
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(1, MR_sv(6), 1);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(10), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(10), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_0,
		hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 117;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i14);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 112;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i30);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(8);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i20);
	}
	MR_r2 = MR_tfield(3, MR_tempr3, 3);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i20);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i20);
	}
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i20);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i20);
	}
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0_i30);
	}
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_unify_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module13)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_0);
	MR_init_label1(hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_unify_rhs_2'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__remove_new_prefix_2_1);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_0);
MR_decl_entry(parse_tree__prog_out__write_purity_prefix_3_0);
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(io__write_strings_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_var_modes_7_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_var_mode_6_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_det_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module14)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,7,4,9,10,14,3,18,23,25,26)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,28,35,36,37,38,40,41,42,43,22)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,47,49,56,57,58,59,60,61,20,67)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,69,70,72,79,80,81,82,84,85,86)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,87,88,89,66,91,93,100,101,102,103)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,104,105,106,107,19,112,109,116,120,121)
	MR_init_label2(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,17,232)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_unify_rhs_3'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(7) = MR_tfield(1, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_r2, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i4);
	}
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i4);
	}
	MR_sv(8) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__remove_new_prefix_2_1,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r7 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i9);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_r5 = MR_r6;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_r2 = MR_sv(7);
	MR_r1 = MR_tempr2;
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i232);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i232);
	}
	MR_sv(7) = MR_tfield(1, MR_sv(3), 0);
	MR_sv(8) = MR_tfield(1, MR_sv(4), 0);
	MR_r1 = (MR_Word) MR_string_const(" : ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i17);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(2) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(3) = MR_r8;
	MR_sv(4) = MR_r9;
	MR_sv(14) = (((MR_Integer) MR_tfield(2, MR_r2, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(15) = (((MR_Integer) MR_tfield(2, MR_r2, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(9) = MR_tfield(2, MR_r2, 2);
	MR_sv(16) = MR_tfield(2, MR_r2, 3);
	MR_sv(10) = MR_tfield(2, MR_r2, 4);
	MR_sv(11) = MR_tfield(2, MR_r2, 5);
	MR_sv(12) = MR_tfield(2, MR_r2, 6);
	MR_sv(13) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r1 = ((MR_Integer) MR_tfield(2, MR_r2, 0) & (MR_Integer) 3);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_purity_prefix_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(14),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i20);
	}
	if (MR_INT_NE(MR_sv(15),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i22);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_var_modes_7_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = (", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(15);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_var_mode_6_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") is ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_det_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(13);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i88);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(16),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i49);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,6);
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i58);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,7);
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_var_modes_7_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i57);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i58);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" is ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i59);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_det_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i60);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(13);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i106);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(15),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i66);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i67);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i69);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i70);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i72);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,9);
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i81);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,10);
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i79);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_var_modes_7_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i80);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i81);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = (", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i82);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(16);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(15);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_var_mode_6_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i84);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") is ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i85);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_det_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i86);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i87);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(13);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i88);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i89);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i91);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(16),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i93);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,12);
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i102);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,13);
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i100);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_var_modes_7_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i101);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i102);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" is ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i103);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_det_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i104);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i105);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(13);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i106);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i107);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i109);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i109);
	}
	MR_sv(8) = MR_tfield(1, MR_sv(3), 0);
	MR_sv(5) = MR_tfield(1, MR_sv(4), 0);
	MR_r1 = (MR_Word) MR_string_const(" : ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i112);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(7), 0);
	MR_r2 = (MR_Integer) 110;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i116);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i232);
	}
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i232);
	}
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i120);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% lambda nonlocals: ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0_i121);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r6;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module15)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,3,7,6,56,9,10,12,13,15,57)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,14,16,17,18,19,23,24,26,27,28)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,30,32,33,34,35,36,37,38,39,43)
	MR_init_label8(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,45,42,47,48,49,50,51,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_plain_call'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(9) = MR_tfield(2, MR_r2, 5);
	MR_sv(8) = MR_tfield(2, MR_r2, 4);
	MR_sv(14) = MR_tfield(2, MR_r2, 2);
	MR_sv(13) = MR_tfield(2, MR_r2, 1);
	MR_sv(12) = MR_tfield(2, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(11) = MR_tfield(2, MR_r2, 3);
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 98;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i56);
	}
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i6);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% inline builtin\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i9);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% out of line builtin\n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(12) != MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i14);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(14);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_purity_prefix_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i57);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i57);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i28);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 108;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i53);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i33);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pred id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", proc id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i53);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i43);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(8), 0);
	MR_r4 = MR_tempr1;
	MR_sv(12) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i42);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(8), 0);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tfield(1, MR_sv(7), 1);
	MR_r5 = MR_sv(12);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i45);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(13), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(13), 0) = MR_r1;
	MR_r1 = MR_sv(5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% unify context: ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i49);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i50);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0_i51);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_0);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module16)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,4,6,3,12,13,14,15,16,11,22)
	MR_init_label5(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,23,24,25,26,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_conj'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r10 = MR_tfield(3, MR_r2, 2);
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i3);
	}
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("/* parallel */ true", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("true", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i11);
	}
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_tempr3 = MR_r10;
	MR_sv(8) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(9) = MR_tfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("( % parallel conjunction\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = (MR_Word) MR_string_const("&\n", 2);
	MR_r8 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r10;
	MR_sv(9) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i19);
	}
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_tempr3 = MR_r6;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("( % conjunction\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r8 = (MR_Word) MR_string_const("\n", 1);
	MR_r9 = (MR_Word) MR_string_const(",\n", 2);
	MR_r10 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_conj_12_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_conj_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(9);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_tempr5 = MR_r7;
	MR_r7 = MR_tempr4;
	MR_tempr6 = MR_r8;
	MR_r8 = MR_tempr5;
	MR_r9 = (MR_Word) MR_string_const(",\n", 2);
	MR_r10 = MR_tempr6;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_conj_12_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module17)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_conj_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_conj_12_0);
	MR_init_label7(hlds__hlds_out__hlds_out_goal__write_conj_12_0,23,3,8,9,10,5,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_conj'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_conj_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_goal__write_conj_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_conj_12_0_i3);
	}
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r10;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_conj_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr2 = MR_r3;
	MR_sv(10) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_conj_12_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_sv(3) = MR_tempr4;
	MR_tempr5 = MR_r6;
	MR_sv(4) = MR_tempr5;
	MR_tempr6 = MR_r7;
	MR_sv(5) = MR_tempr6;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_tempr7 = MR_r10;
	MR_sv(8) = MR_tempr7;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_r6 = MR_tempr6;
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_tempr7;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_conj_12_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_conj_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_conj_12_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_conj_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_conj_12_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_conj_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_conj_12_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_conj_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r6;
	MR_sv(4) = MR_tempr3;
	MR_tempr4 = MR_r7;
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = MR_r8;
	MR_tempr5 = MR_r9;
	MR_sv(7) = MR_tempr5;
	MR_tempr6 = MR_r10;
	MR_sv(8) = MR_tempr6;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_r6 = MR_tempr4;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_conj_12_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_conj_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_conj_12_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module18)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0);
	MR_init_label7(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0,2,4,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_disj'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("fail", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("( % disjunction\n", 16);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Word) MR_string_const(";\n", 2);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_disj_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_out__can_fail_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module19)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,2,3,4,5,6,7,8,11,10,13)
	MR_init_label3(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_switch'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(3, MR_r2, 1);
	MR_sv(10) = MR_tfield(3, MR_r2, 2);
	MR_sv(9) = MR_tfield(3, MR_r2, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("( % ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__can_fail_to_string_1_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" switch on \140", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i10);
	}
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fail\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(10) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_case_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_cases_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_switch_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module20)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_cases_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_cases_10_0);
	MR_init_label5(hlds__hlds_out__hlds_out_goal__write_cases_10_0,12,4,5,6,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_cases'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_goal__write_cases_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_cases_10_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(1, MR_r2, 0);
	MR_sv(9) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_cases_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_cases_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_cases_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_cases_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_case_10_0,
		hlds__hlds_out__hlds_out_goal__write_cases_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_cases_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_cases_10_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_cases_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module21)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_case_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_case_10_0);
	MR_init_label7(hlds__hlds_out__hlds_out_goal__write_case_10_0,2,3,4,5,6,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_case'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_case_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(0, MR_r2, 0);
	MR_sv(9) = MR_tfield(0, MR_r2, 1);
	MR_sv(10) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_case_10_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_case_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_case_10_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_case_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_case_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_case_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" has functor ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_case_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_case_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0,
		hlds__hlds_out__hlds_out_goal__write_case_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_case_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_goal__write_case_10_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_case_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_case_10_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_case_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module22)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0);
	MR_init_label5(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_negation'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\\+ (\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_negation_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module23)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label3(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,16,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_if_then_else'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(10) = MR_tfield(3, MR_r2, 2);
	MR_sv(8) = MR_tfield(3, MR_r2, 3);
	MR_sv(9) = MR_tfield(3, MR_r2, 4);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(if", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("then\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("else\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i11);
	}
	MR_tempr3 = MR_sv(9);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i11);
	}
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(10);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_compiletime_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0;

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module24)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,2,5,6,7,4,10,12,14,15,8)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,18,20,22,23,24,25,16,29,30,31)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,28,32,33,34,26,38,39,40,37,41)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,42,43,35,45,46,47,48,49,51,53)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,55,56,44,58,59,60,57,63,65,67)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,69,71,73,75,77,78,61,79,80,81)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,136,83,84,85,87,82,91,92,94,95)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,89,97,99,100,101,102,104,105,106,107)
	MR_init_label4(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,108,109,110,111)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_scope'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(13) = MR_tfield(3, MR_r2, 1);
	MR_sv(8) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(13),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i4);
	}
	MR_sv(13) = MR_tfield(0, MR_sv(13), 0);
	MR_r1 = (MR_Word) MR_string_const("some [", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] (\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(13),2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i8);
	}
	MR_r3 = MR_tfield(2, MR_sv(13), 0);
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("promise_impure (", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("promise_pure (", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("promise_semipure (", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(13),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i16);
	}
	MR_r3 = MR_tfield(1, MR_sv(13), 1);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i18);
	}
	MR_sv(13) = MR_tfield(1, MR_sv(13), 0);
	MR_r1 = (MR_Word) MR_string_const("promise_equivalent_solution_sets", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i20);
	}
	MR_sv(13) = MR_tfield(1, MR_sv(13), 0);
	MR_r1 = (MR_Word) MR_string_const("arbitrary", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_tfield(1, MR_sv(13), 0);
	MR_r1 = (MR_Word) MR_string_const("promise_equivalent_solutions", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" [", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] (\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(13),3,3)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(13), 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i28);
	}
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% barrier(not_removable)\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i33);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% barrier(removable)\n", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(13),3,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(13), 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% commit(dont_force_pruning)\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% commit(force_pruning)\n", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(13),3,4)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i45);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% from_ground_term [", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i49);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(13),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i51);
	}
	MR_r1 = (MR_Word) MR_string_const("construct", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i55);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(13),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i53);
	}
	MR_r1 = (MR_Word) MR_string_const("deconstruct", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i55);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("other", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i55);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(13),3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i57);
	}
	MR_sv(13) = MR_tfield(3, MR_sv(13), 1);
	MR_r1 = (MR_Word) MR_string_const("require_complete_switch [", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i58);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i59);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] (\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i60);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(13),3,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i61);
	}
	MR_r3 = MR_tfield(3, MR_sv(13), 1);
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i63);
	}
	MR_r1 = (MR_Word) MR_string_const("require_cc_multi", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,5)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i65);
	}
	MR_r1 = (MR_Word) MR_string_const("require_cc_nondet", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i67);
	}
	MR_r1 = (MR_Word) MR_string_const("require_det", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,6)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i69);
	}
	MR_r1 = (MR_Word) MR_string_const("require_erroneous", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,7)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i71);
	}
	MR_r1 = (MR_Word) MR_string_const("require_failure", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i73);
	}
	MR_r1 = (MR_Word) MR_string_const("require_multi", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i75);
	}
	MR_r1 = (MR_Word) MR_string_const("require_nondet", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("require_semidet", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i77);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i78);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(10) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(11) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(12) = MR_tfield(3, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i79);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i80);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% trace\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i81);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i83);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i82);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_tfield(1, MR_sv(13), 0);
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i84);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% compiletime(", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i85);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_compiletime);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i87);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i136);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i89);
	}
	MR_sv(11) = MR_r4;
	MR_sv(13) = MR_tfield(1, MR_sv(9), 0);
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i91);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% runtime(", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i92);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i94);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i95);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i97);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i104);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r4;
	MR_sv(13) = MR_tfield(1, MR_sv(10), 0);
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i99);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i100);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% io(!", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i101);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i102);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r4 = MR_sv(11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i104);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i105);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% quantified vars ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i106);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i107);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i108);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i109);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i110);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0_i111);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_scope_10_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module25)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0);
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,4,5,6,7,8,9,46,11,12,13)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,15,16,17,18,3,22,23,24,25,26)
	MR_init_label10(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,27,28,21,31,32,34,35,36,39,40)
	MR_init_label3(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,41,42,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal_shorthand'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r10 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(12) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(11) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(10) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 5);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("atomic [", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("outer", 5);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("inner", 5);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i11);
	}
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] (\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_tfield(1, MR_sv(10), 0);
	MR_r1 = (MR_Word) MR_string_const("vars([", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("])", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Word) MR_string_const("or_else\n", 8);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_goal_list_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r10,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i21);
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
	MR_sv(7) = MR_r8;
	MR_tempr2 = MR_r10;
	MR_sv(12) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("( % bi-implication\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(12);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<=>\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(12);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i28);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_tempr2 = MR_r10;
	MR_sv(12) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(11) = MR_tfield(2, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("( % try\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i34);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(12);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% io(", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r8 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r6 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module26)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__dump_goal_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__dump_goal_5_0);
	MR_init_label2(hlds__hlds_out__hlds_out_goal__dump_goal_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dump_goal'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_goal__dump_goal_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__hlds_out__hlds_out_goal__dump_goal_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__dump_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,
		hlds__hlds_out__hlds_out_goal__dump_goal_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__dump_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = (MR_Word) MR_string_const("", 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module27)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_goal_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_goal_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_goal'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_goal__write_goal_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module28)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_unify_rhs_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_unify_rhs_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_unify_rhs'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_goal__write_unify_rhs_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module29)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0);
	MR_init_label4(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0,7,4,3,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_rhs_to_string'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(1, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0_i4);
	}
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__remove_new_prefix_2_1,
		fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0_i7);
MR_def_label(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_r4 = MR_r2;
	MR_tempr2 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r1 = MR_tempr2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("lambda goal", 11);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module30)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0);
	MR_init_label1(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_cons_name_and_tag'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,
		hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module31)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0);
	MR_init_label3(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0,3,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'case_comment'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" has the functor ", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0_i8);
MR_def_label(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0_i7);
MR_def_label(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" has one of the functors ", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0_i8);
MR_def_label(fn__hlds__hlds_out__hlds_out_goal__case_comment_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module32)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_0);
	MR_init_label1(hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_alternative_cons_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" or ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module33)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0);
	MR_init_label6(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_trace_mutable_var_hlds'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% mutable ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module34)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__308__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__308__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__do_write_goal__308__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__308__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module35)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__312__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__312__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__do_write_goal__312__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__312__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module36)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__316__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__316__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__do_write_goal__316__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__316__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module37)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__320__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__320__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__do_write_goal__320__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__320__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module38)
	MR_init_entry1(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__324__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__324__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__do_write_goal__324__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__324__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_intlist_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_can_cgc_0;
MR_decl_entry(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module39)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0);
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,4,5,6,7,3,11,12,13,14,15)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,17,21,22,23,24,25,26,28,31,29)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,36,37,38,39,35,43,44,47,48,46)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,50,51,33,56,55,59,60,58,63,64)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,10,70,72,73,74,69,77,78,79,82)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,81,83,68,86,87,89,91,92,93,94)
	MR_init_label9(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,95,96,85,99,100,101,102,103,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_unification__[3]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(11) = MR_tfield(2, MR_r2, 0);
	MR_sv(9) = MR_tfield(2, MR_r2, 1);
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i5);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i6);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" := ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i7);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i103);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i10);
	}
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tempr1;
	MR_sv(12) = MR_tfield(0, MR_r2, 0);
	MR_sv(10) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 3);
	MR_sv(6) = MR_tfield(0, MR_r2, 4);
	MR_sv(7) = MR_tfield(0, MR_r2, 5);
	MR_sv(8) = MR_tfield(0, MR_r2, 6);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i11);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i12);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i13);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" := ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i15);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(11), 0);
	MR_r2 = (MR_Integer) 117;
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i17);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i2);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(10), 3);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i21);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i22);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i23);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i24);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i25);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% cons_id type_ctor: ", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i26);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i28);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i29);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i31);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% cell_is_unique\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i29);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i36);
	}
	MR_sv(11) = MR_tfield(1, MR_tempr1, 1);
	MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i35);
	}
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_tfield(1, MR_sv(8), 1);
	MR_sv(9) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i37);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% take address fields: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i38);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_intlist_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i39);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i35);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i33);
	}
	MR_sv(11) = MR_tfield(1, MR_sv(11), 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i43);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% term size ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i44);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(11),1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i46);
	}
	MR_sv(11) = MR_tfield(1, MR_sv(11), 0);
	MR_r1 = (MR_Word) MR_string_const("var ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i47);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i48);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i33);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_tfield(0, MR_sv(11), 0);
	MR_r1 = (MR_Word) MR_string_const("const ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i50);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(io__write_int_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i51);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i33);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i55);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i56);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% construct statically\n", 23);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i58);
	}
	MR_sv(11) = MR_tfield(2, MR_sv(6), 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i59);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% construct in region: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i60);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i103);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_tfield(0, MR_body((MR_Integer) MR_sv(6), (MR_Integer) 1), 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i63);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% reuse cell: ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i64);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i103);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i68);
	}
	MR_sv(7) = MR_tfield(1, MR_r2, 3);
	MR_sv(6) = MR_tfield(1, MR_r2, 2);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(12) = MR_tfield(1, MR_r2, 4);
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(10) = MR_tfield(1, MR_r2, 5);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Integer) 71;
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i70);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i72);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Compile time garbage collect: ", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i73);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, can_cgc);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(io__write_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i74);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i69);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i77);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i78);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i79);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i81);
	}
	MR_r1 = (MR_Word) MR_string_const(" \?= ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i82);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" => ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i83);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(2);
	MR_r8 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i85);
	}
	MR_sv(1) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tempr1;
	MR_sv(11) = MR_tfield(3, MR_r2, 1);
	MR_sv(12) = MR_tfield(3, MR_r2, 3);
	MR_sv(10) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i86);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i87);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i89);
	}
	MR_r1 = (MR_Word) MR_string_const("can_fail, ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i91);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot_fail, ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i91);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mode: ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i92);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i93);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i94);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i95);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% type-info vars: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i96);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i103);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(11) = MR_tfield(3, MR_r2, 1);
	MR_sv(9) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i99);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i100);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i101);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" == ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i102);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0_i103);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module40)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0);
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,2,19,4,6,7,8,10,12,13,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_functor_and_submodes__[5]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0_i4);
	}
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0_i6);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0_i7);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0_i8);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = (MR_Integer) 97;
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0_i10);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0_i3);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0_i12);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% arg-modes ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0_i13);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0_i19);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_53_93_95_48_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__cast_type_to_string_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_mode_list_4_0);
MR_decl_entry(term__var_list_to_term_list_2_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_term_5_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_functor_6_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module41)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0);
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,4,6,8,5,15,17,18,19,20,14)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,25,26,28,3,33,35,37,38,43,47)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,31,52,54,51,57,58,59,61,50,68)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,70,67,77,78,79,80,81,66,85,87)
	MR_init_label4(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,84,90,91,94)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_goal_generic_call__[3, 8]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r8 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(7) = MR_tfield(3, MR_r2, 3);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__cast_type_to_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 108;
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i6);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i8);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("% ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i5);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i15);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i14);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i17);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% modes: ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i18);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i19);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_mode_list_4_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i20);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i25);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i26);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i28);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_term_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i94);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Integer) 108;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i33);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i37);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i35);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% class method call\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i37);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_init_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i38);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_sv(5) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i43);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i47);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_term_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i94);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r8,2)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i50);
	}
	MR_sv(7) = MR_tfield(2, MR_r8, 0);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Integer) 108;
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i52);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i51);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i54);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% event call\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i51);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i57);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("event ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i58);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_init_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i59);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_sv(6) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i61);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_term_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i94);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r8;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i66);
	}
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Integer) 108;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i68);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i67);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i70);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% higher-order function application\n", 36);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i67);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i77);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i78);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_out__write_purity_prefix_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i79);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i80);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i81);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_functor_6_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i94);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Integer) 108;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i85);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i84);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i87);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% higher-order predicate call\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i84);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i90);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_out__write_purity_prefix_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i91);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(7);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_functor_6_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0_i94);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_56_93_95_48_10_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__get_foreign_language_1_0);
MR_decl_entry(fn__libs__globals__foreign_language_string_1_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_id_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_goal_module42)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0);
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,12,13,14,15,39,17,18,19,21,16)
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,23,24,25,26,27,40,29,30,31,32)
	MR_init_label4(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,34,35,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_goal_foreign_proc__[1, 8]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(12) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(6) = MR_tfield(3, MR_r1, 3);
	MR_sv(7) = MR_tfield(3, MR_r1, 4);
	MR_sv(8) = MR_tfield(3, MR_r1, 5);
	MR_sv(9) = MR_tfield(3, MR_r1, 6);
	MR_sv(10) = MR_tfield(3, MR_r1, 7);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044pragma_foreign_proc(/* ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i5);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i6);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */, ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i7);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i8);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" pred ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i9);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i10);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i11);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" proc ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i12);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i13);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i15);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i17);
	}
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i16);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_tfield(1, MR_sv(9), 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i18);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% trace_runtime_cond(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i19);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i21);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i39);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i23);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(varset__init_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i24);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i25);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i26);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("],\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i27);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i29);
	}
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_tfield(0, MR_sv(10), 0);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i34);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i30);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i31);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_goal__write_foreign_args_6_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i32);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i40);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i35);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i36);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0_i37);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_103_111_97_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_56_93_95_48_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_out__hlds_out_goal_maybe_bunch_0(void)
{
	hlds__hlds_out__hlds_out_goal_module0();
	hlds__hlds_out__hlds_out_goal_module1();
	hlds__hlds_out__hlds_out_goal_module2();
	hlds__hlds_out__hlds_out_goal_module3();
	hlds__hlds_out__hlds_out_goal_module4();
	hlds__hlds_out__hlds_out_goal_module5();
	hlds__hlds_out__hlds_out_goal_module6();
	hlds__hlds_out__hlds_out_goal_module7();
	hlds__hlds_out__hlds_out_goal_module8();
	hlds__hlds_out__hlds_out_goal_module9();
	hlds__hlds_out__hlds_out_goal_module10();
	hlds__hlds_out__hlds_out_goal_module11();
	hlds__hlds_out__hlds_out_goal_module12();
	hlds__hlds_out__hlds_out_goal_module13();
	hlds__hlds_out__hlds_out_goal_module14();
	hlds__hlds_out__hlds_out_goal_module15();
	hlds__hlds_out__hlds_out_goal_module16();
	hlds__hlds_out__hlds_out_goal_module17();
	hlds__hlds_out__hlds_out_goal_module18();
	hlds__hlds_out__hlds_out_goal_module19();
	hlds__hlds_out__hlds_out_goal_module20();
	hlds__hlds_out__hlds_out_goal_module21();
	hlds__hlds_out__hlds_out_goal_module22();
	hlds__hlds_out__hlds_out_goal_module23();
	hlds__hlds_out__hlds_out_goal_module24();
	hlds__hlds_out__hlds_out_goal_module25();
	hlds__hlds_out__hlds_out_goal_module26();
	hlds__hlds_out__hlds_out_goal_module27();
	hlds__hlds_out__hlds_out_goal_module28();
	hlds__hlds_out__hlds_out_goal_module29();
	hlds__hlds_out__hlds_out_goal_module30();
	hlds__hlds_out__hlds_out_goal_module31();
	hlds__hlds_out__hlds_out_goal_module32();
	hlds__hlds_out__hlds_out_goal_module33();
	hlds__hlds_out__hlds_out_goal_module34();
	hlds__hlds_out__hlds_out_goal_module35();
	hlds__hlds_out__hlds_out_goal_module36();
	hlds__hlds_out__hlds_out_goal_module37();
	hlds__hlds_out__hlds_out_goal_module38();
	hlds__hlds_out__hlds_out_goal_module39();
}

static void mercury__hlds__hlds_out__hlds_out_goal_maybe_bunch_1(void)
{
	hlds__hlds_out__hlds_out_goal_module40();
	hlds__hlds_out__hlds_out_goal_module41();
	hlds__hlds_out__hlds_out_goal_module42();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_out__hlds_out_goal__init(void);
void mercury__hlds__hlds_out__hlds_out_goal__init_type_tables(void);
void mercury__hlds__hlds_out__hlds_out_goal__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_out__hlds_out_goal__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_out__hlds_out_goal__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__hlds_out__hlds_out_goal__init_threadscope_string_table(void);
#endif

void mercury__hlds__hlds_out__hlds_out_goal__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_out__hlds_out_goal_maybe_bunch_0();
	mercury__hlds__hlds_out__hlds_out_goal_maybe_bunch_1();
	mercury__hlds__hlds_out__hlds_out_goal__init_debugger();
}

void mercury__hlds__hlds_out__hlds_out_goal__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__hlds_out__hlds_out_goal__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_out__hlds_out_goal__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_out__hlds_out_goal);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_out__hlds_out_goal__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__hlds_out__hlds_out_goal__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
