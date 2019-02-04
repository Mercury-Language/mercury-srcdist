/*
** Automatically generated from `hlds_out.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__hlds_out__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "hlds.hlds_out.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "hlds.hlds_out.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "hlds.hlds_out.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "hlds.hlds_out.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "hlds.hlds_out.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 47 "hlds.hlds_out.c"
#line 48 "hlds.hlds_out.c"
#include "hlds.hlds_out.mh"

#line 51 "hlds.hlds_out.c"
#line 52 "hlds.hlds_out.c"
#ifndef HLDS__HLDS_OUT_DECL_GUARD
#define HLDS__HLDS_OUT_DECL_GUARD

#line 56 "hlds.hlds_out.c"
#line 57 "hlds.hlds_out.c"

#endif
#line 60 "hlds.hlds_out.c"

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
	MR_String f1;
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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_String f1;
	MR_Word * f2;
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_0[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_1[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_2[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_3[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_4[];

MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_5[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__expanded_inst_info__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hlds_out__type_ctor_info_maybe_vartypes_0,
	mercury_data_hlds__hlds_out__type_ctor_info_expanded_inst_info_0;
MR_decl_label5(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0, 3,2,6,9,10)
MR_decl_label2(hlds__hlds_out__IntroducedFrom__pred__cons_id_to_string__305__1_3_0, 16,5)
MR_decl_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0, 2,3,21,5,7,8,9,10)
MR_decl_label4(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0, 12,14,15,4)
MR_decl_label3(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0, 2,3,4)
MR_decl_label3(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0, 2,3,4)
MR_decl_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0, 2,5,6,3,8,9,10,11)
MR_decl_label3(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0, 12,13,14)
MR_decl_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0, 4,5,6,7,8,9,12,10)
MR_decl_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0, 17,18,19,20,16,24,25,28)
MR_decl_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0, 29,27,31,32,14,37,38,39)
MR_decl_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0, 41,42,43,46,47,48,51,52)
MR_decl_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0, 54,56,57,58,53,61,62,63)
MR_decl_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0, 65,67,69,70,71,72,73,76)
MR_decl_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0, 78,79,80,81,77,84,85,87)
MR_decl_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0, 89,90,91,92,93,94,95,2)
MR_decl_label6(hlds__hlds_out__contexts_describe_list_element_4_0, 58,6,9,5,26,1)
MR_decl_label6(hlds__hlds_out__hlds_output_fundep_3_0, 2,3,4,5,6,7)
MR_decl_label4(hlds__hlds_out__in_argument_to_pieces_4_0, 3,5,6,7)
MR_decl_label8(hlds__hlds_out__maybe_write_pred_6_0, 2,3,4,5,6,7,11,10)
MR_decl_label8(hlds__hlds_out__maybe_write_pred_6_0, 21,22,20,25,26,75,9,36)
MR_decl_label8(hlds__hlds_out__maybe_write_pred_6_0, 38,33,43,45,47,48,40,52)
MR_decl_label3(hlds__hlds_out__maybe_write_pred_6_0, 54,70,30)
MR_decl_label7(hlds__hlds_out__mercury_format_uni_mode_list_4_0, 20,3,4,5,6,9,23)
MR_decl_label1(hlds__hlds_out__mercury_output_expanded_inst_5_0, 2)
MR_decl_label2(hlds__hlds_out__mercury_output_uni_mode_4_0, 2,3)
MR_decl_label8(hlds__hlds_out__set_dump_opts_for_clauses_3_0, 2,4,3,6,8,10,7,11)
MR_decl_label8(hlds__hlds_out__set_dump_opts_for_clauses_3_0, 13,15,12,16,18,20,17,22)
MR_decl_label1(hlds__hlds_out__start_in_message_to_pieces_3_0, 3)
MR_decl_label2(hlds__hlds_out__unify_context_first_to_pieces_5_0, 2,3)
MR_decl_label1(hlds__hlds_out__unify_context_to_pieces_3_0, 2)
MR_decl_label8(hlds__hlds_out__unify_main_context_to_pieces_5_0, 4,33,6,30,9,10,31,13)
MR_decl_label7(hlds__hlds_out__unify_main_context_to_pieces_5_0, 14,15,16,32,18,19,20)
MR_decl_label8(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0, 30,5,8,10,11,12,4,14)
MR_decl_label1(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0, 3)
MR_decl_label8(hlds__hlds_out__write_annotated_clause_heads_11_0, 34,4,5,7,10,12,13,14)
MR_decl_label2(hlds__hlds_out__write_annotated_clause_heads_11_0, 6,36)
MR_decl_label7(hlds__hlds_out__write_case_9_0, 2,3,4,5,6,7,8)
MR_decl_label8(hlds__hlds_out__write_cases_9_0, 20,4,5,6,7,8,9,10)
MR_decl_label4(hlds__hlds_out__write_cases_9_0, 11,12,13,22)
MR_decl_label8(hlds__hlds_out__write_class_defn_4_0, 2,3,4,5,6,7,11,12)
MR_decl_label8(hlds__hlds_out__write_class_defn_4_0, 13,14,15,8,18,20,19,22)
MR_decl_label8(hlds__hlds_out__write_class_defn_4_0, 23,24,25,26,27,28,29,30)
MR_decl_label7(hlds__hlds_out__write_class_defn_4_0, 31,32,33,34,35,36,37)
MR_decl_label6(hlds__hlds_out__write_class_proc_3_0, 2,3,4,5,6,7)
MR_decl_label4(hlds__hlds_out__write_classes_4_0, 2,3,4,5)
MR_decl_label8(hlds__hlds_out__write_clause_12_0, 2,4,6,7,8,10,12,13)
MR_decl_label8(hlds__hlds_out__write_clause_12_0, 14,16,44,18,19,20,17,22)
MR_decl_label8(hlds__hlds_out__write_clause_12_0, 23,27,29,26,25,33,34,39)
MR_decl_label8(hlds__hlds_out__write_clause_head_8_0, 2,3,6,7,8,9,10,5)
MR_decl_label8(hlds__hlds_out__write_clause_head_8_0, 12,13,14,15,16,17,18,19)
MR_decl_label1(hlds__hlds_out__write_clauses_11_0, 2)
MR_decl_label7(hlds__hlds_out__write_clauses_2_12_0, 16,4,5,6,7,8,18)
MR_decl_label6(hlds__hlds_out__write_conj_12_0, 25,7,8,4,10,3)
MR_decl_label1(hlds__hlds_out__write_cons_id_3_0, 2)
MR_decl_label2(hlds__hlds_out__write_constraint_map_6_0, 2,3)
MR_decl_label8(hlds__hlds_out__write_constraint_map_2_7_0, 2,3,5,7,8,9,10,11)
MR_decl_label2(hlds__hlds_out__write_constraint_map_2_7_0, 12,13)
MR_decl_label7(hlds__hlds_out__write_constraint_proof_6_0, 2,3,4,5,8,7,10)
MR_decl_label3(hlds__hlds_out__write_constraint_proofs_6_0, 2,3,4)
MR_decl_label8(hlds__hlds_out__write_constructors_6_0, 51,7,8,9,10,12,14,6)
MR_decl_label8(hlds__hlds_out__write_constructors_6_0, 17,18,19,20,22,24,21,27)
MR_decl_label1(hlds__hlds_out__write_constructors_6_0, 50)
MR_decl_label8(hlds__hlds_out__write_constructors_2_6_0, 31,4,5,6,7,9,11,13)
MR_decl_label2(hlds__hlds_out__write_constructors_2_6_0, 16,33)
MR_decl_label1(hlds__hlds_out__write_eval_method_3_0, 2)
MR_decl_label4(hlds__hlds_out__write_footer_4_0, 2,3,4,5)
MR_decl_label8(hlds__hlds_out__write_foreign_args_6_0, 60,4,7,8,9,11,12,10)
MR_decl_label8(hlds__hlds_out__write_foreign_args_6_0, 16,17,15,20,5,37,25,27)
MR_decl_label3(hlds__hlds_out__write_foreign_args_6_0, 28,31,62)
MR_decl_label3(hlds__hlds_out__write_functor_6_0, 2,3,4)
MR_decl_label1(hlds__hlds_out__write_functor_cons_id_7_0, 2)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 693,5,6,7,9,10,11,12)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 13,18,20,16,22,694,34,36)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 40,39,43,35,46,48,47,49)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 50,51,52,412,54,55,56,58)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 59,60,62,64,65,66,67,68)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 69,70,71,75,76,74,77,78)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 79,80,81,695,87,88,92,94)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 91,97,98,90,101,103,100,106)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 107,108,109,110,113,114,116,118)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 120,121,122,123,126,127,129,131)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 128,134,135,136,137,140,141,142)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 144,146,143,150,152,153,154,155)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 149,158,159,160,163,696,165,166)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 167,168,169,170,171,172,173,174)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 175,176,177,178,423,180,181,182)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 183,179,185,186,187,188,189,192)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 193,194,190,220,221,216,217,218)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 198,199,200,201,202,203,204,205)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 206,207,209,211,213,214,215,697)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 228,230,227,236,240,241,242,243)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 237,235,248,249,250,251,252,698)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 256,259,260,261,262,257,699,269)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 270,271,272,273,274,275,278,277)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 280,281,282,700,286,287,288,289)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 701,293,296,297,298,300,302,304)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 306,307,308,310,312,314,311,318)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 321,346,347,348,443,350,351,352)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 353,349,357,358,359,360,355,362)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 363,364,365,366,367,368,369,370)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 340,341,342,343,344,331,334,335)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 333,337,338,322,325,326,324,328)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 329,330,372,373,702,377,378,379)
MR_decl_label8(hlds__hlds_out__write_goal_2_9_0, 380,381,382,383,384,385,386,387)
MR_decl_label6(hlds__hlds_out__write_goal_2_9_0, 388,393,395,396,398,692)
MR_decl_label8(hlds__hlds_out__write_goal_2_shorthand_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 2,4,6,7,8,12,13,14)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 15,16,3,21,23,242,25,26)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 27,28,29,31,33,35,36,244)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 38,39,40,41,43,45,48,50)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 52,53,54,47,58,60,62,63)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 64,44,69,71,73,75,76,77)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 78,72,81,83,85,86,87,88)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 82,91,93,95,96,97,98,92)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 101,103,105,106,107,108,68,113)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 115,116,117,118,119,112,123,125)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 257,127,129,128,131,133,134,136)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 138,140,142,143,261,139,145,147)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 149,150,146,152,153,157,159,162)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 164,166,167,168,161,172,174,176)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 177,178,158,183,186,188,190,192)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 193,194,195,196,197,198,199,200)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 201,202,203,206,208,209,210,212)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 213,214,216,217,218,219,182,223)
MR_decl_label8(hlds__hlds_out__write_goal_a_9_0, 272,225,224,228,230,231,234,235)
MR_decl_label2(hlds__hlds_out__write_goal_a_9_0, 236,238)
MR_decl_label5(hlds__hlds_out__write_goal_list_9_0, 13,4,5,6,15)
MR_decl_label8(hlds__hlds_out__write_hlds_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__hlds_out__write_hlds_4_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(hlds__hlds_out__write_hlds_4_0, 18,22,57,20,25,27,29,30)
MR_decl_label8(hlds__hlds_out__write_hlds_4_0, 31,32,26,36,38,39,40,41)
MR_decl_label8(hlds__hlds_out__write_hlds_4_0, 42,35,46,48,49,50,53,54)
MR_decl_label3(hlds__hlds_out__write_indent_3_0, 11,4,13)
MR_decl_label8(hlds__hlds_out__write_instance_defn_4_0, 2,3,7,8,9,10,11,4)
MR_decl_label8(hlds__hlds_out__write_instance_defn_4_0, 14,16,15,18,19,20,21,22)
MR_decl_label8(hlds__hlds_out__write_instance_defn_4_0, 23,24,25,26,27,29,31,28)
MR_decl_label7(hlds__hlds_out__write_instance_defn_4_0, 33,45,35,36,37,38,40)
MR_decl_label4(hlds__hlds_out__write_instance_defns_4_0, 2,3,4,5)
MR_decl_label4(hlds__hlds_out__write_instances_4_0, 2,3,4,5)
MR_decl_label3(hlds__hlds_out__write_instmap_6_0, 4,2,7)
MR_decl_label8(hlds__hlds_out__write_instmap_2_6_0, 22,4,5,6,7,10,11,24)
MR_decl_label3(hlds__hlds_out__write_instmap_delta_6_0, 4,2,7)
MR_decl_label4(hlds__hlds_out__write_instmap_delta_vars_5_0, 4,2,7,8)
MR_decl_label3(hlds__hlds_out__write_intlist_3_0, 16,5,6)
MR_decl_label4(hlds__hlds_out__write_intlist_2_4_0, 12,2,5,14)
MR_decl_label8(hlds__hlds_out__write_llds_code_gen_info_7_0, 3,5,115,7,8,9,10,11)
MR_decl_label8(hlds__hlds_out__write_llds_code_gen_info_7_0, 12,14,16,18,117,20,21,22)
MR_decl_label8(hlds__hlds_out__write_llds_code_gen_info_7_0, 23,25,27,29,31,32,33,35)
MR_decl_label8(hlds__hlds_out__write_llds_code_gen_info_7_0, 37,39,40,42,43,36,47,49)
MR_decl_label8(hlds__hlds_out__write_llds_code_gen_info_7_0, 51,52,53,54,55,57,59,60)
MR_decl_label8(hlds__hlds_out__write_llds_code_gen_info_7_0, 61,62,64,66,67,68,69,71)
MR_decl_label8(hlds__hlds_out__write_llds_code_gen_info_7_0, 73,46,77,79,81,82,83,85)
MR_decl_label8(hlds__hlds_out__write_llds_code_gen_info_7_0, 87,88,89,91,93,94,95,96)
MR_decl_label8(hlds__hlds_out__write_llds_code_gen_info_7_0, 98,100,76,104,106,108,109,110)
MR_decl_label2(hlds__hlds_out__write_llds_code_gen_info_7_0, 111,113)
MR_decl_label1(hlds__hlds_out__write_marker_3_0, 2)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 18,20,19,22,24,27,29,23)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 33,35,36,37,38,39,40,41)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 42,43,44,45,46,47,48,49)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 126,51,52,53,50,55,57,127)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 56,59,61,63,128,62,66,69)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 70,71,72,67,73,74,130,76)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 77,78,79,81,131,83,84,85)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 82,87,90,92,93,94,95,96)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 97,98,99,100,101,102,103,105)
MR_decl_label8(hlds__hlds_out__write_pred_6_0, 106,107,108,109,111,134,116,112)
MR_decl_label3(hlds__hlds_out__write_pred_6_0, 113,114,120)
MR_decl_label1(hlds__hlds_out__write_pred_id_4_0, 2)
MR_decl_label5(hlds__hlds_out__write_pred_proc_id_4_0, 2,3,4,5,6)
MR_decl_label5(hlds__hlds_out__write_pred_proc_id_pair_5_0, 2,3,4,5,6)
MR_decl_label3(hlds__hlds_out__write_preds_5_0, 2,3,4)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 18,19,20,21,22,23,24,25)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 26,27,28,29,30,31,32,33)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 34,35,36,37,38,39,40,41)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 42,44,46,47,48,49,50,51)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 52,43,56,58,59,55,62,63)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 64,66,65,70,69,74,76,79)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 80,81,82,85,83,88,89,90)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 86,94,95,97,99,100,101,102)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 103,104,105,93,108,109,110,111)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 112,177,114,115,117,91,119,120)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 121,179,123,124,125,126,122,128)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 129,130,131,133,135,136,139,140)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 141,142,137,144,147,148,149,151)
MR_decl_label8(hlds__hlds_out__write_proc_9_0, 155,153,156,157,158,159,160,161)
MR_decl_label2(hlds__hlds_out__write_proc_9_0, 162,164)
MR_decl_label8(hlds__hlds_out__write_proc_table_info_6_0, 2,5,4,7,8,9,10,12)
MR_decl_label3(hlds__hlds_out__write_proc_table_info_6_0, 14,15,16)
MR_decl_label2(hlds__hlds_out__write_procs_8_0, 2,3)
MR_decl_label4(hlds__hlds_out__write_procs_2_9_0, 12,4,5,14)
MR_decl_label8(hlds__hlds_out__write_rtti_var_info_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label6(hlds__hlds_out__write_rtti_var_info_8_0, 10,16,17,13,14,11)
MR_decl_label8(hlds__hlds_out__write_rtti_varmaps_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(hlds__hlds_out__write_rtti_varmaps_7_0, 10,11,12)
MR_decl_label7(hlds__hlds_out__write_short_reuse_description_5_0, 42,13,41,5,6,7,9)
MR_decl_label8(hlds__hlds_out__write_space_and_table_trie_step_5_0, 2,5,6,7,8,9,10,11)
MR_decl_label8(hlds__hlds_out__write_space_and_table_trie_step_5_0, 12,13,14,15,16,17,18,20)
MR_decl_label6(hlds__hlds_out__write_space_and_table_trie_step_5_0, 21,22,24,25,26,3)
MR_decl_label2(hlds__hlds_out__write_stack_slots_6_0, 2,3)
MR_decl_label8(hlds__hlds_out__write_static_cons_7_0, 2,3,4,5,6,8,9,10)
MR_decl_label3(hlds__hlds_out__write_static_cons_7_0, 11,12,13)
MR_decl_label8(hlds__hlds_out__write_sym_name_and_args_6_0, 4,5,3,8,9,10,11,12)
MR_decl_label1(hlds__hlds_out__write_sym_name_and_args_6_0, 13)
MR_decl_label8(hlds__hlds_out__write_table_arg_info_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(hlds__hlds_out__write_table_arg_infos_6_0, 2,3,4,7,5)
MR_decl_label5(hlds__hlds_out__write_table_tvar_map_entry_5_0, 2,3,4,5,7)
MR_decl_label6(hlds__hlds_out__write_trace_mutable_var_hlds_4_0, 2,3,4,5,6,7)
MR_decl_label8(hlds__hlds_out__write_type_body_5_0, 61,5,8,7,11,10,15,16)
MR_decl_label8(hlds__hlds_out__write_type_body_5_0, 13,17,18,43,20,21,62,25)
MR_decl_label2(hlds__hlds_out__write_type_body_5_0, 28,63)
MR_decl_label8(hlds__hlds_out__write_type_info_locn_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(hlds__hlds_out__write_type_info_locn_8_0, 10,13,14,12,16,17,18,19)
MR_decl_label5(hlds__hlds_out__write_type_info_locn_8_0, 20,21,22,23,24)
MR_decl_label8(hlds__hlds_out__write_type_params_4_0, 6,7,5,9,10,11,12,27)
MR_decl_label4(hlds__hlds_out__write_type_params_2_4_0, 13,4,5,3)
MR_decl_label6(hlds__hlds_out__write_typeclass_info_var_8_0, 2,3,4,5,6,7)
MR_decl_label3(hlds__hlds_out__write_types_4_0, 2,3,4)
MR_decl_label8(hlds__hlds_out__write_types_2_4_0, 65,4,5,6,7,8,9,10)
MR_decl_label8(hlds__hlds_out__write_types_2_4_0, 12,14,15,19,20,21,22,23)
MR_decl_label8(hlds__hlds_out__write_types_2_4_0, 24,25,26,11,30,32,31,37)
MR_decl_label4(hlds__hlds_out__write_types_2_4_0, 39,40,41,67)
MR_decl_label1(hlds__hlds_out__write_unify_rhs_2_11_0, 2)
MR_decl_label8(hlds__hlds_out__write_unify_rhs_3_10_0, 127,18,21,23,25,26,27,28)
MR_decl_label8(hlds__hlds_out__write_unify_rhs_3_10_0, 29,30,31,32,20,34,35,36)
MR_decl_label8(hlds__hlds_out__write_unify_rhs_3_10_0, 38,40,41,42,43,44,45,46)
MR_decl_label8(hlds__hlds_out__write_unify_rhs_3_10_0, 47,48,49,19,54,51,57,59)
MR_decl_label8(hlds__hlds_out__write_unify_rhs_3_10_0, 63,64,126,8,5,9,10,14)
MR_decl_label1(hlds__hlds_out__write_unify_rhs_3_10_0, 125)
MR_decl_label2(hlds__hlds_out__write_untuple_info_6_0, 2,3)
MR_decl_label5(hlds__hlds_out__write_untuple_info_2_7_0, 2,3,4,5,6)
MR_decl_label4(hlds__hlds_out__write_var_mode_6_0, 2,3,4,5)
MR_decl_label1(hlds__hlds_out__write_var_modes_7_0, 2)
MR_decl_label6(hlds__hlds_out__write_var_name_remap_5_0, 14,2,3,4,7,16)
MR_decl_label8(hlds__hlds_out__write_var_to_abs_locns_6_0, 17,4,5,6,7,8,9,10)
MR_decl_label1(hlds__hlds_out__write_var_to_abs_locns_6_0, 19)
MR_decl_label5(hlds__hlds_out__write_var_types_7_0, 2,3,4,5,6)
MR_decl_label8(hlds__hlds_out__write_var_types_2_8_0, 21,4,5,6,7,8,9,10)
MR_decl_label5(hlds__hlds_out__write_var_types_2_8_0, 11,12,13,14,23)
MR_decl_label8(hlds__hlds_out__write_vars_5_0, 28,5,7,8,11,12,10,32)
MR_decl_label2(fn__hlds__hlds_out__IntroducedFrom__func__inst_to_term_with_context__4169__1_3_0, 2,3)
MR_decl_label1(fn__hlds__hlds_out__add_mode_qualifier_2_0, 2)
MR_decl_label6(fn__hlds__hlds_out__bound_insts_to_term_2_0, 33,6,7,11,10,5)
MR_decl_label8(fn__hlds__hlds_out__call_arg_id_to_string_3_0, 2,5,7,4,12,13,15,16)
MR_decl_label8(fn__hlds__hlds_out__call_arg_id_to_string_3_0, 17,20,18,22,23,24,25,27)
MR_decl_label8(fn__hlds__hlds_out__call_arg_id_to_string_3_0, 28,31,32,34,35,37,38,39)
MR_decl_label8(fn__hlds__hlds_out__call_arg_id_to_string_3_0, 40,41,45,49,44,42,51,53)
MR_decl_label8(fn__hlds__hlds_out__call_id_to_string_1_0, 3,31,8,9,10,11,13,15)
MR_decl_label1(fn__hlds__hlds_out__call_id_to_string_1_0, 17)
MR_decl_label1(fn__hlds__hlds_out__can_fail_to_string_1_0, 3)
MR_decl_label8(fn__hlds__hlds_out__cons_id_to_string_1_0, 4,79,6,8,7,11,12,13)
MR_decl_label8(fn__hlds__hlds_out__cons_id_to_string_1_0, 15,17,18,20,82,23,24,25)
MR_decl_label8(fn__hlds__hlds_out__cons_id_to_string_1_0, 26,27,83,30,31,32,33,34)
MR_decl_label8(fn__hlds__hlds_out__cons_id_to_string_1_0, 35,36,38,39,84,41,42,43)
MR_decl_label8(fn__hlds__hlds_out__cons_id_to_string_1_0, 44,45,85,48,49,50,51,52)
MR_decl_label6(fn__hlds__hlds_out__cons_id_to_string_1_0, 86,55,56,57,58,59)
MR_decl_label8(fn__hlds__hlds_out__det_to_term_2_0, 3,4,5,6,7,8,9,10)
MR_decl_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0, 4,6,8,11,13,14,16,18)
MR_decl_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0, 19,20,21,22,23,25,26,27)
MR_decl_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0, 28,29,30,31,32,34,35,36)
MR_decl_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0, 37,38,39,40,41,42,43,44)
MR_decl_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0, 45,47,49,50,51,52,53,54)
MR_decl_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0, 55,56,58,59,60,61,62,63)
MR_decl_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0, 64,65,67,68,69,70,71,72)
MR_decl_label2(fn__hlds__hlds_out__functor_cons_id_to_string_5_0, 73,74)
MR_decl_label2(fn__hlds__hlds_out__functor_to_string_4_0, 2,3)
MR_decl_label2(fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0, 2,3)
MR_decl_label8(fn__hlds__hlds_out__import_status_to_string_1_0, 10,11,12,13,14,15,16,17)
MR_decl_label5(fn__hlds__hlds_out__import_status_to_string_1_0, 18,8,40,5,6)
MR_decl_label8(fn__hlds__hlds_out__inst_name_to_term_2_0, 4,7,8,10,11,13,14,15)
MR_decl_label8(fn__hlds__hlds_out__inst_name_to_term_2_0, 16,18,19,20,21,23,24,25)
MR_decl_label8(fn__hlds__hlds_out__inst_name_to_term_2_0, 26,28,29,30,31,32,34,37)
MR_decl_label8(fn__hlds__hlds_out__inst_name_to_term_2_0, 38,39,41,42,43,44,45,47)
MR_decl_label8(fn__hlds__hlds_out__inst_name_to_term_2_0, 48,50,53,54,56,57,58,59)
MR_decl_label4(fn__hlds__hlds_out__inst_name_to_term_2_0, 62,63,64,65)
MR_decl_label1(fn__hlds__hlds_out__inst_to_term_1_0, 2)
MR_decl_label8(fn__hlds__hlds_out__inst_to_term_with_context_2_0, 4,5,72,73,12,13,14,76)
MR_decl_label8(fn__hlds__hlds_out__inst_to_term_with_context_2_0, 16,17,77,22,21,26,25,28)
MR_decl_label8(fn__hlds__hlds_out__inst_to_term_with_context_2_0, 29,30,31,32,33,78,36,79)
MR_decl_label3(fn__hlds__hlds_out__inst_to_term_with_context_2_0, 39,41,43)
MR_decl_label5(fn__hlds__hlds_out__inst_uniqueness_2_0, 3,4,5,6,7)
MR_decl_label1(fn__hlds__hlds_out__mercury_expanded_inst_to_string_3_0, 2)
MR_decl_label2(fn__hlds__hlds_out__mercury_uni_mode_to_string_2_0, 2,3)
MR_decl_label1(fn__hlds__hlds_out__mode_to_term_1_0, 2)
MR_decl_label7(fn__hlds__hlds_out__mode_to_term_with_context_2_0, 8,4,5,11,12,3,15)
MR_decl_label8(fn__hlds__hlds_out__pred_id_to_string_2_0, 2,4,6,7,8,9,10,13)
MR_decl_label8(fn__hlds__hlds_out__pred_id_to_string_2_0, 14,17,18,11,21,22,20,25)
MR_decl_label6(fn__hlds__hlds_out__pred_id_to_string_2_0, 27,28,24,3,34,35)
MR_decl_label4(fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0, 2,3,4,5)
MR_decl_label4(fn__hlds__hlds_out__pred_proc_id_to_string_2_0, 2,3,4,5)
MR_decl_label5(fn__hlds__hlds_out__qualified_functor_to_string_5_0, 2,3,4,5,6)
MR_decl_label4(fn__hlds__hlds_out__unify_rhs_to_string_4_0, 11,35,8,5)
MR_decl_label3(fn__hlds__hlds_out__var_mode_to_string_4_0, 2,3,4)
MR_decl_label2(fn__hlds__hlds_out__var_modes_to_string_5_0, 2,3)
MR_decl_label4(__Unify___hlds__hlds_out__expanded_inst_info_0_0, 4,6,10,1)
MR_decl_label4(__Unify___hlds__hlds_out__maybe_vartypes_0_0, 14,5,7,1)
MR_decl_label5(__Compare___hlds__hlds_out__expanded_inst_info_0_0, 3,2,5,9,29)
MR_decl_label6(__Compare___hlds__hlds_out__maybe_vartypes_0_0, 24,7,5,9,11,16)
MR_def_extern_entry(hlds__hlds_out__write_type_ctor_3_0)
MR_def_extern_entry(fn__hlds__hlds_out__type_ctor_to_string_1_0)
MR_def_extern_entry(hlds__hlds_out__write_class_id_3_0)
MR_def_extern_entry(fn__hlds__hlds_out__cons_id_to_string_1_0)
MR_def_extern_entry(hlds__hlds_out__write_cons_id_3_0)
MR_def_extern_entry(fn__hlds__hlds_out__pred_id_to_string_2_0)
MR_def_extern_entry(hlds__hlds_out__write_pred_id_4_0)
MR_def_extern_entry(fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0)
MR_def_extern_entry(hlds__hlds_out__write_pred_proc_id_pair_5_0)
MR_def_extern_entry(hlds__hlds_out__write_pred_proc_id_4_0)
MR_def_extern_entry(fn__hlds__hlds_out__pred_proc_id_to_string_2_0)
MR_decl_static(fn__hlds__hlds_out__cast_type_to_string_1_0)
MR_def_extern_entry(fn__hlds__hlds_out__call_id_to_string_1_0)
MR_def_extern_entry(fn__hlds__hlds_out__call_arg_id_to_string_3_0)
MR_decl_static(hlds__hlds_out__start_in_message_to_pieces_3_0)
MR_decl_static(hlds__hlds_out__unify_main_context_to_pieces_5_0)
MR_decl_static(hlds__hlds_out__contexts_describe_list_element_4_0)
MR_decl_static(hlds__hlds_out__in_argument_to_pieces_4_0)
MR_decl_static(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0)
MR_def_extern_entry(hlds__hlds_out__unify_context_first_to_pieces_5_0)
MR_def_extern_entry(hlds__hlds_out__unify_context_to_pieces_3_0)
MR_def_extern_entry(fn__hlds__hlds_out__determinism_to_string_1_0)
MR_def_extern_entry(fn__hlds__hlds_out__can_fail_to_string_1_0)
MR_def_extern_entry(hlds__hlds_out__write_eval_method_3_0)
MR_def_extern_entry(fn__hlds__hlds_out__import_status_to_string_1_0)
MR_decl_static(hlds__hlds_out__write_indent_3_0)
MR_decl_static(hlds__hlds_out__write_footer_4_0)
MR_decl_static(hlds__hlds_out__write_preds_5_0)
MR_decl_static(hlds__hlds_out__write_type_params_2_4_0)
MR_decl_static(hlds__hlds_out__write_type_params_4_0)
MR_decl_static(hlds__hlds_out__write_constructors_2_6_0)
MR_decl_static(hlds__hlds_out__write_constructors_6_0)
MR_decl_static(hlds__hlds_out__write_type_body_5_0)
MR_decl_static(hlds__hlds_out__write_types_2_4_0)
MR_decl_static(hlds__hlds_out__write_types_4_0)
MR_decl_static(hlds__hlds_out__write_classes_4_0)
MR_decl_static(hlds__hlds_out__write_instances_4_0)
MR_def_extern_entry(hlds__hlds_out__write_hlds_4_0)
MR_decl_static(hlds__hlds_out__write_clause_head_8_0)
MR_decl_static(hlds__hlds_out__write_annotated_clause_heads_11_0)
MR_decl_static(fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0)
MR_def_extern_entry(hlds__hlds_out__write_functor_6_0)
MR_decl_static(hlds__hlds_out__write_foreign_args_6_0)
MR_def_extern_entry(hlds__hlds_out__mercury_output_uni_mode_4_0)
MR_decl_static(hlds__hlds_out__mercury_format_uni_mode_list_4_0)
MR_def_extern_entry(hlds__hlds_out__mercury_output_uni_mode_list_4_0)
MR_decl_static(hlds__hlds_out__write_intlist_2_4_0)
MR_decl_static(hlds__hlds_out__write_intlist_3_0)
MR_def_extern_entry(fn__hlds__hlds_out__functor_to_string_4_0)
MR_decl_static(fn__hlds__hlds_out__qualified_functor_to_string_5_0)
MR_def_extern_entry(fn__hlds__hlds_out__functor_cons_id_to_string_5_0)
MR_def_extern_entry(hlds__hlds_out__write_functor_cons_id_7_0)
MR_def_extern_entry(fn__hlds__hlds_out__var_modes_to_string_5_0)
MR_def_extern_entry(hlds__hlds_out__write_var_modes_7_0)
MR_decl_static(fn__hlds__hlds_out__var_mode_to_string_4_0)
MR_decl_static(hlds__hlds_out__write_var_mode_6_0)
MR_decl_static(hlds__hlds_out__write_sym_name_and_args_6_0)
MR_decl_static(hlds__hlds_out__write_vars_5_0)
MR_decl_static(hlds__hlds_out__write_var_to_abs_locns_6_0)
MR_decl_static(hlds__hlds_out__write_llds_code_gen_info_7_0)
MR_decl_static(hlds__hlds_out__write_instmap_2_6_0)
MR_decl_static(hlds__hlds_out__write_instmap_delta_6_0)
MR_decl_static(hlds__hlds_out__write_instmap_delta_vars_5_0)
MR_decl_static(hlds__hlds_out__write_short_reuse_description_5_0)
MR_def_extern_entry(hlds__hlds_out__write_goal_list_9_0)
MR_decl_static(hlds__hlds_out__write_goal_a_9_0)
MR_decl_static(hlds__hlds_out__write_goal_2_9_0)
MR_decl_static(hlds__hlds_out__write_goal_2_shorthand_9_0)
MR_decl_static(hlds__hlds_out__write_unify_rhs_2_11_0)
MR_decl_static(hlds__hlds_out__write_unify_rhs_3_10_0)
MR_decl_static(hlds__hlds_out__write_conj_12_0)
MR_decl_static(hlds__hlds_out__write_case_9_0)
MR_decl_static(hlds__hlds_out__write_cases_9_0)
MR_def_extern_entry(hlds__hlds_out__write_clause_12_0)
MR_decl_static(hlds__hlds_out__write_clauses_2_12_0)
MR_def_extern_entry(hlds__hlds_out__write_clauses_11_0)
MR_def_extern_entry(hlds__hlds_out__write_promise_12_0)
MR_def_extern_entry(hlds__hlds_out__write_goal_8_0)
MR_def_extern_entry(hlds__hlds_out__write_unify_rhs_8_0)
MR_def_extern_entry(fn__hlds__hlds_out__unify_rhs_to_string_4_0)
MR_def_extern_entry(hlds__hlds_out__write_instmap_6_0)
MR_def_extern_entry(hlds__hlds_out__marker_name_2_0)
MR_def_extern_entry(hlds__hlds_out__write_marker_3_0)
MR_decl_static(fn__hlds__hlds_out__make_atom_2_0)
MR_decl_static(fn__hlds__hlds_out__inst_uniqueness_2_0)
MR_decl_static(fn__hlds__hlds_out__inst_name_to_term_2_0)
MR_decl_static(fn__hlds__hlds_out__any_inst_uniqueness_1_0)
MR_decl_static(fn__hlds__hlds_out__bound_insts_to_term_2_0)
MR_decl_static(fn__hlds__hlds_out__det_to_term_2_0)
MR_decl_static(fn__hlds__hlds_out__mode_to_term_with_context_2_0)
MR_decl_static(fn__hlds__hlds_out__inst_to_term_with_context_2_0)
MR_def_extern_entry(fn__hlds__hlds_out__mode_to_term_1_0)
MR_def_extern_entry(fn__hlds__hlds_out__inst_to_term_1_0)
MR_def_extern_entry(fn__hlds__hlds_out__mercury_uni_mode_to_string_2_0)
MR_def_extern_entry(fn__hlds__hlds_out__mercury_uni_mode_list_to_string_2_0)
MR_def_extern_entry(hlds__hlds_out__mercury_output_expanded_inst_5_0)
MR_def_extern_entry(fn__hlds__hlds_out__mercury_expanded_inst_to_string_3_0)
MR_decl_static(hlds__hlds_out__set_dump_opts_for_clauses_3_0)
MR_decl_static(hlds__hlds_out__write_marker_list_3_0)
MR_decl_static(hlds__hlds_out__write_var_types_2_8_0)
MR_decl_static(hlds__hlds_out__write_var_types_7_0)
MR_decl_static(hlds__hlds_out__write_rtti_varmaps_7_0)
MR_decl_static(hlds__hlds_out__write_var_name_remap_5_0)
MR_decl_static(hlds__hlds_out__write_stack_slots_6_0)
MR_decl_static(hlds__hlds_out__write_untuple_info_6_0)
MR_decl_static(hlds__hlds_out__write_table_arg_infos_6_0)
MR_decl_static(hlds__hlds_out__write_proc_table_info_6_0)
MR_decl_static(hlds__hlds_out__write_proc_9_0)
MR_decl_static(hlds__hlds_out__write_procs_2_9_0)
MR_decl_static(hlds__hlds_out__write_procs_8_0)
MR_decl_static(hlds__hlds_out__write_constraint_proofs_6_0)
MR_decl_static(hlds__hlds_out__write_constraint_map_6_0)
MR_decl_static(hlds__hlds_out__write_pred_6_0)
MR_decl_static(hlds__hlds_out__maybe_write_pred_6_0)
MR_decl_static(hlds__hlds_out__write_trace_mutable_var_hlds_4_0)
MR_decl_static(hlds__hlds_out__write_static_cons_7_0)
MR_decl_static(hlds__hlds_out__write_type_info_locn_8_0)
MR_decl_static(hlds__hlds_out__write_typeclass_info_var_8_0)
MR_decl_static(hlds__hlds_out__write_rtti_var_info_8_0)
MR_decl_static(hlds__hlds_out__write_untuple_info_2_7_0)
MR_decl_static(hlds__hlds_out__write_class_defn_4_0)
MR_decl_static(hlds__hlds_out__hlds_output_fundep_3_0)
MR_decl_static(hlds__hlds_out__write_class_proc_3_0)
MR_decl_static(hlds__hlds_out__write_instance_defns_4_0)
MR_decl_static(hlds__hlds_out__write_instance_defn_4_0)
MR_decl_static(hlds__hlds_out__write_table_arg_info_6_0)
MR_decl_static(hlds__hlds_out__write_table_tvar_map_entry_5_0)
MR_decl_static(hlds__hlds_out__write_space_and_table_trie_step_5_0)
MR_decl_static(hlds__hlds_out__write_constraint_proof_6_0)
MR_decl_static(hlds__hlds_out__write_constraint_map_2_7_0)
MR_decl_static(fn__hlds__hlds_out__add_mode_qualifier_2_0)
MR_decl_static(fn__hlds__hlds_out__map_inst_to_term_2_0)
MR_decl_static(__Unify___hlds__hlds_out__expanded_inst_info_0_0)
MR_decl_static(__Compare___hlds__hlds_out__expanded_inst_info_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_out__maybe_vartypes_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_out__maybe_vartypes_0_0)
MR_decl_static(fn__hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0)
MR_decl_static(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0)
MR_decl_static(hlds__hlds_out__IntroducedFrom__pred__cons_id_to_string__305__1_3_0)
MR_decl_static(hlds__hlds_out__IntroducedFrom__pred__write_promise__1027__1_4_0)
MR_decl_static(fn__hlds__hlds_out__IntroducedFrom__func__write_stack_slots__3125__1_2_0)
MR_decl_static(fn__hlds__hlds_out__IntroducedFrom__func__inst_to_term_with_context__4169__1_3_0)
MR_def_extern_entry(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_111_109_101_95_95_91_49_44_32_50_93_95_48_4_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__cons_id_to_string_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_hlds_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_annotated_clause_heads_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_a_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_compiletime_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_name_to_term_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_name_to_term_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_name_to_term_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__bound_insts_to_term_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__mode_to_term_with_context_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_to_term_with_context_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_to_term_with_context_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_marker_list_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_stack_slots_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_class_defn_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_class_defn_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_output_fundep_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_output_fundep_3_0_2;
static const struct mercury_type_0 mercury_common_0[20] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__cons_id_to_string_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CHAR_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_hlds_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_annotated_clause_heads_11_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(5,6),
MR_COMMON(4,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_goal_a_9_0_1,
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
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_1,
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
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_2,
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
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_3,
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
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__inst_name_to_term_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(4,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__inst_name_to_term_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(4,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__inst_name_to_term_2_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(4,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__bound_insts_to_term_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(4,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__mode_to_term_with_context_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(4,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__inst_to_term_with_context_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(4,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__inst_to_term_with_context_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(4,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_marker_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, marker),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_stack_slots_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,26),
MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot),
MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_class_defn_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_class_defn_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_output_fundep_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_output_fundep_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(parse_tree__prog_out__write_sym_name_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_trace_runtime_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_trace_compiletime_3_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);
MR_decl_entry(io__write_int_3_0);
static const struct mercury_type_1 mercury_common_1[13] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(hlds__hlds_out__IntroducedFrom__pred__cons_id_to_string__305__1_3_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(parse_tree__prog_out__write_sym_name_3_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_trace_runtime_3_0),
0
},
{
MR_COMMON(0,5),
MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_trace_compiletime_3_0),
0
},
{
MR_COMMON(0,6),
MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_trace_runtime_3_0),
0
},
{
MR_COMMON(10,0),
MR_ENTRY_AP(fn__hlds__hlds_pred__proc_id_to_int_1_0),
0
},
{
MR_COMMON(0,14),
MR_ENTRY_AP(hlds__hlds_out__write_marker_3_0),
0
},
{
MR_COMMON(0,15),
MR_ENTRY_AP(fn__hlds__hlds_out__IntroducedFrom__func__write_stack_slots__3125__1_2_0),
0
},
{
MR_COMMON(0,16),
MR_ENTRY_AP(hlds__hlds_out__hlds_output_fundep_3_0),
0
},
{
MR_COMMON(0,17),
MR_ENTRY_AP(hlds__hlds_out__write_class_proc_3_0),
0
},
{
MR_COMMON(0,18),
MR_ENTRY_AP(io__write_int_3_0),
0
},
{
MR_COMMON(0,19),
MR_ENTRY_AP(io__write_int_3_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[30] =
{
{
MR_string_const("typeclass_info_cell_constructor", 31)
},
{
MR_string_const("type_info_cell_constructor", 26)
},
{
MR_string_const("call", 4)
},
{
MR_string_const("apply", 5)
},
{
MR_string_const("class_method_call", 17)
},
{
MR_string_const("\044merge_inst", 11)
},
{
MR_string_const("\044unify", 6)
},
{
MR_string_const("\044ground", 7)
},
{
MR_string_const("\044any", 4)
},
{
MR_string_const("\044shared_inst", 12)
},
{
MR_string_const("\044mostly_uniq_inst", 17)
},
{
MR_string_const("\044typed_ground", 13)
},
{
MR_string_const("\044typed_inst", 11)
},
{
MR_string_const(";", 1)
},
{
MR_string_const("det", 3)
},
{
MR_string_const("semidet", 7)
},
{
MR_string_const("multi", 5)
},
{
MR_string_const("nondet", 6)
},
{
MR_string_const("cc_multi", 8)
},
{
MR_string_const("cc_nondet", 9)
},
{
MR_string_const("erroneous", 9)
},
{
MR_string_const("failure", 7)
},
{
MR_string_const(">>", 2)
},
{
MR_string_const("free", 4)
},
{
MR_string_const("pred", 4)
},
{
MR_string_const("is", 2)
},
{
MR_string_const("func", 4)
},
{
MR_string_const("=", 1)
},
{
MR_string_const("::", 2)
},
{
MR_string_const("=<", 2)
},
};

static const struct mercury_type_3 mercury_common_3[11] =
{
{
3,
MR_string_const("in", 2)
},
{
3,
MR_string_const("In", 2)
},
{
3,
MR_string_const("function result term of clause head:", 36)
},
{
3,
MR_string_const("argument", 8)
},
{
3,
MR_string_const("of clause head:", 15)
},
{
2,
MR_string_const(":", 1)
},
{
3,
MR_string_const("of functor", 10)
},
{
1,
MR_string_const("\140", 1)
},
{
2,
MR_string_const("\':", 2)
},
{
3,
MR_string_const("list element", 12)
},
{
1,
MR_string_const("#", 1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__output__arity1__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__parse_tree__mercury_to_mercury__simple_inst_info__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__mercury_to_mercury__type_ctor_info_simple_inst_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_goal_feature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__output__arity1__string__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_is_live_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
static const struct mercury_type_4 mercury_common_4[34] =
{
{
{
MR_TAG_COMMON(3,3,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,1),
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
MR_TAG_COMMON(3,3,2),
MR_TAG_COMMON(1,4,2)
}
},
{
{
MR_TAG_COMMON(3,3,4),
MR_TAG_COMMON(1,4,2)
}
},
{
{
MR_TAG_COMMON(3,3,5),
MR_TAG_COMMON(1,4,2)
}
},
{
{
MR_TAG_COMMON(3,3,8),
MR_TAG_COMMON(1,4,2)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__output__arity1__io__state__arity0__,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__parse_tree__mercury_to_mercury__simple_inst_info__arity0__,
MR_CTOR0_ADDR(parse_tree__mercury_to_mercury, simple_inst_info)
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
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
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
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__output__arity1__string__arity0__,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__expanded_inst_info__arity0__,
MR_CTOR0_ADDR(hlds__hlds_out, expanded_inst_info)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(4,17)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,4,14)
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
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,5,11)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, is_live)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
static const struct mercury_type_5 mercury_common_5[14] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_COMMON(4,8)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_TAG_COMMON(0,4,7)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(4,10),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,4,14),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(4,17),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(4,29),
MR_CTOR0_ADDR(hlds__hlds_pred, table_locn)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,4,25),
MR_CTOR0_ADDR(hlds__hlds_pred, table_locn)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_preds_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_table_arg_infos_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_arg_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_constraint_proofs_6_0_1;
static const struct mercury_type_6 mercury_common_6[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_preds_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(5,1),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_table_arg_infos_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(4,15),
MR_COMMON(4,23),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, table_arg_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_constraint_proofs_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_COMMON(4,23),
MR_BOOL_CTOR_ADDR,
MR_COMMON(5,12),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_classes_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_instances_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_to_term_with_context_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_instance_defns_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_1;
static const struct mercury_type_7 mercury_common_7[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_classes_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(5,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_instances_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_COMMON(5,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_4,
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
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_5,
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
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__inst_to_term_with_context_2_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(4,20),
MR_COMMON(4,11),
MR_COMMON(4,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_instance_defns_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(4,15),
MR_COMMON(4,26),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__var_modes_to_string_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_table_arg_infos_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_proc_table_info_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_trie_step_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_pred_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_class_defn_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_instance_defn_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_instance_defn_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_instance_defn_4_0_3;
static const struct mercury_type_8 mercury_common_8[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__var_modes_to_string_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,15),
MR_COMMON(4,16),
MR_BOOL_CTOR_ADDR,
MR_COMMON(5,8),
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_table_arg_infos_6_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,23),
MR_BOOL_CTOR_ADDR,
MR_COMMON(5,9),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_proc_table_info_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,23),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_pred_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,23),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_class_defn_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,23),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_instance_defn_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,23),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_instance_defn_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,23),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_instance_defn_4_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(4,23),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_9 mercury_common_9[2] =
{
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("\", ", 3),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_clause_12_0_1;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_clause_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_rtti_varmaps_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_rtti_varmaps_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_rtti_varmaps_7_0_3;
static const struct mercury_type_11 mercury_common_11[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_rtti_varmaps_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_INT_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(4,15),
MR_COMMON(4,23),
MR_COMMON(4,24),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_rtti_varmaps_7_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_INT_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(4,15),
MR_COMMON(4,23),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_rtti_varmaps_7_0_3,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_INT_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_COMMON(4,15),
MR_COMMON(4,23),
MR_COMMON(4,26),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_untuple_info_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_constraint_map_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_static_cons_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_static_cons_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_static_cons_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_1;
static const struct mercury_type_12 mercury_common_12[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_untuple_info_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(4,15),
MR_BOOL_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(4,26),
MR_COMMON(4,27),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_constraint_map_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_COMMON(4,23),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, constraint_id),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_static_cons_7_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(4,15),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, static_cons),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__write_static_cons_7_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(4,15),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, static_cons),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_COMMON(4,15),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, static_cons),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_2 mercury_vector_common_2_0[4] =
{
{
MR_string_const("unsafe_type_cast", 16)
},
{
MR_string_const("unsafe_type_inst_cast", 21)
},
{
MR_string_const("equiv_type_cast", 15)
},
{
MR_string_const("exists_cast", 11)
},
};

static const struct mercury_type_2 mercury_vector_common_2_1[4] =
{
{
MR_string_const("unsafe_type_cast", 16)
},
{
MR_string_const("unsafe_type_inst_cast", 21)
},
{
MR_string_const("equiv_type_cast", 15)
},
{
MR_string_const("exists_cast", 11)
},
};

static const struct mercury_type_2 mercury_vector_common_2_2[8] =
{
{
MR_string_const("det", 3)
},
{
MR_string_const("semidet", 7)
},
{
MR_string_const("multi", 5)
},
{
MR_string_const("nondet", 6)
},
{
MR_string_const("cc_multi", 8)
},
{
MR_string_const("cc_nondet", 9)
},
{
MR_string_const("erroneous", 9)
},
{
MR_string_const("failure", 7)
},
};

static const struct mercury_type_2 mercury_vector_common_2_3[4] =
{
{
MR_string_const("imported in the implementation", 30)
},
{
MR_string_const("imported in the interface", 25)
},
{
MR_string_const("imported by an ancestor", 23)
},
{
MR_string_const("imported from an ancestor\'s private interface", 45)
},
};

static const struct mercury_type_2 mercury_vector_common_2_4[21] =
{
{
MR_string_const("stub", 4)
},
{
MR_string_const("infer_type", 10)
},
{
MR_string_const("infer_modes", 11)
},
{
MR_string_const("obsolete", 8)
},
{
MR_string_const("inline", 6)
},
{
MR_string_const("no_inline", 9)
},
{
MR_string_const("heuristic_inline", 16)
},
{
MR_string_const("class_method", 12)
},
{
MR_string_const("class_instance_method", 21)
},
{
MR_string_const("named_class_instance_method", 27)
},
{
MR_string_const("impure", 6)
},
{
MR_string_const("semipure", 8)
},
{
MR_string_const("promise_pure", 12)
},
{
MR_string_const("promise_semipure", 16)
},
{
MR_string_const("promise_equivalent_clauses", 26)
},
{
MR_string_const("terminates", 10)
},
{
MR_string_const("does_not_terminate", 18)
},
{
MR_string_const("check_termination", 17)
},
{
MR_string_const("calls_are_fully_qualified", 25)
},
{
MR_string_const("mode_check_clauses", 18)
},
{
MR_string_const("mutable_access_pred", 19)
},
};

static const struct mercury_type_2 mercury_vector_common_2_5[5] =
{
{
MR_string_const("any", 3)
},
{
MR_string_const("unique_any", 10)
},
{
MR_string_const("mostly_unique_any", 17)
},
{
MR_string_const("clobbered_any", 13)
},
{
MR_string_const("mostly_clobbered_any", 20)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_out__field_types_maybe_vartypes_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_out__du_functor_desc_maybe_vartypes_0_0 = {
	"varset_vartypes",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_out__field_types_maybe_vartypes_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_out__du_functor_desc_maybe_vartypes_0_1 = {
	"no_varset_vartypes",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_out__du_stag_ordered_maybe_vartypes_0_0[] = {
	&mercury_data_hlds__hlds_out__du_functor_desc_maybe_vartypes_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_out__du_stag_ordered_maybe_vartypes_0_1[] = {
	&mercury_data_hlds__hlds_out__du_functor_desc_maybe_vartypes_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_out__du_ptag_ordered_maybe_vartypes_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__hlds_out__du_stag_ordered_maybe_vartypes_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_out__du_stag_ordered_maybe_vartypes_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_out__du_name_ordered_maybe_vartypes_0[] = {
	&mercury_data_hlds__hlds_out__du_functor_desc_maybe_vartypes_0_1,
	&mercury_data_hlds__hlds_out__du_functor_desc_maybe_vartypes_0_0
};

const MR_Integer mercury_data_hlds__hlds_out__functor_number_map_maybe_vartypes_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_out__type_ctor_info_maybe_vartypes_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_out__maybe_vartypes_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_out__maybe_vartypes_0_0)),
	"hlds.hlds_out",
	"maybe_vartypes",
	{ (void *)mercury_data_hlds__hlds_out__du_name_ordered_maybe_vartypes_0 },
	{ (void *)mercury_data_hlds__hlds_out__du_ptag_ordered_maybe_vartypes_0 },
	2,
	4,
	mercury_data_hlds__hlds_out__functor_number_map_maybe_vartypes_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_out__field_types_expanded_inst_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_inst_name_0
};

const MR_ConstString mercury_data_hlds__hlds_out__field_names_expanded_inst_info_0_0[] = {
	"eii_varset",
	"eii_module_info",
	"eii_expansions"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_out__du_functor_desc_expanded_inst_info_0_0 = {
	"expanded_inst_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_out__field_types_expanded_inst_info_0_0,
	mercury_data_hlds__hlds_out__field_names_expanded_inst_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_out__du_stag_ordered_expanded_inst_info_0_0[] = {
	&mercury_data_hlds__hlds_out__du_functor_desc_expanded_inst_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_out__du_ptag_ordered_expanded_inst_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_out__du_stag_ordered_expanded_inst_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_out__du_name_ordered_expanded_inst_info_0[] = {
	&mercury_data_hlds__hlds_out__du_functor_desc_expanded_inst_info_0_0
};

const MR_Integer mercury_data_hlds__hlds_out__functor_number_map_expanded_inst_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_out__type_ctor_info_expanded_inst_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_out__expanded_inst_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_out__expanded_inst_info_0_0)),
	"hlds.hlds_out",
	"expanded_inst_info",
	{ (void *)mercury_data_hlds__hlds_out__du_name_ordered_expanded_inst_info_0 },
	{ (void *)mercury_data_hlds__hlds_out__du_ptag_ordered_expanded_inst_info_0 },
	1,
	4,
	mercury_data_hlds__hlds_out__functor_number_map_expanded_inst_info_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__expanded_inst_info__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0))
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__cons_id_to_string_1_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"lambda_hlds_out_m_305",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
302,
"d1;c4;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_preds_5_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"maybe_write_pred",
6,
0
},
"hlds.hlds_out",
"hlds_out.m",
723,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_classes_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_class_defn",
4,
0
},
"hlds.hlds_out",
"hlds_out.m",
3381,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_instances_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_instance_defns",
4,
0
},
"hlds.hlds_out",
"hlds_out.m",
3472,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_hlds_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_out",
"parse_tree.prog_out",
"write_sym_name",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
704,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_annotated_clause_heads_11_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"add_mode_qualifier",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
1171,
"d1;c14;t;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__var_modes_to_string_5_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"var_mode_to_string",
5,
0
},
"hlds.hlds_out",
"hlds_out.m",
2798,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_a_9_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
1445,
"d1;c22;t;t;c16;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_1 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_trace_runtime",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
1974,
"d10;c29;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_2 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_trace_compiletime",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
1598,
"d2;c11;d9;c9;d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_3 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_trace_runtime",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
1608,
"d2;c11;d9;c10;d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_4 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_trace_mutable_var_hlds",
4,
0
},
"hlds.hlds_out",
"hlds_out.m",
1621,
"d2;c11;d9;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_goal_2_9_0_5 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_trace_mutable_var_hlds",
4,
0
},
"hlds.hlds_out",
"hlds_out.m",
1621,
"d2;c11;d9;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_clause_12_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_pred",
"hlds.hlds_pred",
"proc_id_to_int",
2,
0
},
"hlds.hlds_out",
"hlds_out.m",
1088,
"d1;c18;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_name_to_term_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"map_inst_to_term",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
4184,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_name_to_term_2_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"map_inst_to_term",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
4188,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_name_to_term_2_0_3 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"map_inst_to_term",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
4201,
"d5;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__bound_insts_to_term_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"map_inst_to_term",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
4255,
"d2;c5;?;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__mode_to_term_with_context_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"map_inst_to_term",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
4114,
"d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_to_term_with_context_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"mode_to_term_with_context",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
4148,
"d5;c4;d1;c3;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_to_term_with_context_2_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"mode_to_term_with_context",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
4154,
"d5;c4;d1;c3;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__inst_to_term_with_context_2_0_3 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"lambda_hlds_out_m_4169",
4,
0
},
"hlds.hlds_out",
"hlds_out.m",
4169,
"d7;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_marker_list_3_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_marker",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
996,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_rtti_varmaps_7_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_type_info_locn",
8,
0
},
"hlds.hlds_out",
"hlds_out.m",
3031,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_rtti_varmaps_7_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_typeclass_info_var",
8,
0
},
"hlds.hlds_out",
"hlds_out.m",
3036,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_rtti_varmaps_7_0_3 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_rtti_var_info",
8,
0
},
"hlds.hlds_out",
"hlds_out.m",
3041,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_stack_slots_6_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out",
"hlds.hlds_out",
"lambda_hlds_out_m_3125",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
3125,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_untuple_info_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_untuple_info_2",
7,
0
},
"hlds.hlds_out",
"hlds_out.m",
3150,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_table_arg_infos_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_table_arg_info",
6,
0
},
"hlds.hlds_out",
"hlds_out.m",
3907,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_table_arg_infos_6_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_table_tvar_map_entry",
5,
0
},
"hlds.hlds_out",
"hlds_out.m",
3915,
"d1;c13;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_proc_table_info_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_space_and_table_trie_step",
5,
0
},
"hlds.hlds_out",
"hlds_out.m",
3885,
"d1;c9;d2;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_constraint_proofs_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_constraint_proof",
6,
0
},
"hlds.hlds_out",
"hlds_out.m",
4027,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_constraint_map_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_constraint_map_2",
7,
0
},
"hlds.hlds_out",
"hlds_out.m",
4055,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_pred_6_0_1 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_constraint",
5,
0
},
"hlds.hlds_out",
"hlds_out.m",
919,
"d1;c28;t;c33;d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_static_cons_7_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_static_cons",
7,
0
},
"hlds.hlds_out",
"hlds_out.m",
2466,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_static_cons_7_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_static_cons",
7,
0
},
"hlds.hlds_out",
"hlds_out.m",
2466,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_class_defn_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"hlds_output_fundep",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
3424,
"d1;c27;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_class_defn_4_0_2 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_constraint",
5,
0
},
"hlds.hlds_out",
"hlds_out.m",
3429,
"d1;c34;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_class_defn_4_0_3 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_class_proc",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
3435,
"d1;c41;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_output_fundep_3_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
3443,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_output_fundep_3_0_2 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"hlds.hlds_out",
"hlds_out.m",
3446,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_instance_defns_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_instance_defn",
4,
0
},
"hlds.hlds_out",
"hlds_out.m",
3484,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_instance_defn_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_type",
5,
0
},
"hlds.hlds_out",
"hlds_out.m",
3514,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_instance_defn_4_0_2 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_type",
5,
0
},
"hlds.hlds_out",
"hlds_out.m",
3514,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__write_instance_defn_4_0_3 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_constraint",
5,
0
},
"hlds.hlds_out",
"hlds_out.m",
3524,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"lambda_hlds_out_m_1027",
4,
0
},
"hlds.hlds_out",
"hlds_out.m",
1027,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out",
"hlds.hlds_out",
"write_static_cons",
7,
0
},
"hlds.hlds_out",
"hlds_out.m",
2386,
"d3;c18;d2;c5;"
};

MR_decl_entry(parse_tree__prog_out__write_sym_name_and_arity_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module0)
	MR_init_entry1(hlds__hlds_out__write_type_ctor_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_type_ctor_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_out__write_sym_name_and_arity_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module1)
	MR_init_entry1(fn__hlds__hlds_out__type_ctor_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__type_ctor_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module2)
	MR_init_entry1(hlds__hlds_out__write_class_id_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_class_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_out__write_sym_name_and_arity_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(string__contains_char_2_0);
MR_decl_entry(string__foldl_4_1);
MR_decl_entry(fn__term_io__escaped_string_1_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(fn__term_io__quoted_string_1_0);
MR_decl_entry(fn__string__float_to_string_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module3)
	MR_init_entry1(fn__hlds__hlds_out__cons_id_to_string_1_0);
	MR_init_label8(fn__hlds__hlds_out__cons_id_to_string_1_0,4,79,6,8,7,11,12,13)
	MR_init_label8(fn__hlds__hlds_out__cons_id_to_string_1_0,15,17,18,20,82,23,24,25)
	MR_init_label8(fn__hlds__hlds_out__cons_id_to_string_1_0,26,27,83,30,31,32,33,34)
	MR_init_label8(fn__hlds__hlds_out__cons_id_to_string_1_0,35,36,38,39,84,41,42,43)
	MR_init_label8(fn__hlds__hlds_out__cons_id_to_string_1_0,44,45,85,48,49,50,51,52)
	MR_init_label6(fn__hlds__hlds_out__cons_id_to_string_1_0,86,55,56,57,58,59)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__cons_id_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i4) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i79) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i15) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i17));
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<typeclass_info_cell_constructor>", 33);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i6);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 42;
	MR_np_call_localret_ent(string__contains_char_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i8);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__cons_id_to_string_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(string__foldl_4_1,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i11);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__term_io__escaped_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i12);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i13);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_tailcall_ent(string__int_to_string_2_0);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i18) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i20) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i82) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i83) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i38) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i39) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i84) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i85) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__cons_id_to_string_1_0_i86));
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__term_io__quoted_string_1_0);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__string__float_to_string_1_0);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i23);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i24);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i25);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" proc ", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i26);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i27);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<pred ", 6);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i30);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i31);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i32);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i33);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i34);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i35);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i36);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<type_ctor_info ", 16);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<base_typeclass_info>", 21);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<type_info_cell_constructor>", 28);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i41);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i42);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i43);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i44);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i45);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<tabling_info ", 14);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i48);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i49);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i50);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i51);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i52);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<deep_profiling_proc_layout ", 28);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i55);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i56);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i57);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i58);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__cons_id_to_string_1_0_i59);
MR_def_label(fn__hlds__hlds_out__cons_id_to_string_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<table_io_decl ", 15);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module4)
	MR_init_entry1(hlds__hlds_out__write_cons_id_3_0);
	MR_init_label1(hlds__hlds_out__write_cons_id_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_cons_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		hlds__hlds_out__write_cons_id_3_0_i2);
MR_def_label(hlds__hlds_out__write_cons_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__special_pred__special_pred_description_2_0);
MR_decl_entry(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_goal_type_2_0);
MR_decl_entry(fn__parse_tree__prog_out__promise_to_string_1_0);
MR_decl_entry(fn__parse_tree__prog_out__simple_call_id_to_string_3_0);
MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module5)
	MR_init_entry1(fn__hlds__hlds_out__pred_id_to_string_2_0);
	MR_init_label8(fn__hlds__hlds_out__pred_id_to_string_2_0,2,4,6,7,8,9,10,13)
	MR_init_label8(fn__hlds__hlds_out__pred_id_to_string_2_0,14,17,18,11,21,22,20,25)
	MR_init_label6(fn__hlds__hlds_out__pred_id_to_string_2_0,27,28,24,3,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__pred_id_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i2);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i4);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__pred_id_to_string_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i6);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i7);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i8);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i9);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i10);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__pred_id_to_string_2_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__special_pred__special_pred_description_2_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i13);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__pred_id_to_string_2_0_i14);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const(" for type ", 10);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i17);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const(" for type constructor ", 22);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i17);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i18);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i21);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i22);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__pred_id_to_string_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("type class method implementation", 32);
	MR_decr_sp_and_return(6);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i25);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__pred_id_to_string_2_0_i24);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__promise_to_string_1_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i27);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\' declaration", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i28);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__parse_tree__prog_out__simple_call_id_to_string_3_0);
	}
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i34);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__pred_id_to_string_2_0_i35);
MR_def_label(fn__hlds__hlds_out__pred_id_to_string_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("deleted predicate ", 18);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module6)
	MR_init_entry1(hlds__hlds_out__write_pred_id_4_0);
	MR_init_label1(hlds__hlds_out__write_pred_id_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_pred_id_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_out__pred_id_to_string_2_0,
		hlds__hlds_out__write_pred_id_4_0_i2);
MR_def_label(hlds__hlds_out__write_pred_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module7)
	MR_init_entry1(fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0);
	MR_init_label4(fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0_i2);
MR_def_label(fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__pred_id_to_string_2_0,
		fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0_i3);
MR_def_label(fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0_i4);
MR_def_label(fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0_i5);
MR_def_label(fn__hlds__hlds_out__pred_proc_id_pair_to_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module8)
	MR_init_entry1(hlds__hlds_out__write_pred_proc_id_pair_5_0);
	MR_init_label5(hlds__hlds_out__write_pred_proc_id_pair_5_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_pred_proc_id_pair_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__write_pred_proc_id_pair_5_0_i2);
MR_def_label(hlds__hlds_out__write_pred_proc_id_pair_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__pred_id_to_string_2_0,
		hlds__hlds_out__write_pred_proc_id_pair_5_0_i3);
MR_def_label(hlds__hlds_out__write_pred_proc_id_pair_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__write_pred_proc_id_pair_5_0_i4);
MR_def_label(hlds__hlds_out__write_pred_proc_id_pair_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_pred_proc_id_pair_5_0_i5);
MR_def_label(hlds__hlds_out__write_pred_proc_id_pair_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_pred_proc_id_pair_5_0_i6);
MR_def_label(hlds__hlds_out__write_pred_proc_id_pair_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module9)
	MR_init_entry1(hlds__hlds_out__write_pred_proc_id_4_0);
	MR_init_label5(hlds__hlds_out__write_pred_proc_id_4_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_pred_proc_id_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__write_pred_proc_id_4_0_i2);
MR_def_label(hlds__hlds_out__write_pred_proc_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__pred_id_to_string_2_0,
		hlds__hlds_out__write_pred_proc_id_4_0_i3);
MR_def_label(hlds__hlds_out__write_pred_proc_id_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__write_pred_proc_id_4_0_i4);
MR_def_label(hlds__hlds_out__write_pred_proc_id_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_pred_proc_id_4_0_i5);
MR_def_label(hlds__hlds_out__write_pred_proc_id_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_pred_proc_id_4_0_i6);
MR_def_label(hlds__hlds_out__write_pred_proc_id_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module10)
	MR_init_entry1(fn__hlds__hlds_out__pred_proc_id_to_string_2_0);
	MR_init_label4(fn__hlds__hlds_out__pred_proc_id_to_string_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__pred_proc_id_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_out__pred_proc_id_to_string_2_0_i2);
MR_def_label(fn__hlds__hlds_out__pred_proc_id_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__pred_id_to_string_2_0,
		fn__hlds__hlds_out__pred_proc_id_to_string_2_0_i3);
MR_def_label(fn__hlds__hlds_out__pred_proc_id_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__pred_proc_id_to_string_2_0_i4);
MR_def_label(fn__hlds__hlds_out__pred_proc_id_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__pred_proc_id_to_string_2_0_i5);
MR_def_label(fn__hlds__hlds_out__pred_proc_id_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module11)
	MR_init_entry1(fn__hlds__hlds_out__cast_type_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__cast_type_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_0, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_out__simple_call_id_to_string_1_0);
MR_decl_entry(fn__parse_tree__prog_out__purity_prefix_to_string_1_0);
MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module12)
	MR_init_entry1(fn__hlds__hlds_out__call_id_to_string_1_0);
	MR_init_label8(fn__hlds__hlds_out__call_id_to_string_1_0,3,31,8,9,10,11,13,15)
	MR_init_label1(fn__hlds__hlds_out__call_id_to_string_1_0,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__call_id_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_id_to_string_1_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__parse_tree__prog_out__simple_call_id_to_string_1_0);
MR_def_label(fn__hlds__hlds_out__call_id_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__hlds__hlds_out__call_id_to_string_1_0_i31) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__call_id_to_string_1_0_i13) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__call_id_to_string_1_0_i15) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__call_id_to_string_1_0_i17));
MR_def_label(fn__hlds__hlds_out__call_id_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__purity_prefix_to_string_1_0,
		fn__hlds__hlds_out__call_id_to_string_1_0_i8);
MR_def_label(fn__hlds__hlds_out__call_id_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,
		fn__hlds__hlds_out__call_id_to_string_1_0_i9);
MR_def_label(fn__hlds__hlds_out__call_id_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" call", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_id_to_string_1_0_i10);
MR_def_label(fn__hlds__hlds_out__call_id_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("higher-order ", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_id_to_string_1_0_i11);
MR_def_label(fn__hlds__hlds_out__call_id_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__call_id_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 1);
	MR_np_tailcall_ent(fn__parse_tree__prog_out__simple_call_id_to_string_1_0);
MR_def_label(fn__hlds__hlds_out__call_id_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("event ", 6);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__call_id_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r2, 0);
	MR_tempr2 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_1, MR_tempr1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module13)
	MR_init_entry1(fn__hlds__hlds_out__call_arg_id_to_string_3_0);
	MR_init_label8(fn__hlds__hlds_out__call_arg_id_to_string_3_0,2,5,7,4,12,13,15,16)
	MR_init_label8(fn__hlds__hlds_out__call_arg_id_to_string_3_0,17,20,18,22,23,24,25,27)
	MR_init_label8(fn__hlds__hlds_out__call_arg_id_to_string_3_0,28,31,32,34,35,37,38,39)
	MR_init_label8(fn__hlds__hlds_out__call_arg_id_to_string_3_0,40,41,45,49,44,42,51,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__call_arg_id_to_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i2);
	}
	MR_sv(3) = MR_r3;
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i41);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i5);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	if ((MR_tempr2 != MR_r2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("the return value", 16);
	MR_r2 = (MR_Word) MR_string_const(" of ", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i40);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i7);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("argument ", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i39);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i12) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i31) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i34) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i37));
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i13);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_r2 != MR_tempr1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("the return value", 16);
	MR_r2 = (MR_Word) MR_string_const(" of ", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i40);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i15);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("argument ", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i16);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i17);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i18);
	}
	MR_r2 = (MR_Word) MR_string_const(" term", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i20);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("the ", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i25);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i22);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" of the called ", 15);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i23);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i24);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("argument ", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i25);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i27);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (i.e. ", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i28);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i39);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i32);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("argument ", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i39);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i35);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("argument ", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i39);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i38);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("argument ", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i39);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" of ", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i40);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i44);
	}
	}
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 9;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i49);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__call_arg_id_to_string_3_0_i42);
	}
	MR_r1 = MR_sv(1);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_out__call_id_to_string_1_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i53);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("call to ", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i51);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__call_id_to_string_1_0,
		fn__hlds__hlds_out__call_arg_id_to_string_3_0_i53);
MR_def_label(fn__hlds__hlds_out__call_arg_id_to_string_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module14)
	MR_init_entry1(hlds__hlds_out__start_in_message_to_pieces_3_0);
	MR_init_label1(hlds__hlds_out__start_in_message_to_pieces_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__start_in_message_to_pieces_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__start_in_message_to_pieces_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(hlds__hlds_out__start_in_message_to_pieces_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__init_markers_1_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module15)
	MR_init_entry1(hlds__hlds_out__unify_main_context_to_pieces_5_0);
	MR_init_label8(hlds__hlds_out__unify_main_context_to_pieces_5_0,4,33,6,30,9,10,31,13)
	MR_init_label7(hlds__hlds_out__unify_main_context_to_pieces_5_0,14,15,16,32,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__unify_main_context_to_pieces_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(hlds__hlds_out__unify_main_context_to_pieces_5_0_i4) MR_AND
		MR_LABEL_AP(hlds__hlds_out__unify_main_context_to_pieces_5_0_i30) MR_AND
		MR_LABEL_AP(hlds__hlds_out__unify_main_context_to_pieces_5_0_i31) MR_AND
		MR_LABEL_AP(hlds__hlds_out__unify_main_context_to_pieces_5_0_i32));
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(hlds__hlds_out__unify_main_context_to_pieces_5_0_i33);
	}
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__start_in_message_to_pieces_3_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i6);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i16);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__start_in_message_to_pieces_3_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i9);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i10);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,3,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i16);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(hlds__hlds_out__start_in_message_to_pieces_3_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i13);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__init_markers_1_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i14);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_out__call_arg_id_to_string_3_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i15);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i16);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r2, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__start_in_message_to_pieces_3_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i18);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("implicit %s unification:\n", 25);
	}
	MR_np_call_localret_ent(string__format_3_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i19);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__unify_main_context_to_pieces_5_0_i20);
MR_def_label(hlds__hlds_out__unify_main_context_to_pieces_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__prim_data__is_std_lib_module_name_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module16)
	MR_init_entry1(hlds__hlds_out__contexts_describe_list_element_4_0);
	MR_init_label6(hlds__hlds_out__contexts_describe_list_element_4_0,58,6,9,5,26,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__contexts_describe_list_element_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__contexts_describe_list_element_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i1);
	}
	MR_r5 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i1);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i6);
	}
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i1);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i5);
	}
MR_def_label(hlds__hlds_out__contexts_describe_list_element_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_r4, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__is_std_lib_module_name_2_0,
		hlds__hlds_out__contexts_describe_list_element_4_0_i9);
MR_def_label(hlds__hlds_out__contexts_describe_list_element_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i1);
	}
	if ((strcmp((char *)(MR_Word) MR_string_const("list", 4), (char *)MR_r2) != 0)) {
		MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(hlds__hlds_out__contexts_describe_list_element_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),1)) {
		MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i26);
	}
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i1);
	}
	MR_r1 = MR_r3;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__contexts_describe_list_element_4_0_i58);
MR_def_label(hlds__hlds_out__contexts_describe_list_element_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__hlds_out__contexts_describe_list_element_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module17)
	MR_init_entry1(hlds__hlds_out__in_argument_to_pieces_4_0);
	MR_init_label4(hlds__hlds_out__in_argument_to_pieces_4_0,3,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__in_argument_to_pieces_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__in_argument_to_pieces_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__in_argument_to_pieces_4_0_i5);
MR_def_label(hlds__hlds_out__in_argument_to_pieces_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__in_argument_to_pieces_4_0_i5);
MR_def_label(hlds__hlds_out__in_argument_to_pieces_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__in_argument_to_pieces_4_0_i6);
MR_def_label(hlds__hlds_out__in_argument_to_pieces_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,3,3);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,3,6);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,3,7);
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		hlds__hlds_out__in_argument_to_pieces_4_0_i7);
MR_def_label(hlds__hlds_out__in_argument_to_pieces_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,6);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module18)
	MR_init_entry1(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0);
	MR_init_label8(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,30,5,8,10,11,12,4,14)
	MR_init_label1(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_out__contexts_describe_list_element_4_0,
		hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i5);
MR_def_label(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i4);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i8);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i10);
MR_def_label(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i10);
MR_def_label(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i11);
MR_def_label(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,3,9);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i12);
MR_def_label(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i30);
MR_def_label(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__in_argument_to_pieces_4_0,
		hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i14);
MR_def_label(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0_i30);
MR_def_label(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module19)
	MR_init_entry1(hlds__hlds_out__unify_context_first_to_pieces_5_0);
	MR_init_label2(hlds__hlds_out__unify_context_first_to_pieces_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__unify_context_first_to_pieces_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__hlds_out__unify_context_first_to_pieces_5_0_i2);
MR_def_label(hlds__hlds_out__unify_context_first_to_pieces_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__unify_main_context_to_pieces_5_0,
		hlds__hlds_out__unify_context_first_to_pieces_5_0_i3);
MR_def_label(hlds__hlds_out__unify_context_first_to_pieces_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__unify_sub_contexts_to_pieces_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module20)
	MR_init_entry1(hlds__hlds_out__unify_context_to_pieces_3_0);
	MR_init_label1(hlds__hlds_out__unify_context_to_pieces_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__unify_context_to_pieces_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_out__unify_context_first_to_pieces_5_0,
		hlds__hlds_out__unify_context_to_pieces_3_0_i2);
MR_def_label(hlds__hlds_out__unify_context_to_pieces_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module21)
	MR_init_entry1(fn__hlds__hlds_out__determinism_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__determinism_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_2, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module22)
	MR_init_entry1(fn__hlds__hlds_out__can_fail_to_string_1_0);
	MR_init_label1(fn__hlds__hlds_out__can_fail_to_string_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__can_fail_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__can_fail_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("can_fail", 8);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__can_fail_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot_fail", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_out__eval_method_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module23)
	MR_init_entry1(hlds__hlds_out__write_eval_method_3_0);
	MR_init_label1(hlds__hlds_out__write_eval_method_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_eval_method_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__eval_method_to_string_1_0,
		hlds__hlds_out__write_eval_method_3_0_i2);
MR_def_label(hlds__hlds_out__write_eval_method_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module24)
	MR_init_entry1(fn__hlds__hlds_out__import_status_to_string_1_0);
	MR_init_label8(fn__hlds__hlds_out__import_status_to_string_1_0,10,11,12,13,14,15,16,17)
	MR_init_label5(fn__hlds__hlds_out__import_status_to_string_1_0,18,8,40,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__import_status_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__import_status_to_string_1_0_i40);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__import_status_to_string_1_0_i8);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__import_status_to_string_1_0_i10) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__import_status_to_string_1_0_i11) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__import_status_to_string_1_0_i12) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__import_status_to_string_1_0_i13) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__import_status_to_string_1_0_i14) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__import_status_to_string_1_0_i15) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__import_status_to_string_1_0_i16) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__import_status_to_string_1_0_i17) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__import_status_to_string_1_0_i18));
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_imported", 12);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("abstract_imported", 17);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pseudo_imported", 15);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exported", 8);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("opt_exported", 12);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("abstract_exported", 17);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pseudo_exported", 15);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("exported_to_submodules", 22);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("local", 5);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_tempr2 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_3, MR_tempr1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_proceed();
	}
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__hlds__hlds_out__import_status_to_string_1_0,
		fn__hlds__hlds_out__import_status_to_string_1_0_i5);
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__import_status_to_string_1_0_i6);
MR_def_label(fn__hlds__hlds_out__import_status_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("external (and ", 14);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module25)
	MR_init_entry1(hlds__hlds_out__write_indent_3_0);
	MR_init_label3(hlds__hlds_out__write_indent_3_0,11,4,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_indent_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_indent_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_indent_3_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_indent_3_0_i4);
MR_def_label(hlds__hlds_out__write_indent_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__hlds_out__write_indent_3_0_i11);
MR_def_label(hlds__hlds_out__write_indent_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module26)
	MR_init_entry1(hlds__hlds_out__write_footer_4_0);
	MR_init_label4(hlds__hlds_out__write_footer_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_footer_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__hlds_out__write_footer_4_0_i2);
MR_def_label(hlds__hlds_out__write_footer_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_footer_4_0_i3);
MR_def_label(hlds__hlds_out__write_footer_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- end_module ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_footer_4_0_i4);
MR_def_label(hlds__hlds_out__write_footer_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		hlds__hlds_out__write_footer_4_0_i5);
MR_def_label(hlds__hlds_out__write_footer_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(hlds__hlds_out_module27)
	MR_init_entry1(hlds__hlds_out__write_preds_5_0);
	MR_init_label3(hlds__hlds_out__write_preds_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_preds_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("%-------- Predicates --------\n\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_preds_5_0_i2);
MR_def_label(hlds__hlds_out__write_preds_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_preds_5_0_i3);
MR_def_label(hlds__hlds_out__write_preds_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__hlds_out__write_preds_5_0_i4);
MR_def_label(hlds__hlds_out__write_preds_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__maybe_write_pred_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_var_5_0);

MR_BEGIN_MODULE(hlds__hlds_out_module28)
	MR_init_entry1(hlds__hlds_out__write_type_params_2_4_0);
	MR_init_label4(hlds__hlds_out__write_type_params_2_4_0,13,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_type_params_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_type_params_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_type_params_2_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_params_2_4_0_i4);
MR_def_label(hlds__hlds_out__write_type_params_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_type_params_2_4_0_i5);
MR_def_label(hlds__hlds_out__write_type_params_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__write_type_params_2_4_0_i13);
MR_def_label(hlds__hlds_out__write_type_params_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module29)
	MR_init_entry1(hlds__hlds_out__write_type_params_4_0);
	MR_init_label8(hlds__hlds_out__write_type_params_4_0,6,7,5,9,10,11,12,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_type_params_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_type_params_4_0_i27);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_type_params_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_params_4_0_i6);
MR_def_label(hlds__hlds_out__write_type_params_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_type_params_4_0_i7);
MR_def_label(hlds__hlds_out__write_type_params_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_type_params_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_params_4_0_i9);
MR_def_label(hlds__hlds_out__write_type_params_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_type_params_4_0_i10);
MR_def_label(hlds__hlds_out__write_type_params_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_params_4_0_i11);
MR_def_label(hlds__hlds_out__write_type_params_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_type_params_4_0_i12);
MR_def_label(hlds__hlds_out__write_type_params_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__write_type_params_2_4_0);
MR_def_label(hlds__hlds_out__write_type_params_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_ctor_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(fn__parse_tree__prog_util__make_cons_id_from_qualified_sym_name_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(io__print_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module30)
	MR_init_entry1(hlds__hlds_out__write_constructors_2_6_0);
	MR_init_label8(hlds__hlds_out__write_constructors_2_6_0,31,4,5,6,7,9,11,13)
	MR_init_label2(hlds__hlds_out__write_constructors_2_6_0,16,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_constructors_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_constructors_2_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_constructors_2_6_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_constructors_2_6_0_i4);
MR_def_label(hlds__hlds_out__write_constructors_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constructors_2_6_0_i5);
MR_def_label(hlds__hlds_out__write_constructors_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_ctor_4_0,
		hlds__hlds_out__write_constructors_2_6_0_i6);
MR_def_label(hlds__hlds_out__write_constructors_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__make_cons_id_from_qualified_sym_name_2_0,
		hlds__hlds_out__write_constructors_2_6_0_i7);
MR_def_label(hlds__hlds_out__write_constructors_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_out__write_constructors_2_6_0_i9);
MR_def_label(hlds__hlds_out__write_constructors_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_constructors_2_6_0_i13);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\t% tag: ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constructors_2_6_0_i11);
MR_def_label(hlds__hlds_out__write_constructors_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__write_constructors_2_6_0_i13);
MR_def_label(hlds__hlds_out__write_constructors_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_constructors_2_6_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constructors_2_6_0_i16);
MR_def_label(hlds__hlds_out__write_constructors_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__hlds_out__write_constructors_2_6_0_i31);
MR_def_label(hlds__hlds_out__write_constructors_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module31)
	MR_init_entry1(hlds__hlds_out__write_constructors_6_0);
	MR_init_label8(hlds__hlds_out__write_constructors_6_0,51,7,8,9,10,12,14,6)
	MR_init_label8(hlds__hlds_out__write_constructors_6_0,17,18,19,20,22,24,21,27)
	MR_init_label1(hlds__hlds_out__write_constructors_6_0,50)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_constructors_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_constructors_6_0_i51);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds_out.m", 10);
	MR_r2 = (MR_Word) MR_string_const("write_constructors: empty constructor list?", 43);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__hlds_out__write_constructors_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r6 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_constructors_6_0_i6);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_constructors_6_0_i7);
MR_def_label(hlds__hlds_out__write_constructors_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__write_constructors_6_0_i8);
MR_def_label(hlds__hlds_out__write_constructors_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_ctor_4_0,
		hlds__hlds_out__write_constructors_6_0_i9);
MR_def_label(hlds__hlds_out__write_constructors_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__make_cons_id_from_qualified_sym_name_2_0,
		hlds__hlds_out__write_constructors_6_0_i10);
MR_def_label(hlds__hlds_out__write_constructors_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_out__write_constructors_6_0_i12);
MR_def_label(hlds__hlds_out__write_constructors_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_constructors_6_0_i50);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\t% tag: ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constructors_6_0_i14);
MR_def_label(hlds__hlds_out__write_constructors_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__print_3_0);
MR_def_label(hlds__hlds_out__write_constructors_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_constructors_6_0_i17);
MR_def_label(hlds__hlds_out__write_constructors_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__write_constructors_6_0_i18);
MR_def_label(hlds__hlds_out__write_constructors_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_ctor_4_0,
		hlds__hlds_out__write_constructors_6_0_i19);
MR_def_label(hlds__hlds_out__write_constructors_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__make_cons_id_from_qualified_sym_name_2_0,
		hlds__hlds_out__write_constructors_6_0_i20);
MR_def_label(hlds__hlds_out__write_constructors_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_out__write_constructors_6_0_i22);
MR_def_label(hlds__hlds_out__write_constructors_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_constructors_6_0_i21);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\t% tag: ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constructors_6_0_i24);
MR_def_label(hlds__hlds_out__write_constructors_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__write_constructors_6_0_i21);
MR_def_label(hlds__hlds_out__write_constructors_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constructors_6_0_i27);
MR_def_label(hlds__hlds_out__write_constructors_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(hlds__hlds_out__write_constructors_2_6_0);
MR_def_label(hlds__hlds_out__write_constructors_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_where_attributes_5_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_type_5_0);

MR_BEGIN_MODULE(hlds__hlds_out_module32)
	MR_init_entry1(hlds__hlds_out__write_type_body_5_0);
	MR_init_label8(hlds__hlds_out__write_type_body_5_0,61,5,8,7,11,10,15,16)
	MR_init_label8(hlds__hlds_out__write_type_body_5_0,13,17,18,43,20,21,62,25)
	MR_init_label2(hlds__hlds_out__write_type_body_5_0,28,63)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_type_body_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(hlds__hlds_out__write_type_body_5_0_i61) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_type_body_5_0_i62) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_type_body_5_0_i28) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_type_body_5_0_i63));
MR_def_label(hlds__hlds_out__write_type_body_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_string_const(" --->\n", 6);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_body_5_0_i5);
MR_def_label(hlds__hlds_out__write_type_body_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_type_body_5_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_type_body_5_0_i8);
MR_def_label(hlds__hlds_out__write_type_body_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* enumeration */\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_body_5_0_i10);
MR_def_label(hlds__hlds_out__write_type_body_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_type_body_5_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_type_body_5_0_i11);
MR_def_label(hlds__hlds_out__write_type_body_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* dummy */\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_body_5_0_i10);
MR_def_label(hlds__hlds_out__write_type_body_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_type_body_5_0_i13);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_type_body_5_0_i15);
MR_def_label(hlds__hlds_out__write_type_body_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* reserved_tag */\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_body_5_0_i16);
MR_def_label(hlds__hlds_out__write_type_body_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(hlds__hlds_out__write_type_body_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__write_constructors_6_0,
		hlds__hlds_out__write_type_body_5_0_i17);
MR_def_label(hlds__hlds_out__write_type_body_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_where_attributes_5_0,
		hlds__hlds_out__write_type_body_5_0_i18);
MR_def_label(hlds__hlds_out__write_type_body_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_type_body_5_0_i20);
	}
MR_def_label(hlds__hlds_out__write_type_body_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_type_body_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_type_body_5_0_i21);
MR_def_label(hlds__hlds_out__write_type_body_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* has foreign_type */\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_body_5_0_i43);
MR_def_label(hlds__hlds_out__write_type_body_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const(" == ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_body_5_0_i25);
MR_def_label(hlds__hlds_out__write_type_body_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__write_type_body_5_0_i43);
MR_def_label(hlds__hlds_out__write_type_body_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" == \044foreign_type.\n", 19);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_type_body_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_type_body_5_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r3, 1);
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(3, MR_r3, 2);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_where_attributes_5_0,
		hlds__hlds_out__write_type_body_5_0_i43);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__get_type_defn_tvarset_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_tparams_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_status_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_context_2_0);
MR_decl_entry(libs__globals__io_lookup_string_option_4_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module33)
	MR_init_entry1(hlds__hlds_out__write_types_2_4_0);
	MR_init_label8(hlds__hlds_out__write_types_2_4_0,65,4,5,6,7,8,9,10)
	MR_init_label8(hlds__hlds_out__write_types_2_4_0,12,14,15,19,20,21,22,23)
	MR_init_label8(hlds__hlds_out__write_types_2_4_0,24,25,26,11,30,32,31,37)
	MR_init_label4(hlds__hlds_out__write_types_2_4_0,39,40,41,67)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_types_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_types_2_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_types_2_4_0_i67);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tvarset_2_0,
		hlds__hlds_out__write_types_2_4_0_i4);
MR_def_label(hlds__hlds_out__write_types_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		hlds__hlds_out__write_types_2_4_0_i5);
MR_def_label(hlds__hlds_out__write_types_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		hlds__hlds_out__write_types_2_4_0_i6);
MR_def_label(hlds__hlds_out__write_types_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_status_2_0,
		hlds__hlds_out__write_types_2_4_0_i7);
MR_def_label(hlds__hlds_out__write_types_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_context_2_0,
		hlds__hlds_out__write_types_2_4_0_i8);
MR_def_label(hlds__hlds_out__write_types_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__write_types_2_4_0_i9);
MR_def_label(hlds__hlds_out__write_types_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_types_2_4_0_i10);
MR_def_label(hlds__hlds_out__write_types_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 99;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_types_2_4_0_i12);
MR_def_label(hlds__hlds_out__write_types_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_types_2_4_0_i11);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(term__context_file_2_0,
		hlds__hlds_out__write_types_2_4_0_i14);
MR_def_label(hlds__hlds_out__write_types_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		hlds__hlds_out__write_types_2_4_0_i15);
MR_def_label(hlds__hlds_out__write_types_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(8), (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_types_2_4_0_i11);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_types_2_4_0_i19);
MR_def_label(hlds__hlds_out__write_types_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% context: file \140", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_types_2_4_0_i20);
MR_def_label(hlds__hlds_out__write_types_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_types_2_4_0_i21);
MR_def_label(hlds__hlds_out__write_types_2_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\', line ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_types_2_4_0_i22);
MR_def_label(hlds__hlds_out__write_types_2_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_types_2_4_0_i23);
MR_def_label(hlds__hlds_out__write_types_2_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", status ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_types_2_4_0_i24);
MR_def_label(hlds__hlds_out__write_types_2_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_out__import_status_to_string_1_0,
		hlds__hlds_out__write_types_2_4_0_i25);
MR_def_label(hlds__hlds_out__write_types_2_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_types_2_4_0_i26);
MR_def_label(hlds__hlds_out__write_types_2_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__write_types_2_4_0_i11);
MR_def_label(hlds__hlds_out__write_types_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_types_2_4_0_i30);
MR_def_label(hlds__hlds_out__write_types_2_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_sv(7),3,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_types_2_4_0_i32);
	}
	if (MR_RTAGS_TESTR(MR_sv(7),3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_types_2_4_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(7), 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_types_2_4_0_i31);
	}
	}
MR_def_label(hlds__hlds_out__write_types_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- solver type ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_types_2_4_0_i37);
MR_def_label(hlds__hlds_out__write_types_2_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- type ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_types_2_4_0_i37);
MR_def_label(hlds__hlds_out__write_types_2_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		hlds__hlds_out__write_types_2_4_0_i39);
MR_def_label(hlds__hlds_out__write_types_2_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_type_params_4_0,
		hlds__hlds_out__write_types_2_4_0_i40);
MR_def_label(hlds__hlds_out__write_types_2_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__write_type_body_5_0,
		hlds__hlds_out__write_types_2_4_0_i41);
MR_def_label(hlds__hlds_out__write_types_2_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__write_types_2_4_0_i65);
MR_def_label(hlds__hlds_out__write_types_2_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(map__to_assoc_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module34)
	MR_init_entry1(hlds__hlds_out__write_types_4_0);
	MR_init_label3(hlds__hlds_out__write_types_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_types_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_types_4_0_i2);
MR_def_label(hlds__hlds_out__write_types_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%-------- Types --------\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_types_4_0_i3);
MR_def_label(hlds__hlds_out__write_types_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_types_4_0_i4);
MR_def_label(hlds__hlds_out__write_types_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_out__write_types_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_list_5_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module35)
	MR_init_entry1(hlds__hlds_out__write_classes_4_0);
	MR_init_label4(hlds__hlds_out__write_classes_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_classes_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_classes_4_0_i2);
MR_def_label(hlds__hlds_out__write_classes_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%-------- Classes --------\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_classes_4_0_i3);
MR_def_label(hlds__hlds_out__write_classes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_classes_4_0_i4);
MR_def_label(hlds__hlds_out__write_classes_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_class_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_classes_4_0_i5);
MR_def_label(hlds__hlds_out__write_classes_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module36)
	MR_init_entry1(hlds__hlds_out__write_instances_4_0);
	MR_init_label4(hlds__hlds_out__write_instances_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_instances_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_instances_4_0_i2);
MR_def_label(hlds__hlds_out__write_instances_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%-------- Instances --------\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instances_4_0_i3);
MR_def_label(hlds__hlds_out__write_instances_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_instances_4_0_i4);
MR_def_label(hlds__hlds_out__write_instances_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_instance_defns_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r3 = (MR_Word) MR_string_const("\n\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_instances_4_0_i5);
MR_def_label(hlds__hlds_out__write_instances_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_imported_module_specifiers_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_inst_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_mode_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_class_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_instance_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module37)
	MR_init_entry1(hlds__hlds_out__write_hlds_4_0);
	MR_init_label8(hlds__hlds_out__write_hlds_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__hlds_out__write_hlds_4_0,10,11,12,13,14,15,16,17)
	MR_init_label8(hlds__hlds_out__write_hlds_4_0,18,22,57,20,25,27,29,30)
	MR_init_label8(hlds__hlds_out__write_hlds_4_0,31,32,26,36,38,39,40,41)
	MR_init_label8(hlds__hlds_out__write_hlds_4_0,42,35,46,48,49,50,53,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_hlds_4_0);
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
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_imported_module_specifiers_2_0,
		hlds__hlds_out__write_hlds_4_0_i2);
MR_def_label(hlds__hlds_out__write_hlds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__hlds_out__write_hlds_4_0_i3);
MR_def_label(hlds__hlds_out__write_hlds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		hlds__hlds_out__write_hlds_4_0_i4);
MR_def_label(hlds__hlds_out__write_hlds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		hlds__hlds_out__write_hlds_4_0_i5);
MR_def_label(hlds__hlds_out__write_hlds_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_mode_table_2_0,
		hlds__hlds_out__write_hlds_4_0_i6);
MR_def_label(hlds__hlds_out__write_hlds_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		hlds__hlds_out__write_hlds_4_0_i7);
MR_def_label(hlds__hlds_out__write_hlds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_instance_table_2_0,
		hlds__hlds_out__write_hlds_4_0_i8);
MR_def_label(hlds__hlds_out__write_hlds_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__hlds_out__write_hlds_4_0_i9);
MR_def_label(hlds__hlds_out__write_hlds_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 114;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		hlds__hlds_out__write_hlds_4_0_i10);
MR_def_label(hlds__hlds_out__write_hlds_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_r2 = (MR_Integer) 115;
	}
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		hlds__hlds_out__write_hlds_4_0_i11);
MR_def_label(hlds__hlds_out__write_hlds_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_hlds_4_0_i12);
MR_def_label(hlds__hlds_out__write_hlds_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% vim: ts=2 sw=2\n\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_hlds_4_0_i13);
MR_def_label(hlds__hlds_out__write_hlds_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__hlds_out__write_hlds_4_0_i14);
MR_def_label(hlds__hlds_out__write_hlds_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_hlds_4_0_i15);
MR_def_label(hlds__hlds_out__write_hlds_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- module ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_hlds_4_0_i16);
MR_def_label(hlds__hlds_out__write_hlds_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		hlds__hlds_out__write_hlds_4_0_i17);
MR_def_label(hlds__hlds_out__write_hlds_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_hlds_4_0_i18);
MR_def_label(hlds__hlds_out__write_hlds_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_hlds_4_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__write_hlds_4_0_i53);
MR_def_label(hlds__hlds_out__write_hlds_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_hlds_4_0_i20);
	}
MR_def_label(hlds__hlds_out__write_hlds_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__write_hlds_4_0_i53);
MR_def_label(hlds__hlds_out__write_hlds_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_hlds_4_0_i25);
MR_def_label(hlds__hlds_out__write_hlds_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 73;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_hlds_4_0_i27);
MR_def_label(hlds__hlds_out__write_hlds_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_hlds_4_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_hlds_4_0_i29);
MR_def_label(hlds__hlds_out__write_hlds_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- import_module ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_hlds_4_0_i30);
MR_def_label(hlds__hlds_out__write_hlds_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__write_hlds_4_0_i31);
MR_def_label(hlds__hlds_out__write_hlds_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_hlds_4_0_i32);
MR_def_label(hlds__hlds_out__write_hlds_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_hlds_4_0_i26);
MR_def_label(hlds__hlds_out__write_hlds_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 84;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_hlds_4_0_i36);
MR_def_label(hlds__hlds_out__write_hlds_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_hlds_4_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__write_types_4_0,
		hlds__hlds_out__write_hlds_4_0_i38);
MR_def_label(hlds__hlds_out__write_hlds_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_hlds_4_0_i39);
MR_def_label(hlds__hlds_out__write_hlds_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_classes_4_0,
		hlds__hlds_out__write_hlds_4_0_i40);
MR_def_label(hlds__hlds_out__write_hlds_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_hlds_4_0_i41);
MR_def_label(hlds__hlds_out__write_hlds_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__write_instances_4_0,
		hlds__hlds_out__write_hlds_4_0_i42);
MR_def_label(hlds__hlds_out__write_hlds_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_hlds_4_0_i35);
MR_def_label(hlds__hlds_out__write_hlds_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 77;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_hlds_4_0_i46);
MR_def_label(hlds__hlds_out__write_hlds_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_hlds_4_0_i57);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0,
		hlds__hlds_out__write_hlds_4_0_i48);
MR_def_label(hlds__hlds_out__write_hlds_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_hlds_4_0_i49);
MR_def_label(hlds__hlds_out__write_hlds_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0,
		hlds__hlds_out__write_hlds_4_0_i50);
MR_def_label(hlds__hlds_out__write_hlds_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_hlds_4_0_i57);
MR_def_label(hlds__hlds_out__write_hlds_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__write_preds_5_0,
		hlds__hlds_out__write_hlds_4_0_i54);
MR_def_label(hlds__hlds_out__write_hlds_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_out__write_footer_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_module__predicate_name_2_0);
MR_decl_entry(fn__hlds__hlds_module__predicate_module_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_0);
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0);
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_term_nq_6_0);

MR_BEGIN_MODULE(hlds__hlds_out_module38)
	MR_init_entry1(hlds__hlds_out__write_clause_head_8_0);
	MR_init_label8(hlds__hlds_out__write_clause_head_8_0,2,3,6,7,8,9,10,5)
	MR_init_label8(hlds__hlds_out__write_clause_head_8_0,12,13,14,15,16,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_clause_head_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		hlds__hlds_out__write_clause_head_8_0_i2);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_module_2_0,
		hlds__hlds_out__write_clause_head_8_0_i3);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_clause_head_8_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_0,
		hlds__hlds_out__write_clause_head_8_0_i6);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__hlds_out__write_clause_head_8_0_i7);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0,
		hlds__hlds_out__write_clause_head_8_0_i8);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_clause_head_8_0_i9);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_clause_head_8_0_i10);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__write_clause_head_8_0_i12);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(5), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(5), 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_0,
		hlds__hlds_out__write_clause_head_8_0_i13);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__hlds_out__write_clause_head_8_0_i14);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0,
		hlds__hlds_out__write_clause_head_8_0_i15);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_clause_head_8_0_i16);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_clause_head_8_0_i17);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clause_head_8_0_i18);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clause_head_8_0_i19);
MR_def_label(hlds__hlds_out__write_clause_head_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_term_nq_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_declared_argmodes_2_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module39)
	MR_init_entry1(hlds__hlds_out__write_annotated_clause_heads_11_0);
	MR_init_label8(hlds__hlds_out__write_annotated_clause_heads_11_0,34,4,5,7,10,12,13,14)
	MR_init_label2(hlds__hlds_out__write_annotated_clause_heads_11_0,6,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_annotated_clause_heads_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_annotated_clause_heads_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_annotated_clause_heads_11_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_tempr2 = MR_r4;
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(10) = MR_ctfield(1, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hlds_out__write_annotated_clause_heads_11_0_i4);
MR_def_label(hlds__hlds_out__write_annotated_clause_heads_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__hlds_out__write_annotated_clause_heads_11_0_i5);
MR_def_label(hlds__hlds_out__write_annotated_clause_heads_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_out__write_annotated_clause_heads_11_0_i7);
MR_def_label(hlds__hlds_out__write_annotated_clause_heads_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_annotated_clause_heads_11_0_i6);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_annotated_clause_heads_11_0_i10);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__hlds_out__write_annotated_clause_heads_11_0_i12);
MR_def_label(hlds__hlds_out__write_annotated_clause_heads_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_declared_argmodes_2_0,
		hlds__hlds_out__write_annotated_clause_heads_11_0_i12);
MR_def_label(hlds__hlds_out__write_annotated_clause_heads_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		hlds__hlds_out__write_annotated_clause_heads_11_0_i13);
MR_def_label(hlds__hlds_out__write_annotated_clause_heads_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tempr3 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__add_mode_qualifier_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__hlds_out__write_annotated_clause_heads_11_0_i14);
MR_def_label(hlds__hlds_out__write_annotated_clause_heads_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__write_clause_head_8_0,
		hlds__hlds_out__write_annotated_clause_heads_11_0_i6);
MR_def_label(hlds__hlds_out__write_annotated_clause_heads_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_out__write_annotated_clause_heads_11_0_i34);
MR_def_label(hlds__hlds_out__write_annotated_clause_heads_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__var_list_to_term_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module40)
	MR_init_entry1(fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0);
	MR_init_label2(fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(term__context_init_1_0,
		fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0_i2);
MR_def_label(fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0_i3);
MR_def_label(fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module41)
	MR_init_entry1(hlds__hlds_out__write_functor_6_0);
	MR_init_label3(hlds__hlds_out__write_functor_6_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_functor_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__hlds_out__write_functor_6_0_i2);
MR_def_label(hlds__hlds_out__write_functor_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__write_functor_6_0_i3);
MR_def_label(hlds__hlds_out__write_functor_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0,
		hlds__hlds_out__write_functor_6_0_i4);
MR_def_label(hlds__hlds_out__write_functor_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_mode_0_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_mode_0_0);
MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module42)
	MR_init_entry1(hlds__hlds_out__write_foreign_args_6_0);
	MR_init_label8(hlds__hlds_out__write_foreign_args_6_0,60,4,7,8,9,11,12,10)
	MR_init_label8(hlds__hlds_out__write_foreign_args_6_0,16,17,15,20,5,37,25,27)
	MR_init_label3(hlds__hlds_out__write_foreign_args_6_0,28,31,62)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_foreign_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_foreign_args_6_0_i62);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_foreign_args_6_0_i4);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_foreign_args_6_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = (MR_Word) MR_string_const("(", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_foreign_args_6_0_i7);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_foreign_args_6_0_i8);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_foreign_args_6_0_i9);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		hlds__hlds_out__write_foreign_args_6_0_i11);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		hlds__hlds_out__write_foreign_args_6_0_i12);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_foreign_args_6_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("in", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_foreign_args_6_0_i20);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_mode_0_0,
		hlds__hlds_out__write_foreign_args_6_0_i16);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_mode_0_0,
		hlds__hlds_out__write_foreign_args_6_0_i17);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_foreign_args_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("out", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_foreign_args_6_0_i20);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__write_foreign_args_6_0_i20);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_foreign_args_6_0_i5);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_foreign_args_6_0_i25);
	}
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\100", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_foreign_args_6_0_i27);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044alwaysboxed", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_foreign_args_6_0_i37);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__write_foreign_args_6_0_i28);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_foreign_args_6_0_i62);
	}
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_foreign_args_6_0_i31);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__hlds_out__write_foreign_args_6_0_i60);
MR_def_label(hlds__hlds_out__write_foreign_args_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_format_mode_4_0);
MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(hlds__hlds_out_module43)
	MR_init_entry1(hlds__hlds_out__mercury_output_uni_mode_4_0);
	MR_init_label2(hlds__hlds_out__mercury_output_uni_mode_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__mercury_output_uni_mode_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,4,12);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0,
		hlds__hlds_out__mercury_output_uni_mode_4_0_i2);
MR_def_label(hlds__hlds_out__mercury_output_uni_mode_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" = ", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_out__mercury_output_uni_mode_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__hlds__hlds_out__mercury_output_uni_mode_4_0_i3);
MR_def_label(hlds__hlds_out__mercury_output_uni_mode_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module44)
	MR_init_entry1(hlds__hlds_out__mercury_format_uni_mode_list_4_0);
	MR_init_label7(hlds__hlds_out__mercury_format_uni_mode_list_4_0,20,3,4,5,6,9,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__mercury_format_uni_mode_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__mercury_format_uni_mode_list_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__mercury_format_uni_mode_list_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(hlds__hlds_out__mercury_format_uni_mode_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr5, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr4, 0);
	MR_tempr6 = MR_r3;
	MR_sv(1) = MR_tempr6;
	MR_sv(2) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(6) = MR_tempr6;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r5 = MR_r4;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0,
		hlds__hlds_out__mercury_format_uni_mode_list_4_0_i4);
MR_def_label(hlds__hlds_out__mercury_format_uni_mode_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(" = ", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_out__mercury_format_uni_mode_list_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__hlds__hlds_out__mercury_format_uni_mode_list_4_0_i5);
MR_def_label(hlds__hlds_out__mercury_format_uni_mode_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0,
		hlds__hlds_out__mercury_format_uni_mode_list_4_0_i6);
MR_def_label(hlds__hlds_out__mercury_format_uni_mode_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__mercury_format_uni_mode_list_4_0_i23);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_out__mercury_format_uni_mode_list_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__hlds__hlds_out__mercury_format_uni_mode_list_4_0_i9);
MR_def_label(hlds__hlds_out__mercury_format_uni_mode_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__hlds_out__mercury_format_uni_mode_list_4_0_i20);
MR_def_label(hlds__hlds_out__mercury_format_uni_mode_list_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module45)
	MR_init_entry1(hlds__hlds_out__mercury_output_uni_mode_list_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__mercury_output_uni_mode_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,12);
	MR_np_tailcall_ent(hlds__hlds_out__mercury_format_uni_mode_list_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module46)
	MR_init_entry1(hlds__hlds_out__write_intlist_2_4_0);
	MR_init_label4(hlds__hlds_out__write_intlist_2_4_0,12,2,5,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_intlist_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_intlist_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_intlist_2_4_0_i2);
MR_def_label(hlds__hlds_out__write_intlist_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_intlist_2_4_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_intlist_2_4_0_i5);
MR_def_label(hlds__hlds_out__write_intlist_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__hlds_out__write_intlist_2_4_0_i12);
MR_def_label(hlds__hlds_out__write_intlist_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module47)
	MR_init_entry1(hlds__hlds_out__write_intlist_3_0);
	MR_init_label3(hlds__hlds_out__write_intlist_3_0,16,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_intlist_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_intlist_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_intlist_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_intlist_3_0_i5);
MR_def_label(hlds__hlds_out__write_intlist_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_intlist_2_4_0,
		hlds__hlds_out__write_intlist_3_0_i6);
MR_def_label(hlds__hlds_out__write_intlist_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module48)
	MR_init_entry1(fn__hlds__hlds_out__functor_to_string_4_0);
	MR_init_label2(fn__hlds__hlds_out__functor_to_string_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__functor_to_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(term__context_init_1_0,
		fn__hlds__hlds_out__functor_to_string_4_0_i2);
MR_def_label(fn__hlds__hlds_out__functor_to_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		fn__hlds__hlds_out__functor_to_string_4_0_i3);
MR_def_label(fn__hlds__hlds_out__functor_to_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module49)
	MR_init_entry1(fn__hlds__hlds_out__qualified_functor_to_string_5_0);
	MR_init_label5(fn__hlds__hlds_out__qualified_functor_to_string_5_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__qualified_functor_to_string_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_0,
		fn__hlds__hlds_out__qualified_functor_to_string_5_0_i2);
MR_def_label(fn__hlds__hlds_out__qualified_functor_to_string_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		fn__hlds__hlds_out__qualified_functor_to_string_5_0_i3);
MR_def_label(fn__hlds__hlds_out__qualified_functor_to_string_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		fn__hlds__hlds_out__qualified_functor_to_string_5_0_i4);
MR_def_label(fn__hlds__hlds_out__qualified_functor_to_string_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0,
		fn__hlds__hlds_out__qualified_functor_to_string_5_0_i5);
MR_def_label(fn__hlds__hlds_out__qualified_functor_to_string_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__qualified_functor_to_string_5_0_i6);
MR_def_label(fn__hlds__hlds_out__qualified_functor_to_string_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module50)
	MR_init_entry1(fn__hlds__hlds_out__functor_cons_id_to_string_5_0);
	MR_init_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,4,6,8,11,13,14,16,18)
	MR_init_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,19,20,21,22,23,25,26,27)
	MR_init_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,28,29,30,31,32,34,35,36)
	MR_init_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,37,38,39,40,41,42,43,44)
	MR_init_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,45,47,49,50,51,52,53,54)
	MR_init_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,55,56,58,59,60,61,62,63)
	MR_init_label8(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,64,65,67,68,69,70,71,72)
	MR_init_label2(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,73,74)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__functor_cons_id_to_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i4) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i6) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i11) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i13));
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0);
	}
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tempr2 = MR_r6;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__hlds__hlds_out__qualified_functor_to_string_5_0);
	}
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__hlds__hlds_out__functor_to_string_4_0);
	}
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i14) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i16) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i18) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i25) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i34) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i47) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i49) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i58) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i67));
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__hlds__hlds_out__functor_to_string_4_0);
	}
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__hlds__hlds_out__functor_to_string_4_0);
	}
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i19);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i20);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i21);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i22);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i23);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i4) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i6) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i11) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i13));
	}
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i26);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i27);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i28);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i29);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i30);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\", \"", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i31);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i32);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("type_ctor_info(\"", 16);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i35);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i36);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i37);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i38);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("), ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i39);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i40);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i41);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i42);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("class_id(", 9);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i43);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i44);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i45);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("base_typeclass_info(\"", 21);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__hlds__hlds_out__functor_to_string_maybe_needs_quotes_5_0);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i50);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i51);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_out__pred_id_to_string_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i52);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i53);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i54);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i55);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i56);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("tabling_info_const(", 19);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i59);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i60);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_out__pred_id_to_string_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i61);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i62);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("))", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i63);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (mode ", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i64);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i65);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("deep_profiling_proc_layout(", 27);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i68);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i69);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_out__pred_id_to_string_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i70);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i71);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("))", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i72);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (mode ", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i73);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__functor_cons_id_to_string_5_0_i74);
MR_def_label(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("table_io_decl(", 14);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module51)
	MR_init_entry1(hlds__hlds_out__write_functor_cons_id_7_0);
	MR_init_label1(hlds__hlds_out__write_functor_cons_id_7_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_functor_cons_id_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_out__functor_cons_id_to_string_5_0,
		hlds__hlds_out__write_functor_cons_id_7_0_i2);
MR_def_label(hlds__hlds_out__write_functor_cons_id_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module52)
	MR_init_entry1(fn__hlds__hlds_out__var_modes_to_string_5_0);
	MR_init_label2(fn__hlds__hlds_out__var_modes_to_string_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__var_modes_to_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		fn__hlds__hlds_out__var_modes_to_string_5_0_i2);
MR_def_label(fn__hlds__hlds_out__var_modes_to_string_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__var_mode_to_string_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,7);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__var_modes_to_string_5_0_i3);
MR_def_label(fn__hlds__hlds_out__var_modes_to_string_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__string__join_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module53)
	MR_init_entry1(hlds__hlds_out__write_var_modes_7_0);
	MR_init_label1(hlds__hlds_out__write_var_modes_7_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_var_modes_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_out__var_modes_to_string_5_0,
		hlds__hlds_out__write_var_modes_7_0_i2);
MR_def_label(hlds__hlds_out__write_var_modes_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_mode_to_string_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module54)
	MR_init_entry1(fn__hlds__hlds_out__var_mode_to_string_4_0);
	MR_init_label3(fn__hlds__hlds_out__var_mode_to_string_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__var_mode_to_string_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r4, 1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_ctfield(0, MR_r4, 0);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__hlds__hlds_out__var_mode_to_string_4_0_i2);
MR_def_label(fn__hlds__hlds_out__var_mode_to_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_to_string_2_0,
		fn__hlds__hlds_out__var_mode_to_string_4_0_i3);
MR_def_label(fn__hlds__hlds_out__var_mode_to_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("::", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__var_mode_to_string_4_0_i4);
MR_def_label(fn__hlds__hlds_out__var_mode_to_string_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module55)
	MR_init_entry1(hlds__hlds_out__write_var_mode_6_0);
	MR_init_label4(hlds__hlds_out__write_var_mode_6_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_var_mode_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r4, 1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_ctfield(0, MR_r4, 0);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		hlds__hlds_out__write_var_mode_6_0_i2);
MR_def_label(hlds__hlds_out__write_var_mode_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_to_string_2_0,
		hlds__hlds_out__write_var_mode_6_0_i3);
MR_def_label(hlds__hlds_out__write_var_mode_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("::", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_var_mode_6_0_i4);
MR_def_label(hlds__hlds_out__write_var_mode_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_var_mode_6_0_i5);
MR_def_label(hlds__hlds_out__write_var_mode_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module56)
	MR_init_entry1(hlds__hlds_out__write_sym_name_and_args_6_0);
	MR_init_label8(hlds__hlds_out__write_sym_name_and_args_6_0,4,5,3,8,9,10,11,12)
	MR_init_label1(hlds__hlds_out__write_sym_name_and_args_6_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_sym_name_and_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_sym_name_and_args_6_0_i3);
	}
	MR_tag_alloc_heap(MR_sv(4), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(4), 0) = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__hlds_out__write_sym_name_and_args_6_0_i4);
MR_def_label(hlds__hlds_out__write_sym_name_and_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__write_sym_name_and_args_6_0_i5);
MR_def_label(hlds__hlds_out__write_sym_name_and_args_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0,
		hlds__hlds_out__write_sym_name_and_args_6_0_i13);
MR_def_label(hlds__hlds_out__write_sym_name_and_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(4), 0) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_0,
		hlds__hlds_out__write_sym_name_and_args_6_0_i8);
MR_def_label(hlds__hlds_out__write_sym_name_and_args_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__hlds_out__write_sym_name_and_args_6_0_i9);
MR_def_label(hlds__hlds_out__write_sym_name_and_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__write_sym_name_and_args_6_0_i10);
MR_def_label(hlds__hlds_out__write_sym_name_and_args_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0,
		hlds__hlds_out__write_sym_name_and_args_6_0_i11);
MR_def_label(hlds__hlds_out__write_sym_name_and_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_sym_name_and_args_6_0_i12);
MR_def_label(hlds__hlds_out__write_sym_name_and_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_sym_name_and_args_6_0_i13);
MR_def_label(hlds__hlds_out__write_sym_name_and_args_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module57)
	MR_init_entry1(hlds__hlds_out__write_vars_5_0);
	MR_init_label8(hlds__hlds_out__write_vars_5_0,28,5,7,8,11,12,10,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_vars_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_vars_5_0_i32);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_r6 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_vars_5_0_i5);
	}
	MR_tempr1 = MR_tempr2;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
	}
MR_def_label(hlds__hlds_out__write_vars_5_0,5)
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
	MR_r4 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_vars_5_0_i7);
MR_def_label(hlds__hlds_out__write_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_vars_5_0_i8);
MR_def_label(hlds__hlds_out__write_vars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_vars_5_0_i10);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_vars_5_0_i11);
MR_def_label(hlds__hlds_out__write_vars_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_vars_5_0_i12);
MR_def_label(hlds__hlds_out__write_vars_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__write_vars_5_0_i28);
MR_def_label(hlds__hlds_out__write_vars_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_sv(3), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
MR_def_label(hlds__hlds_out__write_vars_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_llds__abs_locn_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module58)
	MR_init_entry1(hlds__hlds_out__write_var_to_abs_locns_6_0);
	MR_init_label8(hlds__hlds_out__write_var_to_abs_locns_6_0,17,4,5,6,7,8,9,10)
	MR_init_label1(hlds__hlds_out__write_var_to_abs_locns_6_0,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_var_to_abs_locns_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_var_to_abs_locns_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_var_to_abs_locns_6_0_i19);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_var_to_abs_locns_6_0_i4);
MR_def_label(hlds__hlds_out__write_var_to_abs_locns_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_to_abs_locns_6_0_i5);
MR_def_label(hlds__hlds_out__write_var_to_abs_locns_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_var_to_abs_locns_6_0_i6);
MR_def_label(hlds__hlds_out__write_var_to_abs_locns_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_to_abs_locns_6_0_i7);
MR_def_label(hlds__hlds_out__write_var_to_abs_locns_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_llds__abs_locn_to_string_1_0,
		hlds__hlds_out__write_var_to_abs_locns_6_0_i8);
MR_def_label(hlds__hlds_out__write_var_to_abs_locns_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_to_abs_locns_6_0_i9);
MR_def_label(hlds__hlds_out__write_var_to_abs_locns_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_to_abs_locns_6_0_i10);
MR_def_label(hlds__hlds_out__write_var_to_abs_locns_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__hlds_out__write_var_to_abs_locns_6_0_i17);
MR_def_label(hlds__hlds_out__write_var_to_abs_locns_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_llds__goal_info_get_follow_vars_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_abs_locn_0;
MR_decl_entry(hlds__hlds_llds__goal_info_get_resume_point_2_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_vars_5_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_store_map_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module59)
	MR_init_entry1(hlds__hlds_out__write_llds_code_gen_info_7_0);
	MR_init_label8(hlds__hlds_out__write_llds_code_gen_info_7_0,3,5,115,7,8,9,10,11)
	MR_init_label8(hlds__hlds_out__write_llds_code_gen_info_7_0,12,14,16,18,117,20,21,22)
	MR_init_label8(hlds__hlds_out__write_llds_code_gen_info_7_0,23,25,27,29,31,32,33,35)
	MR_init_label8(hlds__hlds_out__write_llds_code_gen_info_7_0,37,39,40,42,43,36,47,49)
	MR_init_label8(hlds__hlds_out__write_llds_code_gen_info_7_0,51,52,53,54,55,57,59,60)
	MR_init_label8(hlds__hlds_out__write_llds_code_gen_info_7_0,61,62,64,66,67,68,69,71)
	MR_init_label8(hlds__hlds_out__write_llds_code_gen_info_7_0,73,46,77,79,81,82,83,85)
	MR_init_label8(hlds__hlds_out__write_llds_code_gen_info_7_0,87,88,89,91,93,94,95,96)
	MR_init_label8(hlds__hlds_out__write_llds_code_gen_info_7_0,98,100,76,104,106,108,109,110)
	MR_init_label2(hlds__hlds_out__write_llds_code_gen_info_7_0,111,113)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_llds_code_gen_info_7_0)
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
	MR_r2 = (MR_Integer) 102;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i3);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i115);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_follow_vars_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i5);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i7);
	}
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i14);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i8);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i9);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% follow vars: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i10);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i11);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i12);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_var_to_abs_locns_6_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i115);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 114;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i16);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i117);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_resume_point_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i18);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i20);
	}
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i35);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i21);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i22);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% resume point ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i23);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(6),
		MR_LABEL_AP(hlds__hlds_out__write_llds_code_gen_info_7_0_i25) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_llds_code_gen_info_7_0_i27) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_llds_code_gen_info_7_0_i29) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_llds_code_gen_info_7_0_i31));
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("orig only ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i32);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stack only ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i32);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("orig and stack ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i32);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("stack and orig ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i32);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i33);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i117);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 115;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i37);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_store_map_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i39);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i40);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i36);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i42);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% store map:\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i43);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_var_to_abs_locns_6_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i36);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 115;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i47);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i46);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i49);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i46);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i51);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i52);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i53);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i54);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need across call forward vars: ", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i55);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i57);
	}
	MR_r1 = (MR_Word) MR_string_const("none\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i60);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_vars_5_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i59);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i60);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i61);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need across call resume vars: ", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i62);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i64);
	}
	MR_r1 = (MR_Word) MR_string_const("none\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i67);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__write_vars_5_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i66);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i67);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i68);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need across call nondet vars: ", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i69);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i71);
	}
	MR_r1 = (MR_Word) MR_string_const("none\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i46);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__write_vars_5_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i73);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i46);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 115;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i77);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i76);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i79);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i76);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i81);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i82);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i83);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i85);
	}
	MR_r1 = (MR_Word) MR_string_const("% resume point has no stack label\n", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i87);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% resume point has stack label\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i87);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i88);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need in resume resume vars: ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i89);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i91);
	}
	MR_r1 = (MR_Word) MR_string_const("none\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i94);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__write_vars_5_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i93);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i94);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i95);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need in resume nondet vars: ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i96);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i98);
	}
	MR_r1 = (MR_Word) MR_string_const("none\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i76);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__write_vars_5_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i100);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i76);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 115;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i104);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i113);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i106);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_llds_code_gen_info_7_0_i113);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i108);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i109);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need in par_conj vars: ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i110);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_vars_5_0,
		hlds__hlds_out__write_llds_code_gen_info_7_0_i111);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_llds_code_gen_info_7_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__init_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_inst_4_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_newline_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module60)
	MR_init_entry1(hlds__hlds_out__write_instmap_2_6_0);
	MR_init_label8(hlds__hlds_out__write_instmap_2_6_0,22,4,5,6,7,10,11,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_instmap_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_instmap_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_instmap_2_6_0_i24);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_instmap_2_6_0_i4);
MR_def_label(hlds__hlds_out__write_instmap_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instmap_2_6_0_i5);
MR_def_label(hlds__hlds_out__write_instmap_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__write_instmap_2_6_0_i6);
MR_def_label(hlds__hlds_out__write_instmap_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_inst_4_0,
		hlds__hlds_out__write_instmap_2_6_0_i7);
MR_def_label(hlds__hlds_out__write_instmap_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_instmap_2_6_0_i24);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_newline_3_0,
		hlds__hlds_out__write_instmap_2_6_0_i10);
MR_def_label(hlds__hlds_out__write_instmap_2_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%            ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instmap_2_6_0_i11);
MR_def_label(hlds__hlds_out__write_instmap_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__hlds_out__write_instmap_2_6_0_i22);
MR_def_label(hlds__hlds_out__write_instmap_2_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_is_unreachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_to_assoc_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module61)
	MR_init_entry1(hlds__hlds_out__write_instmap_delta_6_0);
	MR_init_label3(hlds__hlds_out__write_instmap_delta_6_0,4,2,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_instmap_delta_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		hlds__hlds_out__write_instmap_delta_6_0_i4);
MR_def_label(hlds__hlds_out__write_instmap_delta_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_instmap_delta_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("unreachable", 11);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_instmap_delta_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_to_assoc_list_2_0,
		hlds__hlds_out__write_instmap_delta_6_0_i7);
MR_def_label(hlds__hlds_out__write_instmap_delta_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_out__write_instmap_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(assoc_list__keys_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module62)
	MR_init_entry1(hlds__hlds_out__write_instmap_delta_vars_5_0);
	MR_init_label4(hlds__hlds_out__write_instmap_delta_vars_5_0,4,2,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_instmap_delta_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_unreachable_1_0,
		hlds__hlds_out__write_instmap_delta_vars_5_0_i4);
MR_def_label(hlds__hlds_out__write_instmap_delta_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_instmap_delta_vars_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("unreachable", 11);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_instmap_delta_vars_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_to_assoc_list_2_0,
		hlds__hlds_out__write_instmap_delta_vars_5_0_i7);
MR_def_label(hlds__hlds_out__write_instmap_delta_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		hlds__hlds_out__write_instmap_delta_vars_5_0_i8);
MR_def_label(hlds__hlds_out__write_instmap_delta_vars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__write_vars_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module63)
	MR_init_entry1(hlds__hlds_out__write_short_reuse_description_5_0);
	MR_init_label7(hlds__hlds_out__write_short_reuse_description_5_0,42,13,41,5,6,7,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_short_reuse_description_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_short_reuse_description_5_0_i41);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hlds_out__write_short_reuse_description_5_0_i42);
	}
	MR_r1 = (MR_Word) MR_string_const("cell died", 9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_short_reuse_description_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("reuse call - ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_short_reuse_description_5_0_i13);
MR_def_label(hlds__hlds_out__write_short_reuse_description_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_short_reuse_description_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("with condition", 14);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_short_reuse_description_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("cell reuse - ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_short_reuse_description_5_0_i5);
MR_def_label(hlds__hlds_out__write_short_reuse_description_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_short_reuse_description_5_0_i6);
MR_def_label(hlds__hlds_out__write_short_reuse_description_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" - ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_short_reuse_description_5_0_i7);
MR_def_label(hlds__hlds_out__write_short_reuse_description_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_short_reuse_description_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("with condition", 14);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_short_reuse_description_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("always safe", 11);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module64)
	MR_init_entry1(hlds__hlds_out__write_goal_list_9_0);
	MR_init_label5(hlds__hlds_out__write_goal_list_9_0,13,4,5,6,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_goal_list_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_goal_list_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_list_9_0_i15);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_list_9_0_i4);
MR_def_label(hlds__hlds_out__write_goal_list_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_list_9_0_i5);
MR_def_label(hlds__hlds_out__write_goal_list_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_list_9_0_i6);
MR_def_label(hlds__hlds_out__write_goal_list_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_list_9_0_i13);
MR_def_label(hlds__hlds_out__write_goal_list_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_get_context_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_goal_path_2_0);
MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_nonlocals_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0);
MR_decl_entry(fn__hlds__hlds_goal__producing_vars_1_0);
MR_decl_entry(set__non_empty_1_0);
MR_decl_entry(fn__hlds__hlds_goal__consuming_vars_1_0);
MR_decl_entry(fn__hlds__hlds_goal__make_visible_vars_1_0);
MR_decl_entry(fn__hlds__hlds_goal__need_visible_vars_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_determinism_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_purity_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_instmap_delta_2_0);
MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_changed_vars_2_0);
MR_decl_entry(set__empty_1_0);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0);
MR_decl_entry(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_maybe_get_lfu_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_maybe_get_lbu_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_maybe_get_reuse_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_code_gen_info_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_get_features_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module65)
	MR_init_entry1(hlds__hlds_out__write_goal_a_9_0);
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,2,4,6,7,8,12,13,14)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,15,16,3,21,23,242,25,26)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,27,28,29,31,33,35,36,244)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,38,39,40,41,43,45,48,50)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,52,53,54,47,58,60,62,63)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,64,44,69,71,73,75,76,77)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,78,72,81,83,85,86,87,88)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,82,91,93,95,96,97,98,92)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,101,103,105,106,107,108,68,113)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,115,116,117,118,119,112,123,125)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,257,127,129,128,131,133,134,136)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,138,140,142,143,261,139,145,147)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,149,150,146,152,153,157,159,162)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,164,166,167,168,161,172,174,176)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,177,178,158,183,186,188,190,192)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,193,194,195,196,197,198,199,200)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,201,202,203,206,208,209,210,212)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,213,214,216,217,218,219,182,223)
	MR_init_label8(hlds__hlds_out__write_goal_a_9_0,272,225,224,228,230,231,234,235)
	MR_init_label2(hlds__hlds_out__write_goal_a_9_0,236,238)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_goal_a_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_goal_a_9_0_i2);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 99;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i4);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i3);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_context_2_0,
		hlds__hlds_out__write_goal_a_9_0_i6);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		hlds__hlds_out__write_goal_a_9_0_i7);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		hlds__hlds_out__write_goal_a_9_0_i8);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(10), (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i3);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i12);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% context: file \140", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i13);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i14);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\', line ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i15);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_goal_a_9_0_i16);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i3);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 80;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i21);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i242);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_goal_path_2_0,
		hlds__hlds_out__write_goal_a_9_0_i23);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i25);
	}
MR_def_label(hlds__hlds_out__write_goal_a_9_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i31);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i26);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% goal path: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i27);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		hlds__hlds_out__write_goal_a_9_0_i28);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i29);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i242);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 110;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i33);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i244);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_nonlocals_2_0,
		hlds__hlds_out__write_goal_a_9_0_i35);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i36);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i38);
	}
MR_def_label(hlds__hlds_out__write_goal_a_9_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i43);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i39);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% nonlocals: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i40);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i41);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i244);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 112;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i45);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i44);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_0,
		hlds__hlds_out__write_goal_a_9_0_i48);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i47);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i50);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i47);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i52);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pre-deaths: ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i53);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i54);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i47);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_pre_births_2_0,
		hlds__hlds_out__write_goal_a_9_0_i58);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i44);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i60);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i44);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i62);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pre-births: ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i63);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i64);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i44);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 66;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i69);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i68);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__producing_vars_1_0,
		hlds__hlds_out__write_goal_a_9_0_i71);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(set__non_empty_1_0,
		hlds__hlds_out__write_goal_a_9_0_i73);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i72);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i75);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i76);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% producing vars: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i77);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i78);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i72);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__consuming_vars_1_0,
		hlds__hlds_out__write_goal_a_9_0_i81);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(set__non_empty_1_0,
		hlds__hlds_out__write_goal_a_9_0_i83);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i82);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i85);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i86);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% consuming vars: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i87);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i88);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i82);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__make_visible_vars_1_0,
		hlds__hlds_out__write_goal_a_9_0_i91);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(set__non_empty_1_0,
		hlds__hlds_out__write_goal_a_9_0_i93);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i92);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i95);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i96);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% make_visible vars: ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i97);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i98);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i92);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__need_visible_vars_1_0,
		hlds__hlds_out__write_goal_a_9_0_i101);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(set__non_empty_1_0,
		hlds__hlds_out__write_goal_a_9_0_i103);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i68);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i105);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i106);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% need_visible vars: ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i107);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i108);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i68);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 100;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i113);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i112);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i115);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% determinism: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i116);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_determinism_2_0,
		hlds__hlds_out__write_goal_a_9_0_i117);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_out__determinism_to_string_1_0,
		hlds__hlds_out__write_goal_a_9_0_i118);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i119);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i112);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 122;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i123);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i257);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_purity_2_0,
		hlds__hlds_out__write_goal_a_9_0_i125);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i127);
	}
MR_def_label(hlds__hlds_out__write_goal_a_9_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i133);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i128);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i129);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% semipure\n ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i257);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i131);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% impure\n ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i257);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_2_9_0,
		hlds__hlds_out__write_goal_a_9_0_i134);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 105;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i136);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i261);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_instmap_delta_2_0,
		hlds__hlds_out__write_goal_a_9_0_i138);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		hlds__hlds_out__write_goal_a_9_0_i140);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i139);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_changed_vars_2_0,
		hlds__hlds_out__write_goal_a_9_0_i142);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_np_call_localret_ent(set__empty_1_0,
		hlds__hlds_out__write_goal_a_9_0_i143);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i139);
	}
MR_def_label(hlds__hlds_out__write_goal_a_9_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i157);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i145);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i147);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i146);
	}
	MR_r1 = (MR_Word) MR_string_const("% new insts: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i149);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_instmap_delta_6_0,
		hlds__hlds_out__write_goal_a_9_0_i150);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i261);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% vars with new insts: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i152);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__write_instmap_delta_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i153);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i261);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 112;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i159);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i158);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_0,
		hlds__hlds_out__write_goal_a_9_0_i162);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i161);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i164);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i161);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i166);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% post-deaths: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i167);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i168);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i161);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_llds__goal_info_maybe_get_post_births_2_0,
		hlds__hlds_out__write_goal_a_9_0_i172);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i158);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i174);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i158);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i176);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% post-births: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i177);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i178);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i158);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 82;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i183);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i182);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_maybe_get_lfu_2_0,
		hlds__hlds_out__write_goal_a_9_0_i186);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i182);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_maybe_get_lbu_2_0,
		hlds__hlds_out__write_goal_a_9_0_i188);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i182);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_maybe_get_reuse_2_0,
		hlds__hlds_out__write_goal_a_9_0_i190);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i182);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i192);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i193);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i194);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% LFU: ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i195);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i196);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i197);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i198);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% LBU: ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i199);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_a_9_0_i200);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i201);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i202);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Reuse: ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i203);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(hlds__hlds_out__write_goal_a_9_0_i206) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_a_9_0_i208) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_a_9_0_i212) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_a_9_0_i216));
MR_def_label(hlds__hlds_out__write_goal_a_9_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("no", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i219);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("missed (", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i209);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_goal_a_9_0_i210);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i219);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("potential reuse (", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i213);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__write_short_reuse_description_5_0,
		hlds__hlds_out__write_goal_a_9_0_i214);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i219);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("reuse (", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i217);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__write_short_reuse_description_5_0,
		hlds__hlds_out__write_goal_a_9_0_i218);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i219);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i182);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_code_gen_info_2_0,
		hlds__hlds_out__write_goal_a_9_0_i223);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i225);
	}
MR_def_label(hlds__hlds_out__write_goal_a_9_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i224);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_out__write_llds_code_gen_info_7_0,
		hlds__hlds_out__write_goal_a_9_0_i272);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 103;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_a_9_0_i228);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i238);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_get_features_2_0,
		hlds__hlds_out__write_goal_a_9_0_i230);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, goal_feature);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_out__write_goal_a_9_0_i231);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_a_9_0_i238);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_a_9_0_i234);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Goal features:  ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_a_9_0_i235);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,18);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__write_goal_a_9_0_i236);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_goal_a_9_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(parse_tree__prog_out__write_purity_prefix_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_term_5_0);
MR_decl_entry(io__write_strings_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_mode_list_4_0);
MR_decl_entry(fn__parse_tree__prog_data__get_foreign_language_1_0);
MR_decl_entry(fn__libs__globals__foreign_language_string_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_compiletime_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0;

MR_BEGIN_MODULE(hlds__hlds_out_module66)
	MR_init_entry1(hlds__hlds_out__write_goal_2_9_0);
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,693,5,6,7,9,10,11,12)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,13,18,20,16,22,694,34,36)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,40,39,43,35,46,48,47,49)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,50,51,52,412,54,55,56,58)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,59,60,62,64,65,66,67,68)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,69,70,71,75,76,74,77,78)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,79,80,81,695,87,88,92,94)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,91,97,98,90,101,103,100,106)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,107,108,109,110,113,114,116,118)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,120,121,122,123,126,127,129,131)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,128,134,135,136,137,140,141,142)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,144,146,143,150,152,153,154,155)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,149,158,159,160,163,696,165,166)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,167,168,169,170,171,172,173,174)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,175,176,177,178,423,180,181,182)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,183,179,185,186,187,188,189,192)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,193,194,190,220,221,216,217,218)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,198,199,200,201,202,203,204,205)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,206,207,209,211,213,214,215,697)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,228,230,227,236,240,241,242,243)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,237,235,248,249,250,251,252,698)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,256,259,260,261,262,257,699,269)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,270,271,272,273,274,275,278,277)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,280,281,282,700,286,287,288,289)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,701,293,296,297,298,300,302,304)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,306,307,308,310,312,314,311,318)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,321,346,347,348,443,350,351,352)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,353,349,357,358,359,360,355,362)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,363,364,365,366,367,368,369,370)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,340,341,342,343,344,331,334,335)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,333,337,338,322,325,326,324,328)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,329,330,372,373,702,377,378,379)
	MR_init_label8(hlds__hlds_out__write_goal_2_9_0,380,381,382,383,384,385,386,387)
	MR_init_label6(hlds__hlds_out__write_goal_2_9_0,388,393,395,396,398,692)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_goal_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i693) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i694) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i695) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i163));
MR_def_label(hlds__hlds_out__write_goal_2_9_0,693)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(0, MR_r1, 0);
	MR_sv(8) = MR_ctfield(0, MR_r1, 1);
	MR_sv(9) = MR_ctfield(0, MR_r1, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i5);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_goal_2_9_0_i6);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i7);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i9);
	}
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__write_goal_2_9_0_i11);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(1, MR_sv(6), 1);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_out__write_goal_2_9_0_i10);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__write_goal_2_9_0_i11);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_unify_rhs_2_11_0,
		hlds__hlds_out__write_goal_2_9_0_i12);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_goal_2_9_0_i13);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 117;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_2_9_0_i18);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i16);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 112;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_2_9_0_i20);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i692);
	}
MR_def_label(hlds__hlds_out__write_goal_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(9);
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i22);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 3);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i22);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i22);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i22);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i22);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i692);
	}
	}
MR_def_label(hlds__hlds_out__write_goal_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,694)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_sv(9) = MR_ctfield(1, MR_r1, 2);
	MR_sv(10) = MR_ctfield(1, MR_r1, 3);
	MR_sv(11) = MR_ctfield(1, MR_r1, 4);
	MR_sv(12) = MR_ctfield(1, MR_r1, 5);
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_goal_2_9_0_i34);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r2 = (MR_Integer) 98;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_2_9_0_i36);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i35);
	}
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i39);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i40);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% inline builtin\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i35);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i35);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i43);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% out of line builtin\n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i35);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i46);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		hlds__hlds_out__write_goal_2_9_0_i48);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) != MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i47);
	}
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i58);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hlds_out__write_goal_2_9_0_i49);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__hlds_out__write_goal_2_9_0_i50);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__hlds_out__write_goal_2_9_0_i51);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_purity_prefix_3_0,
		hlds__hlds_out__write_goal_2_9_0_i52);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i54);
	}
MR_def_label(hlds__hlds_out__write_goal_2_9_0,412)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i58);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__write_goal_2_9_0_i55);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_goal_2_9_0_i56);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i412);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_out__write_sym_name_and_args_6_0,
		hlds__hlds_out__write_goal_2_9_0_i59);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i60);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Integer) 108;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_2_9_0_i62);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i692);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__write_goal_2_9_0_i64);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__write_goal_2_9_0_i65);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i66);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pred id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i67);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_goal_2_9_0_i68);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", proc id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i69);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_goal_2_9_0_i70);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i71);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i692);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i75);
	}
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(11), 0);
	MR_r3 = MR_tempr1;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i74);
	}
MR_def_label(hlds__hlds_out__write_goal_2_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(11), 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(1, MR_sv(6), 1);
	MR_r5 = MR_sv(7);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_out__write_goal_2_9_0_i76);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(8), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(8), 0) = MR_r1;
	MR_r1 = MR_sv(4);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i77);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% unify context: ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i78);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_goal_2_9_0_i79);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i80);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__write_goal_2_9_0_i81);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(hlds__hlds_out__write_unify_rhs_2_11_0);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,695)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(2, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i87) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i113) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i126) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i140));
MR_def_label(hlds__hlds_out__write_goal_2_9_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Integer) 117;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_goal_2_9_0_i88);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i90);
	}
	MR_r2 = (MR_Integer) 108;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_2_9_0_i92);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i91);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i94);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% higher-order predicate call\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i91);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i97);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_out__write_purity_prefix_3_0,
		hlds__hlds_out__write_goal_2_9_0_i98);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_functor_6_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 108;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_2_9_0_i101);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i100);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i103);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% higher-order function application\n", 36);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i100);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__write_goal_2_9_0_i106);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i107);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_out__write_purity_prefix_3_0,
		hlds__hlds_out__write_goal_2_9_0_i108);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_goal_2_9_0_i109);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i110);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__write_functor_6_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 117;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_goal_2_9_0_i114);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 108;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_2_9_0_i116);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i120);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i118);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% class method call\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i120);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__hlds_out__write_goal_2_9_0_i121);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_sv(8) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__write_goal_2_9_0_i122);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i123);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_term_5_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	MR_sv(6) = MR_ctfield(2, MR_r2, 0);
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_goal_2_9_0_i127);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 108;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_2_9_0_i129);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i128);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i131);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% event call\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i128);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i134);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("event ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i135);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__hlds_out__write_goal_2_9_0_i136);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(4), 0) = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__write_goal_2_9_0_i137);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_term_5_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	MR_sv(6) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r2, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_out__cast_type_to_string_1_0,
		hlds__hlds_out__write_goal_2_9_0_i141);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_goal_2_9_0_i142);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Integer) 108;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_2_9_0_i144);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i143);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i146);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,9,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("% ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__write_goal_2_9_0_i143);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_goal_2_9_0_i150);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i149);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i152);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% modes: ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i153);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__write_goal_2_9_0_i154);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_mode_list_4_0,
		hlds__hlds_out__write_goal_2_9_0_i155);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_goal_2_9_0_i149);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__write_goal_2_9_0_i158);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__hlds_out__write_goal_2_9_0_i159);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i160);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_term_5_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i696) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i697) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i698) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i699) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i700) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i701) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i702) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i398));
MR_def_label(hlds__hlds_out__write_goal_2_9_0,696)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(3, MR_r1, 2);
	MR_sv(7) = MR_ctfield(3, MR_r1, 3);
	MR_sv(8) = MR_ctfield(3, MR_r1, 4);
	MR_sv(9) = MR_ctfield(3, MR_r1, 5);
	MR_sv(10) = MR_ctfield(3, MR_r1, 6);
	MR_sv(11) = MR_ctfield(3, MR_r1, 7);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		hlds__hlds_out__write_goal_2_9_0_i165);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i166);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\044pragma_foreign_proc(/* ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i167);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		hlds__hlds_out__write_goal_2_9_0_i168);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i169);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */, ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i170);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_id_4_0,
		hlds__hlds_out__write_goal_2_9_0_i171);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" pred ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i172);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__write_goal_2_9_0_i173);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_goal_2_9_0_i174);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" proc ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i175);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__write_goal_2_9_0_i176);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_goal_2_9_0_i177);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i178);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i180);
	}
MR_def_label(hlds__hlds_out__write_goal_2_9_0,423)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i179);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(10), 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i181);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% trace_runtime_cond(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i182);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_0,
		hlds__hlds_out__write_goal_2_9_0_i183);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i423);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i185);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__write_goal_2_9_0_i186);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i187);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__write_foreign_args_6_0,
		hlds__hlds_out__write_goal_2_9_0_i188);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("],\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i189);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i190);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i192);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i193);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__write_foreign_args_6_0,
		hlds__hlds_out__write_goal_2_9_0_i194);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("},\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i190);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i198);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i216);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i220);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i221);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i215);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i217);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i218);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i215);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 4);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 6);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 7);
	MR_r1 = (MR_Word) MR_string_const("local_vars(\"", 12);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i199);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i200);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"), ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i201);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("first_code(\"", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i202);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i203);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"), ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i204);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("retry_code(\"", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i205);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i206);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"), ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i207);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i209);
	}
	MR_r1 = (MR_Word) MR_string_const("duplicated_code(\"", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i213);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i211);
	}
	MR_r1 = (MR_Word) MR_string_const("shared_code(\"", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i213);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("common_code(\"", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i213);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i214);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\")", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i215);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,697)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_r9 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i227);
	}
	MR_sv(5) = MR_r6;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i228);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i230);
	}
	MR_r1 = (MR_Word) MR_string_const("true", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* parallel */ true", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i235);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_tempr2 = MR_r9;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Integer) 117;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_goal_2_9_0_i236);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i237);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i240);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("( % conjunction\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i241);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const("\n", 1);
	MR_r8 = MR_sv(9);
	MR_r9 = (MR_Word) MR_string_const(",\n", 2);
	MR_r10 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_conj_12_0,
		hlds__hlds_out__write_goal_2_9_0_i242);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i243);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r9 = (MR_Word) MR_string_const(",\n", 2);
	MR_r10 = MR_sv(6);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(hlds__hlds_out__write_conj_12_0);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_tempr2 = MR_r9;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i248);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("( % parallel conjunction\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i249);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_2_9_0_i250);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Word) MR_string_const("&\n", 2);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_list_9_0,
		hlds__hlds_out__write_goal_2_9_0_i251);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i252);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,698)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i256);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i257);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("( % disjunction\n", 16);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i259);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_2_9_0_i260);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Word) MR_string_const(";\n", 2);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_list_9_0,
		hlds__hlds_out__write_goal_2_9_0_i261);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i262);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fail", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,699)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(3, MR_r1, 1);
	MR_sv(8) = MR_ctfield(3, MR_r1, 2);
	MR_sv(9) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i269);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("( % ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i270);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_out__can_fail_to_string_1_0,
		hlds__hlds_out__write_goal_2_9_0_i271);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i272);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" switch on \140", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i273);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_goal_2_9_0_i274);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i275);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i277);
	}
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i278);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("fail\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i281);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_case_9_0,
		hlds__hlds_out__write_goal_2_9_0_i280);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,280)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_cases_9_0,
		hlds__hlds_out__write_goal_2_9_0_i281);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i282);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,700)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i286);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\\+ (\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i287);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_2_9_0_i288);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i289);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,701)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(3, MR_r1, 1);
	MR_sv(8) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i293);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(7);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i296) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i300) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i310) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_goal_2_9_0_i321));
MR_def_label(hlds__hlds_out__write_goal_2_9_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(0, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("some [", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i297);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_2_9_0_i298);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] (\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i330);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i302);
	}
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("promise_equivalent_solutions", 28);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i306);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i304);
	}
	MR_sv(7) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("promise_equivalent_solution_sets", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i306);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,304)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("arbitrary", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i306);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" [", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i307);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_2_9_0_i308);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] (\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i330);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r4 = MR_ctfield(2, MR_tempr1, 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i312);
	}
	MR_sv(7) = MR_ctfield(2, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("promise_pure (", 14);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i311);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,312)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i314);
	}
	MR_sv(7) = MR_ctfield(2, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("promise_semipure (", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i311);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(2, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const("promise_impure (", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i311);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i318);
	}
	MR_r1 = (MR_Word) MR_string_const("implicit\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i330);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i330);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i322);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i331);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r3, 0),2)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i340);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(10) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(11) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(12) = MR_ctfield(3, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i346);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i347);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,347)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% trace\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i348);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,348)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i350);
	}
MR_def_label(hlds__hlds_out__write_goal_2_9_0,443)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i349);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,350)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(1, MR_sv(7), 0);
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i351);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,351)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% compiletime(", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i352);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_compiletime);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_0,
		hlds__hlds_out__write_goal_2_9_0_i353);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i443);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i355);
	}
	MR_sv(11) = MR_r4;
	MR_sv(7) = MR_ctfield(1, MR_sv(9), 0);
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i357);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% runtime(", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i358);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,358)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_trace_expr_4_0,
		hlds__hlds_out__write_goal_2_9_0_i359);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i360);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,360)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(11);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,355)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i362);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_trace_mutable_var_hlds_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__hlds_out__write_goal_2_9_0_i367);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,362)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r4;
	MR_sv(7) = MR_ctfield(1, MR_sv(10), 0);
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i363);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,363)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_goal_2_9_0_i364);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,364)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% io(!", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_goal_2_9_0_i365);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i366);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,366)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_trace_mutable_var_hlds_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r4 = MR_sv(11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, trace_mutable_var_hlds);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__hlds_out__write_goal_2_9_0_i367);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,367)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i368);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% quantified vars ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i369);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,369)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_goal_2_9_0_i370);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_goal_2_9_0_i330);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(3, MR_r3, 1);
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i341);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i342);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,342)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% from_ground_term [", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i343);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,343)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_goal_2_9_0_i344);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,344)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i330);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i333);
	}
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i334);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i335);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,335)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% barrier(removable)\n", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i330);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,333)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i337);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i338);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% barrier(not_removable)\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i330);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i324);
	}
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i325);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i326);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,326)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% commit(force_pruning)\n", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i330);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i328);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i329);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% commit(dont_force_pruning)\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i330);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_2_9_0_i372);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,372)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i373);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,373)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,702)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(3, MR_r1, 2);
	MR_sv(8) = MR_ctfield(3, MR_r1, 3);
	MR_sv(9) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i377);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,377)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(if", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i378);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,378)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_111_109_101_95_95_91_49_44_32_50_93_95_48_4_0,
		hlds__hlds_out__write_goal_2_9_0_i379);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,379)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i380);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,380)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(7) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_2_9_0_i381);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,381)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i382);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,382)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("then\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i383);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,383)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_2_9_0_i384);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,384)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i385);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,385)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("else\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i386);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,386)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_goal_2_9_0_i387);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,387)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i388);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(9);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(hlds__hlds_out__write_goal_2_9_0_i388);
	}
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_2_9_0_i393);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,388)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_2_9_0_i393);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,393)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_9_0_i395);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,395)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_9_0_i396);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,396)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,398)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(hlds__hlds_out__write_goal_2_shorthand_9_0);
MR_def_label(hlds__hlds_out__write_goal_2_9_0,692)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module67)
	MR_init_entry1(hlds__hlds_out__write_goal_2_shorthand_9_0);
	MR_init_label8(hlds__hlds_out__write_goal_2_shorthand_9_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_goal_2_shorthand_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_shorthand_9_0_i2);
MR_def_label(hlds__hlds_out__write_goal_2_shorthand_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("( % bi-implication\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_shorthand_9_0_i3);
MR_def_label(hlds__hlds_out__write_goal_2_shorthand_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(6) + (MR_Integer) 1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_2_shorthand_9_0_i4);
MR_def_label(hlds__hlds_out__write_goal_2_shorthand_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_shorthand_9_0_i5);
MR_def_label(hlds__hlds_out__write_goal_2_shorthand_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<=>\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_shorthand_9_0_i6);
MR_def_label(hlds__hlds_out__write_goal_2_shorthand_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_goal_2_shorthand_9_0_i7);
MR_def_label(hlds__hlds_out__write_goal_2_shorthand_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_goal_2_shorthand_9_0_i8);
MR_def_label(hlds__hlds_out__write_goal_2_shorthand_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_goal_2_shorthand_9_0_i9);
MR_def_label(hlds__hlds_out__write_goal_2_shorthand_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module68)
	MR_init_entry1(hlds__hlds_out__write_unify_rhs_2_11_0);
	MR_init_label1(hlds__hlds_out__write_unify_rhs_2_11_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_unify_rhs_2_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_np_call_localret_ent(hlds__hlds_out__write_unify_rhs_3_10_0,
		hlds__hlds_out__write_unify_rhs_2_11_0_i2);
MR_def_label(hlds__hlds_out__write_unify_rhs_2_11_0,2)
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

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_det_3_0);
MR_decl_entry(parse_tree__prog_type__remove_new_prefix_2_1);

MR_BEGIN_MODULE(hlds__hlds_out_module69)
	MR_init_entry1(hlds__hlds_out__write_unify_rhs_3_10_0);
	MR_init_label8(hlds__hlds_out__write_unify_rhs_3_10_0,127,18,21,23,25,26,27,28)
	MR_init_label8(hlds__hlds_out__write_unify_rhs_3_10_0,29,30,31,32,20,34,35,36)
	MR_init_label8(hlds__hlds_out__write_unify_rhs_3_10_0,38,40,41,42,43,44,45,46)
	MR_init_label8(hlds__hlds_out__write_unify_rhs_3_10_0,47,48,49,19,54,51,57,59)
	MR_init_label8(hlds__hlds_out__write_unify_rhs_3_10_0,63,64,126,8,5,9,10,14)
	MR_init_label1(hlds__hlds_out__write_unify_rhs_3_10_0,125)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_unify_rhs_3_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i126);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i127);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
	}
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_ctfield(2, MR_r1, 1);
	MR_sv(9) = MR_ctfield(2, MR_r1, 3);
	MR_sv(10) = MR_ctfield(2, MR_r1, 4);
	MR_sv(11) = MR_ctfield(2, MR_r1, 5);
	MR_sv(12) = MR_ctfield(2, MR_r1, 6);
	MR_sv(13) = MR_ctfield(2, MR_r1, 7);
	MR_sv(14) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_purity_prefix_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i18);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i21);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("(pred)", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i27);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("pred(", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i25);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_var_modes_7_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i26);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i27);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" is ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i28);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_det_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i29);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i30);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(14);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i31);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i32);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i19);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i34);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i35);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i36);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(11),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("(func)", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i42);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("func(", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i40);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_var_modes_7_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i41);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i42);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = (", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i43);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(10);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_var_mode_6_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i44);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") is ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i45);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_det_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i46);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i47);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(14);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i48);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i49);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i19);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i51);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i51);
	}
	MR_sv(1) = MR_ctfield(1, MR_sv(6), 0);
	MR_sv(3) = MR_ctfield(1, MR_sv(7), 0);
	MR_r1 = (MR_Word) MR_string_const(" : ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i54);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i51);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i57);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 110;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i59);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i125);
	}
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i125);
	}
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i63);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% lambda nonlocals: ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i64);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(3) = MR_ctfield(1, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_r6 = MR_ctfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__remove_new_prefix_2_1,
		hlds__hlds_out__write_unify_rhs_3_10_0_i8);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i9);
	}
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r4 = MR_r2;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r2 = MR_sv(3);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__write_functor_cons_id_7_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i10);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i125);
	}
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_unify_rhs_3_10_0_i125);
	}
	MR_sv(1) = MR_ctfield(1, MR_sv(6), 0);
	MR_sv(2) = MR_ctfield(1, MR_sv(7), 0);
	MR_r1 = (MR_Word) MR_string_const(" : ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_unify_rhs_3_10_0_i14);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0);
MR_def_label(hlds__hlds_out__write_unify_rhs_3_10_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module70)
	MR_init_entry1(hlds__hlds_out__write_conj_12_0);
	MR_init_label6(hlds__hlds_out__write_conj_12_0,25,7,8,4,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_conj_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_conj_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_conj_12_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(9) = MR_ctfield(1, MR_tempr1, 0);
	if ((strcmp((char *)MR_r8, (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_conj_12_0_i4);
	}
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(2) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_sv(3) = MR_tempr4;
	MR_tempr5 = MR_r6;
	MR_sv(4) = MR_tempr5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_tempr6 = MR_r10;
	MR_sv(8) = MR_tempr6;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_r5 = MR_tempr5;
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_tempr6;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_conj_12_0_i7);
MR_def_label(hlds__hlds_out__write_conj_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_conj_12_0_i8);
MR_def_label(hlds__hlds_out__write_conj_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_conj_12_0_i10);
MR_def_label(hlds__hlds_out__write_conj_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r5;
	MR_sv(3) = MR_tempr3;
	MR_tempr4 = MR_r6;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_tempr5 = MR_r9;
	MR_sv(7) = MR_tempr5;
	MR_tempr6 = MR_r10;
	MR_sv(8) = MR_tempr6;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_tempr6;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_conj_12_0_i10);
MR_def_label(hlds__hlds_out__write_conj_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_out__write_conj_12_0_i25);
MR_def_label(hlds__hlds_out__write_conj_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r10;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_out__write_goal_a_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module71)
	MR_init_entry1(hlds__hlds_out__write_case_9_0);
	MR_init_label7(hlds__hlds_out__write_case_9_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_case_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_case_9_0_i2);
MR_def_label(hlds__hlds_out__write_case_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_case_9_0_i3);
MR_def_label(hlds__hlds_out__write_case_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_case_9_0_i4);
MR_def_label(hlds__hlds_out__write_case_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" has functor ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_case_9_0_i5);
MR_def_label(hlds__hlds_out__write_case_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		hlds__hlds_out__write_case_9_0_i6);
MR_def_label(hlds__hlds_out__write_case_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_case_9_0_i7);
MR_def_label(hlds__hlds_out__write_case_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_case_9_0_i8);
MR_def_label(hlds__hlds_out__write_case_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_out__write_goal_a_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module72)
	MR_init_entry1(hlds__hlds_out__write_cases_9_0);
	MR_init_label8(hlds__hlds_out__write_cases_9_0,20,4,5,6,7,8,9,10)
	MR_init_label4(hlds__hlds_out__write_cases_9_0,11,12,13,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_cases_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_cases_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_cases_9_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_cases_9_0_i4);
MR_def_label(hlds__hlds_out__write_cases_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_cases_9_0_i5);
MR_def_label(hlds__hlds_out__write_cases_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_cases_9_0_i6);
MR_def_label(hlds__hlds_out__write_cases_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_cases_9_0_i7);
MR_def_label(hlds__hlds_out__write_cases_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_cases_9_0_i8);
MR_def_label(hlds__hlds_out__write_cases_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" has functor ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_cases_9_0_i9);
MR_def_label(hlds__hlds_out__write_cases_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		hlds__hlds_out__write_cases_9_0_i10);
MR_def_label(hlds__hlds_out__write_cases_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_cases_9_0_i11);
MR_def_label(hlds__hlds_out__write_cases_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_cases_9_0_i12);
MR_def_label(hlds__hlds_out__write_cases_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Word) MR_string_const("\n", 1);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_goal_a_9_0,
		hlds__hlds_out__write_cases_9_0_i13);
MR_def_label(hlds__hlds_out__write_cases_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_out__write_cases_9_0_i20);
MR_def_label(hlds__hlds_out__write_cases_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module73)
	MR_init_entry1(hlds__hlds_out__write_clause_12_0);
	MR_init_label8(hlds__hlds_out__write_clause_12_0,2,4,6,7,8,10,12,13)
	MR_init_label8(hlds__hlds_out__write_clause_12_0,14,16,44,18,19,20,17,22)
	MR_init_label8(hlds__hlds_out__write_clause_12_0,23,27,29,26,25,33,34,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_clause_12_0);
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
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(14) = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_r1 = (MR_Integer) 117;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_clause_12_0_i2);
MR_def_label(hlds__hlds_out__write_clause_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 109;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_clause_12_0_i4);
MR_def_label(hlds__hlds_out__write_clause_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_clause_12_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_clause_12_0_i6);
MR_def_label(hlds__hlds_out__write_clause_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Modes for which this clause applies: ", 39);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clause_12_0_i7);
MR_def_label(hlds__hlds_out__write_clause_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__hlds_out__write_clause_12_0_i8);
MR_def_label(hlds__hlds_out__write_clause_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_clause_12_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clause_12_0_i14);
MR_def_label(hlds__hlds_out__write_clause_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(15) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clause_12_0_i12);
MR_def_label(hlds__hlds_out__write_clause_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(hlds__hlds_out__write_intlist_2_4_0,
		hlds__hlds_out__write_clause_12_0_i13);
MR_def_label(hlds__hlds_out__write_clause_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clause_12_0_i14);
MR_def_label(hlds__hlds_out__write_clause_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clause_12_0_i16);
MR_def_label(hlds__hlds_out__write_clause_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_clause_12_0_i18);
	}
MR_def_label(hlds__hlds_out__write_clause_12_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(hlds__hlds_out__write_clause_12_0_i17);
MR_def_label(hlds__hlds_out__write_clause_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(12), 0);
	MR_r1 = (MR_Word) MR_string_const("% Language of implementation: ", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clause_12_0_i19);
MR_def_label(hlds__hlds_out__write_clause_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__write_clause_12_0_i20);
MR_def_label(hlds__hlds_out__write_clause_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_clause_12_0_i44);
MR_def_label(hlds__hlds_out__write_clause_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hlds_out__write_clause_12_0_i22);
MR_def_label(hlds__hlds_out__write_clause_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__hlds_out__write_clause_12_0_i23);
MR_def_label(hlds__hlds_out__write_clause_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_clause_12_0_i27);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_GOTO_LAB(hlds__hlds_out__write_clause_12_0_i26);
MR_def_label(hlds__hlds_out__write_clause_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__hlds_out__write_clause_12_0_i29);
MR_def_label(hlds__hlds_out__write_clause_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_clause_12_0_i25);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
MR_def_label(hlds__hlds_out__write_clause_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_out__write_clause_head_8_0,
		hlds__hlds_out__write_clause_12_0_i33);
MR_def_label(hlds__hlds_out__write_clause_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__write_annotated_clause_heads_11_0,
		hlds__hlds_out__write_clause_12_0_i33);
MR_def_label(hlds__hlds_out__write_clause_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(11), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_clause_12_0_i34);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_clause_12_0_i34);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_clause_12_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(hlds__hlds_out__write_clause_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clause_12_0_i39);
MR_def_label(hlds__hlds_out__write_clause_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(14);
	MR_r6 = (MR_Word) MR_string_const(".\n", 2);
	MR_r7 = MR_sv(9);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(hlds__hlds_out__write_goal_a_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module74)
	MR_init_entry1(hlds__hlds_out__write_clauses_2_12_0);
	MR_init_label7(hlds__hlds_out__write_clauses_2_12_0,16,4,5,6,7,8,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_clauses_2_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_clauses_2_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_clauses_2_12_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_tempr2 = MR_r8;
	MR_sv(10) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__write_clauses_2_12_0_i4);
MR_def_label(hlds__hlds_out__write_clauses_2_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% clause ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clauses_2_12_0_i5);
MR_def_label(hlds__hlds_out__write_clauses_2_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_clauses_2_12_0_i6);
MR_def_label(hlds__hlds_out__write_clauses_2_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_clauses_2_12_0_i7);
MR_def_label(hlds__hlds_out__write_clauses_2_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(10);
	MR_r9 = (MR_Integer) 0;
	MR_r10 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__write_clause_12_0,
		hlds__hlds_out__write_clauses_2_12_0_i8);
MR_def_label(hlds__hlds_out__write_clauses_2_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(8);
	MR_r10 = ((MR_Integer) MR_sv(9) + (MR_Integer) 1);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(hlds__hlds_out__write_clauses_2_12_0_i16);
MR_def_label(hlds__hlds_out__write_clauses_2_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module75)
	MR_init_entry1(hlds__hlds_out__write_clauses_11_0);
	MR_init_label1(hlds__hlds_out__write_clauses_11_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_clauses_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(fn__hlds__hlds_args__proc_arg_vector_to_list_1_0,
		hlds__hlds_out__write_clauses_11_0_i2);
MR_def_label(hlds__hlds_out__write_clauses_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = (MR_Integer) 1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__hlds_out__write_clauses_2_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module76)
	MR_init_entry1(hlds__hlds_out__write_promise_12_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_promise_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module77)
	MR_init_entry1(hlds__hlds_out__write_goal_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_goal_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(hlds__hlds_out__write_goal_a_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module78)
	MR_init_entry1(hlds__hlds_out__write_unify_rhs_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_unify_rhs_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(hlds__hlds_out__write_unify_rhs_3_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module79)
	MR_init_entry1(fn__hlds__hlds_out__unify_rhs_to_string_4_0);
	MR_init_label4(fn__hlds__hlds_out__unify_rhs_to_string_4_0,11,35,8,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__unify_rhs_to_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__unify_rhs_to_string_4_0_i35);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__unify_rhs_to_string_4_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
	}
MR_def_label(fn__hlds__hlds_out__unify_rhs_to_string_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lambda goal", 11);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__unify_rhs_to_string_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_ctfield(1, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_ctfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__unify_rhs_to_string_4_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__unify_rhs_to_string_4_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__remove_new_prefix_2_1,
		fn__hlds__hlds_out__unify_rhs_to_string_4_0_i8);
MR_def_label(fn__hlds__hlds_out__unify_rhs_to_string_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__hlds__hlds_out__functor_cons_id_to_string_5_0);
	}
MR_def_label(fn__hlds__hlds_out__unify_rhs_to_string_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r5 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__hlds__hlds_out__functor_cons_id_to_string_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__is_unreachable_1_0);
MR_decl_entry(hlds__instmap__to_assoc_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module80)
	MR_init_entry1(hlds__hlds_out__write_instmap_6_0);
	MR_init_label3(hlds__hlds_out__write_instmap_6_0,4,2,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_instmap_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__instmap__is_unreachable_1_0,
		hlds__hlds_out__write_instmap_6_0_i4);
MR_def_label(hlds__hlds_out__write_instmap_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_instmap_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("unreachable", 11);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_instmap_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__to_assoc_list_2_0,
		hlds__hlds_out__write_instmap_6_0_i7);
MR_def_label(hlds__hlds_out__write_instmap_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_out__write_instmap_2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module81)
	MR_init_entry1(hlds__hlds_out__marker_name_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__marker_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_4, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module82)
	MR_init_entry1(hlds__hlds_out__write_marker_3_0);
	MR_init_label1(hlds__hlds_out__write_marker_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__write_marker_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_out__marker_name_2_0,
		hlds__hlds_out__write_marker_3_0_i2);
MR_def_label(hlds__hlds_out__write_marker_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module83)
	MR_init_entry1(fn__hlds__hlds_out__make_atom_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__make_atom_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module84)
	MR_init_entry1(fn__hlds__hlds_out__inst_uniqueness_2_0);
	MR_init_label5(fn__hlds__hlds_out__inst_uniqueness_2_0,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__inst_uniqueness_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(fn__hlds__hlds_out__inst_uniqueness_2_0_i3) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_uniqueness_2_0_i4) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_uniqueness_2_0_i5) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_uniqueness_2_0_i6) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_uniqueness_2_0_i7));
MR_def_label(fn__hlds__hlds_out__inst_uniqueness_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__inst_uniqueness_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unique", 6);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__inst_uniqueness_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mostly_unique", 13);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__inst_uniqueness_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("clobbered", 9);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__inst_uniqueness_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mostly_clobbered", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__construct_qualified_term_4_0);
MR_decl_entry(parse_tree__prog_io_util__unparse_type_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
MR_decl_entry(fn__term__coerce_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module85)
	MR_init_entry1(fn__hlds__hlds_out__inst_name_to_term_2_0);
	MR_init_label8(fn__hlds__hlds_out__inst_name_to_term_2_0,4,7,8,10,11,13,14,15)
	MR_init_label8(fn__hlds__hlds_out__inst_name_to_term_2_0,16,18,19,20,21,23,24,25)
	MR_init_label8(fn__hlds__hlds_out__inst_name_to_term_2_0,26,28,29,30,31,32,34,37)
	MR_init_label8(fn__hlds__hlds_out__inst_name_to_term_2_0,38,39,41,42,43,44,45,47)
	MR_init_label8(fn__hlds__hlds_out__inst_name_to_term_2_0,48,50,53,54,56,57,58,59)
	MR_init_label4(fn__hlds__hlds_out__inst_name_to_term_2_0,62,63,64,65)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__inst_name_to_term_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__inst_name_to_term_2_0_i4) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_name_to_term_2_0_i7) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_name_to_term_2_0_i10) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_name_to_term_2_0_i23));
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__map_inst_to_term_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i8);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__map_inst_to_term_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr4 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_r1, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,9);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i8);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_sv(4) = MR_ctfield(2, MR_r1, 3);
	MR_sv(3) = MR_ctfield(2, MR_r1, 2);
	MR_sv(2) = MR_ctfield(2, MR_r1, 1);
	MR_r3 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("live", 4);
	MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i13);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dead", 4);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__make_atom_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i14);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,9);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__map_inst_to_term_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i15);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i16);
	}
	MR_r2 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("real", 4);
	MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i18);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fake", 4);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__make_atom_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i19);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i20);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i21);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__hlds__hlds_out__inst_name_to_term_2_0_i24) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_name_to_term_2_0_i37) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_name_to_term_2_0_i50) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_name_to_term_2_0_i53) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_name_to_term_2_0_i56) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_name_to_term_2_0_i62));
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(4) = MR_ctfield(3, MR_r1, 4);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__hlds__hlds_out__inst_name_to_term_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i25);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i26);
	}
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("live", 4);
	MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i28);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("dead", 4);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__make_atom_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i29);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("shared", 6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__inst_uniqueness_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i30);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__make_atom_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i31);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i32);
	}
	MR_r2 = MR_sv(1);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("real", 4);
	MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i34);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fake", 4);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__make_atom_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i48);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_sv(3) = MR_ctfield(3, MR_r1, 3);
	MR_sv(4) = MR_ctfield(3, MR_r1, 4);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__hlds__hlds_out__inst_name_to_term_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i38);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i39);
	}
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("live", 4);
	MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i41);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("dead", 4);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__make_atom_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i42);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("shared", 6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__inst_uniqueness_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i43);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__make_atom_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i44);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i45);
	}
	MR_r2 = MR_sv(1);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("real", 4);
	MR_GOTO_LAB(fn__hlds__hlds_out__inst_name_to_term_2_0_i47);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fake", 4);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__make_atom_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i48);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__hlds__hlds_out__inst_name_to_term_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i54);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__hlds__hlds_out__inst_name_to_term_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i54);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i57);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_r2 = (MR_Word) MR_string_const("shared", 6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__inst_uniqueness_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i58);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__make_atom_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i59);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i65);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i63);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i64);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(fn__hlds__hlds_out__inst_name_to_term_2_0,
		fn__hlds__hlds_out__inst_name_to_term_2_0_i65);
MR_def_label(fn__hlds__hlds_out__inst_name_to_term_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module86)
	MR_init_entry1(fn__hlds__hlds_out__any_inst_uniqueness_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__any_inst_uniqueness_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_5, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__cons_id_and_args_to_term_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module87)
	MR_init_entry1(fn__hlds__hlds_out__bound_insts_to_term_2_0);
	MR_init_label6(fn__hlds__hlds_out__bound_insts_to_term_2_0,33,6,7,11,10,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__bound_insts_to_term_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__bound_insts_to_term_2_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds_out.m", 10);
	MR_r2 = (MR_Word) MR_string_const("bound_insts_to_term([])", 23);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__hlds__hlds_out__bound_insts_to_term_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__map_inst_to_term_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__bound_insts_to_term_2_0_i6);
MR_def_label(fn__hlds__hlds_out__bound_insts_to_term_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_util__cons_id_and_args_to_term_3_0,
		fn__hlds__hlds_out__bound_insts_to_term_2_0_i7);
MR_def_label(fn__hlds__hlds_out__bound_insts_to_term_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__bound_insts_to_term_2_0_i5);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__bound_insts_to_term_2_0_i10);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,13);
	MR_r2 = MR_sv(1);
	MR_np_localcall_lab(fn__hlds__hlds_out__bound_insts_to_term_2_0,
		fn__hlds__hlds_out__bound_insts_to_term_2_0_i11);
MR_def_label(fn__hlds__hlds_out__bound_insts_to_term_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__bound_insts_to_term_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__hlds_out__bound_insts_to_term_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_out.m", 10);
	MR_r2 = (MR_Word) MR_string_const("bound_insts_to_term: cons_id_and_args_to_term failed", 52);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module88)
	MR_init_entry1(fn__hlds__hlds_out__det_to_term_2_0);
	MR_init_label8(fn__hlds__hlds_out__det_to_term_2_0,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__det_to_term_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(fn__hlds__hlds_out__det_to_term_2_0_i3) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__det_to_term_2_0_i4) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__det_to_term_2_0_i5) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__det_to_term_2_0_i6) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__det_to_term_2_0_i7) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__det_to_term_2_0_i8) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__det_to_term_2_0_i9) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__det_to_term_2_0_i10));
MR_def_label(fn__hlds__hlds_out__det_to_term_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,14);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__det_to_term_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,15);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__det_to_term_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,16);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__det_to_term_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__det_to_term_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,18);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__det_to_term_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,19);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__det_to_term_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,20);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__det_to_term_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,21);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(hlds__hlds_out_module89)
	MR_init_entry1(fn__hlds__hlds_out__mode_to_term_with_context_2_0);
	MR_init_label7(fn__hlds__hlds_out__mode_to_term_with_context_2_0,8,4,5,11,12,3,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__mode_to_term_with_context_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__mode_to_term_with_context_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	MR_r4 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__mode_to_term_with_context_2_0_i5);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__mode_to_term_with_context_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		fn__hlds__hlds_out__mode_to_term_with_context_2_0_i8);
MR_def_label(fn__hlds__hlds_out__mode_to_term_with_context_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__mode_to_term_with_context_2_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__hlds__hlds_out__inst_to_term_with_context_2_0);
MR_def_label(fn__hlds__hlds_out__mode_to_term_with_context_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(fn__hlds__hlds_out__mode_to_term_with_context_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,22);
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__inst_to_term_with_context_2_0,
		fn__hlds__hlds_out__mode_to_term_with_context_2_0_i11);
MR_def_label(fn__hlds__hlds_out__mode_to_term_with_context_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__inst_to_term_with_context_2_0,
		fn__hlds__hlds_out__mode_to_term_with_context_2_0_i12);
MR_def_label(fn__hlds__hlds_out__mode_to_term_with_context_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__mode_to_term_with_context_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__map_inst_to_term_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__mode_to_term_with_context_2_0_i15);
MR_def_label(fn__hlds__hlds_out__mode_to_term_with_context_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(fn__set__fold_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module90)
	MR_init_entry1(fn__hlds__hlds_out__inst_to_term_with_context_2_0);
	MR_init_label8(fn__hlds__hlds_out__inst_to_term_with_context_2_0,4,5,72,73,12,13,14,76)
	MR_init_label8(fn__hlds__hlds_out__inst_to_term_with_context_2_0,16,17,77,22,21,26,25,28)
	MR_init_label8(fn__hlds__hlds_out__inst_to_term_with_context_2_0,29,30,31,32,33,78,36,79)
	MR_init_label3(fn__hlds__hlds_out__inst_to_term_with_context_2_0,39,41,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__inst_to_term_with_context_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i4) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i72) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i73) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i14));
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("free", 4);
	MR_np_tailcall_ent(fn__hlds__hlds_out__make_atom_2_0);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("not_reached", 11);
	MR_np_tailcall_ent(fn__hlds__hlds_out__make_atom_2_0);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_out__any_inst_uniqueness_1_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i22);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_2_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i12);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i13);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,2,23);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i76) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i77) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i78) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i79) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i41) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i43));
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("bound", 5);
	MR_np_call_localret_ent(fn__hlds__hlds_out__inst_uniqueness_2_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i16);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__bound_insts_to_term_2_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i17);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i21);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("ground", 6);
	MR_np_call_localret_ent(fn__hlds__hlds_out__inst_uniqueness_2_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i22);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__hlds__hlds_out__make_atom_2_0);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__inst_to_term_with_context_2_0_i25);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,12);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__mode_to_term_with_context_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,24);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i26);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i32);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i28);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__mode_to_term_with_context_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,26);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,9);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i29);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i30);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,27);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__mode_to_term_with_context_2_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i31);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i32);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,25);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__det_to_term_2_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i33);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i36);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__term__coerce_1_0);
	}
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__IntroducedFrom__func__inst_to_term_with_context__4169__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,4,19);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	}
	MR_np_localcall_lab(fn__hlds__hlds_out__inst_to_term_with_context_2_0,
		fn__hlds__hlds_out__inst_to_term_with_context_2_0_i39);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__set__fold_3_0);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__hlds__hlds_out__inst_name_to_term_2_0);
MR_def_label(fn__hlds__hlds_out__inst_to_term_with_context_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__hlds__hlds_out__inst_name_to_term_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module91)
	MR_init_entry1(fn__hlds__hlds_out__mode_to_term_1_0);
	MR_init_label1(fn__hlds__hlds_out__mode_to_term_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__mode_to_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__hlds__hlds_out__mode_to_term_1_0_i2);
MR_def_label(fn__hlds__hlds_out__mode_to_term_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__hlds__hlds_out__mode_to_term_with_context_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module92)
	MR_init_entry1(fn__hlds__hlds_out__inst_to_term_1_0);
	MR_init_label1(fn__hlds__hlds_out__inst_to_term_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__inst_to_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__hlds__hlds_out__inst_to_term_1_0_i2);
MR_def_label(fn__hlds__hlds_out__inst_to_term_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__hlds__hlds_out__inst_to_term_with_context_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module93)
	MR_init_entry1(fn__hlds__hlds_out__mercury_uni_mode_to_string_2_0);
	MR_init_label2(fn__hlds__hlds_out__mercury_uni_mode_to_string_2_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__mercury_uni_mode_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,4,21);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0,
		fn__hlds__hlds_out__mercury_uni_mode_to_string_2_0_i2);
MR_def_label(fn__hlds__hlds_out__mercury_uni_mode_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" = ", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__hlds__hlds_out__mercury_uni_mode_to_string_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__hlds__hlds_out__mercury_uni_mode_to_string_2_0_i3);
MR_def_label(fn__hlds__hlds_out__mercury_uni_mode_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module94)
	MR_init_entry1(fn__hlds__hlds_out__mercury_uni_mode_list_to_string_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__mercury_uni_mode_list_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,21);
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_np_tailcall_ent(hlds__hlds_out__mercury_format_uni_mode_list_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_format_inst_4_0);

MR_BEGIN_MODULE(hlds__hlds_out_module95)
	MR_init_entry1(hlds__hlds_out__mercury_output_expanded_inst_5_0);
	MR_init_label1(hlds__hlds_out__mercury_output_expanded_inst_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__mercury_output_expanded_inst_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		hlds__hlds_out__mercury_output_expanded_inst_5_0_i2);
MR_def_label(hlds__hlds_out__mercury_output_expanded_inst_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,12);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,22);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_inst_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module96)
	MR_init_entry1(fn__hlds__hlds_out__mercury_expanded_inst_to_string_3_0);
	MR_init_label1(fn__hlds__hlds_out__mercury_expanded_inst_to_string_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__mercury_expanded_inst_to_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		fn__hlds__hlds_out__mercury_expanded_inst_to_string_3_0_i2);
MR_def_label(fn__hlds__hlds_out__mercury_expanded_inst_to_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,21);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,22);
	MR_r3 = MR_sv(1);
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_inst_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_set_option_4_0);

MR_BEGIN_MODULE(hlds__hlds_out_module97)
	MR_init_entry1(hlds__hlds_out__set_dump_opts_for_clauses_3_0);
	MR_init_label8(hlds__hlds_out__set_dump_opts_for_clauses_3_0,2,4,3,6,8,10,7,11)
	MR_init_label8(hlds__hlds_out__set_dump_opts_for_clauses_3_0,13,15,12,16,18,20,17,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__set_dump_opts_for_clauses_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__set_dump_opts_for_clauses_3_0_i2);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 99;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__set_dump_opts_for_clauses_3_0_i4);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__set_dump_opts_for_clauses_3_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_string_const("c", 1);
	MR_GOTO_LAB(hlds__hlds_out__set_dump_opts_for_clauses_3_0_i6);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 110;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__set_dump_opts_for_clauses_3_0_i8);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__set_dump_opts_for_clauses_3_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__set_dump_opts_for_clauses_3_0_i10);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(hlds__hlds_out__set_dump_opts_for_clauses_3_0_i11);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 118;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__set_dump_opts_for_clauses_3_0_i13);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__set_dump_opts_for_clauses_3_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("v", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__set_dump_opts_for_clauses_3_0_i15);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(hlds__hlds_out__set_dump_opts_for_clauses_3_0_i16);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 103;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__set_dump_opts_for_clauses_3_0_i18);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__set_dump_opts_for_clauses_3_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("g", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__set_dump_opts_for_clauses_3_0_i20);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 117;
	}
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		hlds__hlds_out__set_dump_opts_for_clauses_3_0_i22);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Integer) 117;
	}
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		hlds__hlds_out__set_dump_opts_for_clauses_3_0_i22);
MR_def_label(hlds__hlds_out__set_dump_opts_for_clauses_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;

MR_BEGIN_MODULE(hlds__hlds_out_module98)
	MR_init_entry1(hlds__hlds_out__write_marker_list_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_marker_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, marker);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_np_tailcall_ent(io__write_list_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__var_to_int_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module99)
	MR_init_entry1(hlds__hlds_out__write_var_types_2_8_0);
	MR_init_label8(hlds__hlds_out__write_var_types_2_8_0,21,4,5,6,7,8,9,10)
	MR_init_label5(hlds__hlds_out__write_var_types_2_8_0,11,12,13,14,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_var_types_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_var_types_2_8_0_i23);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_out__write_var_types_2_8_0_i4);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_var_types_2_8_0_i5);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_types_2_8_0_i6);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_var_types_2_8_0_i7);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (number ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_types_2_8_0_i8);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		hlds__hlds_out__write_var_types_2_8_0_i9);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_var_types_2_8_0_i10);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_types_2_8_0_i11);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_types_2_8_0_i12);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__write_var_types_2_8_0_i13);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_types_2_8_0_i14);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__hlds_out__write_var_types_2_8_0_i21);
MR_def_label(hlds__hlds_out__write_var_types_2_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__count_2_0);
MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(hlds__hlds_out_module100)
	MR_init_entry1(hlds__hlds_out__write_var_types_7_0);
	MR_init_label5(hlds__hlds_out__write_var_types_7_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_var_types_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__count_2_0,
		hlds__hlds_out__write_var_types_7_0_i2);
MR_def_label(hlds__hlds_out__write_var_types_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_var_types_7_0_i3);
MR_def_label(hlds__hlds_out__write_var_types_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% variable types map ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_types_7_0_i4);
MR_def_label(hlds__hlds_out__write_var_types_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("(%d entries):\n", 14);
	}
	MR_np_call_localret_ent(io__format_4_0,
		hlds__hlds_out__write_var_types_7_0_i5);
MR_def_label(hlds__hlds_out__write_var_types_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__hlds_out__write_var_types_7_0_i6);
MR_def_label(hlds__hlds_out__write_var_types_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_out__write_var_types_2_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_tvars_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0);
MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module101)
	MR_init_entry1(hlds__hlds_out__write_rtti_varmaps_7_0);
	MR_init_label8(hlds__hlds_out__write_rtti_varmaps_7_0,2,3,4,5,6,7,8,9)
	MR_init_label3(hlds__hlds_out__write_rtti_varmaps_7_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_rtti_varmaps_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i2);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% type_info varmap:\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i3);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_tvars_2_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i4);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_type_info_locn_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,25);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i5);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i6);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% typeclass_info varmap:\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i7);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i8);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_typeclass_info_var_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i9);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i10);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% rtti_var_info:\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i11);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0,
		hlds__hlds_out__write_rtti_varmaps_7_0_i12);
MR_def_label(hlds__hlds_out__write_rtti_varmaps_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_rtti_var_info_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module102)
	MR_init_entry1(hlds__hlds_out__write_var_name_remap_5_0);
	MR_init_label6(hlds__hlds_out__write_var_name_remap_5_0,14,2,3,4,7,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_var_name_remap_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_var_name_remap_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_var_name_remap_5_0_i2);
MR_def_label(hlds__hlds_out__write_var_name_remap_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_name_remap_5_0_i3);
MR_def_label(hlds__hlds_out__write_var_name_remap_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_name_remap_5_0_i4);
MR_def_label(hlds__hlds_out__write_var_name_remap_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_var_name_remap_5_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_var_name_remap_5_0_i7);
MR_def_label(hlds__hlds_out__write_var_name_remap_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__write_var_name_remap_5_0_i14);
MR_def_label(hlds__hlds_out__write_var_name_remap_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_llds__type_ctor_info_stack_slot_0;
MR_decl_entry(fn__assoc_list__map_values_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module103)
	MR_init_entry1(hlds__hlds_out__write_stack_slots_6_0);
	MR_init_label2(hlds__hlds_out__write_stack_slots_6_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_stack_slots_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_stack_slots_6_0_i2);
MR_def_label(hlds__hlds_out__write_stack_slots_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, stack_slot);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_llds, abs_locn);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_np_call_localret_ent(fn__assoc_list__map_values_2_0,
		hlds__hlds_out__write_stack_slots_6_0_i3);
MR_def_label(hlds__hlds_out__write_stack_slots_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_out__write_var_to_abs_locns_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl_4_2);

MR_BEGIN_MODULE(hlds__hlds_out_module104)
	MR_init_entry1(hlds__hlds_out__write_untuple_info_6_0);
	MR_init_label2(hlds__hlds_out__write_untuple_info_6_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_untuple_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_untuple_info_6_0_i2);
MR_def_label(hlds__hlds_out__write_untuple_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% untuple:\n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_untuple_info_6_0_i3);
MR_def_label(hlds__hlds_out__write_untuple_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_untuple_info_2_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,28);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_arg_info_0;

MR_BEGIN_MODULE(hlds__hlds_out_module105)
	MR_init_entry1(hlds__hlds_out__write_table_arg_infos_6_0);
	MR_init_label5(hlds__hlds_out__write_table_arg_infos_6_0,2,3,4,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_table_arg_infos_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("% arg infos:\n", 13);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_table_arg_infos_6_0_i2);
MR_def_label(hlds__hlds_out__write_table_arg_infos_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_table_arg_info_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_arg_info);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__hlds_out__write_table_arg_infos_6_0_i3);
MR_def_label(hlds__hlds_out__write_table_arg_infos_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,25);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_locn);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_table_arg_infos_6_0_i4);
MR_def_label(hlds__hlds_out__write_table_arg_infos_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_table_arg_infos_6_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% type var map:\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_table_arg_infos_6_0_i7);
MR_def_label(hlds__hlds_out__write_table_arg_infos_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_table_tvar_map_entry_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,10);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(hlds__hlds_out__write_table_arg_infos_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_trie_step_0;

MR_BEGIN_MODULE(hlds__hlds_out_module106)
	MR_init_entry1(hlds__hlds_out__write_proc_table_info_6_0);
	MR_init_label8(hlds__hlds_out__write_proc_table_info_6_0,2,5,4,7,8,9,10,12)
	MR_init_label3(hlds__hlds_out__write_proc_table_info_6_0,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_proc_table_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("% proc table info: ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_table_info_6_0_i2);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_table_info_6_0_i4);
	}
	MR_sv(4) = MR_ctfield(0, MR_sv(4), 0);
	MR_r1 = (MR_Word) MR_string_const(" io tabled\n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_table_info_6_0_i5);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_out__write_table_arg_infos_6_0);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tempr1 = MR_tempr5;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 4);
	MR_r1 = (MR_Word) MR_string_const("#inputs: %d, #outputs: %d\n", 26);
	}
	MR_np_call_localret_ent(io__format_4_0,
		hlds__hlds_out__write_proc_table_info_6_0_i7);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% input steps:", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_table_info_6_0_i8);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__hlds_out__write_proc_table_info_6_0_i9);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_proc_table_info_6_0_i10);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_table_info_6_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("% no output steps", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_table_info_6_0_i16);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("% output steps:", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_table_info_6_0_i14);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(list__foldl_4_0,
		hlds__hlds_out__write_proc_table_info_6_0_i15);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_proc_table_info_6_0_i16);
MR_def_label(hlds__hlds_out__write_proc_table_info_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_out__write_table_arg_infos_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_declared_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_arglives_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_maybe_arg_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_structure_sharing_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_eval_method_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_is_address_taken_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_has_user_event_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_proc_table_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_call_table_tip_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_var_name_remap_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__write_maybe_arg_size_info_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
MR_decl_entry(parse_tree__mercury_to_mercury__write_maybe_termination_info_4_0);
MR_decl_entry(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_7_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_8_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_stack_slots_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module107)
	MR_init_entry1(hlds__hlds_out__write_proc_9_0);
	MR_init_label8(hlds__hlds_out__write_proc_9_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,10,11,12,13,14,15,16,17)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,18,19,20,21,22,23,24,25)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,26,27,28,29,30,31,32,33)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,34,35,36,37,38,39,40,41)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,42,44,46,47,48,49,50,51)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,52,43,56,58,59,55,62,63)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,64,66,65,70,69,74,76,79)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,80,81,82,85,83,88,89,90)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,86,94,95,97,99,100,101,102)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,103,104,105,93,108,109,110,111)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,112,177,114,115,117,91,119,120)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,121,179,123,124,125,126,122,128)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,129,130,131,133,135,136,139,140)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,141,142,137,144,147,148,149,151)
	MR_init_label8(hlds__hlds_out__write_proc_9_0,155,153,156,157,158,159,160,161)
	MR_init_label2(hlds__hlds_out__write_proc_9_0,162,164)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_proc_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(34);
	MR_sv(34) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		hlds__hlds_out__write_proc_9_0_i2);
MR_def_label(hlds__hlds_out__write_proc_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		hlds__hlds_out__write_proc_9_0_i3);
MR_def_label(hlds__hlds_out__write_proc_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		hlds__hlds_out__write_proc_9_0_i4);
MR_def_label(hlds__hlds_out__write_proc_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_declared_determinism_2_0,
		hlds__hlds_out__write_proc_9_0_i5);
MR_def_label(hlds__hlds_out__write_proc_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inferred_determinism_2_0,
		hlds__hlds_out__write_proc_9_0_i6);
MR_def_label(hlds__hlds_out__write_proc_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		hlds__hlds_out__write_proc_9_0_i7);
MR_def_label(hlds__hlds_out__write_proc_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		hlds__hlds_out__write_proc_9_0_i8);
MR_def_label(hlds__hlds_out__write_proc_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		hlds__hlds_out__write_proc_9_0_i9);
MR_def_label(hlds__hlds_out__write_proc_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_arglives_2_0,
		hlds__hlds_out__write_proc_9_0_i10);
MR_def_label(hlds__hlds_out__write_proc_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_maybe_arg_info_2_0,
		hlds__hlds_out__write_proc_9_0_i11);
MR_def_label(hlds__hlds_out__write_proc_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		hlds__hlds_out__write_proc_9_0_i12);
MR_def_label(hlds__hlds_out__write_proc_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		hlds__hlds_out__write_proc_9_0_i13);
MR_def_label(hlds__hlds_out__write_proc_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0,
		hlds__hlds_out__write_proc_9_0_i14);
MR_def_label(hlds__hlds_out__write_proc_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		hlds__hlds_out__write_proc_9_0_i15);
MR_def_label(hlds__hlds_out__write_proc_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_structure_sharing_2_0,
		hlds__hlds_out__write_proc_9_0_i16);
MR_def_label(hlds__hlds_out__write_proc_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_rtti_varmaps_2_0,
		hlds__hlds_out__write_proc_9_0_i17);
MR_def_label(hlds__hlds_out__write_proc_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_eval_method_2_0,
		hlds__hlds_out__write_proc_9_0_i18);
MR_def_label(hlds__hlds_out__write_proc_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_is_address_taken_2_0,
		hlds__hlds_out__write_proc_9_0_i19);
MR_def_label(hlds__hlds_out__write_proc_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_parallel_conj_2_0,
		hlds__hlds_out__write_proc_9_0_i20);
MR_def_label(hlds__hlds_out__write_proc_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_has_user_event_2_0,
		hlds__hlds_out__write_proc_9_0_i21);
MR_def_label(hlds__hlds_out__write_proc_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_proc_table_info_2_0,
		hlds__hlds_out__write_proc_9_0_i22);
MR_def_label(hlds__hlds_out__write_proc_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_call_table_tip_2_0,
		hlds__hlds_out__write_proc_9_0_i23);
MR_def_label(hlds__hlds_out__write_proc_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_deep_profile_info_2_0,
		hlds__hlds_out__write_proc_9_0_i24);
MR_def_label(hlds__hlds_out__write_proc_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_untuple_info_2_0,
		hlds__hlds_out__write_proc_9_0_i25);
MR_def_label(hlds__hlds_out__write_proc_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_var_name_remap_2_0,
		hlds__hlds_out__write_proc_9_0_i26);
MR_def_label(hlds__hlds_out__write_proc_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(32) = MR_r1;
	MR_sv(33) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = MR_sv(33);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i27);
MR_def_label(hlds__hlds_out__write_proc_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pred id ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i28);
MR_def_label(hlds__hlds_out__write_proc_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__write_proc_9_0_i29);
MR_def_label(hlds__hlds_out__write_proc_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_proc_9_0_i30);
MR_def_label(hlds__hlds_out__write_proc_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_proc_9_0_i31);
MR_def_label(hlds__hlds_out__write_proc_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(33);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i32);
MR_def_label(hlds__hlds_out__write_proc_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% mode number ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i33);
MR_def_label(hlds__hlds_out__write_proc_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__write_proc_9_0_i34);
MR_def_label(hlds__hlds_out__write_proc_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_proc_9_0_i35);
MR_def_label(hlds__hlds_out__write_proc_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" of ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i36);
MR_def_label(hlds__hlds_out__write_proc_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_id_4_0,
		hlds__hlds_out__write_proc_9_0_i37);
MR_def_label(hlds__hlds_out__write_proc_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i38);
MR_def_label(hlds__hlds_out__write_proc_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__hlds__hlds_out__determinism_to_string_1_0,
		hlds__hlds_out__write_proc_9_0_i39);
MR_def_label(hlds__hlds_out__write_proc_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i40);
MR_def_label(hlds__hlds_out__write_proc_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("):\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i41);
MR_def_label(hlds__hlds_out__write_proc_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_proc_9_0_i42);
MR_def_label(hlds__hlds_out__write_proc_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r2 = (MR_Integer) 116;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_proc_9_0_i44);
MR_def_label(hlds__hlds_out__write_proc_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i43);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i46);
MR_def_label(hlds__hlds_out__write_proc_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Arg size properties: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i47);
MR_def_label(hlds__hlds_out__write_proc_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(20);
	MR_sv(20) = (MR_Word) MR_TAG_COMMON(0,4,30);
	MR_r1 = MR_sv(20);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__write_maybe_arg_size_info_4_0,
		hlds__hlds_out__write_proc_9_0_i48);
MR_def_label(hlds__hlds_out__write_proc_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_proc_9_0_i49);
MR_def_label(hlds__hlds_out__write_proc_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i50);
MR_def_label(hlds__hlds_out__write_proc_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Termination properties: ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i51);
MR_def_label(hlds__hlds_out__write_proc_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(unit, unit);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(21);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__write_maybe_termination_info_4_0,
		hlds__hlds_out__write_proc_9_0_i52);
MR_def_label(hlds__hlds_out__write_proc_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_proc_9_0_i43);
MR_def_label(hlds__hlds_out__write_proc_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 83;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_proc_9_0_i56);
MR_def_label(hlds__hlds_out__write_proc_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i55);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i58);
MR_def_label(hlds__hlds_out__write_proc_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Structure sharing: \n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i59);
MR_def_label(hlds__hlds_out__write_proc_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(parse_tree__prog_ctgc__dump_maybe_structure_sharing_domain_5_0,
		hlds__hlds_out__write_proc_9_0_i55);
MR_def_label(hlds__hlds_out__write_proc_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i62);
MR_def_label(hlds__hlds_out__write_proc_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_out__write_var_types_7_0,
		hlds__hlds_out__write_proc_9_0_i63);
MR_def_label(hlds__hlds_out__write_proc_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(23);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_out__write_rtti_varmaps_7_0,
		hlds__hlds_out__write_proc_9_0_i64);
MR_def_label(hlds__hlds_out__write_proc_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(25),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i66);
	}
	MR_r1 = (MR_Word) MR_string_const("% address is taken\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i65);
MR_def_label(hlds__hlds_out__write_proc_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% address is not taken\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i65);
MR_def_label(hlds__hlds_out__write_proc_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(26),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i70);
	}
	MR_r1 = (MR_Word) MR_string_const("% does not contain parallel conjunction\n", 40);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i69);
MR_def_label(hlds__hlds_out__write_proc_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% contains parallel conjunction\n", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i69);
MR_def_label(hlds__hlds_out__write_proc_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(27),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i74);
	}
	MR_r1 = (MR_Word) MR_string_const("% does not contain user event\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i76);
MR_def_label(hlds__hlds_out__write_proc_9_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% contains user event\n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i76);
MR_def_label(hlds__hlds_out__write_proc_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(32);
	if (MR_LTAGS_TEST(MR_sv(24),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i82);
	}
	MR_r1 = (MR_Word) MR_string_const("% eval method: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i79);
MR_def_label(hlds__hlds_out__write_proc_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(24);
	MR_np_call_localret_ent(hlds__hlds_out__write_eval_method_3_0,
		hlds__hlds_out__write_proc_9_0_i80);
MR_def_label(hlds__hlds_out__write_proc_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i81);
MR_def_label(hlds__hlds_out__write_proc_9_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(32);
MR_def_label(hlds__hlds_out__write_proc_9_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(28),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i83);
	}
	MR_sv(32) = MR_r3;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_ctfield(1, MR_sv(28), 0);
	MR_np_call_localret_ent(hlds__hlds_out__write_proc_table_info_6_0,
		hlds__hlds_out__write_proc_9_0_i85);
MR_def_label(hlds__hlds_out__write_proc_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(32);
MR_def_label(hlds__hlds_out__write_proc_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(29),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i86);
	}
	MR_sv(32) = MR_r3;
	MR_sv(9) = MR_ctfield(1, MR_sv(29), 0);
	MR_r1 = (MR_Word) MR_string_const("% call table tip: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i88);
MR_def_label(hlds__hlds_out__write_proc_9_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_proc_9_0_i89);
MR_def_label(hlds__hlds_out__write_proc_9_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i90);
MR_def_label(hlds__hlds_out__write_proc_9_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(32);
MR_def_label(hlds__hlds_out__write_proc_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(30),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i91);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(30), 0);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i94);
	}
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i93);
	}
MR_def_label(hlds__hlds_out__write_proc_9_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(32) = MR_r3;
	MR_sv(9) = MR_ctfield(0, MR_r5, 1);
	MR_sv(10) = MR_ctfield(0, MR_ctfield(1, MR_r4, 0), 0);
	MR_r1 = (MR_Word) MR_string_const("% deep recursion info: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i95);
MR_def_label(hlds__hlds_out__write_proc_9_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(10),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i97);
	}
	MR_sv(10) = MR_ctfield(0, MR_sv(10), 0);
	MR_r1 = (MR_Word) MR_string_const("inner, outer is ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i99);
MR_def_label(hlds__hlds_out__write_proc_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_ctfield(1, MR_sv(10), 0);
	MR_r1 = (MR_Word) MR_string_const("outer, inner is ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i99);
MR_def_label(hlds__hlds_out__write_proc_9_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(10), 0);
	MR_sv(10) = MR_ctfield(0, MR_sv(10), 1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__write_proc_9_0_i100);
MR_def_label(hlds__hlds_out__write_proc_9_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__write_proc_9_0_i101);
MR_def_label(hlds__hlds_out__write_proc_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_proc_9_0_i102);
MR_def_label(hlds__hlds_out__write_proc_9_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i103);
MR_def_label(hlds__hlds_out__write_proc_9_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_proc_9_0_i104);
MR_def_label(hlds__hlds_out__write_proc_9_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i105);
MR_def_label(hlds__hlds_out__write_proc_9_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(32);
MR_def_label(hlds__hlds_out__write_proc_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i91);
	}
	MR_sv(32) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_tempr2 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(20) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_string_const("% deep layout info: ", 20);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i108);
MR_def_label(hlds__hlds_out__write_proc_9_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("TopCSD is ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i109);
MR_def_label(hlds__hlds_out__write_proc_9_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_proc_9_0_i110);
MR_def_label(hlds__hlds_out__write_proc_9_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", MiddleCSD is ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i111);
MR_def_label(hlds__hlds_out__write_proc_9_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_proc_9_0_i112);
MR_def_label(hlds__hlds_out__write_proc_9_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(20),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i114);
	}
MR_def_label(hlds__hlds_out__write_proc_9_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i117);
MR_def_label(hlds__hlds_out__write_proc_9_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_ctfield(1, MR_sv(20), 0);
	MR_r1 = (MR_Word) MR_string_const(", OldOutermost is ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i115);
MR_def_label(hlds__hlds_out__write_proc_9_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_proc_9_0_i177);
MR_def_label(hlds__hlds_out__write_proc_9_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(32);
MR_def_label(hlds__hlds_out__write_proc_9_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(31),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i119);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_proc_9_0_i121);
MR_def_label(hlds__hlds_out__write_proc_9_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(32) = MR_r3;
	MR_r1 = MR_ctfield(1, MR_sv(31), 0);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_untuple_info_6_0,
		hlds__hlds_out__write_proc_9_0_i120);
MR_def_label(hlds__hlds_out__write_proc_9_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(32);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_proc_9_0_i121);
MR_def_label(hlds__hlds_out__write_proc_9_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i123);
	}
MR_def_label(hlds__hlds_out__write_proc_9_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i122);
MR_def_label(hlds__hlds_out__write_proc_9_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_ctfield(1, MR_r1, 0);
	MR_sv(10) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i124);
MR_def_label(hlds__hlds_out__write_proc_9_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% var name remap: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i125);
MR_def_label(hlds__hlds_out__write_proc_9_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_out__write_var_name_remap_5_0,
		hlds__hlds_out__write_proc_9_0_i126);
MR_def_label(hlds__hlds_out__write_proc_9_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_proc_9_0_i179);
MR_def_label(hlds__hlds_out__write_proc_9_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i128);
MR_def_label(hlds__hlds_out__write_proc_9_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		hlds__hlds_out__write_proc_9_0_i129);
MR_def_label(hlds__hlds_out__write_proc_9_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__hlds_out__write_proc_9_0_i130);
MR_def_label(hlds__hlds_out__write_proc_9_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__write_proc_9_0_i131);
MR_def_label(hlds__hlds_out__write_proc_9_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i133);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(19);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_7_0,
		hlds__hlds_out__write_proc_9_0_i136);
MR_def_label(hlds__hlds_out__write_proc_9_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__write_proc_9_0_i135);
MR_def_label(hlds__hlds_out__write_proc_9_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r4 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(19);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_8_0,
		hlds__hlds_out__write_proc_9_0_i136);
MR_def_label(hlds__hlds_out__write_proc_9_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	if (MR_LTAGS_TEST(MR_sv(16),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i137);
	}
	MR_sv(8) = MR_ctfield(1, MR_sv(16), 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i139);
MR_def_label(hlds__hlds_out__write_proc_9_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% arg lives: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i140);
MR_def_label(hlds__hlds_out__write_proc_9_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,31);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__write_proc_9_0_i141);
MR_def_label(hlds__hlds_out__write_proc_9_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_proc_9_0_i142);
MR_def_label(hlds__hlds_out__write_proc_9_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
MR_def_label(hlds__hlds_out__write_proc_9_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 65;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_proc_9_0_i144);
MR_def_label(hlds__hlds_out__write_proc_9_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i151);
	}
	if (MR_LTAGS_TEST(MR_sv(17),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i151);
	}
	MR_sv(8) = MR_ctfield(1, MR_sv(17), 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i147);
MR_def_label(hlds__hlds_out__write_proc_9_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% arg_infos: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i148);
MR_def_label(hlds__hlds_out__write_proc_9_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,32);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__write_proc_9_0_i149);
MR_def_label(hlds__hlds_out__write_proc_9_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_proc_9_0_i151);
MR_def_label(hlds__hlds_out__write_proc_9_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,2)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i153);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		hlds__hlds_out__write_proc_9_0_i155);
MR_def_label(hlds__hlds_out__write_proc_9_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) == MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_proc_9_0_i164);
	}
MR_def_label(hlds__hlds_out__write_proc_9_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_stack_slots_2_0,
		hlds__hlds_out__write_proc_9_0_i156);
MR_def_label(hlds__hlds_out__write_proc_9_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i157);
MR_def_label(hlds__hlds_out__write_proc_9_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_stack_slots_6_0,
		hlds__hlds_out__write_proc_9_0_i158);
MR_def_label(hlds__hlds_out__write_proc_9_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_proc_9_0_i159);
MR_def_label(hlds__hlds_out__write_proc_9_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__write_proc_9_0_i160);
MR_def_label(hlds__hlds_out__write_proc_9_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_out__write_clause_head_8_0,
		hlds__hlds_out__write_proc_9_0_i161);
MR_def_label(hlds__hlds_out__write_proc_9_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_proc_9_0_i162);
MR_def_label(hlds__hlds_out__write_proc_9_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(33);
	MR_r6 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(34);
	MR_decr_sp(34);
	MR_np_tailcall_ent(hlds__hlds_out__write_goal_8_0);
MR_def_label(hlds__hlds_out__write_proc_9_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(34);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module108)
	MR_init_entry1(hlds__hlds_out__write_procs_2_9_0);
	MR_init_label4(hlds__hlds_out__write_procs_2_9_0,12,4,5,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_procs_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__write_procs_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_procs_2_9_0_i14);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__hlds_out__write_procs_2_9_0_i4);
MR_def_label(hlds__hlds_out__write_procs_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__write_proc_9_0,
		hlds__hlds_out__write_procs_2_9_0_i5);
MR_def_label(hlds__hlds_out__write_procs_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__hlds_out__write_procs_2_9_0_i12);
MR_def_label(hlds__hlds_out__write_procs_2_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module109)
	MR_init_entry1(hlds__hlds_out__write_procs_8_0);
	MR_init_label2(hlds__hlds_out__write_procs_8_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_procs_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		hlds__hlds_out__write_procs_8_0_i2);
MR_def_label(hlds__hlds_out__write_procs_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__hlds_out__write_procs_8_0_i3);
MR_def_label(hlds__hlds_out__write_procs_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_out__write_procs_2_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module110)
	MR_init_entry1(hlds__hlds_out__write_constraint_proofs_6_0);
	MR_init_label3(hlds__hlds_out__write_constraint_proofs_6_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_constraint_proofs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_constraint_proofs_6_0_i2);
MR_def_label(hlds__hlds_out__write_constraint_proofs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Proofs: \n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constraint_proofs_6_0_i3);
MR_def_label(hlds__hlds_out__write_constraint_proofs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_constraint_proofs_6_0_i4);
MR_def_label(hlds__hlds_out__write_constraint_proofs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_constraint_proof_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,13);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;

MR_BEGIN_MODULE(hlds__hlds_out_module111)
	MR_init_entry1(hlds__hlds_out__write_constraint_map_6_0);
	MR_init_label2(hlds__hlds_out__write_constraint_map_6_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_constraint_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_constraint_map_6_0_i2);
MR_def_label(hlds__hlds_out__write_constraint_map_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Constraint Map:\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constraint_map_6_0_i3);
MR_def_label(hlds__hlds_out__write_constraint_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_constraint_map_2_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_class_context_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_constraint_proofs_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_constraint_map_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_head_type_params_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_var_name_remap_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_pred_type_11_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_func_type_12_0);
MR_decl_entry(parse_tree__prog_out__write_pred_or_func_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_goal_type_0;
MR_decl_entry(hlds__hlds_pred__markers_to_marker_list_2_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_transformation_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_creation_0;

MR_BEGIN_MODULE(hlds__hlds_out_module112)
	MR_init_entry1(hlds__hlds_out__write_pred_6_0);
	MR_init_label8(hlds__hlds_out__write_pred_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,10,11,12,13,14,15,16,17)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,18,20,19,22,24,27,29,23)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,33,35,36,37,38,39,40,41)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,42,43,44,45,46,47,48,49)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,126,51,52,53,50,55,57,127)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,56,59,61,63,128,62,66,69)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,70,71,72,67,73,74,130,76)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,77,78,79,81,131,83,84,85)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,82,87,90,92,93,94,95,96)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,97,98,99,100,101,102,103,105)
	MR_init_label8(hlds__hlds_out__write_pred_6_0,106,107,108,109,111,134,116,112)
	MR_init_label3(hlds__hlds_out__write_pred_6_0,113,114,120)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		hlds__hlds_out__write_pred_6_0_i2);
MR_def_label(hlds__hlds_out__write_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__hlds_out__write_pred_6_0_i3);
MR_def_label(hlds__hlds_out__write_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		hlds__hlds_out__write_pred_6_0_i4);
MR_def_label(hlds__hlds_out__write_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		hlds__hlds_out__write_pred_6_0_i5);
MR_def_label(hlds__hlds_out__write_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		hlds__hlds_out__write_pred_6_0_i6);
MR_def_label(hlds__hlds_out__write_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		hlds__hlds_out__write_pred_6_0_i7);
MR_def_label(hlds__hlds_out__write_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		hlds__hlds_out__write_pred_6_0_i8);
MR_def_label(hlds__hlds_out__write_pred_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		hlds__hlds_out__write_pred_6_0_i9);
MR_def_label(hlds__hlds_out__write_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		hlds__hlds_out__write_pred_6_0_i10);
MR_def_label(hlds__hlds_out__write_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__hlds_out__write_pred_6_0_i11);
MR_def_label(hlds__hlds_out__write_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_class_context_2_0,
		hlds__hlds_out__write_pred_6_0_i12);
MR_def_label(hlds__hlds_out__write_pred_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_constraint_proofs_2_0,
		hlds__hlds_out__write_pred_6_0_i13);
MR_def_label(hlds__hlds_out__write_pred_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_constraint_map_2_0,
		hlds__hlds_out__write_pred_6_0_i14);
MR_def_label(hlds__hlds_out__write_pred_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		hlds__hlds_out__write_pred_6_0_i15);
MR_def_label(hlds__hlds_out__write_pred_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_head_type_params_2_0,
		hlds__hlds_out__write_pred_6_0_i16);
MR_def_label(hlds__hlds_out__write_pred_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_var_name_remap_2_0,
		hlds__hlds_out__write_pred_6_0_i17);
MR_def_label(hlds__hlds_out__write_pred_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_pred_6_0_i18);
MR_def_label(hlds__hlds_out__write_pred_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r2 = (MR_Integer) 118;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_pred_6_0_i20);
MR_def_label(hlds__hlds_out__write_pred_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i19);
	}
	MR_r1 = MR_sv(21);
	MR_sv(22) = (MR_Integer) 1;
	MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i22);
MR_def_label(hlds__hlds_out__write_pred_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(21);
	MR_sv(22) = (MR_Integer) 0;
MR_def_label(hlds__hlds_out__write_pred_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r2 = (MR_Integer) 67;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_pred_6_0_i24);
MR_def_label(hlds__hlds_out__write_pred_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i23);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(8);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(18);
	MR_r7 = MR_sv(15);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(22);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_pred_type_11_0,
		hlds__hlds_out__write_pred_6_0_i23);
MR_def_label(hlds__hlds_out__write_pred_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__hlds_out__write_pred_6_0_i29);
MR_def_label(hlds__hlds_out__write_pred_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(18);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(22);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_func_type_12_0,
		hlds__hlds_out__write_pred_6_0_i23);
MR_def_label(hlds__hlds_out__write_pred_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(21);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(11) = MR_ctfield(0, MR_sv(11), 6);
	MR_r2 = (MR_Integer) 67;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_pred_6_0_i33);
MR_def_label(hlds__hlds_out__write_pred_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i134);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_pred_6_0_i35);
MR_def_label(hlds__hlds_out__write_pred_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% pred id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i36);
MR_def_label(hlds__hlds_out__write_pred_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__write_pred_6_0_i37);
MR_def_label(hlds__hlds_out__write_pred_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_pred_6_0_i38);
MR_def_label(hlds__hlds_out__write_pred_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", category: ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i39);
MR_def_label(hlds__hlds_out__write_pred_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_out__write_pred_or_func_3_0,
		hlds__hlds_out__write_pred_6_0_i40);
MR_def_label(hlds__hlds_out__write_pred_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", status: ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i41);
MR_def_label(hlds__hlds_out__write_pred_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__hlds__hlds_out__import_status_to_string_1_0,
		hlds__hlds_out__write_pred_6_0_i42);
MR_def_label(hlds__hlds_out__write_pred_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i43);
MR_def_label(hlds__hlds_out__write_pred_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i44);
MR_def_label(hlds__hlds_out__write_pred_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% goal_type: ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i45);
MR_def_label(hlds__hlds_out__write_pred_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		hlds__hlds_out__write_pred_6_0_i46);
MR_def_label(hlds__hlds_out__write_pred_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, goal_type);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__write_pred_6_0_i47);
MR_def_label(hlds__hlds_out__write_pred_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i48);
MR_def_label(hlds__hlds_out__write_pred_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_pred__markers_to_marker_list_2_0,
		hlds__hlds_out__write_pred_6_0_i49);
MR_def_label(hlds__hlds_out__write_pred_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i51);
	}
MR_def_label(hlds__hlds_out__write_pred_6_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r2 = MR_sv(22);
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i50);
MR_def_label(hlds__hlds_out__write_pred_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% markers: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i52);
MR_def_label(hlds__hlds_out__write_pred_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_out__write_marker_list_3_0,
		hlds__hlds_out__write_pred_6_0_i53);
MR_def_label(hlds__hlds_out__write_pred_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i126);
MR_def_label(hlds__hlds_out__write_pred_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_r5;
	MR_sv(22) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_out__write_rtti_varmaps_7_0,
		hlds__hlds_out__write_pred_6_0_i55);
MR_def_label(hlds__hlds_out__write_pred_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__hlds_out__write_pred_6_0_i57);
MR_def_label(hlds__hlds_out__write_pred_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i56);
	}
MR_def_label(hlds__hlds_out__write_pred_6_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(17);
	MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i61);
MR_def_label(hlds__hlds_out__write_pred_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(22);
	MR_np_call_localret_ent(hlds__hlds_out__write_constraint_proofs_6_0,
		hlds__hlds_out__write_pred_6_0_i59);
MR_def_label(hlds__hlds_out__write_pred_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i127);
MR_def_label(hlds__hlds_out__write_pred_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__hlds_out__write_pred_6_0_i63);
MR_def_label(hlds__hlds_out__write_pred_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i62);
	}
MR_def_label(hlds__hlds_out__write_pred_6_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r3 = MR_sv(22);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i66);
MR_def_label(hlds__hlds_out__write_pred_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(22);
	MR_np_call_localret_ent(hlds__hlds_out__write_constraint_map_6_0,
		hlds__hlds_out__write_pred_6_0_i128);
MR_def_label(hlds__hlds_out__write_pred_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(19),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i67);
	}
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_r5;
	MR_sv(22) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("% head_type_params:\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i69);
MR_def_label(hlds__hlds_out__write_pred_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i70);
MR_def_label(hlds__hlds_out__write_pred_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(22);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_pred_6_0_i71);
MR_def_label(hlds__hlds_out__write_pred_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i72);
MR_def_label(hlds__hlds_out__write_pred_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r3 = MR_sv(22);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(6);
MR_def_label(hlds__hlds_out__write_pred_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(10) = MR_r5;
	MR_sv(22) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__write_var_types_7_0,
		hlds__hlds_out__write_pred_6_0_i73);
MR_def_label(hlds__hlds_out__write_pred_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__write_pred_6_0_i74);
MR_def_label(hlds__hlds_out__write_pred_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i76);
	}
MR_def_label(hlds__hlds_out__write_pred_6_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_2_0,
		hlds__hlds_out__write_pred_6_0_i81);
MR_def_label(hlds__hlds_out__write_pred_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_sv(11) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_pred_6_0_i77);
MR_def_label(hlds__hlds_out__write_pred_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% var name remap: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i78);
MR_def_label(hlds__hlds_out__write_pred_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__write_var_name_remap_5_0,
		hlds__hlds_out__write_pred_6_0_i79);
MR_def_label(hlds__hlds_out__write_pred_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_pred_6_0_i130);
MR_def_label(hlds__hlds_out__write_pred_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i83);
	}
MR_def_label(hlds__hlds_out__write_pred_6_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i82);
MR_def_label(hlds__hlds_out__write_pred_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__set_dump_opts_for_clauses_3_0,
		hlds__hlds_out__write_pred_6_0_i84);
MR_def_label(hlds__hlds_out__write_pred_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(22);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(6);
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_out__write_clauses_11_0,
		hlds__hlds_out__write_pred_6_0_i85);
MR_def_label(hlds__hlds_out__write_pred_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = (MR_Integer) 117;
	}
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		hlds__hlds_out__write_pred_6_0_i131);
MR_def_label(hlds__hlds_out__write_pred_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		hlds__hlds_out__write_pred_6_0_i87);
MR_def_label(hlds__hlds_out__write_pred_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(hlds__hlds_out__write_pred_6_0_i90) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_pred_6_0_i92) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_pred_6_0_i105) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_pred_6_0_i111));
MR_def_label(hlds__hlds_out__write_pred_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% special pred\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i134);
MR_def_label(hlds__hlds_out__write_pred_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("% instance method constraints:\n", 31);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i93);
MR_def_label(hlds__hlds_out__write_pred_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(5), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(22);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__write_pred_6_0_i94);
MR_def_label(hlds__hlds_out__write_pred_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_pred_6_0_i95);
MR_def_label(hlds__hlds_out__write_pred_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("instance constraints: ", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i96);
MR_def_label(hlds__hlds_out__write_pred_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(22);
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_pred_6_0_i97);
MR_def_label(hlds__hlds_out__write_pred_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_pred_6_0_i98);
MR_def_label(hlds__hlds_out__write_pred_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("method univ constraints: ", 25);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i99);
MR_def_label(hlds__hlds_out__write_pred_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_pred_6_0_i100);
MR_def_label(hlds__hlds_out__write_pred_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_pred_6_0_i101);
MR_def_label(hlds__hlds_out__write_pred_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("method exist constraints: ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i102);
MR_def_label(hlds__hlds_out__write_pred_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_pred_6_0_i103);
MR_def_label(hlds__hlds_out__write_pred_6_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_pred_6_0_i134);
MR_def_label(hlds__hlds_out__write_pred_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(2, MR_r1, 0);
	MR_sv(6) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = (MR_Word) MR_string_const("% transformed from ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i106);
MR_def_label(hlds__hlds_out__write_pred_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_pred_id_4_0,
		hlds__hlds_out__write_pred_6_0_i107);
MR_def_label(hlds__hlds_out__write_pred_6_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i108);
MR_def_label(hlds__hlds_out__write_pred_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_transformation);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__write_pred_6_0_i109);
MR_def_label(hlds__hlds_out__write_pred_6_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_pred_6_0_i134);
MR_def_label(hlds__hlds_out__write_pred_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i112);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_pred_6_0_i116);
	}
MR_def_label(hlds__hlds_out__write_pred_6_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r5 = MR_sv(13);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(hlds__hlds_out__write_procs_8_0,
		hlds__hlds_out__write_pred_6_0_i120);
MR_def_label(hlds__hlds_out__write_pred_6_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% assertion\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i134);
MR_def_label(hlds__hlds_out__write_pred_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("% created: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_pred_6_0_i113);
MR_def_label(hlds__hlds_out__write_pred_6_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_creation);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__write_pred_6_0_i114);
MR_def_label(hlds__hlds_out__write_pred_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_pred_6_0_i134);
MR_def_label(hlds__hlds_out__write_pred_6_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(string__to_int_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(list__member_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module113)
	MR_init_entry1(hlds__hlds_out__maybe_write_pred_6_0);
	MR_init_label8(hlds__hlds_out__maybe_write_pred_6_0,2,3,4,5,6,7,11,10)
	MR_init_label8(hlds__hlds_out__maybe_write_pred_6_0,21,22,20,25,26,75,9,36)
	MR_init_label8(hlds__hlds_out__maybe_write_pred_6_0,38,33,43,45,47,48,40,52)
	MR_init_label3(hlds__hlds_out__maybe_write_pred_6_0,54,70,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__maybe_write_pred_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__hlds_out__maybe_write_pred_6_0_i2);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		hlds__hlds_out__maybe_write_pred_6_0_i3);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 114;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		hlds__hlds_out__maybe_write_pred_6_0_i4);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r2 = (MR_Integer) 115;
	}
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		hlds__hlds_out__maybe_write_pred_6_0_i5);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__maybe_write_pred_6_0_i6);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__hlds_out__maybe_write_pred_6_0_i7);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i11);
	}
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i10);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i9);
	}
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(9) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(10));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__hlds_out__maybe_write_pred_6_0_i20);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__member_2_1,
		hlds__hlds_out__maybe_write_pred_6_0_i21);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		hlds__hlds_out__maybe_write_pred_6_0_i22);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_sv(3) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(10));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i75);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(8);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(9);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__hlds_out__maybe_write_pred_6_0_i25);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__member_2_0,
		hlds__hlds_out__maybe_write_pred_6_0_i26);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i70);
	}
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_out__write_pred_6_0);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 73;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__maybe_write_pred_6_0_i36);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i33);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		hlds__hlds_out__maybe_write_pred_6_0_i38);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i70);
	}
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 73;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__maybe_write_pred_6_0_i43);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i40);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		hlds__hlds_out__maybe_write_pred_6_0_i45);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i40);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__hlds_out__maybe_write_pred_6_0_i47);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		hlds__hlds_out__maybe_write_pred_6_0_i48);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i40);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i40);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i70);
	}
	}
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 85;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__maybe_write_pred_6_0_i52);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i30);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		hlds__hlds_out__maybe_write_pred_6_0_i54);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__maybe_write_pred_6_0_i30);
	}
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
MR_def_label(hlds__hlds_out__maybe_write_pred_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_out__write_pred_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module114)
	MR_init_entry1(hlds__hlds_out__write_trace_mutable_var_hlds_4_0);
	MR_init_label6(hlds__hlds_out__write_trace_mutable_var_hlds_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_trace_mutable_var_hlds_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_trace_mutable_var_hlds_4_0_i2);
MR_def_label(hlds__hlds_out__write_trace_mutable_var_hlds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_trace_mutable_var_hlds_4_0_i3);
MR_def_label(hlds__hlds_out__write_trace_mutable_var_hlds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% mutable ", 10);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_trace_mutable_var_hlds_4_0_i4);
MR_def_label(hlds__hlds_out__write_trace_mutable_var_hlds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_trace_mutable_var_hlds_4_0_i5);
MR_def_label(hlds__hlds_out__write_trace_mutable_var_hlds_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_trace_mutable_var_hlds_4_0_i6);
MR_def_label(hlds__hlds_out__write_trace_mutable_var_hlds_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("!", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_trace_mutable_var_hlds_4_0_i7);
MR_def_label(hlds__hlds_out__write_trace_mutable_var_hlds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_cons_id_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_static_cons_0;

MR_BEGIN_MODULE(hlds__hlds_out_module115)
	MR_init_entry1(hlds__hlds_out__write_static_cons_7_0);
	MR_init_label8(hlds__hlds_out__write_static_cons_7_0,2,3,4,5,6,8,9,10)
	MR_init_label3(hlds__hlds_out__write_static_cons_7_0,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_static_cons_7_0)
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
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_static_cons_7_0_i2);
MR_def_label(hlds__hlds_out__write_static_cons_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_static_cons_7_0_i3);
MR_def_label(hlds__hlds_out__write_static_cons_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_static_cons_7_0_i4);
MR_def_label(hlds__hlds_out__write_static_cons_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_cons_id_4_0,
		hlds__hlds_out__write_static_cons_7_0_i5);
MR_def_label(hlds__hlds_out__write_static_cons_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_static_cons_7_0_i6);
MR_def_label(hlds__hlds_out__write_static_cons_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_static_cons_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_static_cons_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, static_cons);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(hlds__hlds_out__write_static_cons_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_static_cons_7_0_i9);
MR_def_label(hlds__hlds_out__write_static_cons_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_static_cons_7_0_i10);
MR_def_label(hlds__hlds_out__write_static_cons_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_static_cons_7_0_i11);
MR_def_label(hlds__hlds_out__write_static_cons_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_static_cons_7_0_i12);
MR_def_label(hlds__hlds_out__write_static_cons_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_static_cons_7_0_i13);
MR_def_label(hlds__hlds_out__write_static_cons_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_static_cons_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, static_cons);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module116)
	MR_init_entry1(hlds__hlds_out__write_type_info_locn_8_0);
	MR_init_label8(hlds__hlds_out__write_type_info_locn_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(hlds__hlds_out__write_type_info_locn_8_0,10,13,14,12,16,17,18,19)
	MR_init_label5(hlds__hlds_out__write_type_info_locn_8_0,20,21,22,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_type_info_locn_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i2);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i3);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_type_info_locn_8_0_i4);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (number ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i5);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		hlds__hlds_out__write_type_info_locn_8_0_i6);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i7);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i8);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i9);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i10);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_type_info_locn_8_0_i12);
	}
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("type_info(", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i13);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_type_info_locn_8_0_i14);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i20);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("typeclass_info(", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i16);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_type_info_locn_8_0_i17);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i18);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i19);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i20);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (number ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i21);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		hlds__hlds_out__write_type_info_locn_8_0_i22);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i23);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_type_info_locn_8_0_i24);
MR_def_label(hlds__hlds_out__write_type_info_locn_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module117)
	MR_init_entry1(hlds__hlds_out__write_typeclass_info_var_8_0);
	MR_init_label6(hlds__hlds_out__write_typeclass_info_var_8_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_typeclass_info_var_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_typeclass_info_var_8_0_i2);
MR_def_label(hlds__hlds_out__write_typeclass_info_var_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_typeclass_info_var_8_0_i3);
MR_def_label(hlds__hlds_out__write_typeclass_info_var_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__write_typeclass_info_var_8_0_i4);
MR_def_label(hlds__hlds_out__write_typeclass_info_var_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_typeclass_info_var_8_0_i5);
MR_def_label(hlds__hlds_out__write_typeclass_info_var_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0,
		hlds__hlds_out__write_typeclass_info_var_8_0_i6);
MR_def_label(hlds__hlds_out__write_typeclass_info_var_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_typeclass_info_var_8_0_i7);
MR_def_label(hlds__hlds_out__write_typeclass_info_var_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_rtti__rtti_varmaps_var_info_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module118)
	MR_init_entry1(hlds__hlds_out__write_rtti_var_info_8_0);
	MR_init_label8(hlds__hlds_out__write_rtti_var_info_8_0,2,3,4,5,6,7,8,9)
	MR_init_label6(hlds__hlds_out__write_rtti_var_info_8_0,10,16,17,13,14,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_rtti_var_info_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i2);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i3);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i4);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (number ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i5);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(term__var_to_int_2_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i6);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i7);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i8);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i9);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i10);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_rtti_var_info_8_0_i13);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(hlds__hlds_out__write_rtti_var_info_8_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("hlds_out.m", 10);
	MR_r2 = (MR_Word) MR_string_const("write_rtti_var_info: non rtti var", 33);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i11);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("typeclass_info for ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i17);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i11);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("type_info for ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i14);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__write_rtti_var_info_8_0_i11);
MR_def_label(hlds__hlds_out__write_rtti_var_info_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module119)
	MR_init_entry1(hlds__hlds_out__write_untuple_info_2_7_0);
	MR_init_label5(hlds__hlds_out__write_untuple_info_2_7_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_untuple_info_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_untuple_info_2_7_0_i2);
MR_def_label(hlds__hlds_out__write_untuple_info_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_untuple_info_2_7_0_i3);
MR_def_label(hlds__hlds_out__write_untuple_info_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__write_untuple_info_2_7_0_i4);
MR_def_label(hlds__hlds_out__write_untuple_info_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t-> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_untuple_info_2_7_0_i5);
MR_def_label(hlds__hlds_out__write_untuple_info_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_untuple_info_2_7_0_i6);
MR_def_label(hlds__hlds_out__write_untuple_info_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;

MR_BEGIN_MODULE(hlds__hlds_out_module120)
	MR_init_entry1(hlds__hlds_out__write_class_defn_4_0);
	MR_init_label8(hlds__hlds_out__write_class_defn_4_0,2,3,4,5,6,7,11,12)
	MR_init_label8(hlds__hlds_out__write_class_defn_4_0,13,14,15,8,18,20,19,22)
	MR_init_label8(hlds__hlds_out__write_class_defn_4_0,23,24,25,26,27,28,29,30)
	MR_init_label7(hlds__hlds_out__write_class_defn_4_0,31,32,33,34,35,36,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_class_defn_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_class_defn_4_0_i2);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_defn_4_0_i3);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_and_arity_3_0,
		hlds__hlds_out__write_class_defn_4_0_i4);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_defn_4_0_i5);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 9);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(term__context_file_2_0,
		hlds__hlds_out__write_class_defn_4_0_i6);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		hlds__hlds_out__write_class_defn_4_0_i7);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(7), (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_class_defn_4_0_i8);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_class_defn_4_0_i11);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% context: file \140", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_defn_4_0_i12);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_defn_4_0_i13);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\', line ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_defn_4_0_i14);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_class_defn_4_0_i15);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_defn_4_0_i8);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_class_defn_4_0_i18);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 118;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_class_defn_4_0_i20);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_class_defn_4_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_sv(7) = (MR_Integer) 1;
	MR_GOTO_LAB(hlds__hlds_out__write_class_defn_4_0_i22);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(7) = (MR_Integer) 0;
MR_def_label(hlds__hlds_out__write_class_defn_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_class_defn_4_0_i23);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Vars: ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_defn_4_0_i24);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__write_class_defn_4_0_i25);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_class_defn_4_0_i26);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_class_defn_4_0_i27);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Functional dependencies: ", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_defn_4_0_i28);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,9);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_class_defn_4_0_i29);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_class_defn_4_0_i30);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_class_defn_4_0_i31);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Constraints: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_defn_4_0_i32);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_class_defn_4_0_i33);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_class_defn_4_0_i34);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_class_defn_4_0_i35);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Class Methods: ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_defn_4_0_i36);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_class_defn_4_0_i37);
MR_def_label(hlds__hlds_out__write_class_defn_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module121)
	MR_init_entry1(hlds__hlds_out__hlds_output_fundep_3_0);
	MR_init_label6(hlds__hlds_out__hlds_output_fundep_3_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_output_fundep_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__hlds_output_fundep_3_0_i2);
MR_def_label(hlds__hlds_out__hlds_output_fundep_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__hlds_output_fundep_3_0_i3);
MR_def_label(hlds__hlds_out__hlds_output_fundep_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,11);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_output_fundep_3_0_i4);
MR_def_label(hlds__hlds_out__hlds_output_fundep_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_output_fundep_3_0_i5);
MR_def_label(hlds__hlds_out__hlds_output_fundep_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__hlds_output_fundep_3_0_i6);
MR_def_label(hlds__hlds_out__hlds_output_fundep_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_output_fundep_3_0_i7);
MR_def_label(hlds__hlds_out__hlds_output_fundep_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module122)
	MR_init_entry1(hlds__hlds_out__write_class_proc_3_0);
	MR_init_label6(hlds__hlds_out__write_class_proc_3_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_class_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("hlds_class_proc(pred_id:", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_proc_3_0_i2);
MR_def_label(hlds__hlds_out__write_class_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__write_class_proc_3_0_i3);
MR_def_label(hlds__hlds_out__write_class_proc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_class_proc_3_0_i4);
MR_def_label(hlds__hlds_out__write_class_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", proc_id:", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_class_proc_3_0_i5);
MR_def_label(hlds__hlds_out__write_class_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__write_class_proc_3_0_i6);
MR_def_label(hlds__hlds_out__write_class_proc_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_class_proc_3_0_i7);
MR_def_label(hlds__hlds_out__write_class_proc_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module123)
	MR_init_entry1(hlds__hlds_out__write_instance_defns_4_0);
	MR_init_label4(hlds__hlds_out__write_instance_defns_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_instance_defns_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_instance_defns_4_0_i2);
MR_def_label(hlds__hlds_out__write_instance_defns_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defns_4_0_i3);
MR_def_label(hlds__hlds_out__write_instance_defns_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_and_arity_3_0,
		hlds__hlds_out__write_instance_defns_4_0_i4);
MR_def_label(hlds__hlds_out__write_instance_defns_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defns_4_0_i5);
MR_def_label(hlds__hlds_out__write_instance_defns_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_instance_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_instance_methods_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module124)
	MR_init_entry1(hlds__hlds_out__write_instance_defn_4_0);
	MR_init_label8(hlds__hlds_out__write_instance_defn_4_0,2,3,7,8,9,10,11,4)
	MR_init_label8(hlds__hlds_out__write_instance_defn_4_0,14,16,15,18,19,20,21,22)
	MR_init_label8(hlds__hlds_out__write_instance_defn_4_0,23,24,25,26,27,29,31,28)
	MR_init_label7(hlds__hlds_out__write_instance_defn_4_0,33,45,35,36,37,38,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_instance_defn_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(term__context_file_2_0,
		hlds__hlds_out__write_instance_defn_4_0_i2);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		hlds__hlds_out__write_instance_defn_4_0_i3);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_instance_defn_4_0_i4);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i7);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% context: file \140", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i8);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i9);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\', line ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i10);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i11);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i4);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		hlds__hlds_out__write_instance_defn_4_0_i14);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 118;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__write_instance_defn_4_0_i16);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__write_instance_defn_4_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_type_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 1;
	MR_GOTO_LAB(hlds__hlds_out__write_instance_defn_4_0_i18);
	}
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_type_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 0;
	}
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i19);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Types: ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i20);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_instance_defn_4_0_i21);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_instance_defn_4_0_i22);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i23);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Constraints: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i24);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__write_instance_defn_4_0_i25);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_instance_defn_4_0_i26);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i27);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_instance_defn_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("% abstract", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i28);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("% Instance Methods: ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i31);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_instance_methods_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i28);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_instance_defn_4_0_i33);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_instance_defn_4_0_i35);
	}
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__write_constraint_proofs_6_0,
		hlds__hlds_out__write_instance_defn_4_0_i40);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_sv(6), 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i36);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% procedures: ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i37);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,33);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__write_instance_defn_4_0_i38);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__write_instance_defn_4_0_i45);
MR_def_label(hlds__hlds_out__write_instance_defn_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module125)
	MR_init_entry1(hlds__hlds_out__write_table_arg_info_6_0);
	MR_init_label8(hlds__hlds_out__write_table_arg_info_6_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_table_arg_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_table_arg_info_6_0_i2);
MR_def_label(hlds__hlds_out__write_table_arg_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		hlds__hlds_out__write_table_arg_info_6_0_i3);
MR_def_label(hlds__hlds_out__write_table_arg_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_table_arg_info_6_0_i4);
MR_def_label(hlds__hlds_out__write_table_arg_info_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" in slot ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_table_arg_info_6_0_i5);
MR_def_label(hlds__hlds_out__write_table_arg_info_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_table_arg_info_6_0_i6);
MR_def_label(hlds__hlds_out__write_table_arg_info_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", type ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_table_arg_info_6_0_i7);
MR_def_label(hlds__hlds_out__write_table_arg_info_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		hlds__hlds_out__write_table_arg_info_6_0_i8);
MR_def_label(hlds__hlds_out__write_table_arg_info_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_table_arg_info_6_0_i9);
MR_def_label(hlds__hlds_out__write_table_arg_info_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module126)
	MR_init_entry1(hlds__hlds_out__write_table_tvar_map_entry_5_0);
	MR_init_label5(hlds__hlds_out__write_table_tvar_map_entry_5_0,2,3,4,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_table_tvar_map_entry_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("% typeinfo for ", 15);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_table_tvar_map_entry_5_0_i2);
MR_def_label(hlds__hlds_out__write_table_tvar_map_entry_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		hlds__hlds_out__write_table_tvar_map_entry_5_0_i3);
MR_def_label(hlds__hlds_out__write_table_tvar_map_entry_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_table_tvar_map_entry_5_0_i4);
MR_def_label(hlds__hlds_out__write_table_tvar_map_entry_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_table_tvar_map_entry_5_0_i5);
MR_def_label(hlds__hlds_out__write_table_tvar_map_entry_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_table_tvar_map_entry_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_sv(4), 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("direct in register %d\n", 22);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(hlds__hlds_out__write_table_tvar_map_entry_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr5 = MR_sv(4);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(1, MR_tempr5, 1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("indirect from register %d, offset %d\n", 37);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__format_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module127)
	MR_init_entry1(hlds__hlds_out__write_space_and_table_trie_step_5_0);
	MR_init_label8(hlds__hlds_out__write_space_and_table_trie_step_5_0,2,5,6,7,8,9,10,11)
	MR_init_label8(hlds__hlds_out__write_space_and_table_trie_step_5_0,12,13,14,15,16,17,18,20)
	MR_init_label6(hlds__hlds_out__write_space_and_table_trie_step_5_0,21,22,24,25,26,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_space_and_table_trie_step_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_space_and_table_trie_step_5_0_i2);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i5) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i16) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i20) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i24));
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i6) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i7) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i8) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i9) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i10) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i11) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i12) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i13) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i14) MR_AND
		MR_LABEL_AP(hlds__hlds_out__write_space_and_table_trie_step_5_0_i15));
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("string", 6);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float", 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dummy", 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("poly", 4);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("poly_fast_loose", 15);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typeinfo", 8);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typeclassinfo", 13);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("promise_implied", 15);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__write_space_and_table_trie_step_5_0_i17);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_space_and_table_trie_step_5_0_i18);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("enum(", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_space_and_table_trie_step_5_0_i3);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(2, MR_r3, 0);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		hlds__hlds_out__write_space_and_table_trie_step_5_0_i21);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_space_and_table_trie_step_5_0_i22);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("user(", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_space_and_table_trie_step_5_0_i3);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(3, MR_r3, 0);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		hlds__hlds_out__write_space_and_table_trie_step_5_0_i25);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_space_and_table_trie_step_5_0_i26);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("user_fast_loose(", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__write_space_and_table_trie_step_5_0_i3);
MR_def_label(hlds__hlds_out__write_space_and_table_trie_step_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module128)
	MR_init_entry1(hlds__hlds_out__write_constraint_proof_6_0);
	MR_init_label7(hlds__hlds_out__write_constraint_proof_6_0,2,3,4,5,8,7,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_constraint_proof_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_constraint_proof_6_0_i2);
MR_def_label(hlds__hlds_out__write_constraint_proof_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constraint_proof_6_0_i3);
MR_def_label(hlds__hlds_out__write_constraint_proof_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__write_constraint_proof_6_0_i4);
MR_def_label(hlds__hlds_out__write_constraint_proof_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constraint_proof_6_0_i5);
MR_def_label(hlds__hlds_out__write_constraint_proof_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_constraint_proof_6_0_i7);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(4), 0);
	MR_r1 = (MR_Word) MR_string_const("apply instance decl #", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constraint_proof_6_0_i8);
MR_def_label(hlds__hlds_out__write_constraint_proof_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(hlds__hlds_out__write_constraint_proof_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_sv(4), 0);
	MR_r1 = (MR_Word) MR_string_const("super class of ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constraint_proof_6_0_i10);
MR_def_label(hlds__hlds_out__write_constraint_proof_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module129)
	MR_init_entry1(hlds__hlds_out__write_constraint_map_2_7_0);
	MR_init_label8(hlds__hlds_out__write_constraint_map_2_7_0,2,3,5,7,8,9,10,11)
	MR_init_label2(hlds__hlds_out__write_constraint_map_2_7_0,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__write_constraint_map_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		hlds__hlds_out__write_constraint_map_2_7_0_i2);
MR_def_label(hlds__hlds_out__write_constraint_map_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constraint_map_2_7_0_i3);
MR_def_label(hlds__hlds_out__write_constraint_map_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__write_constraint_map_2_7_0_i5);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("(A, ", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constraint_map_2_7_0_i7);
MR_def_label(hlds__hlds_out__write_constraint_map_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("(E, ", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constraint_map_2_7_0_i7);
MR_def_label(hlds__hlds_out__write_constraint_map_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		hlds__hlds_out__write_constraint_map_2_7_0_i8);
MR_def_label(hlds__hlds_out__write_constraint_map_2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,9,1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\"", 1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		hlds__hlds_out__write_constraint_map_2_7_0_i9);
MR_def_label(hlds__hlds_out__write_constraint_map_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__write_constraint_map_2_7_0_i10);
MR_def_label(hlds__hlds_out__write_constraint_map_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__write_constraint_map_2_7_0_i11);
MR_def_label(hlds__hlds_out__write_constraint_map_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__write_constraint_map_2_7_0_i12);
MR_def_label(hlds__hlds_out__write_constraint_map_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__write_constraint_map_2_7_0_i13);
MR_def_label(hlds__hlds_out__write_constraint_map_2_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module130)
	MR_init_entry1(fn__hlds__hlds_out__add_mode_qualifier_2_0);
	MR_init_label1(fn__hlds__hlds_out__add_mode_qualifier_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__add_mode_qualifier_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r2, 0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,28);
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__mode_to_term_with_context_2_0,
		fn__hlds__hlds_out__add_mode_qualifier_2_0_i2);
MR_def_label(fn__hlds__hlds_out__add_mode_qualifier_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module131)
	MR_init_entry1(fn__hlds__hlds_out__map_inst_to_term_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__map_inst_to_term_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__hlds__hlds_out__inst_to_term_with_context_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(hlds__hlds_out_module132)
	MR_init_entry1(__Unify___hlds__hlds_out__expanded_inst_info_0_0);
	MR_init_label4(__Unify___hlds__hlds_out__expanded_inst_info_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hlds_out__expanded_inst_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__expanded_inst_info_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___hlds__hlds_out__expanded_inst_info_0_0_i4);
MR_def_label(__Unify___hlds__hlds_out__expanded_inst_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__expanded_inst_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___hlds__hlds_out__expanded_inst_info_0_0_i6);
MR_def_label(__Unify___hlds__hlds_out__expanded_inst_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__expanded_inst_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___hlds__hlds_out__expanded_inst_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_out__expanded_inst_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(hlds__hlds_out_module133)
	MR_init_entry1(__Compare___hlds__hlds_out__expanded_inst_info_0_0);
	MR_init_label5(__Compare___hlds__hlds_out__expanded_inst_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hlds_out__expanded_inst_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__expanded_inst_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_out__expanded_inst_info_0_0_i2);
MR_def_label(__Compare___hlds__hlds_out__expanded_inst_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_out__expanded_inst_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___hlds__hlds_out__expanded_inst_info_0_0_i5);
MR_def_label(__Compare___hlds__hlds_out__expanded_inst_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__expanded_inst_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___hlds__hlds_out__expanded_inst_info_0_0_i9);
MR_def_label(__Compare___hlds__hlds_out__expanded_inst_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__expanded_inst_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___hlds__hlds_out__expanded_inst_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module134)
	MR_init_entry1(__Unify___hlds__hlds_out__maybe_vartypes_0_0);
	MR_init_label4(__Unify___hlds__hlds_out__maybe_vartypes_0_0,14,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_out__maybe_vartypes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__maybe_vartypes_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__maybe_vartypes_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__hlds_out__maybe_vartypes_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_out__maybe_vartypes_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__maybe_vartypes_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___hlds__hlds_out__maybe_vartypes_0_0_i7);
MR_def_label(__Unify___hlds__hlds_out__maybe_vartypes_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__maybe_vartypes_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___hlds__hlds_out__maybe_vartypes_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module135)
	MR_init_entry1(__Compare___hlds__hlds_out__maybe_vartypes_0_0);
	MR_init_label6(__Compare___hlds__hlds_out__maybe_vartypes_0_0,24,7,5,9,11,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_out__maybe_vartypes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__maybe_vartypes_0_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__maybe_vartypes_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__maybe_vartypes_0_0_i7);
	}
MR_def_label(__Compare___hlds__hlds_out__maybe_vartypes_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_out__maybe_vartypes_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_out__maybe_vartypes_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__maybe_vartypes_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_out__maybe_vartypes_0_0,9)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___hlds__hlds_out__maybe_vartypes_0_0_i11);
MR_def_label(__Compare___hlds__hlds_out__maybe_vartypes_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__maybe_vartypes_0_0_i16);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___hlds__hlds_out__maybe_vartypes_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module136)
	MR_init_entry1(fn__hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_format_inst_name_4_0);
MR_decl_entry(check_hlds__mode_util__inst_lookup_3_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module137)
	MR_init_entry1(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0);
	MR_init_label5(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,3,2,6,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_np_call_localret_ent(set__member_2_0,
		hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0_i3);
MR_def_label(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("...", 3);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
MR_def_label(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,22);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_inst_name_4_0);
MR_def_label(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(2), 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0_i9);
MR_def_label(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_ctfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(set__insert_3_0,
		hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0_i10);
MR_def_label(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,22);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_inst_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);
MR_decl_entry(string__char_to_string_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module138)
	MR_init_entry1(hlds__hlds_out__IntroducedFrom__pred__cons_id_to_string__305__1_3_0);
	MR_init_label2(hlds__hlds_out__IntroducedFrom__pred__cons_id_to_string__305__1_3_0,16,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__IntroducedFrom__pred__cons_id_to_string__305__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(hlds__hlds_out__IntroducedFrom__pred__cons_id_to_string__305__1_3_0_i16);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("star", 4);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(hlds__hlds_out__IntroducedFrom__pred__cons_id_to_string__305__1_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(string__char_to_string_2_0,
		hlds__hlds_out__IntroducedFrom__pred__cons_id_to_string__305__1_3_0_i5);
MR_def_label(hlds__hlds_out__IntroducedFrom__pred__cons_id_to_string__305__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term_io__write_variable_4_0);

MR_BEGIN_MODULE(hlds__hlds_out_module139)
	MR_init_entry1(hlds__hlds_out__IntroducedFrom__pred__write_promise__1027__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__IntroducedFrom__pred__write_promise__1027__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_tailcall_ent(term_io__write_variable_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_llds__key_stack_slot_to_abs_locn_2_0);

MR_BEGIN_MODULE(hlds__hlds_out_module140)
	MR_init_entry1(fn__hlds__hlds_out__IntroducedFrom__func__write_stack_slots__3125__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__IntroducedFrom__func__write_stack_slots__3125__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_np_tailcall_ent(fn__hlds__hlds_llds__key_stack_slot_to_abs_locn_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module141)
	MR_init_entry1(fn__hlds__hlds_out__IntroducedFrom__func__inst_to_term_with_context__4169__1_3_0);
	MR_init_label2(fn__hlds__hlds_out__IntroducedFrom__func__inst_to_term_with_context__4169__1_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__IntroducedFrom__func__inst_to_term_with_context__4169__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,2,29);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__hlds__hlds_out__IntroducedFrom__func__inst_to_term_with_context__4169__1_3_0_i2);
MR_def_label(fn__hlds__hlds_out__IntroducedFrom__func__inst_to_term_with_context__4169__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		fn__hlds__hlds_out__IntroducedFrom__func__inst_to_term_with_context__4169__1_3_0_i3);
MR_def_label(fn__hlds__hlds_out__IntroducedFrom__func__inst_to_term_with_context__4169__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(4);
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__write_promise_type_3_0);

MR_BEGIN_MODULE(hlds__hlds_out_module142)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0);
	MR_init_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,2,5,6,3,8,9,10,11)
	MR_init_label3(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__IntroducedFrom__pred__write_promise__1027__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const(":- promise all [", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i5);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(io__write_list_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i6);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] (\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- all [", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i8);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(io__write_list_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i9);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i10);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_newline_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i11);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__write_promise_type_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i12);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_newline_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i13);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_52_44_32_56_93_95_48_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r7 = MR_sv(8);
	MR_r1 = MR_ctfield(0, MR_sv(7), 1);
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r6 = (MR_Word) MR_string_const(").\n", 3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(hlds__hlds_out__write_goal_a_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_can_cgc_0;

MR_BEGIN_MODULE(hlds__hlds_out_module143)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0);
	MR_init_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,4,5,6,7,8,9,12,10)
	MR_init_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,17,18,19,20,16,24,25,28)
	MR_init_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,29,27,31,32,14,37,38,39)
	MR_init_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,41,42,43,46,47,48,51,52)
	MR_init_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,54,56,57,58,53,61,62,63)
	MR_init_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,65,67,69,70,71,72,73,76)
	MR_init_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,78,79,80,81,77,84,85,87)
	MR_init_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,89,90,91,92,93,94,95,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i4) MR_AND
		MR_LABEL_AP(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i51) MR_AND
		MR_LABEL_AP(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i69) MR_AND
		MR_LABEL_AP(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i76));
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_sv(7) = MR_ctfield(0, MR_r1, 2);
	MR_sv(8) = MR_ctfield(0, MR_r1, 3);
	MR_sv(9) = MR_ctfield(0, MR_r1, 4);
	MR_sv(10) = MR_ctfield(0, MR_r1, 5);
	MR_sv(11) = MR_ctfield(0, MR_r1, 6);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i5);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i6);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i7);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" := ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i8);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i9);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i10);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i12);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% cell_is_unique\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i10);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i17);
	}
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i16);
	}
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(11), 1);
	MR_sv(5) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i18);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% take address fields: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i19);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__write_intlist_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i20);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i16);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i14);
	}
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i24);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% term size ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i25);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i27);
	}
	MR_sv(2) = MR_ctfield(0, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("const ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i28);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i29);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("var ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i31);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i32);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i2) MR_AND
		MR_LABEL_AP(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i37) MR_AND
		MR_LABEL_AP(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i41) MR_AND
		MR_LABEL_AP(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i46));
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i38);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% construct statically\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i39);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__write_static_cons_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, static_cons);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(2, MR_r3, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i42);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" construct in region: ", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i43);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i95);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_ctfield(3, MR_r3, 0), 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i47);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% reuse cell: ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i48);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i95);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_sv(7) = MR_ctfield(1, MR_r1, 2);
	MR_sv(8) = MR_ctfield(1, MR_r1, 3);
	MR_sv(9) = MR_ctfield(1, MR_r1, 4);
	MR_sv(10) = MR_ctfield(1, MR_r1, 5);
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i52);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 71;
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i54);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i56);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Compile time garbage collect: ", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i57);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, can_cgc);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(io__write_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i58);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i53);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i61);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i62);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i63);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i65);
	}
	MR_r1 = (MR_Word) MR_string_const(" ?= ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i67);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" => ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i67);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_ctfield(2, MR_r1, 0);
	MR_sv(4) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i70);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i71);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i72);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" := ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i73);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i95);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i77);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_sv(4) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i78);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i79);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i80);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" == ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i81);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i95);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(3, MR_r1, 1);
	MR_sv(6) = MR_ctfield(3, MR_r1, 2);
	MR_sv(7) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i84);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i85);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i87);
	}
	MR_r1 = (MR_Word) MR_string_const("can_fail, ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i89);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot_fail, ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i89);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mode: ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i90);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__mercury_output_uni_mode_4_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i91);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i92);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i93);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% type-info vars: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i94);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0_i95);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module144)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0);
	MR_init_label8(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,2,3,21,5,7,8,9,10)
	MR_init_label4(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,12,14,15,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_np_call_localret_ent(fn__hlds__hlds_out__cons_id_to_string_1_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i5);
	}
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i7);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i8);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i9);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 117;
	MR_np_call_localret_ent(libs__globals__io_lookup_string_option_4_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i10);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 97;
	MR_np_call_localret_ent(string__contains_char_2_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i12);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i4);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% arg-modes ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i15);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__mercury_format_uni_mode_list_4_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0_i21);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_52_93_95_48_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module145)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_111_109_101_95_95_91_49_44_32_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_115_111_109_101_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module146)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0);
	MR_init_label3(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%-------- Insts --------\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%%% Not yet implemented, sorry.\n", 32);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out_module147)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0);
	MR_init_label3(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%-------- Modes --------\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%%% Not yet implemented, sorry.\n", 32);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_out_maybe_bunch_0(void)
{
	hlds__hlds_out_module0();
	hlds__hlds_out_module1();
	hlds__hlds_out_module2();
	hlds__hlds_out_module3();
	hlds__hlds_out_module4();
	hlds__hlds_out_module5();
	hlds__hlds_out_module6();
	hlds__hlds_out_module7();
	hlds__hlds_out_module8();
	hlds__hlds_out_module9();
	hlds__hlds_out_module10();
	hlds__hlds_out_module11();
	hlds__hlds_out_module12();
	hlds__hlds_out_module13();
	hlds__hlds_out_module14();
	hlds__hlds_out_module15();
	hlds__hlds_out_module16();
	hlds__hlds_out_module17();
	hlds__hlds_out_module18();
	hlds__hlds_out_module19();
	hlds__hlds_out_module20();
	hlds__hlds_out_module21();
	hlds__hlds_out_module22();
	hlds__hlds_out_module23();
	hlds__hlds_out_module24();
	hlds__hlds_out_module25();
	hlds__hlds_out_module26();
	hlds__hlds_out_module27();
	hlds__hlds_out_module28();
	hlds__hlds_out_module29();
	hlds__hlds_out_module30();
	hlds__hlds_out_module31();
	hlds__hlds_out_module32();
	hlds__hlds_out_module33();
	hlds__hlds_out_module34();
	hlds__hlds_out_module35();
	hlds__hlds_out_module36();
	hlds__hlds_out_module37();
	hlds__hlds_out_module38();
	hlds__hlds_out_module39();
}

static void mercury__hlds__hlds_out_maybe_bunch_1(void)
{
	hlds__hlds_out_module40();
	hlds__hlds_out_module41();
	hlds__hlds_out_module42();
	hlds__hlds_out_module43();
	hlds__hlds_out_module44();
	hlds__hlds_out_module45();
	hlds__hlds_out_module46();
	hlds__hlds_out_module47();
	hlds__hlds_out_module48();
	hlds__hlds_out_module49();
	hlds__hlds_out_module50();
	hlds__hlds_out_module51();
	hlds__hlds_out_module52();
	hlds__hlds_out_module53();
	hlds__hlds_out_module54();
	hlds__hlds_out_module55();
	hlds__hlds_out_module56();
	hlds__hlds_out_module57();
	hlds__hlds_out_module58();
	hlds__hlds_out_module59();
	hlds__hlds_out_module60();
	hlds__hlds_out_module61();
	hlds__hlds_out_module62();
	hlds__hlds_out_module63();
	hlds__hlds_out_module64();
	hlds__hlds_out_module65();
	hlds__hlds_out_module66();
	hlds__hlds_out_module67();
	hlds__hlds_out_module68();
	hlds__hlds_out_module69();
	hlds__hlds_out_module70();
	hlds__hlds_out_module71();
	hlds__hlds_out_module72();
	hlds__hlds_out_module73();
	hlds__hlds_out_module74();
	hlds__hlds_out_module75();
	hlds__hlds_out_module76();
	hlds__hlds_out_module77();
	hlds__hlds_out_module78();
	hlds__hlds_out_module79();
}

static void mercury__hlds__hlds_out_maybe_bunch_2(void)
{
	hlds__hlds_out_module80();
	hlds__hlds_out_module81();
	hlds__hlds_out_module82();
	hlds__hlds_out_module83();
	hlds__hlds_out_module84();
	hlds__hlds_out_module85();
	hlds__hlds_out_module86();
	hlds__hlds_out_module87();
	hlds__hlds_out_module88();
	hlds__hlds_out_module89();
	hlds__hlds_out_module90();
	hlds__hlds_out_module91();
	hlds__hlds_out_module92();
	hlds__hlds_out_module93();
	hlds__hlds_out_module94();
	hlds__hlds_out_module95();
	hlds__hlds_out_module96();
	hlds__hlds_out_module97();
	hlds__hlds_out_module98();
	hlds__hlds_out_module99();
	hlds__hlds_out_module100();
	hlds__hlds_out_module101();
	hlds__hlds_out_module102();
	hlds__hlds_out_module103();
	hlds__hlds_out_module104();
	hlds__hlds_out_module105();
	hlds__hlds_out_module106();
	hlds__hlds_out_module107();
	hlds__hlds_out_module108();
	hlds__hlds_out_module109();
	hlds__hlds_out_module110();
	hlds__hlds_out_module111();
	hlds__hlds_out_module112();
	hlds__hlds_out_module113();
	hlds__hlds_out_module114();
	hlds__hlds_out_module115();
	hlds__hlds_out_module116();
	hlds__hlds_out_module117();
	hlds__hlds_out_module118();
	hlds__hlds_out_module119();
}

static void mercury__hlds__hlds_out_maybe_bunch_3(void)
{
	hlds__hlds_out_module120();
	hlds__hlds_out_module121();
	hlds__hlds_out_module122();
	hlds__hlds_out_module123();
	hlds__hlds_out_module124();
	hlds__hlds_out_module125();
	hlds__hlds_out_module126();
	hlds__hlds_out_module127();
	hlds__hlds_out_module128();
	hlds__hlds_out_module129();
	hlds__hlds_out_module130();
	hlds__hlds_out_module131();
	hlds__hlds_out_module132();
	hlds__hlds_out_module133();
	hlds__hlds_out_module134();
	hlds__hlds_out_module135();
	hlds__hlds_out_module136();
	hlds__hlds_out_module137();
	hlds__hlds_out_module138();
	hlds__hlds_out_module139();
	hlds__hlds_out_module140();
	hlds__hlds_out_module141();
	hlds__hlds_out_module142();
	hlds__hlds_out_module143();
	hlds__hlds_out_module144();
	hlds__hlds_out_module145();
	hlds__hlds_out_module146();
	hlds__hlds_out_module147();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_out__init(void);
void mercury__hlds__hlds_out__init_type_tables(void);
void mercury__hlds__hlds_out__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_out__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_out__init_complexity_procs(void);
#endif

void mercury__hlds__hlds_out__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_out_maybe_bunch_0();
	mercury__hlds__hlds_out_maybe_bunch_1();
	mercury__hlds__hlds_out_maybe_bunch_2();
	mercury__hlds__hlds_out_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_out__type_ctor_info_maybe_vartypes_0,
		hlds__hlds_out__maybe_vartypes_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_out__type_ctor_info_expanded_inst_info_0,
		hlds__hlds_out__expanded_inst_info_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__expanded_inst_info__arity0__, 5) =
			MR_ENTRY_AP(fn__hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0);
		MR_field(MR_mktag(0), mercury_data___base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__expanded_inst_info__arity0__, 6) =
			MR_ENTRY_AP(hlds__hlds_out__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__hlds__hlds_out__init_debugger();
}

void mercury__hlds__hlds_out__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_out__type_ctor_info_maybe_vartypes_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_out__type_ctor_info_expanded_inst_info_0);
	}
}


void mercury__hlds__hlds_out__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_out__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_out__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
