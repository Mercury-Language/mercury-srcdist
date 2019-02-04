/*
** Automatically generated from `ml_code_gen.m'
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
INIT mercury__ml_backend__ml_code_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "ml_backend.ml_code_gen.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "ml_backend.ml_code_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ml_backend.ml_code_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ml_backend.ml_code_gen.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "ml_backend.ml_code_gen.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 47 "ml_backend.ml_code_gen.c"
#line 48 "ml_backend.ml_code_gen.c"
#include "ml_backend.ml_code_gen.mh"

#line 51 "ml_backend.ml_code_gen.c"
#line 52 "ml_backend.ml_code_gen.c"
#ifndef ML_BACKEND__ML_CODE_GEN_DECL_GUARD
#define ML_BACKEND__ML_CODE_GEN_DECL_GUARD

#line 56 "ml_backend.ml_code_gen.c"
#line 57 "ml_backend.ml_code_gen.c"

#endif
#line 60 "ml_backend.ml_code_gen.c"

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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
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
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];

struct mercury_type_19 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_19 mercury_common_19[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_code_gen__type_ctor_info_ordinary_pragma_kind_0;
MR_decl_label2(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_proc_body__1560__1_7_0, 2,3)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0, 2,5,3,7,8,9,10,11)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0, 12,13,14,15,16,17,18,19)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0, 25,29,30,31,32,34,35,20)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0, 37,39,40,41,42)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0, 12,11,14,15,13,16,17,10)
MR_decl_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0, 18,19,20)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0, 10,11,12,13,14,15,16,17)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0, 18,19,20,21,22)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0, 10)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label6(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0, 10,11,13,15,16,14)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0, 4,9,13,15,16,17,18,19)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0, 20,21,22,6,24,25,26,27)
MR_decl_label1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0, 3)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0, 27,4,5,6,7,8,11,10)
MR_decl_label4(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0, 14,15,16,3)
MR_decl_label3(ml_backend__ml_code_gen__build_arg_map_3_0, 11,4,3)
MR_decl_label8(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0, 2,4,5,6,7,8,11,10)
MR_decl_label1(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0, 12)
MR_decl_label8(ml_backend__ml_code_gen__ml_code_gen_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ml_backend__ml_code_gen__ml_code_gen_4_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(ml_backend__ml_code_gen__ml_code_gen_4_0, 18,19,20,21,22,23,24,25)
MR_decl_label2(ml_backend__ml_code_gen__ml_code_gen_4_0, 26,27)
MR_decl_label8(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0, 2,3,4,5,8,9,10,12)
MR_decl_label3(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0, 7,15,16)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0, 2,3,4,5,6,9,10,11)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0, 12,8,13,14,15,16,17,18)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0, 19,20,21,22,23,24,25,7)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0, 28,29,30,31,27,32,33,34)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0, 35,36,37,38,39,40,41,42)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0, 43,44,45,46,47,48,49,50)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0, 51,52,53,54,55,56,57,58)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0, 59,60,61,62,63,64,65,66)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0, 67,68,69)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_commit_7_0, 2,3,7,8,9,10,11,12)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_commit_7_0, 13,14,15,16,17,18,19,20)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_commit_7_0, 21,22,23,24,25,26,27,4)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_commit_7_0, 32,33,34,35,36,37,38,39)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_commit_7_0, 40,41,42,43,44,45,46,47)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_commit_7_0, 48,49,29)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_conj_7_0, 28,4,3,34,8,10,9,12)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0, 90,2,10,11,15,16,18,14)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0, 21,22,23,24,25,26,27,32)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0, 31,34,30,36,29,37,39,6)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_defns_4_0, 2,3,4,6,7,8,9,10)
MR_decl_label5(ml_backend__ml_code_gen__ml_gen_defns_4_0, 5,11,12,13,14)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_disj_7_0, 4,3,7,8,6,11,12,15)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_disj_7_0, 14,9,17,19,22,23,24,25)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_disj_7_0, 26,27,21)
MR_decl_label5(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0, 2,3,4,5,6)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_goal_5_0, 2,3,4)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_goal_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_goal_6_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0, 4,96,9,10,11,12,7,97)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0, 17,18,19,21,99,39,38,41)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0, 31,32,33,34,35,36,25,26)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0, 27,28,29,44,46,48,50,52)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0, 54,100,57)
MR_decl_label4(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0, 2,3,4,5)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_ite_9_0, 2,5,6,4,8,9,10,11)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_ite_9_0, 12,7,14,15,16,17,18,19)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_ite_9_0, 20,21,22,23,24,25,26,27)
MR_decl_label4(ml_backend__ml_code_gen__ml_gen_ite_9_0, 28,29,30,31)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0, 24,4,5,8,7,11,12,13)
MR_decl_label1(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0, 3)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0, 4,5,6,9,7,11,12,13)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0, 14,15,16,17,18,19,20,21)
MR_decl_label1(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0, 3)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0, 2,3,4,6,7,8,9,10)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0, 11,12,13)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_negation_7_0, 2,4,9,10,8,13,14,15)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_negation_7_0, 16,12,6)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0, 2,3,4,8,9,10,11,12)
MR_decl_label1(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0, 5)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0, 2,4,6,7,8,9,10,5)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0, 13,15,3,18,20,22,24,26)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_outline_args_4_0, 4,5,6,9,8,7,15,18)
MR_decl_label4(ml_backend__ml_code_gen__ml_gen_outline_args_4_0, 20,22,11,3)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0, 4,9,13,12,14,6,16,3)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0, 2,3,4,7,5,9,10,11)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0, 12,13,19,20,22,23,17,25)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0, 26,29,31,28,35,36,15,37)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0, 38,39,40)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0, 2,3,4,5,6,7,8,14)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0, 15,12,19,20,25,24,22,30)
MR_decl_label7(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0, 31,32,10,33,34,35,36)
MR_decl_label4(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0, 2,7,9,4)
MR_decl_label2(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0, 2,3)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0, 4,9,13,15,16,6,18,19)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0, 20,21,3)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0, 2,3,4)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0, 2,5,9,8,10,12,11,14)
MR_decl_label1(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0, 1)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0, 2,3,5,4,9,8,12,11)
MR_decl_label4(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0, 16,15,20,19)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_preds_2_7_0, 56,4,5,9,11,6,15,18)
MR_decl_label5(ml_backend__ml_code_gen__ml_gen_preds_2_7_0, 22,23,24,59,3)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_proc_body_10_0, 2,3,4,9,5,10,11,12)
MR_decl_label2(ml_backend__ml_code_gen__ml_gen_proc_body_10_0, 13,14)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0, 10,11,12,13,14,17,15,20)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0, 21,23,24,25,22,26,27,28)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0, 29,30,18,31,32,34,35,36)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0, 37,38,39,33,40,41,42,43)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0, 44,45,46,47,49,50,51,52)
MR_decl_label3(ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0, 2,3,4)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0, 66,7,6,9,3,14,15,13)
MR_decl_label8(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0, 33,69,17,11,21,20,24,25)
MR_decl_label2(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0, 26,27)
MR_decl_label7(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0, 11,6,7,8,10,4,5)
MR_decl_label3(ml_backend__ml_code_gen__union_subgoal_locals_3_0, 2,3,4)
MR_decl_label1(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_imports__869__1_1_0, 2)
MR_decl_label8(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0, 36,5,10,8,35,15,16,18)
MR_decl_label1(fn__ml_backend__ml_code_gen__gen_init_enum_param_1_0, 3)
MR_decl_label5(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0, 28,14,3,6,9)
MR_decl_label2(fn__ml_backend__ml_code_gen__init_step_1_0, 2,3)
MR_decl_label1(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0, 2)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0)
MR_decl_static(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0)
MR_decl_static(fn__ml_backend__ml_code_gen__this_file_0_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_proc_body_10_0)
MR_decl_static(fn__ml_backend__ml_code_gen__attributes_to_mlds_attributes_2_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_preds_2_7_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_defns_4_0)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_code_gen_4_0)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0)
MR_decl_static(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0)
MR_decl_static(fn__ml_backend__ml_code_gen__ml_gen_commit_var_decl_2_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0)
MR_decl_static(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_outline_args_4_0)
MR_decl_static(ml_backend__ml_code_gen__build_arg_map_3_0)
MR_decl_static(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_gen_goal_5_0)
MR_def_extern_entry(ml_backend__ml_code_gen__ml_gen_goal_6_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_commit_7_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_ite_9_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_negation_7_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_conj_7_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_disj_7_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0)
MR_decl_static(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0)
MR_decl_static(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0)
MR_decl_static(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0)
MR_decl_static(fn__ml_backend__ml_code_gen__init_step_1_0)
MR_decl_static(fn__ml_backend__ml_code_gen__gen_init_enum_param_1_0)
MR_decl_static(fn__ml_backend__ml_code_gen__init_stats_2_0)
MR_decl_static(ml_backend__ml_code_gen__union_subgoal_locals_3_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0)
MR_decl_static(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0)
MR_decl_static(fn__ml_backend__ml_code_gen__attribute_to_mlds_attribute_2_0)
MR_decl_static(__Unify___ml_backend__ml_code_gen__ordinary_pragma_kind_0_0)
MR_decl_static(__Compare___ml_backend__ml_code_gen__ordinary_pragma_kind_0_0)
MR_decl_static(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_foreign_code__827__1_2_0)
MR_decl_static(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_foreign_code_lang__848__1_1_0)
MR_decl_static(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_imports__869__1_1_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_table_structs__1055__1_2_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_table_structs__1055__2_2_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_proc_body__1560__1_7_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2248__1_2_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2250__1_2_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2237__1_2_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2239__1_2_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2188__1_2_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_java_proc__2578__1_2_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__2626__1_2_0)
MR_decl_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__2718__1_2_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0)
MR_decl_static(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_expr_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_expr_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_trace_runtime_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_0 mercury_common_0[41] =
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, pragma_exported_proc)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_import)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_import)
}
},
{
{
MR_tbmkword(0, 6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,12),
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
MR_TAG_COMMON(1,12,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, target_code_component)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, target_code_component)
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
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,0)
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
MR_COMMON(0,20)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg)
}
},
{
{
MR_CTOR1_ADDR(parse_tree__prog_data, trace_expr),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_COMMON(0,23)
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
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_TAG_COMMON(2,13,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,13,2),
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
MR_CTOR1_ADDR(parse_tree__prog_data, trace_expr),
MR_CTOR0_ADDR(parse_tree__prog_data, trace_runtime)
}
},
{
{
MR_TAG_COMMON(1,12,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,12,26),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,12,31),
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_TAG_COMMON(1,12,33),
MR_TAG_COMMON(1,0,15)
}
},
{
{
MR_TAG_COMMON(1,12,34),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,12,35),
MR_TAG_COMMON(1,0,34)
}
},
{
{
MR_TAG_COMMON(1,12,36),
MR_TAG_COMMON(1,0,34)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_proc_body_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_proc_body_10_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_proc_body_10_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_2;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_proc_body_10_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(term, context),
MR_COMMON(0,3),
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(0,25),
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(term, context),
MR_COMMON(0,2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ml_code_gen__attributes_to_mlds_attributes_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_attribute_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_attribute_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_compilation_target_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pragma_export_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_trie_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_10;
static const struct mercury_type_3 mercury_common_3[11] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__ml_code_gen__attributes_to_mlds_attributes_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_pred, attribute),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_attribute)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,6),
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_COMMON(0,6)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(libs__globals, compilation_target),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,21),
MR_COMMON(0,21)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(hlds__hlds_module, pragma_exported_proc),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,27)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__rtti, proc_tabling_struct_id),
MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__rtti, proc_tabling_struct_id),
MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,27)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_9,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__rtti, proc_tabling_struct_id),
MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_10,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(backend_libs__rtti, proc_tabling_struct_id),
MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_defns_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_gc_method_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_defns_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_expr_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const struct mercury_type_4 mercury_common_4[18] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_defns_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, gc_method),
MR_CTOR0_ADDR(libs__globals, gc_method)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_defns_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, gc_method),
MR_COMMON(6,0)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_import)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal_expr),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__code_model, code_model),
MR_CTOR0_ADDR(hlds__code_model, code_model)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,22),
MR_COMMON(0,22)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,24),
MR_COMMON(0,24)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,22),
MR_COMMON(0,22)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,24),
MR_COMMON(0,24)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code),
MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,27),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_8,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,27),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,22),
MR_COMMON(0,22)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,22),
MR_COMMON(0,22)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,22),
MR_COMMON(0,22)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,36)
},
};

static const struct mercury_type_5 mercury_common_5[5] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_table_structs__1055__1_2_0),
1,
5
},
{
MR_COMMON(3,6),
MR_ENTRY_AP(fn__ml_backend__ml_code_gen__init_stats_2_0),
1,
8
},
{
MR_COMMON(3,7),
MR_ENTRY_AP(fn__ml_backend__ml_code_gen__init_stats_2_0),
1,
9
},
{
MR_COMMON(3,9),
MR_ENTRY_AP(fn__ml_backend__ml_code_gen__init_stats_2_0),
1,
10
},
{
MR_COMMON(3,10),
MR_ENTRY_AP(fn__ml_backend__ml_code_gen__init_stats_2_0),
1,
11
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_gc_method_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_CTOR0_ADDR(libs__globals, gc_method)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_table_struct_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_table_struct_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
static const struct mercury_type_7 mercury_common_7[5] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, table_struct_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, table_struct_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,20),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_defns_4_0_3;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_defns_4_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(7,0),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_3;
static const struct mercury_type_9 mercury_common_9[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,7),
MR_COMMON(0,8),
MR_COMMON(0,6),
MR_COMMON(0,9),
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_COMMON(7,2),
MR_COMMON(7,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_COMMON(7,4),
MR_COMMON(0,35),
MR_CTOR0_ADDR(term, context),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,36),
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_3,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_COMMON(7,4),
MR_COMMON(0,35),
MR_CTOR0_ADDR(term, context),
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,36),
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
};

MR_decl_entry(ml_backend__ml_code_util__ml_decl_is_static_const_1_0);
MR_decl_entry(backend_libs__rtti__table_trie_step_to_c_3_0);
MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_10 mercury_common_10[12] =
{
{
MR_COMMON(4,2),
MR_ENTRY_AP(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_imports__869__1_1_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(ml_backend__ml_code_gen__union_subgoal_locals_3_0),
0
},
{
MR_COMMON(16,0),
MR_ENTRY_AP(ml_backend__ml_code_util__ml_decl_is_static_const_1_0),
0
},
{
MR_COMMON(16,1),
MR_ENTRY_AP(ml_backend__ml_code_util__ml_decl_is_static_const_1_0),
0
},
{
MR_COMMON(4,9),
MR_ENTRY_AP(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_foreign_code_lang__848__1_1_0),
0
},
{
MR_COMMON(3,5),
MR_ENTRY_AP(backend_libs__rtti__table_trie_step_to_c_3_0),
0
},
{
MR_COMMON(4,10),
MR_ENTRY_AP(fn__ml_backend__ml_code_gen__init_step_1_0),
0
},
{
MR_COMMON(4,11),
MR_ENTRY_AP(fn__ml_backend__ml_code_gen__gen_init_enum_param_1_0),
0
},
{
MR_COMMON(3,8),
MR_ENTRY_AP(backend_libs__rtti__table_trie_step_to_c_3_0),
0
},
{
MR_COMMON(4,12),
MR_ENTRY_AP(fn__ml_backend__ml_code_gen__init_step_1_0),
0
},
{
MR_COMMON(4,13),
MR_ENTRY_AP(fn__ml_backend__ml_code_gen__gen_init_enum_param_1_0),
0
},
{
MR_COMMON(4,17),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};

static const struct mercury_type_11 mercury_common_11[4] =
{
{
MR_tbmkword(0, 0)
},
{
MR_TAG_COMMON(1,15,1)
},
{
MR_tbmkword(0, 1)
},
{
MR_TAG_COMMON(0,12,32)
},
};

static const struct mercury_type_12 mercury_common_12[37] =
{
{
MR_string_const("\");\n", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("#define MR_PROC_LABEL ", 22),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("", 0),
MR_tbmkword(0, 0)
},
{
MR_string_const(");\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const(");", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const(";\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("   #define LOCALS      (&MR_locals)\n", 36),
MR_tbmkword(0, 0)
},
{
MR_string_const("   #define SUCCEED_LAST    (MR_succeeded = MR_TRUE, MR_done = MR_TRUE)\n", 71),
MR_TAG_COMMON(1,12,7)
},
{
MR_string_const("   #define SUCCEED     (MR_succeeded = MR_TRUE)\n", 48),
MR_TAG_COMMON(1,12,8)
},
{
MR_string_const("   #define FAIL        (MR_done = MR_TRUE)\n", 43),
MR_TAG_COMMON(1,12,9)
},
{
MR_string_const("   #undef  LOCALS\n", 18),
MR_tbmkword(0, 0)
},
{
MR_string_const("   #undef  SUCCEED_LAST\n", 24),
MR_TAG_COMMON(1,12,11)
},
{
MR_string_const("   #undef  SUCCEED\n", 19),
MR_TAG_COMMON(1,12,12)
},
{
MR_string_const("   #undef  FAIL\n", 16),
MR_TAG_COMMON(1,12,13)
},
{
MR_string_const("{\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tstruct {\n", 10),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t} MR_locals;\n", 14),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tMR_bool MR_succeeded = MR_FALSE;\n", 34),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tMR_bool MR_done = MR_FALSE;\n", 29),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t{\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n\t;}\n", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("\twhile (1) {\n", 13),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t\t{\n", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n\t\t;}\n", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("#undef MR_PROC_LABEL\n", 21),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t\tif (MR_succeeded) {\n", 22),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t\t}\n", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t\tif (MR_done) break;\n", 22),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tMR_succeeded = MR_FALSE;\n", 26),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t}\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const("}\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("SUCCESS_INDICATOR", 17),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tMR_bool SUCCESS_INDICATOR;\n", 28),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tif (SUCCESS_INDICATOR) {\n", 26),
MR_tbmkword(0, 0)
},
{
MR_string_const(" = SUCCESS_INDICATOR;\n", 22),
MR_tbmkword(0, 0)
},
{
MR_string_const(" = MR_FALSE;\n", 13),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_13 mercury_common_13[4] =
{
{
MR_string_const("MR_Word", 7)
},
{
MR_string_const("(MR_Box) ", 9)
},
{
MR_string_const("", 0)
},
{
MR_string_const("(MR_Word) ", 10)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_2;
static const struct mercury_type_14 mercury_common_14[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,16),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,16),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info)
}
},
};

static const struct mercury_type_15 mercury_common_15[2] =
{
{
8
},
{
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_commit_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_commit_7_0_2;
static const struct mercury_type_16 mercury_common_16[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_commit_7_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_commit_7_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
};

static const struct mercury_type_17 mercury_common_17[13] =
{
{
{
7,
1
}
},
{
{
7,
3
}
},
{
{
7,
8
}
},
{
{
7,
9
}
},
{
{
7,
2
}
},
{
{
7,
4
}
},
{
{
7,
10
}
},
{
{
7,
11
}
},
{
{
7,
5
}
},
{
{
7,
6
}
},
{
{
7,
7
}
},
{
{
7,
12
}
},
{
{
7,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
static const struct mercury_type_18 mercury_common_18[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_5,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_COMMON(7,4),
MR_COMMON(0,35),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_COMMON(0,21),
MR_COMMON(0,21),
MR_COMMON(0,36),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
};

static const struct mercury_type_19 mercury_common_19[1] =
{
{
5,
0,
MR_TAG_COMMON(1,0,34)
},
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_code_gen__enum_functor_desc_ordinary_pragma_kind_0_0 = {
	"kind_det",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_code_gen__enum_functor_desc_ordinary_pragma_kind_0_1 = {
	"kind_semi",
	1
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_code_gen__enum_functor_desc_ordinary_pragma_kind_0_2 = {
	"kind_failure",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_code_gen__enum_value_ordered_ordinary_pragma_kind_0[] = {
	&mercury_data_ml_backend__ml_code_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
	&mercury_data_ml_backend__ml_code_gen__enum_functor_desc_ordinary_pragma_kind_0_1,
	&mercury_data_ml_backend__ml_code_gen__enum_functor_desc_ordinary_pragma_kind_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_code_gen__enum_name_ordered_ordinary_pragma_kind_0[] = {
	&mercury_data_ml_backend__ml_code_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
	&mercury_data_ml_backend__ml_code_gen__enum_functor_desc_ordinary_pragma_kind_0_2,
	&mercury_data_ml_backend__ml_code_gen__enum_functor_desc_ordinary_pragma_kind_0_1
};

const MR_Integer mercury_data_ml_backend__ml_code_gen__functor_number_map_ordinary_pragma_kind_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_gen__type_ctor_info_ordinary_pragma_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_code_gen__ordinary_pragma_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_code_gen__ordinary_pragma_kind_0_0)),
	"ml_backend.ml_code_gen",
	"ordinary_pragma_kind",
	{ (void *)mercury_data_ml_backend__ml_code_gen__enum_name_ordered_ordinary_pragma_kind_0 },
	{ (void *)mercury_data_ml_backend__ml_code_gen__enum_value_ordered_ordinary_pragma_kind_0 },
	3,
	4,
	mercury_data_ml_backend__ml_code_gen__functor_number_map_ordinary_pragma_kind_0
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_proc_body_10_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_goal",
6,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1536,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_proc_body_10_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_1560",
7,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1560,
"d1;c16;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ml_code_gen__attributes_to_mlds_attributes_2_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"attribute_to_mlds_attribute",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
3780,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_defns_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_1055",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1055,
"d1;c5;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_defns_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda2_ml_code_gen_m_1055",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1055,
"d1;c5;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_defns_4_0_3 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_add_table_var",
4,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1058,
"d1;c5;d2;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_827",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
826,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_foreign_code_lang",
8,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
830,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_3 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"foreign_type_required_imports",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
876,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_code_gen_4_0_4 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_869",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
869,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_pragma_c_input_arg",
5,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
3170,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_6_0_1 = {
{
MR_PREDICATE,
"hlds.goal_util",
"hlds.goal_util",
"direct_subgoal",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1734,
"d1;c3;q;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"union_subgoal_locals",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1734,
"d1;c3;q;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_commit_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"ml_decl_is_static_const",
1,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1884,
"d1;c11;t;c27;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_commit_7_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_util",
"ml_backend.ml_code_util",
"ml_decl_is_static_const",
1,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1963,
"d1;c11;e;c1;t;c27;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_2188",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2188,
"d7;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_2237",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2237,
"d10;c8;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_3 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_2239",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2239,
"d10;c8;d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_4 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_2248",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2248,
"d10;c8;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_5 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_2250",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2250,
"d10;c8;d3;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_goal",
6,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
3673,
"d3;c11;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_conj_7_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_conj",
7,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
3674,
"d3;c11;e;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_848",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
848,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_pragma_export_proc",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
851,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_1 = {
{
MR_PREDICATE,
"backend_libs.rtti",
"backend_libs.rtti",
"table_trie_step_to_c",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1096,
"d1;c14;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_2 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"init_step",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1098,
"d1;c14;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_3 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"gen_init_enum_param",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1100,
"d1;c14;d2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_4 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"init_stats",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1112,
"d1;c14;d2;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_5 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"init_stats",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1115,
"d1;c14;d2;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_6 = {
{
MR_PREDICATE,
"backend_libs.rtti",
"backend_libs.rtti",
"table_trie_step_to_c",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1148,
"d1;c15;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_7 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"init_step",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1150,
"d1;c15;d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_8 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"gen_init_enum_param",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1152,
"d1;c15;d2;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_9 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"init_stats",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1166,
"d1;c15;d2;c27;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_10 = {
{
MR_FUNCTION,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"init_stats",
3,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
1169,
"d1;c15;d2;c31;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_2578",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2578,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_pragma_c_input_arg",
5,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
3170,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_2626",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2626,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"lambda_ml_code_gen_m_2718",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2718,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_pragma_il_proc_assign_output",
8,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2751,
"d1;c28;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_3 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_pragma_il_proc_assign_output",
8,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2756,
"d1;c31;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_4 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2760,
"d1;c35;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_5 = {
{
MR_PREDICATE,
"ml_backend.ml_code_gen",
"ml_backend.ml_code_gen",
"ml_gen_pragma_il_proc_var_decl_defn",
9,
0
},
"ml_backend.ml_code_gen",
"ml_code_gen.m",
2763,
"d1;c36;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0);
MR_decl_entry(check_hlds__type_util__is_dummy_argument_type_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_decl_6_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module0)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,24,4,5,8,7,11,12,13)
	MR_init_label1(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_decl_6_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	}
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,
		ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_byref_output_vars_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_set_byref_output_vars_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_pred_id_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_proc_id_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_is_output_det_function_4_0);
MR_decl_entry(list__delete_all_3_1);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_set_value_output_vars_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module1)
	MR_init_entry1(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,2,3,4,5,8,9,10,12)
	MR_init_label3(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,7,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0)
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
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_byref_output_vars_2_0,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 198;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i5);
	}
	MR_sv(1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_set_byref_output_vars_3_0,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_pred_id_2_0,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_proc_id_2_0,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_is_output_det_function_4_0,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_set_byref_output_vars_3_0,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_set_byref_output_vars_3_0,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_set_value_output_vars_3_0,
		ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,16)
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


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module2)
	MR_init_entry1(fn__ml_backend__ml_code_gen__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_variable_type_3_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(parse_tree__prog_type__type_unify_5_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_with_type_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_varset_2_0);
MR_decl_entry(ml_backend__ml_call_gen__ml_gen_box_or_unbox_lval_14_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_set_var_lval_4_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module3)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,90,2,10,11,15,16,18,14)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,21,22,23,24,25,26,27,32)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,31,34,30,36,29,37,39,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r6;
	MR_decr_sp_and_return(11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i6);
	}
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r6;
	MR_sv(10) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i11);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i90);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_5_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i14);
	}
	MR_r1 = MR_sv(9);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__is_empty_1_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i14);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i90);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_with_type_4_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_varset_2_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i23);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(2);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_box_or_unbox_lval_14_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(9) = MR_r4;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_set_var_lval_4_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_byref_output_vars_2_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i32);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i31);
	}
	MR_r3 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i30);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i34);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i29);
	}
	MR_r3 = MR_sv(9);
	MR_r2 = MR_sv(6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i36);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i39);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i37);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0_i39);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_convert_headvars: length mismatch", 40);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_list_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_combine_conj_8_0);
MR_decl_entry(ml_backend__ml_code_util__ml_append_return_statement_6_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module4)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_proc_body_10_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,2,3,4,9,5,10,11,12)
	MR_init_label2(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_proc_body_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tempr1;
	MR_sv(9) = MR_r7;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_goal_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(9);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_convert_headvars_10_0,
		ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r4 = MR_sv(7);
	MR_r1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_proc_body__1560__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(8);
	MR_r5 = MR_r4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_combine_conj_8_0,
		ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r4 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_append_return_statement_6_0,
		ml_backend__ml_code_gen__ml_gen_proc_body_10_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_attribute_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_attribute_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module5)
	MR_init_entry1(fn__ml_backend__ml_code_gen__attributes_to_mlds_attributes_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__attributes_to_mlds_attributes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_gen__attribute_to_mlds_attribute_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, attribute);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_attribute);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_code_gen_nonlocals_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_proc_params_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_env_vars_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_variable_types_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_initial_cont_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(fn__map__from_corresponding_lists_2_0);
MR_decl_entry(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_0);
MR_decl_entry(check_hlds__mode_util__modes_to_arg_modes_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_extra_defns_2_0);
MR_decl_entry(fn__list__append_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_attributes_2_0);
MR_decl_entry(hlds__hlds_pred__attributes_to_attribute_list_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module6)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,10,11,12,13,14,17,15,20)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,21,23,24,25,22,26,27,28)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,29,30,18,31,32,34,35,36)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,37,38,39,33,40,41,42,43)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,44,45,46,47,49,50,51,52)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_ctfield(0, MR_r1, 0);
	MR_sv(12) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_code_gen_nonlocals_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(11) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_info_init_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i15);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_proc_params_5_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_env_vars_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i49);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i18);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 199;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_byref_output_vars_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_set_byref_output_vars_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_set_value_output_vars_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_types_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i28);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_initial_cont_4_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i29);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i30);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i32);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_det_copy_out_vars_4_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i31);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_sv(14) = MR_r2;
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i34);
	}
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(13) = MR_sv(14);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i33);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i35);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i36);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__map__from_corresponding_lists_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i37);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(16);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i38);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(14);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i39);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_sv(13) = MR_r2;
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i40);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i41);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i42);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(13);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_proc_body_10_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i43);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_proc_params_5_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i44);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_extra_defns_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i45);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i46);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i47);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(6), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(6), 0) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_env_vars_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i49);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_attributes_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i50);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__attributes_to_attribute_list_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i51);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__attributes_to_mlds_attributes_2_0,
		ml_backend__ml_code_gen__ml_gen_proc_defn_5_0_i52);
MR_def_label(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_tfield(1, MR_tempr1, 4) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module7)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_preds_2_7_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,56,4,5,9,11,6,15,18)
	MR_init_label5(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,22,23,24,59,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_preds_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i9);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i56);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(6), 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i56);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i15);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(7);
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i59);
	}
	MR_r1 = (MR_Word) MR_string_const("% Generating MLDS code for ", 27);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i23);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,
		ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_preds_2_7_0_i56);
MR_def_label(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_type_gen__ml_gen_types_4_0);
MR_decl_entry(hlds__hlds_module__module_info_get_table_struct_map_2_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(libs__globals__get_gc_method_2_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(list__foldl_4_1);
MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module8)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_defns_4_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_defns_4_0,2,3,4,6,7,8,9,10)
	MR_init_label5(ml_backend__ml_code_gen__ml_gen_defns_4_0,5,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_defns_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_types_4_0,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_table_struct_map_2_0,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, table_struct_info);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_defns_4_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_defns_4_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_table_structs__1055__2_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r3 = (MR_Word) MR_string_const("tabling and \140--gc accurate\'", 27);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__keys_2_0,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_preds_2_7_0,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_defns_4_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_defns_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_foreign_decl_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_foreign_import_module_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_foreign_body_code_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0);
MR_decl_entry(libs__globals__io_get_backend_foreign_languages_3_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_all_deps_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
MR_decl_entry(fn__set__delete_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(fn__map__values_1_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(ml_backend__ml_type_gen__ml_gen_exported_enums_4_0);
MR_decl_entry(hlds__hlds_module__module_info_user_init_pred_c_names_2_0);
MR_decl_entry(hlds__hlds_module__module_info_user_final_pred_c_names_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module9)
	MR_init_entry1(ml_backend__ml_code_gen__ml_code_gen_4_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_code_gen_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ml_backend__ml_code_gen__ml_code_gen_4_0,10,11,12,13,14,15,16,17)
	MR_init_label8(ml_backend__ml_code_gen__ml_code_gen_4_0,18,19,20,21,22,23,24,25)
	MR_init_label2(ml_backend__ml_code_gen__ml_code_gen_4_0,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_code_gen_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_foreign_decl_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_foreign_import_module_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_foreign_body_code_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_backend_foreign_languages_3_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_foreign_code__827__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,3);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(list__foldl_4_1,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_all_deps_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__delete_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	}
	MR_np_call_localret_ent(fn__map__values_1_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i23);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_defns_4_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_exported_enums_4_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_user_init_pred_c_names_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_user_final_pred_c_names_2_0,
		ml_backend__ml_code_gen__ml_code_gen_4_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_code_gen_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_set_success_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_test_success_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module10)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,66,7,6,9,3,14,15,13)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,33,69,17,11,21,20,24,25)
	MR_init_label2(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i66);
	}
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i6);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("ml_gen_wrap_goal: code model mismatch -- semi in det", 52);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("ml_gen_wrap_goal: code model mismatch -- nondet in det", 54);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i11);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i13);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,11,0);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i69);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("ml_gen_wrap_goal: code model mismatch -- nondet in semi", 55);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i20);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r3;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i33);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_test_success_2_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_put_commit_in_own_func_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_new_func_label_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_get_env_ptr_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module11)
	MR_init_entry1(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0);
	MR_init_label8(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,2,4,5,6,7,8,11,10)
	MR_init_label1(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0)
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
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_put_commit_in_own_func_2_0,
		ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0_i2);
MR_def_label(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0_i5);
MR_def_label(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0_i6);
MR_def_label(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,
		ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0_i7);
MR_def_label(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_use_gcc_nested_functions_2_0,
		ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0_i8);
MR_def_label(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0_i10);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0_i11);
MR_def_label(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(0,0,13);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 4) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 6) = (MR_Integer) 2;
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,0,14);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 6) = (MR_Integer) 2;
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__append_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_type_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_gc_statement_6_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_lval_4_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_assign_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module12)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,4,5,6,9,7,11,12,13)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,14,15,16,17,18,19,20,21)
	MR_init_label1(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_varset_2_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("local_", 6);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__append_2_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_type_3_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_gc_statement_6_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(9), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(9), 0) = MR_sv(7);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_set_var_lval_4_0,
		ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_var_lvals_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_globals_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module13)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,2,3,4,6,7,8,9,10)
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_var_lvals_2_0,
		ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 199;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_byref_output_vars_2_0,
		ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_make_locals_for_output_args_6_0,
		ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module14)
	MR_init_entry1(fn__ml_backend__ml_code_gen__ml_gen_commit_var_decl_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__ml_gen_commit_var_decl_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(backend_libs__c_util__quote_string_2_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module15)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,2,3,4,8,9,10,11,12)
	MR_init_label1(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 169;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0_i5);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(backend_libs__c_util__quote_string_2_0,
		ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,12,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\tMR_OBTAIN_GLOBAL_LOCK(\"", 24);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\tMR_RELEASE_GLOBAL_LOCK(\"", 25);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_proc_label_5_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module16)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0);
	MR_init_label4(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_pred_id_2_0,
		ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_proc_id_2_0,
		ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_proc_label_5_0,
		ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,12,1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__first_char_3_2);
MR_decl_entry(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module17)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,4,9,13,12,14,6,16,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(1, MR_sv(4), 0), 0);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i6);
	}
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i12);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\t%s %s;\n", 8);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,13,0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("\t%s %s;\n", 8);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,12,3);
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_code_util__type_ctor_info_ml_gen_info_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module18)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0);
	MR_init_label2(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,17);
	MR_r6 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_np_call_localret_ent(list__condense_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__foreign__to_exported_type_2_0);
MR_decl_entry(fn__backend_libs__foreign__exported_type_to_string_2_0);
MR_decl_entry(fn__backend_libs__foreign__is_foreign_type_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module19)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,2,3,4,5,6,7,8,14)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,15,12,19,20,25,24,22,30)
	MR_init_label7(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,31,32,10,33,34,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_box_or_unbox_lval_14_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_exported_type_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__backend_libs__foreign__exported_type_to_string_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__foreign__is_foreign_type_1_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i12);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i14);
	}
	MR_r1 = MR_sv(7);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_sv(1) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i10);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_sv(1) = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i22);
	}
	if (MR_PTAG_TEST(MR_sv(4),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i25);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i24);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,13,1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_string_const(" = %s%s;\n", 9);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i31);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,13,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Word) MR_string_const(" = %s%s;\n", 9);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i31);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("*(%s *)&", 8);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i30);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(2,13,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = %s%s;\n", 9);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i31);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t%s ", 4);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i32);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i33);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i34);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i35);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_MAYBE_BOX_FOREIGN_TYPE(", 27);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0_i36);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,18);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module20)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,4,9,13,15,16,6,18,19)
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,20,21,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(6), 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i6);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_output_arg_11_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr3;
	MR_sv(4) = MR_tempr2;
	}
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_add_env_var_name_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module21)
	MR_init_entry1(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0);
	MR_init_label7(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,11,6,7,8,10,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0_i6);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_add_env_var_name_3_0,
		ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(2,11,1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_sv(2) = MR_ctfield(2, MR_r1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,
		ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,
		ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 11);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,
		ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,15,0);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_success_lval_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module22)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0);
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_generate_runtime_cond_code_4_0,
		ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module23)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_outline_args_4_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,4,5,6,9,8,7,15,18)
	MR_init_label4(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,20,22,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_outline_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,
		ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i8);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_type_3_0,
		ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(4), 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i11);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i11);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_outline_args_4_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module24)
	MR_init_entry1(ml_backend__ml_code_gen__build_arg_map_3_0);
	MR_init_label3(ml_backend__ml_code_gen__build_arg_map_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__build_arg_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_code_gen__build_arg_map_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__build_arg_map_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r5 = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	MR_r6 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ml_backend__ml_code_gen__build_arg_map_3_0_i4);
MR_def_label(ml_backend__ml_code_gen__build_arg_map_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_code_gen__build_arg_map_3_0_i11);
MR_def_label(ml_backend__ml_code_gen__build_arg_map_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module25)
	MR_init_entry1(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0);
	MR_init_label5(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0,28,14,3,6,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0_i3);
	}
MR_def_label(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(2);
MR_def_label(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r2, 0);
	if (MR_PTAG_TEST(MR_r3,1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0_i6);
	}
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0_i28);
MR_def_label(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0_i14);
	}
	MR_sv(1) = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_np_localcall_lab(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0,
		fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0_i9);
MR_def_label(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0,9)
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

MR_decl_entry(fn__parse_tree__prog_data__get_foreign_language_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(fn__parse_tree__prog_data__get_ordinary_despite_detism_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module26)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,2,4,6,7,8,9,10,5)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,13,15,3,18,20,22,24,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i4);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r8 = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i22) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i24) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i26));
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i10);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r1 = (MR_Integer) 2;
	MR_r8 = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i22) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i24) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i26));
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r1 = (MR_Integer) 1;
	MR_r8 = MR_sv(9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i22) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i24) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i26));
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_ordinary_despite_detism_1_0,
		ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_ordinary_pragma_foreign_proc: unexpected code model", 58);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r1 = (MR_Integer) 1;
	MR_r8 = MR_sv(9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i22) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i24) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i26));
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_r5 = MR_r7;
	MR_r6 = MR_r8;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_ordinary_pragma_foreign_proc: unexpected language Erlang", 63);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module27)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_goal_5_0);
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_goal_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_gen_goal_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_goal_5_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_5_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_5_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__goal_util__goal_vars_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(hlds__goal_util__direct_subgoal_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(solutions__unsorted_aggregate_4_7);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_var_types_2_0);
MR_decl_entry(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0);
MR_decl_entry(fn__hlds__code_model__goal_info_get_code_model_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_join_decls_7_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module28)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_goal_6_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_goal_6_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_goal_6_0,10,11,12,13,14,15,16,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_code_gen__ml_gen_goal_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(2), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(set__init_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__goal_util__direct_subgoal_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,19);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,10,1);
	}
	MR_np_call_localret_ent(solutions__unsorted_aggregate_4_7,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_varset_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_var_types_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__put_typeinfo_vars_first_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_local_var_decls_7_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_wrap_goal_7_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_join_decls_7_0,
		ml_backend__ml_code_gen__ml_gen_goal_6_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_new_commit_label_3_0);
MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_set_var_lvals_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module29)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_commit_7_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_commit_7_0,2,3,7,8,9,10,11,12)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_commit_7_0,13,14,15,16,17,18,19,20)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_commit_7_0,21,22,23,24,25,26,27,4)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_commit_7_0,32,33,34,35,36,37,38,39)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_commit_7_0,40,41,42,43,44,45,46,47)
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_commit_7_0,48,49,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_commit_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_sv(6) = MR_r4;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_commit_7_0_i4);
	}
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_commit_7_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_new_commit_label_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("commit_%d", 9);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__ml_gen_commit_var_decl_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,10,2);
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,11,2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,11,0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i23);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(7);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_set_var_lvals_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i49);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_commit_7_0_i29);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_commit_7_0_i29);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_maybe_make_locals_for_output_args_6_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i32);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i33);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i34);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_new_commit_label_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i35);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("commit_%d", 9);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i36);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i37);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__ml_gen_commit_var_decl_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i38);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i39);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i40);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i41);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i42);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,10,3);
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i43);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i44);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i45);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i46);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__maybe_put_commit_in_own_func_7_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i47);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i48);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_set_var_lvals_3_0,
		ml_backend__ml_code_gen__ml_gen_commit_7_0_i49);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_commit_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_unify_gen__ml_gen_unification_7_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0);
MR_decl_entry(ml_backend__ml_call_gen__ml_gen_call_12_0);
MR_decl_entry(ml_backend__ml_call_gen__ml_gen_builtin_9_0);
MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(ml_backend__ml_call_gen__ml_gen_generic_call_9_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(ml_backend__ml_switch_gen__ml_gen_switch_9_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module30)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,4,96,9,10,11,12,7,97)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,17,18,19,21,99,39,38,41)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,31,32,33,34,35,36,25,26)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,27,28,29,44,46,48,50,52)
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,54,100,57)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i96) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i21));
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_np_tailcall_ent(ml_backend__ml_unify_gen__ml_gen_unification_7_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 2);
	MR_r5 = MR_tempr1;
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(1, MR_r1, 3);
	if (MR_INT_NE(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i7);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_varset_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_types_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(3);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(ml_backend__ml_call_gen__ml_gen_call_12_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(ml_backend__ml_call_gen__ml_gen_builtin_9_0);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(2, MR_r1, 0);
	MR_sv(5) = MR_ctfield(2, MR_r1, 1);
	MR_sv(6) = MR_ctfield(2, MR_r1, 2);
	MR_sv(7) = MR_ctfield(2, MR_r1, 3);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2188__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const("ml_gen_generic_call: code model mismatch", 40);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(ml_backend__ml_call_gen__ml_gen_generic_call_9_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i99) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i44) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i48) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i50) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i52) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i54) MR_AND
		MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i100));
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 7);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i25);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i31);
	}
	MR_r10 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r10,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i39);
	}
	MR_tempr2 = MR_r1;
	MR_r10 = MR_tempr2;
	MR_r1 = MR_r2;
	MR_r9 = MR_r4;
	MR_r2 = MR_ctfield(3, MR_tempr2, 1);
	MR_r8 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr2, 2);
	MR_r4 = MR_ctfield(3, MR_tempr2, 3);
	MR_r11 = MR_tempr1;
	MR_r5 = MR_ctfield(3, MR_tempr2, 4);
	MR_r6 = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(9) = MR_ctfield(3, MR_tempr2, 6);
	MR_r7 = MR_ctfield(0, MR_r11, 0);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i38);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r9 = MR_r4;
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r3 = MR_ctfield(3, MR_tempr1, 2);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_ctfield(3, MR_tempr1, 4);
	MR_r6 = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 6);
	MR_r7 = MR_ctfield(0, MR_tempr2, 0);
	MR_r8 = MR_ctfield(1, MR_r10, 0);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i41);
	}
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(9), 0);
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_trace_runtime_cond_6_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(13) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2248__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(3, MR_r1, 1);
	MR_sv(5) = MR_ctfield(3, MR_r1, 2);
	MR_sv(6) = MR_ctfield(3, MR_r1, 3);
	MR_sv(7) = MR_ctfield(3, MR_r1, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(9) = MR_ctfield(3, MR_r1, 6);
	MR_tempr2 = MR_r5;
	MR_sv(10) = MR_ctfield(2, MR_tempr2, 0);
	MR_sv(11) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(12) = MR_ctfield(2, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i32);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r3 = (MR_Word) MR_string_const("ml_gen_goal_expr: extra args", 28);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i33);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(4,8);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2250__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(9);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i34);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = (MR_Word) MR_string_const("ml_gen_goal_expr: MaybeTraceRuntimeCond", 39);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i35);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,12,5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("(", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(11);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i36);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r8 = MR_sv(2);
	MR_r9 = MR_sv(3);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_ordinary_pragma_foreign_proc_12_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(16) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2237__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(3, MR_r1, 1);
	MR_sv(5) = MR_ctfield(3, MR_r1, 2);
	MR_sv(7) = MR_ctfield(3, MR_r1, 4);
	MR_sv(9) = MR_ctfield(3, MR_r1, 6);
	MR_tempr2 = MR_r5;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(10) = MR_ctfield(1, MR_tempr2, 2);
	MR_sv(11) = MR_ctfield(1, MR_tempr2, 3);
	MR_sv(12) = MR_ctfield(1, MR_tempr2, 4);
	MR_sv(13) = MR_ctfield(1, MR_tempr2, 5);
	MR_sv(14) = MR_ctfield(1, MR_tempr2, 7);
	MR_sv(15) = MR_ctfield(1, MR_tempr2, 8);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r3 = (MR_Word) MR_string_const("ml_gen_goal_expr: extra args", 28);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(4,6);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2239__1_2_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_r1, 3) = MR_sv(9);
	MR_tfield(0, MR_r1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i28);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = (MR_Word) MR_string_const("ml_gen_goal_expr: MaybeTraceRuntimeCond", 39);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i29);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(11);
	MR_r10 = MR_sv(12);
	MR_r11 = MR_sv(13);
	MR_r12 = MR_sv(14);
	MR_r13 = MR_sv(15);
	MR_r14 = MR_sv(3);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_conj_7_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_disj_7_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r6 = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r5 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ml_backend__ml_switch_gen__ml_gen_switch_9_0);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_negation_7_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_commit_7_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r5 = MR_r3;
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_r6 = MR_r4;
	MR_r4 = MR_ctfield(3, MR_tempr1, 4);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_ite_9_0);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		ml_backend__ml_code_gen__ml_gen_goal_expr_7_0_i57);
MR_def_label(ml_backend__ml_code_gen__ml_gen_goal_expr_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("ml_gen_goal_expr: unexpected shorthand", 38);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_new_cond_var_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module31)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_ite_9_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_ite_9_0,2,5,6,4,8,9,10,11)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_ite_9_0,12,7,14,15,16,17,18,19)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_ite_9_0,20,21,22,23,24,25,26,27)
	MR_init_label4(ml_backend__ml_code_gen__ml_gen_ite_9_0,28,29,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_ite_9_0)
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
	MR_sv(6) = MR_r6;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_ite_9_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(13);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_ite_9_0_i7);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_test_success_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i31);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_new_cond_var_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_cond_var_decl_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,11,2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_get_env_ptr_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_push_success_cont_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_pop_success_cont_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i23);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(2,11,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_cond_var_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_nondet_label_func_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_test_cond_var_3_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i28);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_5_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i29);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,15,0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_r1;
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i30);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_ite_9_0_i31);
MR_def_label(ml_backend__ml_code_gen__ml_gen_ite_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module32)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_negation_7_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_negation_7_0,2,4,9,10,8,13,14,15)
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_negation_7_0,16,12,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_negation_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_negation_7_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_negation_7_0_i6);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_negation_7_0_i8);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,11,2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_negation_7_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_test_success_2_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,15,0);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_set_success_4_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__ml_code_gen__ml_gen_negation_7_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_negation: nondet cond", 28);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_negation_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_negation: nondet negation", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_success_5_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module33)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_conj_7_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_conj_7_0,28,4,3,34,8,10,9,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_conj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_conj_7_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_success_5_0,
		ml_backend__ml_code_gen__ml_gen_conj_7_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_conj_7_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_sv(6), 1);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		ml_backend__ml_code_gen__ml_gen_conj_7_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ml_backend__ml_code_gen__ml_gen_conj_7_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_conj_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		ml_backend__ml_code_gen__ml_gen_conj_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_conj_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_goal_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_LABEL_AP(ml_backend__ml_code_gen__ml_gen_conj_7_0_i28);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(1);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 5) = MR_tempr3;
	MR_r2 = MR_tempr3;
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__ml_code_util__ml_combine_conj_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_failure_5_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module34)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_disj_7_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_disj_7_0,4,3,7,8,6,11,12,15)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_disj_7_0,14,9,17,19,22,23,24,25)
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_disj_7_0,26,27,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_disj_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_disj_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_failure_5_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_disj_7_0_i6);
	}
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i8);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_disj_7_0_i9);
	}
	MR_sv(2) = MR_r3;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_r6;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 2;
	MR_r4 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_disj_7_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_disj_7_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_disj: RestDecls not empty.", 33);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__code_model__goal_info_get_code_model_1_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_disj_7_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_disj_7_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_6_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_test_success_2_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i23);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(ml_backend__ml_code_gen__ml_gen_disj_7_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,15,0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_r1;
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_disj_7_0_i27);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_disj_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("model_non disj in model_det disjunction", 39);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__foreign__filter_decls_4_0);
MR_decl_entry(backend_libs__foreign__filter_bodys_4_0);
MR_decl_entry(backend_libs__foreign__filter_exports_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pragma_export_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module35)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0);
	MR_init_label5(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__foreign__filter_decls_4_0,
		ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(backend_libs__foreign__filter_bodys_4_0,
		ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(backend_libs__foreign__filter_exports_4_0,
		ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, pragma_exported_proc);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_foreign_code_lang_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module36)
	MR_init_entry1(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0);
	MR_init_label8(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0,36,5,10,8,35,15,16,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0_i35) MR_AND
		MR_LABEL_AP(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0_i36) MR_AND
		MR_LABEL_AP(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0_i35) MR_AND
		MR_LABEL_AP(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0_i35) MR_AND
		MR_LABEL_AP(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0_i16) MR_AND
		MR_LABEL_AP(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0_i18));
MR_def_label(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0_i5);
MR_def_label(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(2, MR_r1, 0), 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0_i8);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0), 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0_i10);
MR_def_label(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("no IL type", 10);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("target x86_64 and --high-level-code", 35);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__ml_backend__ml_code_gen__foreign_type_required_imports_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("foreign_type_required_imports: target erlang", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module37)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0);
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_proc_label_5_0,
		ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr2;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_proc_params_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_export_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 4) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module38)
	MR_init_entry1(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__init_decl_flags_6_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module39)
	MR_init_entry1(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0);
	MR_init_label1(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tempr2 = MR_r4;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Integer) 0;
	MR_r5 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0_i2);
MR_def_label(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0);
MR_decl_entry(fn__parse_tree__prog_data__eval_method_to_table_type_1_0);
MR_decl_entry(fn__ml_backend__ml_util__gen_init_null_pointer_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_trie_step_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map2_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
MR_decl_entry(fn__ml_backend__ml_util__gen_init_int_1_0);
MR_decl_entry(fn__ml_backend__ml_util__gen_init_builtin_const_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module40)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,2,3,4,5,6,9,10,11)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,12,8,13,14,15,16,17,18)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,19,20,21,22,23,24,25,7)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,28,29,30,31,27,32,33,34)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,35,36,37,38,39,40,41,42)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,43,44,45,46,47,48,49,50)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,51,52,53,54,55,56,57,58)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,59,60,61,62,63,64,65,66)
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,67,68,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(37);
	MR_sv(37) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(24) = MR_r3;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_sv(2), 1);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 8);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__eval_method_to_table_type_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i6);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i8);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,0);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,1);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,2);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,3);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,26);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(10);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,10,5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(list__map2_4_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,6);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r4 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,7);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i15);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r5 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 3;
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i17);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i18);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i19);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r4 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i21);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r5 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 8;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 9;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i23);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 8;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i24);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 9;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(13) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(6) = MR_tempr1;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_tempr2;
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i27);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,4);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i28);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,5);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i29);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,6);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i30);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,7);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i31);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(16) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(17) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(18) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(20) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,8);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i45);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(18) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,0,26);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(15);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,10,8);
	MR_r5 = MR_sv(18);
	}
	MR_np_call_localret_ent(list__map2_4_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i32);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r2;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,9);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i33);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r4 = MR_sv(14);
	MR_sv(14) = MR_tempr1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,10);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i34);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r5 = MR_sv(14);
	MR_sv(14) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i35);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 4;
	MR_r5 = MR_sv(14);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i36);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i37);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i38);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(17) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(15) = MR_r1;
	MR_sv(16) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_sv(18);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i39);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r4 = MR_sv(18);
	MR_sv(18) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_trie_step);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i40);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r5 = MR_sv(18);
	MR_sv(18) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i41);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 11;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i42);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(18) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 10;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i43);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 11;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__gen_init_tabling_name_3_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i44);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(20) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,8);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i45);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,9);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i46);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_sv(23) = (MR_Word) MR_TAG_COMMON(3,17,10);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i47);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(23);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr1;
	MR_sv(23) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,17,11);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_null_pointer_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i48);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_tempr1;
	MR_sv(25) = (MR_Word) MR_TAG_COMMON(3,17,12);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_builtin_const_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i49);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i50);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i51);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i52);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(26) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i53);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(27) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i54);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(28) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i55);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(29) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i56);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(30) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i57);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(31) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i58);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(32) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i59);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(33) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i60);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(34) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i61);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(35) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i62);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(36) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i63);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(36);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(35);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(20);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(34);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(33);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(32);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(31);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(30);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(29);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(28);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(27);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(23);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(22);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(21);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(26);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_sv(25);
	MR_tfield(2, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__tabling_name_and_init_to_defn_5_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i64);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(24);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(18);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i65);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i66);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i67);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i68);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_add_table_var_4_0_i69);
MR_def_label(ml_backend__ml_code_gen__ml_gen_add_table_var_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(37);
	MR_decr_sp(37);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module41)
	MR_init_entry1(fn__ml_backend__ml_code_gen__init_step_1_0);
	MR_init_label2(fn__ml_backend__ml_code_gen__init_step_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__init_step_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__ml_backend__ml_code_gen__init_step_1_0_i2);
MR_def_label(fn__ml_backend__ml_code_gen__init_step_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		fn__ml_backend__ml_code_gen__init_step_1_0_i3);
MR_def_label(fn__ml_backend__ml_code_gen__init_step_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module42)
	MR_init_entry1(fn__ml_backend__ml_code_gen__gen_init_enum_param_1_0);
	MR_init_label1(fn__ml_backend__ml_code_gen__gen_init_enum_param_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__gen_init_enum_param_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_code_gen__gen_init_enum_param_1_0_i3);
	}
	MR_r1 = (MR_Integer) -1;
	MR_np_tailcall_ent(fn__ml_backend__ml_util__gen_init_int_1_0);
MR_def_label(fn__ml_backend__ml_code_gen__gen_init_enum_param_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(fn__ml_backend__ml_util__gen_init_int_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module43)
	MR_init_entry1(fn__ml_backend__ml_code_gen__init_stats_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__init_stats_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module44)
	MR_init_entry1(ml_backend__ml_code_gen__union_subgoal_locals_3_0);
	MR_init_label3(ml_backend__ml_code_gen__union_subgoal_locals_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__union_subgoal_locals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_0,
		ml_backend__ml_code_gen__union_subgoal_locals_3_0_i2);
MR_def_label(ml_backend__ml_code_gen__union_subgoal_locals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_0,
		ml_backend__ml_code_gen__union_subgoal_locals_3_0_i3);
MR_def_label(ml_backend__ml_code_gen__union_subgoal_locals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__union_subgoal_locals_3_0_i4);
MR_def_label(ml_backend__ml_code_gen__union_subgoal_locals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module45)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,2,5,9,8,10,12,11,14)
	MR_init_label1(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_ctfield(0, MR_r1, 3);
	MR_r2 = MR_ctfield(0, MR_r1, 2);
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i5);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i1);
	}
	MR_r2 = MR_sv(8);
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i11);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_r4;
	MR_tempr3 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r3 = MR_sv(4);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(1, MR_sv(7), 0), 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0_i14);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module46)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,2,3,5,4,9,8,12,11)
	MR_init_label4(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,16,15,20,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(7) = MR_tempr1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i5);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("no variable name for var", 24);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_ctfield(1, MR_sv(3), 0), 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r3;
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i11);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i16);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i15);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i19);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_sv(1);
	MR_tfield(3, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_tempr3;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_call_gen__ml_gen_box_or_unbox_rval_7_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module47)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0);
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,2,3,4,7,5,9,10,11)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,12,13,19,20,22,23,17,25)
	MR_init_label8(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,26,29,31,28,35,36,15,37)
	MR_init_label3(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,38,39,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i3);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i4);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i5);
	}
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(7);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(2,11,1);
	MR_sv(6) = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i10);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_tag_alloc_heap(MR_r4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r4, 0) = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_box_or_unbox_rval_7_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_exported_type_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i11);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__backend_libs__foreign__exported_type_to_string_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i12);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__foreign__is_foreign_type_1_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i13);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i19);
	}
	MR_r1 = MR_sv(7);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i20);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i15);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i22);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i23);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i15);
	}
	MR_r1 = MR_sv(7);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i25);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i26);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i28);
	}
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,28);
	MR_r1 = (MR_Word) MR_string_const("\t%s = %s ", 9);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i36);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(1, MR_sv(1), 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\t%s = %s ", 9);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i36);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,29);
	MR_r1 = (MR_Word) MR_string_const("\t%s = %s ", 9);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i36);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("(%s)", 4);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i35);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("\t%s = %s ", 9);
	}
	MR_np_call_localret_ent(string__format_3_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i36);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,30);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i37);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", 29);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i38);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i39);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0_i40);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module48)
	MR_init_entry1(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0);
	MR_init_label4(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0,2,7,9,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0_i2);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0_i4);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0_i7);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0_i9);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__ml_code_gen__ml_gen_pragma_c_gen_input_arg_8_0);
MR_def_label(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module49)
	MR_init_entry1(fn__ml_backend__ml_code_gen__attribute_to_mlds_attribute_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__attribute_to_mlds_attribute_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module50)
	MR_init_entry1(__Unify___ml_backend__ml_code_gen__ordinary_pragma_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_code_gen__ordinary_pragma_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module51)
	MR_init_entry1(__Compare___ml_backend__ml_code_gen__ordinary_pragma_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_code_gen__ordinary_pragma_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__foreign__filter_imports_4_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module52)
	MR_init_entry1(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_foreign_code__827__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_foreign_code__827__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(backend_libs__foreign__filter_imports_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module53)
	MR_init_entry1(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_foreign_code_lang__848__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_foreign_code_lang__848__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module54)
	MR_init_entry1(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_imports__869__1_1_0);
	MR_init_label1(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_imports__869__1_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_imports__869__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_imports__869__1_1_0_i2);
MR_def_label(fn__ml_backend__ml_code_gen__IntroducedFrom__func__ml_gen_imports__869__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module55)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_table_structs__1055__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_table_structs__1055__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_gc_method_0;
MR_decl_entry(std_util__isnt_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module56)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_table_structs__1055__2_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_table_structs__1055__2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, gc_method);
	MR_np_tailcall_ent(std_util__isnt_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module57)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_proc_body__1560__1_7_0);
	MR_init_label2(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_proc_body__1560__1_7_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_proc_body__1560__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_success_5_0,
		ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_proc_body__1560__1_7_0_i2);
MR_def_label(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_proc_body__1560__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_proc_body__1560__1_7_0_i3);
MR_def_label(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_proc_body__1560__1_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module58)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2248__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2248__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module59)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2250__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2250__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,31);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module60)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2237__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2237__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module61)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2239__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2239__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,31);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module62)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2188__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_goal_expr__2188__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module63)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_java_proc__2578__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_java_proc__2578__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module64)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__2626__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__2626__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module65)
	MR_init_entry1(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__2718__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__2718__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__procedure_is_exported_3_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module66)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0);
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,27,4,5,6,7,8,11,10)
	MR_init_label4(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,14,15,16,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_proc_label_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__procedure_is_exported_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_proc_defn_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i15);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i16);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0_i27);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_111_99_115_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module67)
	MR_init_entry1(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0);
	MR_init_label8(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0_i2);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0_i3);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0_i4);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0_i5);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0_i6);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0_i7);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0_i8);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__ml_util__gen_init_int_1_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0_i9);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_105_116_95_115_116_97_116_115_95_95_91_50_93_95_48_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
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
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_sv(1);
	MR_tfield(2, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__get_thread_safe_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module68)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0);
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,2,5,3,7,8,9,10,11)
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,12,13,14,15,16,17,18,19)
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,25,29,30,31,32,34,35,20)
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,37,39,40,41,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(12) = MR_r12;
	MR_sv(13) = MR_r13;
	MR_sv(17) = MR_r14;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i3);
	}
	MR_sv(14) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("nondet pragma foreign_proc for C#", 33);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(17);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(14) = MR_r2;
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,12,10);
	MR_np_call_localret_ent(string__append_list_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,12,14);
	MR_np_call_localret_ent(string__append_list_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i12);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(18) = MR_r3;
	MR_sv(20) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_thread_safe_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i13);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(20);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(19) = MR_r2;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i15);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,12,2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,12,19);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,12,18);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,12,17);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,12,2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,12,16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr6, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr6, 1) = MR_sv(13);
	MR_tfield(0, MR_tempr6, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_TAG_COMMON(1,0,33);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = (MR_Word) MR_TAG_COMMON(1,12,25);
	MR_tfield(1, MR_tempr7, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = (MR_Word) MR_TAG_COMMON(1,12,24);
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(1,12,23);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = (MR_Word) MR_TAG_COMMON(1,12,22);
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = (MR_Word) MR_TAG_COMMON(1,12,21);
	MR_tfield(1, MR_tempr9, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,12,20);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr9, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr9, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = (MR_Word) MR_TAG_COMMON(1,0,32);
	MR_tfield(1, MR_tempr10, 1) = MR_tempr3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,12,2);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,12,23);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,12,24);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i16);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(20);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i17);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i19);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i20);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i29) MR_AND
		MR_LABEL_AP(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i25) MR_AND
		MR_LABEL_AP(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i29) MR_AND
		MR_LABEL_AP(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i29) MR_AND
		MR_LABEL_AP(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i31) MR_AND
		MR_LABEL_AP(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i34));
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_call_current_success_cont_indirectly_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i30);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i30);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(17);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,34);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(1,12,30);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr8;
	MR_tfield(1, MR_tempr8, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr9, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr10, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr10;
	MR_tfield(1, MR_tempr10, 0) = (MR_Word) MR_TAG_COMMON(1,12,29);
	MR_tfield(1, MR_tempr10, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = (MR_Word) MR_TAG_COMMON(1,12,28);
	MR_tfield(1, MR_tempr11, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = (MR_Word) MR_TAG_COMMON(1,12,27);
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr13;
	MR_tfield(3, MR_tempr13, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr13, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr13, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr14, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr14;
	MR_tfield(3, MR_tempr14, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr14, 1) = MR_tempr13;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(3) = MR_tempr12;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i39);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i32);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("target x86_64 with --high-level-code", 36);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i39);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i35);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("ml_gen_nondet_pragma_foreign_proc: target erlang", 48);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i39);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i37);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("ml_gen_nondet_pragma_foreign_proc: unexpected code model", 56);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i39);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i40);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i41);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(18);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0_i42);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_110_111_110_100_101_116_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_52_93_95_48_18_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module69)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0);
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,2,3,4,5,6,7,8,9)
	MR_init_label1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_java_proc__2578__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r3 = (MR_Word) MR_string_const("ml_gen_ordinary_pragma_java_proc: extra args", 44);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,17);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_code_util, ml_gen_info);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_np_call_localret_ent(list__condense_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_106_97_118_97_95_112_114_111_99_95_95_91_49_44_32_51_44_32_52_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_info_get_value_output_vars_2_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module70)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0);
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,2,3,4,5,6,7,8,9)
	MR_init_label6(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,10,11,13,15,16,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = MR_r3;
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_outline_args_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,15);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__2626__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r3 = (MR_Word) MR_string_const("ml_gen_ordinary_pragma_managed_proc: extra args", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_value_output_vars_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,12,32);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,11,3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i15);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i16);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_code_gen.m", 13);
	MR_r2 = (MR_Word) MR_string_const("ml_gen_ordinary_pragma_managed_proc: kind_failure not yet implemented", 69);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(fn__parse_tree__prog_data__get_extra_attributes_1_0);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module71)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0);
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,2,3,4,5,6,7,8,9)
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,10,11,12,13,14,15,16,17)
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,18,19,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,16);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__2718__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(13) = MR_r8;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__this_file_0_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const("ml_gen_ordinary_pragma_managed_proc: extra args", 47);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_byref_output_vars_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_value_output_vars_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_np_call_localret_ent(fn__map__init_0_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i12);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__build_arg_map_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i13);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 1;
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_assign_output_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 0;
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i15);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,10,11);
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i16);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(18,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_code_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(9);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	}
	MR_np_call_localret_ent(list__map_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i17);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_extra_attributes_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_gen__get_target_code_attributes_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i19);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i20);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i21);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i22);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(13);
	MR_decr_sp_and_return(15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(ml_backend__ml_code_gen_module72)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0);
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,2,3,4,5,6,7,8,9)
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,12,11,14,15,13,16,17,10)
	MR_init_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__append_3_1,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_pragma_c_decls_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_pragma_c_input_arg_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_pragma_c_output_arg_list_8_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_thread_safe_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_obtain_release_global_lock_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_hash_define_mr_proc_label_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,12,25);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(1,12,24);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,12,23);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(1,0,32);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i12);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(3,19,0);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i10);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_TAG_COMMON(1,0,38);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,12,25);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(1,12,24);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,12,23);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,37);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(1,0,32);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i15);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,39);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,12,30);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr5, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr4;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i10);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i16);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(1,12,25);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(1,12,24);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,12,23);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_TAG_COMMON(1,0,32);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i17);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,40);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_sv(1) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i19);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i20);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_code_gen_module73)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0);
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,4,9,13,15,16,17,18,19)
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,20,21,22,6,24,25,26,27)
	MR_init_label1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_info_get_module_info_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(5), 0);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i6);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i13);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i6);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i15);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i16);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i17);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_tempr1;
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r6 = MR_sv(1);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_box_or_unbox_lval_14_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i19);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i20);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i21);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tempr5 = MR_sv(7);
	MR_tfield(3, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i22);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_localcall_lab(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i24);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i24);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(5) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i25);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i26);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0_i27);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_97_103_109_97_95_106_97_118_97_95_111_117_116_112_117_116_95_97_114_103_95_108_105_115_116_95_95_91_49_93_95_48_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_code_gen_maybe_bunch_0(void)
{
	ml_backend__ml_code_gen_module0();
	ml_backend__ml_code_gen_module1();
	ml_backend__ml_code_gen_module2();
	ml_backend__ml_code_gen_module3();
	ml_backend__ml_code_gen_module4();
	ml_backend__ml_code_gen_module5();
	ml_backend__ml_code_gen_module6();
	ml_backend__ml_code_gen_module7();
	ml_backend__ml_code_gen_module8();
	ml_backend__ml_code_gen_module9();
	ml_backend__ml_code_gen_module10();
	ml_backend__ml_code_gen_module11();
	ml_backend__ml_code_gen_module12();
	ml_backend__ml_code_gen_module13();
	ml_backend__ml_code_gen_module14();
	ml_backend__ml_code_gen_module15();
	ml_backend__ml_code_gen_module16();
	ml_backend__ml_code_gen_module17();
	ml_backend__ml_code_gen_module18();
	ml_backend__ml_code_gen_module19();
	ml_backend__ml_code_gen_module20();
	ml_backend__ml_code_gen_module21();
	ml_backend__ml_code_gen_module22();
	ml_backend__ml_code_gen_module23();
	ml_backend__ml_code_gen_module24();
	ml_backend__ml_code_gen_module25();
	ml_backend__ml_code_gen_module26();
	ml_backend__ml_code_gen_module27();
	ml_backend__ml_code_gen_module28();
	ml_backend__ml_code_gen_module29();
	ml_backend__ml_code_gen_module30();
	ml_backend__ml_code_gen_module31();
	ml_backend__ml_code_gen_module32();
	ml_backend__ml_code_gen_module33();
	ml_backend__ml_code_gen_module34();
	ml_backend__ml_code_gen_module35();
	ml_backend__ml_code_gen_module36();
	ml_backend__ml_code_gen_module37();
	ml_backend__ml_code_gen_module38();
	ml_backend__ml_code_gen_module39();
}

static void mercury__ml_backend__ml_code_gen_maybe_bunch_1(void)
{
	ml_backend__ml_code_gen_module40();
	ml_backend__ml_code_gen_module41();
	ml_backend__ml_code_gen_module42();
	ml_backend__ml_code_gen_module43();
	ml_backend__ml_code_gen_module44();
	ml_backend__ml_code_gen_module45();
	ml_backend__ml_code_gen_module46();
	ml_backend__ml_code_gen_module47();
	ml_backend__ml_code_gen_module48();
	ml_backend__ml_code_gen_module49();
	ml_backend__ml_code_gen_module50();
	ml_backend__ml_code_gen_module51();
	ml_backend__ml_code_gen_module52();
	ml_backend__ml_code_gen_module53();
	ml_backend__ml_code_gen_module54();
	ml_backend__ml_code_gen_module55();
	ml_backend__ml_code_gen_module56();
	ml_backend__ml_code_gen_module57();
	ml_backend__ml_code_gen_module58();
	ml_backend__ml_code_gen_module59();
	ml_backend__ml_code_gen_module60();
	ml_backend__ml_code_gen_module61();
	ml_backend__ml_code_gen_module62();
	ml_backend__ml_code_gen_module63();
	ml_backend__ml_code_gen_module64();
	ml_backend__ml_code_gen_module65();
	ml_backend__ml_code_gen_module66();
	ml_backend__ml_code_gen_module67();
	ml_backend__ml_code_gen_module68();
	ml_backend__ml_code_gen_module69();
	ml_backend__ml_code_gen_module70();
	ml_backend__ml_code_gen_module71();
	ml_backend__ml_code_gen_module72();
	ml_backend__ml_code_gen_module73();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_code_gen__init(void);
void mercury__ml_backend__ml_code_gen__init_type_tables(void);
void mercury__ml_backend__ml_code_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_code_gen__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_code_gen__init_complexity_procs(void);
#endif

void mercury__ml_backend__ml_code_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_code_gen_maybe_bunch_0();
	mercury__ml_backend__ml_code_gen_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_code_gen__type_ctor_info_ordinary_pragma_kind_0,
		ml_backend__ml_code_gen__ordinary_pragma_kind_0_0);
	mercury__ml_backend__ml_code_gen__init_debugger();
}

void mercury__ml_backend__ml_code_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_code_gen__type_ctor_info_ordinary_pragma_kind_0);
	}
}


void mercury__ml_backend__ml_code_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_code_gen__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_code_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
