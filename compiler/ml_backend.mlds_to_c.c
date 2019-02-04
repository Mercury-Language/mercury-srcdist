/*
** Automatically generated from `mlds_to_c.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
INIT mercury__ml_backend__mlds_to_c__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "ml_backend.mlds_to_c.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "ml_backend.mlds_to_c.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ml_backend.mlds_to_c.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ml_backend.mlds_to_c.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "ml_backend.mlds_to_c.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "ml_backend.mlds_to_c.c"
#line 48 "ml_backend.mlds_to_c.c"
#include "ml_backend.mlds_to_c.mh"

#line 51 "ml_backend.mlds_to_c.c"
#line 52 "ml_backend.mlds_to_c.c"
#ifndef ML_BACKEND__MLDS_TO_C_DECL_GUARD
#define ML_BACKEND__MLDS_TO_C_DECL_GUARD

#line 56 "ml_backend.mlds_to_c.c"
#line 57 "ml_backend.mlds_to_c.c"

#endif
#line 60 "ml_backend.mlds_to_c.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_decl_or_defn_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_func_info_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_indent_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_locn_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_lval_or_string_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_mlds_to_c_opts_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_output_type_0;
MR_decl_label1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1134__1_1_0, 1)
MR_decl_label1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1_1_0, 1)
MR_decl_label7(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0, 4,16,6,7,8,9,3)
MR_decl_label2(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0, 4,3)
MR_decl_label9(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0, 6,7,24,9,10,11,12,3,40)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0, 4,5,3,7,8)
MR_decl_label9(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0, 4,19,6,7,8,9,5,11,27)
MR_decl_label4(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0, 2,4,6,8)
MR_decl_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0, 2,3,4)
MR_decl_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0, 2,3,4)
MR_decl_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0, 2,3,4)
MR_decl_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0, 2,3,4)
MR_decl_label9(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0, 4,3,5,7,6,9,11,8,14)
MR_decl_label5(ml_backend__mlds_to_c__is_an_address_1_0, 3,19,14,28,1)
MR_decl_label1(ml_backend__mlds_to_c__is_enum_const_1_0, 2)
MR_decl_label3(ml_backend__mlds_to_c__is_static_member_1_0, 5,2,1)
MR_decl_label1(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0, 1)
MR_decl_label3(ml_backend__mlds_to_c__mlds_indent_3_0, 10,3,12)
MR_decl_label3(ml_backend__mlds_to_c__mlds_make_base_class_5_0, 2,3,7)
MR_decl_label10(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0, 5,6,7,8,9,10,11,14,12,19)
MR_decl_label5(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0, 20,21,23,24,54)
MR_decl_label10(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label9(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0, 15,16,17,18,20,22,23,24,45)
MR_decl_label9(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0, 5,6,7,8,9,10,11,12,24)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_abstractness_3_0, 13)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0, 17,5,6,7)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0, 26,27,16,17,18,19,3,4,5,6)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0, 7,135,9,10,11,12,13,21,22,23)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0, 29,31,34,36,37,38,41,42,43,44)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0, 48,49,50,51,52,53,54,57,58,59)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0, 60,61,138,63,64,65,66,67,68,74)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0, 56,75,76,77,78,79,82,81,83,84)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0, 85,86,80,88,90,91,92,94,96,97)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0, 98,99,101,103,104,105,106,107,108,143)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0, 110,111,112,113,114,115,109,117,118,119)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0, 121,122,124,125,126,127,129,130)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_binop_6_0, 2,4,5,6,7,9,11,12,13,14)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_binop_6_0, 15,16,19,20,21,22,23,24,27,28)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_binop_6_0, 29,30,31,32,34,35,36,37,38,39)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_binop_6_0, 40,41,42,44,45,46,47,48,49,50)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0, 122,4,2,15,13,17,8,9,22,21)
MR_decl_label9(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0, 26,27,20,38,64,40,29,43,44)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0, 4,34,9,10)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_c_decls_5_0, 2)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_c_defns_6_0, 2,4,5,7,8)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0, 2,5,3,8,9,15,16,18,20,23)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0, 13,4,6,7,15)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0, 13,4,6,7,15)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_case_cond_6_0, 5,6,7,8,9,10,11,12,13,3)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_case_cond_6_0, 17,18,19,20,21,22,23,24)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_cast_4_0, 2,3,4)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_cast_rval_5_0, 2,3,4,5)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_cell_7_0, 2,3,4,5,6,7)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_class_7_0, 6,3,2,11,13,14,15,18,19,17)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_class_7_0, 21,22,24,16,25,26,27)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_code_addr_3_0, 4,13,14,15,16,17,19,3)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0, 13,14)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_constness_3_0, 13)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_data_addr_3_0, 6,5,9,4,14,12,18,19,20,21)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_data_addr_3_0, 23,26,3,29)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_data_decl_6_0, 2,3,4)
MR_decl_label9(ml_backend__mlds_to_c__mlds_output_data_defn_6_0, 2,3,4,5,6,14,25,8,9)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0, 5,2,3,9,11,12,13,15,23,17)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0, 18,30,31,32,33,34,35,36,37,45)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0, 21,25,27,28)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_decl_6_0, 2,8,11,5,12,15,16,17,18,13)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_decl_6_0, 19,20,23)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_decl_body_7_0, 6,7,5,9,10,12,13,15,17,18)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_decl_body_7_0, 19)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0, 3,4,6,8,10,12,14,15,16,18)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0, 2,20,21,22,23,35,25,24,27,28)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0, 29,30,31)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_decls_6_0, 11,4,5,13)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_defn_7_0, 7,3,4,2,12,13,14,15,10,16)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_defn_7_0, 17)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_defn_body_7_0, 33,6,8,35,11)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_defn_list_7_0, 10,4,12)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_defns_7_0, 17,6,7)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0, 7,8,9,10,11,12,14,22,38,17)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0, 3,49)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_enum_constants_6_0, 3,5)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0, 2,3,4)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0, 2,3)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0, 2,3,4,5,16,10,20)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0, 5,4,10,2,3,14,25)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_finality_3_0, 13)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0, 2,3,4,5,6)
MR_decl_label9(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0, 7,10,40,2,3,23,24,25,26)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0, 49,11,12,13,14)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_func_8_0, 2,4,6,28,8,9,10,11,7,13)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_func_8_0, 14,15,16,18,29,20,21,22,23,25)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0, 3,6,9,10,11,12,13,15,17,18)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0, 19)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0, 3,6,11,12,13,14,15,17,19,16)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0, 20,21)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0, 3,6,9,10,11,12)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_func_type_suffix_4_0, 2)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0, 12,34,4,5,8,35)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_grade_var_2_0, 2)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0, 5,6,7,8,9,10,11,15,2,16)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0, 17,18,19,20,21,22,23)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0, 2,3,4,5,6,8,7,13,14,16)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0, 17,18,19,21,22,23,24,26,27,28)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0, 29)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label9(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0, 22,26,27,28,29,30,31,36,37)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0, 2,3,4,5,21,7,8,9,6,12)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0, 14,15,16,18,19)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_init_args_10_0, 37,28,3,9,10,11,12,13,14,15)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_init_args_10_0, 16,17,18,19,20,21,40)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0, 2,3,5,4,7,9,10,11,12,13)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0, 14,15,16,18,17,20,22,23,24,25)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0, 26,27,28,29,31,30,33,35,36,37)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0, 38,39,40,43,41,47,45)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0, 2,3,7,8,10,11,4,14,15,16)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0, 52,18,19,20,22,23,25,26,27,28)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0, 29,32,33,34,35,36,37,38,30,42)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0, 43,44,45,46,47,48,40)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0, 37,43,16,44,19,20,22,23,45,6)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0, 5,8,9,11,12,13,42)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_label_name_3_0, 2)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_lval_4_0, 3,6,14,11,20,18,22,7,25,28)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_lval_4_0, 27,30,31,32,33,34,5,39,38,42)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_lval_4_0, 45,44,47,48,49,50,51,52,37,136)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_lval_4_0, 60,137,134,62)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0, 26,3,5,7,9,11,46,15,34,17)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0, 20,22)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0, 2,7)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0, 15,5)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_name_3_0, 84,46,47,3,11,86,6,87,19,20)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_name_3_0, 21,22,23,24,25,33,9,13,89,80)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_name_3_0, 85,37,38,39,40,43,34,83)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_param_9_0, 4,5,6,7,8,3,9,10,11,12)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_param_9_0, 13)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_param_types_4_0, 2,4,7)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0, 2,4,6,10)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0, 2,20,24,21,30,16,32,33,34,35)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0, 2,3,5)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0, 3,4,5,23,7,8,9,10,6,12)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0, 13,24,15,16,17,18,20,21)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0, 3,5,7,9,11,18,19,20,21,22)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0, 23,15,25,26,27,14,10,31,34,35)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0, 33,39,43,44,45,47,38,49,50,51)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0, 53,61,62,58,54)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0, 3,7,8,9,10,11,6,12)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0, 2,6,3,12,13,14,15,16)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0, 2,6,3,12,13,16,17,18,19,20)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0, 41,67,52,24,44,10,16,12,18,14)
MR_decl_label9(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0, 26,28,30,32,69,35,37,39,66)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0, 2)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0, 6,3,12,13,14,15,16,17,18,19)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0, 6,3,12,13,14,17,18,19,20,21)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0, 22,23)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pred_label_3_0, 4,5,6,7,30,9,10,11,13,14)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_pred_label_3_0, 3,17,18,19,20,21,22,23,26,27)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_pred_label_3_0, 2)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0, 4,5,6,7,8,9,18)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0, 2)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_proc_label_3_0, 4,5,6,7,33,9,10,11,13,14)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_proc_label_3_0, 3,17,18,19,20,21,22,23,35,25)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_proc_label_3_0, 26,27,29,30)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0, 2,3,5)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_rval_4_0, 7,57,13,14,15,16,5,46,3,60)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_rval_4_0, 10,61,19,20,21,22,23,24,27,29)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_rval_4_0, 62,32,33,34,35,36,37,38,39,40)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_rval_4_0, 41)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0, 4,3,6,7,24)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_rval_const_4_0, 45,13,67,49,70,4,6,8,71,16)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_rval_const_4_0, 74,20,21,22,23,24,25,73,31,34)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_rval_const_4_0, 36,72,39,40,41)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0, 19,4,5,6,7,8,9,10,11,12)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0, 13,21)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0, 23,4,5,6,7,8,9,10,11,12)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0, 13,14,16,17,25)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_src_end_4_0, 2,3,4)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_src_file_5_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_src_file_5_0, 12,13,14,16,18,20,22,24,26,27)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_src_file_5_0, 28,29,30,31,32,33,34,35,36,37)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_src_file_5_0, 38,39,40,41,42,43,44,45,46,47)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_src_file_5_0, 48,49)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_src_imports_5_0, 4,7,14)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_src_start_9_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_src_start_9_0, 12,13,14,16,19,22)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 385,2,6,7,8,225,10,12,226,14)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 15,13,17,9,19,20,205,208,209,210)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 211,212,213,214,207,216,217,218,107,108)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 109,110,111,119,112,124,132,135,136,137)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 224,4,23,24,25,26,27,28,32,31)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 34,35,37,29,30,38,41,42,39,47)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 46,50,51,43,52,53,55,56,59,58)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 61,62,63,57,65,69,70,71,72,73)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 75,76,77,78,79,82,83,86,87,85)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 89,92,95,97,98,100,101,102,141,142)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 143,145,146,147,248,149,152,151,157,158)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 159,160,161,162,163,165,166,167,169,173)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 172,180,181,182,183,184,185,186,187,188)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0, 171,190,191,192,193,194,195,196,197,198)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_statement_6_0, 199,200,201,202,203,397)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_statements_6_0, 10,4,12)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_std_unop_5_0, 2,3,4,5,9)
MR_decl_label9(ml_backend__mlds_to_c__mlds_output_switch_case_7_0, 2,4,5,14,7,8,9,10,12)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_switch_default_7_0, 23,24,46,5,6,7,8,9,4,10)
MR_decl_label9(ml_backend__mlds_to_c__mlds_output_switch_default_7_0, 11,12,31,14,15,16,17,19,47)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_tag_3_0, 2,3)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0, 64,22,23,24,25,20,27,28,29,30)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0, 3,65,66,36,15,16,8,9)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_type_4_0, 2)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0, 7,9,5,14,15,16,43,42)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0, 73,3,41,43,45,76,5,7,10,11)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0, 12,13,9,15,16,17,18,20,22,25)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0, 29,27,35,37,39,49,51,53,55,57)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0, 59,60,62,65,124,68,70,71)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0, 49,90,82,52,4,93,8,9,10,14)
MR_decl_label9(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0, 17,19,21,25,91,37,92,42,47)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0, 4,3,8,2,20,46,22,23,24,25)
MR_decl_label9(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0, 26,27,11,30,31,32,33,34,35)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_unop_5_0, 3,9,5,7)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_var_3_0, 2,3,4,5,6,7)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0, 20,4,5,6,7,8,9,10,11,12)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0, 13,14,22)
MR_decl_label10(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0, 23,4,5,6,7,8,9,10,11,12)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0, 13,14,16,17,25)
MR_decl_label9(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0, 1,15,7,10,9,13,3,4,2)
MR_decl_label10(ml_backend__mlds_to_c__output_c_file_5_0, 2,3,4,5,6,7,8,9,13,15)
MR_decl_label8(ml_backend__mlds_to_c__output_c_file_5_0, 12,11,18,19,20,22,23,24)
MR_decl_label10(ml_backend__mlds_to_c__output_c_header_file_5_0, 2,3,4,5,6,7,8,9,13,15)
MR_decl_label10(ml_backend__mlds_to_c__output_c_header_file_5_0, 12,11,18,19,20,22,23,24,25,26)
MR_decl_label2(ml_backend__mlds_to_c__output_c_header_file_5_0, 27,29)
MR_decl_label7(ml_backend__mlds_to_c__output_c_header_file_opts_5_0, 2,3,4,5,6,7,9)
MR_decl_label10(ml_backend__mlds_to_c__output_c_mlds_5_0, 2,3,4,5,6,7,8,9,13,15)
MR_decl_label9(ml_backend__mlds_to_c__output_c_mlds_5_0, 12,11,18,19,20,22,23,24,26)
MR_decl_label4(ml_backend__mlds_to_c__output_context_opts_4_0, 4,5,6,15)
MR_decl_label9(ml_backend__mlds_to_c__output_init_fn_name_4_0, 2,3,5,4,7,9,10,11,12)
MR_decl_label5(ml_backend__mlds_to_c__output_required_calls_3_0, 12,4,5,6,14)
MR_decl_label9(ml_backend__mlds_to_c__output_required_fn_name_4_0, 2,3,5,4,7,9,10,11,12)
MR_decl_label1(ml_backend__mlds_to_c__reset_context_opts_3_0, 12)
MR_decl_label4(ml_backend__mlds_to_c__standardize_param_names_4_0, 3,11,5,16)
MR_decl_label1(ml_backend__mlds_to_c__write_lval_or_string_4_0, 3)
MR_decl_label2(fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0, 3,2)
MR_decl_label1(fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0, 4)
MR_decl_label10(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0, 2,3,6,7,8,10,11,12,13,14)
MR_decl_label10(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0, 15,16,5,19,20,21,22,23,24,25)
MR_decl_label9(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0, 40,27,28,29,31,32,33,34,35)
MR_decl_label8(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0, 27,3,30,19,20,22,24,25)
MR_decl_label3(__Unify___ml_backend__mlds_to_c__func_info_0_0, 4,8,1)
MR_decl_label3(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0, 14,5,1)
MR_decl_label2(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0, 6,1)
MR_decl_label4(__Compare___ml_backend__mlds_to_c__func_info_0_0, 3,2,5,21)
MR_decl_label5(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0, 3,2,7,5,10)
MR_decl_label10(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label5(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0, 37,41,45,49,109)
MR_decl_static(ml_backend__mlds_to_c__output_c_header_file_opts_5_0)
MR_def_extern_entry(ml_backend__mlds_to_c__output_c_mlds_5_0)
MR_def_extern_entry(ml_backend__mlds_to_c__output_c_header_file_5_0)
MR_def_extern_entry(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0)
MR_def_extern_entry(ml_backend__mlds_to_c__output_c_file_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_indent_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0)
MR_decl_static(fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0)
MR_decl_static(ml_backend__mlds_to_c__output_init_fn_name_4_0)
MR_decl_static(ml_backend__mlds_to_c__output_required_fn_name_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pred_label_3_0)
MR_decl_static(fn__ml_backend__mlds_to_c__this_file_0_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_name_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_data_decl_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_decl_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_decl_body_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_finality_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_constness_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_abstractness_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0)
MR_decl_static(ml_backend__mlds_to_c__output_context_opts_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_decl_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_decls_6_0)
MR_decl_static(fn__ml_backend__mlds_to_c__global_var_name_1_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_var_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_param_types_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_type_suffix_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_type_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_cast_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_tag_3_0)
MR_decl_static(ml_backend__mlds_to_c__is_an_address_1_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_proc_label_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_code_addr_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_data_addr_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_rval_const_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_lval_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_rval_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_unop_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_cast_rval_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_std_unop_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_binop_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_label_name_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0)
MR_decl_static(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0)
MR_decl_static(ml_backend__mlds_to_c__write_lval_or_string_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_init_args_10_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_enum_constants_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_data_defn_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_defns_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_defn_list_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_defn_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_defn_body_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_class_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_8_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_statements_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_statement_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_switch_default_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_src_imports_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_src_import_5_0)
MR_decl_static(fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_src_start_9_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_src_end_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_grade_var_2_0)
MR_decl_static(ml_backend__mlds_to_c__output_required_calls_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_decls_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_defns_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_src_file_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_hdr_decl_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_foreign_import_module_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_defn_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_type_ignore_opts_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_export_enum_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_cell_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0)
MR_decl_static(ml_backend__mlds_to_c__is_static_member_1_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_make_base_class_5_0)
MR_decl_static(ml_backend__mlds_to_c__is_enum_const_1_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0)
MR_decl_static(ml_backend__mlds_to_c__standardize_param_names_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_param_9_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_param_type_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_type_suffix_no_size_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_case_cond_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_switch_case_7_0)
MR_decl_static(ml_backend__mlds_to_c__reset_context_opts_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__decl_or_defn_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__decl_or_defn_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__func_info_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__func_info_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__indent_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__indent_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__locn_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__locn_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__output_type_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__output_type_0_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_c_hdr_decls__890__1_3_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn__999__1_2_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_func_name__1019__1_2_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1134__1_1_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1_1_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_exported_enum_constant__1403__1_2_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_rval_const__4442__1_2_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_header_file_opts_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_mlds_to_c_opts_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_mlds_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_header_file_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_file_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_exported_enum_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_imports_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_4;
static const struct mercury_type_0 mercury_common_0[18] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_header_file_opts_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_mlds_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_header_file_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_file_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_6_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, target_code_component),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_exported_enum),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_imports_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_import),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_6_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, locn),
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, locn),
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_2 mercury_common_2[6] =
{
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tinitialised = MR_TRUE;\n\n", 25),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tif (initialised) return;\n", 26),
MR_TAG_COMMON(1,2,1)
},
{
MR_string_const("\tstatic MR_bool initialised = MR_FALSE;\n", 40),
MR_TAG_COMMON(1,2,2)
},
{
MR_string_const("\"\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const(".mih", 4),
MR_TAG_COMMON(1,2,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_rval_const_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_1;
static const struct mercury_type_3 mercury_common_3[7] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(7,1),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_rval_const_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_COMMON(7,4)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
};

MR_decl_entry(parse_tree__file_names__module_name_to_file_name_stem_2_0);
MR_decl_entry(ml_backend__ml_util__defn_is_commit_type_var_1_0);
MR_decl_entry(ml_backend__ml_util__defn_is_function_1_0);
MR_decl_entry(ml_backend__ml_util__defn_is_public_1_0);
MR_decl_entry(ml_backend__ml_util__defn_is_type_1_0);
MR_decl_entry(ml_backend__ml_util__defn_is_type_ctor_info_1_0);
static const struct mercury_type_4 mercury_common_4[28] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(parse_tree__file_names__module_name_to_file_name_stem_2_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_c_hdr_decls__890__1_3_0),
0
},
{
MR_COMMON(13,0),
MR_ENTRY_AP(ml_backend__mlds_to_c__is_enum_const_1_0),
0
},
{
MR_COMMON(13,1),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_commit_type_var_1_0),
0
},
{
MR_COMMON(13,2),
MR_ENTRY_AP(ml_backend__mlds_to_c__is_static_member_1_0),
0
},
{
MR_COMMON(13,3),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_function_1_0),
0
},
{
MR_COMMON(13,4),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_public_1_0),
0
},
{
MR_COMMON(13,5),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_public_1_0),
0
},
{
MR_COMMON(13,6),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_type_1_0),
0
},
{
MR_COMMON(3,3),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0),
0
},
{
MR_COMMON(13,7),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_public_1_0),
0
},
{
MR_COMMON(13,8),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_type_1_0),
0
},
{
MR_COMMON(13,9),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_type_1_0),
0
},
{
MR_COMMON(13,10),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_function_1_0),
0
},
{
MR_COMMON(13,11),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_type_ctor_info_1_0),
0
},
{
MR_COMMON(13,12),
MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1134__1_1_0),
0
},
{
MR_COMMON(13,13),
MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1_1_0),
0
},
{
MR_COMMON(9,13),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0),
0
},
{
MR_COMMON(9,14),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_no_size_4_0),
0
},
{
MR_COMMON(9,15),
MR_ENTRY_AP(ml_backend__mlds_to_c__standardize_param_names_4_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0),
0
},
{
MR_COMMON(9,16),
MR_ENTRY_AP(ml_backend__mlds_to_c__standardize_param_names_4_0),
0
},
{
MR_COMMON(9,17),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0),
0
},
{
MR_COMMON(9,18),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_no_size_4_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0;
static const struct mercury_type_5 mercury_common_5[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_2,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_2,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_exported_enum_constant),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
1
},
{
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_7 mercury_common_7[5] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_decl_is_local)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
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
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_enum_constants_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_decls_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pragma_export_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_switch_case_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_1;
static const struct mercury_type_8 mercury_common_8[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_COMMON(7,0),
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_enum_constants_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_decls_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_COMMON(7,0),
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_6_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_switch_case_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_COMMON(17,0),
MR_COMMON(17,0),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_COMMON(17,0),
MR_COMMON(17,0),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_param_types_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_2;
static const struct mercury_type_9 mercury_common_9[19] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_param_types_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_6,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_7,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_8,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_9,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_10,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_11,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_10 mercury_common_10[2] =
{
{
MR_string_const("array", 5)
},
{
MR_string_const("base", 4)
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
MR_TAG_COMMON(0,10,0),
MR_string_const("array", 5)
},
};

static const struct mercury_type_12 mercury_common_12[1] =
{
{
MR_TAG_COMMON(1,11,0),
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_enum_constants_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_defns_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_2;
static const struct mercury_type_13 mercury_common_13[14] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_enum_constants_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_defns_7_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_7_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_3,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_3,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_4,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_5,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_6,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_4;
static const struct mercury_type_14 mercury_common_14[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_4,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_6;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_func_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_1;
static const struct mercury_type_15 mercury_common_15[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_6,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds_to_c, func_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_16 mercury_common_16[2] =
{
{
MR_COMMON(0,13),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_ignore_opts_5_0),
1,
0
},
{
MR_COMMON(0,14),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_ignore_opts_5_0),
1,
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_mlds_to_c_opts_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_17 mercury_common_17[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0_1;
static const struct mercury_type_18 mercury_common_18[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_3,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_COMMON(17,0),
MR_COMMON(17,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, mlds_to_c_opts),
MR_COMMON(17,0),
MR_COMMON(17,0),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_c__enum_functor_desc_decl_or_defn_0_0 = {
	"forward_decl",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_c__enum_functor_desc_decl_or_defn_0_1 = {
	"definition",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__mlds_to_c__enum_value_ordered_decl_or_defn_0[] = {
	&mercury_data_ml_backend__mlds_to_c__enum_functor_desc_decl_or_defn_0_0,
	&mercury_data_ml_backend__mlds_to_c__enum_functor_desc_decl_or_defn_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__mlds_to_c__enum_name_ordered_decl_or_defn_0[] = {
	&mercury_data_ml_backend__mlds_to_c__enum_functor_desc_decl_or_defn_0_1,
	&mercury_data_ml_backend__mlds_to_c__enum_functor_desc_decl_or_defn_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_c__functor_number_map_decl_or_defn_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_decl_or_defn_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_c__decl_or_defn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_c__decl_or_defn_0_0)),
	"ml_backend.mlds_to_c",
	"decl_or_defn",
	{ (void *)mercury_data_ml_backend__mlds_to_c__enum_name_ordered_decl_or_defn_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_c__enum_value_ordered_decl_or_defn_0 },
	2,
	4,
	mercury_data_ml_backend__mlds_to_c__functor_number_map_decl_or_defn_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0 = {
	&mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_func_signature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_func_signature_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_c__field_types_func_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_func_signature_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_c__du_functor_desc_func_info_0_0 = {
	"func_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_c__field_types_func_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_c__du_stag_ordered_func_info_0_0[] = {
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_func_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_c__du_ptag_ordered_func_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_c__du_stag_ordered_func_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_c__du_name_ordered_func_info_0[] = {
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_func_info_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_c__functor_number_map_func_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_func_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_c__func_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_c__func_info_0_0)),
	"ml_backend.mlds_to_c",
	"func_info",
	{ (void *)mercury_data_ml_backend__mlds_to_c__du_name_ordered_func_info_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_c__du_ptag_ordered_func_info_0 },
	1,
	4,
	mercury_data_ml_backend__mlds_to_c__functor_number_map_func_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_indent_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_c__indent_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_c__indent_0_0)),
	"ml_backend.mlds_to_c",
	"indent",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_c__enum_functor_desc_locn_0_0 = {
	"prefix",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_c__enum_functor_desc_locn_0_1 = {
	"suffix",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__mlds_to_c__enum_value_ordered_locn_0[] = {
	&mercury_data_ml_backend__mlds_to_c__enum_functor_desc_locn_0_0,
	&mercury_data_ml_backend__mlds_to_c__enum_functor_desc_locn_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__mlds_to_c__enum_name_ordered_locn_0[] = {
	&mercury_data_ml_backend__mlds_to_c__enum_functor_desc_locn_0_0,
	&mercury_data_ml_backend__mlds_to_c__enum_functor_desc_locn_0_1
};

const MR_Integer mercury_data_ml_backend__mlds_to_c__functor_number_map_locn_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_locn_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_c__locn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_c__locn_0_0)),
	"ml_backend.mlds_to_c",
	"locn",
	{ (void *)mercury_data_ml_backend__mlds_to_c__enum_name_ordered_locn_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_c__enum_value_ordered_locn_0 },
	2,
	4,
	mercury_data_ml_backend__mlds_to_c__functor_number_map_locn_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_c__field_types_lval_or_string_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_c__du_functor_desc_lval_or_string_0_0 = {
	"ls_lval",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_c__field_types_lval_or_string_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_c__field_types_lval_or_string_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_c__du_functor_desc_lval_or_string_0_1 = {
	"ls_string",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_c__field_types_lval_or_string_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_c__du_stag_ordered_lval_or_string_0_0[] = {
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_lval_or_string_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_c__du_stag_ordered_lval_or_string_0_1[] = {
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_lval_or_string_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_c__du_ptag_ordered_lval_or_string_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_c__du_stag_ordered_lval_or_string_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_c__du_stag_ordered_lval_or_string_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_c__du_name_ordered_lval_or_string_0[] = {
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_lval_or_string_0_0,
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_lval_or_string_0_1
};

const MR_Integer mercury_data_ml_backend__mlds_to_c__functor_number_map_lval_or_string_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_lval_or_string_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0)),
	"ml_backend.mlds_to_c",
	"lval_or_string",
	{ (void *)mercury_data_ml_backend__mlds_to_c__du_name_ordered_lval_or_string_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_c__du_ptag_ordered_lval_or_string_0 },
	2,
	4,
	mercury_data_ml_backend__mlds_to_c__functor_number_map_lval_or_string_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_compilation_target_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_gc_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_compilation_target_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_gc_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_c__field_types_mlds_to_c_opts_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_compilation_target_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_gc_method_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_globals_0
};

const MR_ConstString mercury_data_ml_backend__mlds_to_c__field_names_mlds_to_c_opts_0_0[] = {
	"m2co_line_numbers",
	"m2co_auto_comments",
	"m2co_gcc_local_labels",
	"m2co_gcc_nested_functions",
	"m2co_highlevel_data",
	"m2co_profile_calls",
	"m2co_profile_memory",
	"m2co_profile_time",
	"m2co_need_to_init",
	"m2co_target",
	"m2co_gc_method",
	"m2co_std_func_decl",
	"m2co_all_globals"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_c__du_functor_desc_mlds_to_c_opts_0_0 = {
	"mlds_to_c_opts",
	13,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_c__field_types_mlds_to_c_opts_0_0,
	mercury_data_ml_backend__mlds_to_c__field_names_mlds_to_c_opts_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_c__du_stag_ordered_mlds_to_c_opts_0_0[] = {
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_mlds_to_c_opts_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_c__du_ptag_ordered_mlds_to_c_opts_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_c__du_stag_ordered_mlds_to_c_opts_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_c__du_name_ordered_mlds_to_c_opts_0[] = {
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_mlds_to_c_opts_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_c__functor_number_map_mlds_to_c_opts_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_mlds_to_c_opts_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0)),
	"ml_backend.mlds_to_c",
	"mlds_to_c_opts",
	{ (void *)mercury_data_ml_backend__mlds_to_c__du_name_ordered_mlds_to_c_opts_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_c__du_ptag_ordered_mlds_to_c_opts_0 },
	1,
	4,
	mercury_data_ml_backend__mlds_to_c__functor_number_map_mlds_to_c_opts_0
};

static const MR_VA_TypeInfo_Struct4 mercury_data___vti_pred_4ml_backend__mlds_to_c__type_ctor_info_mlds_to_c_opts_0ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	4,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds_to_c__type_ctor_info_mlds_to_c_opts_0,
	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_output_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_c__output_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_c__output_type_0_0)),
	"ml_backend.mlds_to_c",
	"output_type",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_4ml_backend__mlds_to_c__type_ctor_info_mlds_to_c_opts_0ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_param",
9,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2284,
"d1;c12;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_exported_enum_constant",
3,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1378,
"d1;c7;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_param",
9,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2284,
"d1;c12;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type_suffix_no_size",
4,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type_prefix",
4,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"standardize_param_names",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2213,
"d1;c20;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_prefix_suffix",
6,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2199,
"d1;c12;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_type_prefix_suffix",
3,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"standardize_param_names",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2213,
"d1;c20;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_prefix_suffix",
6,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2199,
"d1;c12;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type_suffix_no_size",
4,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type_prefix",
4,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_switch_case_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_case_cond",
6,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
3457,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_1403",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1403,
"d1;c10;e;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_999",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
999,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_11 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_output_arg",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1206,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_10 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_output_arg",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1206,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_9 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_output_arg",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1206,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_8 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_input_arg",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1173,
"d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_7 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_input_arg",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1173,
"d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_6 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_input_arg",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1173,
"d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_5 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_input_arg",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1173,
"d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_output_defns",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1146,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_input_defns",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1144,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_1138",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1138,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_1134",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1134,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_arg",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1306,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_type_ignore_opts",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1026,
"d1;c21;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_type_ignore_opts",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1026,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_1019",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1019,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_6 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_type_ctor_info",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
407,
"d1;c30;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_5 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_function",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
406,
"d1;c28;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_4 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_type",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
405,
"d1;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_type",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
403,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_public",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
402,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_env_var_decl",
3,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
382,
"d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_cell",
7,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1647,
"d1;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_cell",
7,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1610,
"d1;c25;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_6_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_defn",
6,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
952,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_c_defn",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
950,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_c_foreign_import_module",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
947,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_decls_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_c_hdr_decl",
6,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
937,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_env_var_init",
3,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
578,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_env_var_init",
3,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
578,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_get_env_var_names_from_defn",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
447,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_imports_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_src_import",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
308,
"d1;c7;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_export_enum",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1365,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_type",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
272,
"d1;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_public",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
271,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_public",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
271,
"d1;c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_6 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_switch_case",
7,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
3173,
"d1;c9;d5;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_5 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_rval",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
3318,
"d1;c9;d10;c5;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_computed_goto_label",
8,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
3214,
"d1;c9;d8;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_rval",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
3288,
"d1;c9;d9;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_lval",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
3283,
"d1;c9;d9;c17;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statement_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_function",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
3065,
"d1;c9;d2;c5;d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_7_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"is_static_member",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1884,
"d1;c12;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_make_base_class",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1895,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_defns_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_commit_type_var",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1427,
"d1;c9;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_initializer_body",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2090,
"d1;c6;d3;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_initializer_body",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2112,
"d1;c6;d4;c2;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_enum_constants_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_enum_constant",
6,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1967,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_enum_constants_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"is_enum_const",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1966,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_target_code_component",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
3798,
"d1;c8;d10;c2;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_rval_const_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_4442",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
4442,
"d1;c5;d5;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2318,
"d1;c6;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2845,
"d1;c6;d3;c2;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_param_types_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_param_type",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2343,
"d1;c7;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type_forward_decl",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1669,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_type_list_contains_type",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1669,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_c_hdr_decl",
6,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
894,
"d1;c27;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_890",
3,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
890,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_1 = {
{
MR_PREDICATE,
"parse_tree.file_names",
"parse_tree.file_names",
"module_name_to_file_name_stem",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
888,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_file_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_src_file",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
214,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_header_file_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_hdr_file",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
237,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_mlds_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_src_file",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
214,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_header_file_opts_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_hdr_file",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
237,
"d1;c19;"
};


MR_decl_entry(fn__ml_backend__mlds__mlds_get_module_name_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);
MR_decl_entry(libs__file_util__output_to_file_5_0);
MR_decl_entry(parse_tree__module_cmds__update_interface_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module0)
	MR_init_entry1(ml_backend__mlds_to_c__output_c_header_file_opts_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__output_c_header_file_opts_5_0);
	MR_init_label7(ml_backend__mlds_to_c__output_c_header_file_opts_5_0,2,3,4,5,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_c_header_file_opts'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__output_c_header_file_opts_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_module_name_1_0,
		ml_backend__mlds_to_c__output_c_header_file_opts_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_opts_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(2), 12);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(".tmp", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_c_header_file_opts_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_opts_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".mih", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_c_header_file_opts_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_opts_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		ml_backend__mlds_to_c__output_c_header_file_opts_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_opts_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".mih", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_c_header_file_opts_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_opts_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		ml_backend__mlds_to_c__output_c_header_file_opts_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_opts_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(libs__file_util__output_to_file_5_0,
		ml_backend__mlds_to_c__output_c_header_file_opts_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_opts_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__module_cmds__update_interface_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(libs__globals__get_gc_method_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module1)
	MR_init_entry1(ml_backend__mlds_to_c__output_c_mlds_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__output_c_mlds_5_0);
	MR_init_label10(ml_backend__mlds_to_c__output_c_mlds_5_0,2,3,4,5,6,7,8,9,13,15)
	MR_init_label9(ml_backend__mlds_to_c__output_c_mlds_5_0,12,11,18,19,20,22,23,24,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_c_mlds'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_c__output_c_mlds_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 119;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 120;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 291;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 224;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 223;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 170;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 172;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 171;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_mlds_5_0_i13);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_mlds_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_mlds_5_0_i15);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_mlds_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_mlds_5_0_i11);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Integer) 1;
	MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_mlds_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(12) = (MR_Integer) 0;
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 10) = MR_r1;
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 12) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_module_name_1_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(2), 12);
	MR_r1 = (MR_Word) MR_string_const(".c", 2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_src_file_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(libs__file_util__output_to_file_5_0,
		ml_backend__mlds_to_c__output_c_mlds_5_0_i26);
MR_def_label(ml_backend__mlds_to_c__output_c_mlds_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__output_c_header_file_opts_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module2)
	MR_init_entry1(ml_backend__mlds_to_c__output_c_header_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__output_c_header_file_5_0);
	MR_init_label10(ml_backend__mlds_to_c__output_c_header_file_5_0,2,3,4,5,6,7,8,9,13,15)
	MR_init_label10(ml_backend__mlds_to_c__output_c_header_file_5_0,12,11,18,19,20,22,23,24,25,26)
	MR_init_label2(ml_backend__mlds_to_c__output_c_header_file_5_0,27,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_c_header_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_c__output_c_header_file_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 119;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 120;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 291;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 224;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 223;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 170;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 172;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 171;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_header_file_5_0_i13);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_header_file_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_header_file_5_0_i15);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_header_file_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_header_file_5_0_i11);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Integer) 1;
	MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_header_file_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(12) = (MR_Integer) 0;
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 10) = MR_r1;
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 12) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_module_name_1_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(2), 12);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(".tmp", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".mih", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i25);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".mih", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i26);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i27);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(libs__file_util__output_to_file_5_0,
		ml_backend__mlds_to_c__output_c_header_file_5_0_i29);
MR_def_label(ml_backend__mlds_to_c__output_c_header_file_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(parse_tree__module_cmds__update_interface_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__rtti__tabling_info_id_str_1_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_std_tabling_proc_label_1_0);
MR_decl_entry(fn__parse_tree__prog_foreign__name_mangle_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module3)
	MR_init_entry1(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0);
	MR_init_label10(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,2,3,6,7,8,10,11,12,13,14)
	MR_init_label10(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,15,16,5,19,20,21,22,23,24,25)
	MR_init_label9(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,40,27,28,29,31,32,33,34,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_tabling_data_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__backend_libs__rtti__tabling_info_id_str_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i2);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_std_tabling_proc_label_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i3);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i5);
	}
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i6);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i7);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i8);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i10);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i13);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i11);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i12);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i13);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i14);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i15);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i16);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i40);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i19);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = (MR_Word) MR_string_const("f", 1);
	MR_sv(5) = ((MR_Integer) MR_tfield(0, MR_tempr2, 3) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i20);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = (MR_Word) MR_string_const("p", 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i20);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i21);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i22);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i23);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i24);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i25);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i27);
	}
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i31);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i28);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i29);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i40);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i32);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i33);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i34);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_for_", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i35);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module4)
	MR_init_entry1(ml_backend__mlds_to_c__output_c_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__output_c_file_5_0);
	MR_init_label10(ml_backend__mlds_to_c__output_c_file_5_0,2,3,4,5,6,7,8,9,13,15)
	MR_init_label8(ml_backend__mlds_to_c__output_c_file_5_0,12,11,18,19,20,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_c_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_c__output_c_file_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 119;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 120;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 291;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 224;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 223;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 170;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 172;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 171;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_file_5_0_i13);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_file_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_file_5_0_i15);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_file_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_file_5_0_i11);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Integer) 1;
	MR_GOTO_LAB(ml_backend__mlds_to_c__output_c_file_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(12) = (MR_Integer) 0;
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 10) = MR_r1;
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 12) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_module_name_1_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_sv(2), 12);
	MR_r1 = (MR_Word) MR_string_const(".c", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		ml_backend__mlds_to_c__output_c_file_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__output_c_file_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_src_file_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(libs__file_util__output_to_file_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module5)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_indent_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_indent_3_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_indent_3_0,10,3,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_indent'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_indent_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_indent_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_indent_3_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_indent_3_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_indent_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_indent_3_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_indent_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__version_1_0);
MR_decl_entry(backend_libs__c_util__output_c_file_intro_and_grade_5_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(parse_tree__prog_out__write_sym_name_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module6)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_hdr_start_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label9(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,22,26,27,28,29,30,31,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_hdr_start'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(library__version_1_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(1), 12);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(".m", 2);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(backend_libs__c_util__output_c_file_intro_and_grade_5_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- module ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(". */\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- interface. */\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#ifndef MR_HEADER_GUARD_", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#define MR_HEADER_GUARD_", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 9);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i36);
	}
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#ifdef __cplusplus\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("extern \"C\" {\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#endif\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_5_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#include \"mercury.h\"\n", 21);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module7)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_hdr_end_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,5,6,7,8,9,10,11,15,2,16)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,17,18,19,20,21,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_hdr_end'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 9);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i15);
	}
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#ifdef __cplusplus\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#endif\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_sv(2) = MR_r3;
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#endif /* MR_HEADER_GUARD_", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- end_interface ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(". */\n", 5);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module8)
	MR_init_entry1(fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0);
	MR_init_label2(fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_get_c_foreign_code'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0);
MR_decl_entry(string__prefix_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module9)
	MR_init_entry1(ml_backend__mlds_to_c__output_init_fn_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__output_init_fn_name_4_0);
	MR_init_label9(ml_backend__mlds_to_c__output_init_fn_name_4_0,2,3,5,4,7,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_init_fn_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__output_init_fn_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__output_init_fn_name_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__output_init_fn_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__output_init_fn_name_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__output_init_fn_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(string__prefix_2_0,
		ml_backend__mlds_to_c__output_init_fn_name_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__output_init_fn_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_init_fn_name_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("void ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_init_fn_name_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__output_init_fn_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_init_fn_name_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__output_init_fn_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("void ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_init_fn_name_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__output_init_fn_name_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_init_fn_name_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__output_init_fn_name_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__init", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_init_fn_name_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__output_init_fn_name_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_init_fn_name_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__output_init_fn_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(void)", 6);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module10)
	MR_init_entry1(ml_backend__mlds_to_c__output_required_fn_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__output_required_fn_name_4_0);
	MR_init_label9(ml_backend__mlds_to_c__output_required_fn_name_4_0,2,3,5,4,7,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_required_fn_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__output_required_fn_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__output_required_fn_name_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__output_required_fn_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__output_required_fn_name_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__output_required_fn_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(string__prefix_2_0,
		ml_backend__mlds_to_c__output_required_fn_name_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__output_required_fn_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_required_fn_name_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("void ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_required_fn_name_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__output_required_fn_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_required_fn_name_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__output_required_fn_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("void ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_required_fn_name_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__output_required_fn_name_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_required_fn_name_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__output_required_fn_name_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_required_fn_name_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__output_required_fn_name_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_required_fn_name_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__output_required_fn_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(void)", 6);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module11)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,2,3,5,4,7,9,10,11,12,13)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,14,15,16,18,17,20,22,23,24,25)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,26,27,28,29,31,30,33,35,36,37)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,38,39,40,43,41,47,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_init_fn_decls'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(string__prefix_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("void ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("void ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__init", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(void)", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(string__prefix_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("void ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("void ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__init", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_type_tables", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(void)", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(string__prefix_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const("void ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("void ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__init", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_debugger", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(void)", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i39);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i41);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("required_init", 13);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_required_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("required_final", 14);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_required_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(ml_backend__mlds__is_std_lib_module_2_0);
MR_decl_entry(fn__backend_libs__foreign__decl_guard_1_0);
MR_decl_entry(io__write_strings_3_0);
MR_decl_entry(fn__mdbcomp__prim_data__get_ancestors_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
MR_decl_entry(list__map_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);
MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module12)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,2,5,3,8,9,15,16,18,20,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_c_hdr_decls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_r4, 0);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds__is_std_lib_module_2_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i3);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__foreign__decl_guard_1_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\n#define ", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("#ifndef ", 8);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__get_ancestors_1_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_c_hdr_decl_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_TAG_COMMON(1,6,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n#endif\n", 8);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);
MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module13)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pred_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pred_label_3_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,4,5,6,7,30,9,10,11,13,14)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,3,17,18,19,20,21,22,23,26,27)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pred_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pred_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i9);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i17);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_string_const("f", 1);
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr1, 3) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_string_const("p", 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i2);
	}
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module14)
	MR_init_entry1(fn__ml_backend__mlds_to_c__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_c__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_c__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0);
MR_decl_entry(backend_libs__rtti__id_to_c_identifier_2_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module15)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_name_3_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_name_3_0,84,46,47,3,11,86,6,87,19,20)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_name_3_0,21,22,23,24,25,33,9,13,89,80)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_name_3_0,85,37,38,39,40,43,34,83)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i84) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i85) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i34));
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i46);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i86) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i87) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i33));
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: module_layout", 18);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i80);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r3, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_scalar_common_", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r3, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_name_3_0_i89);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_name_3_0_i13);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_name_3_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r3;
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i80);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: internal_layout", 20);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: proc_layout", 16);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i80);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i39);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_name_3_0_i83);
	}
	MR_sv(1) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module16)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0);
	MR_init_label9(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,7,10,40,2,3,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_fully_qualified_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i40);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i10);
	}
	if ((MR_tempr2 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_name_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_INT_NE(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 5);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_name_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module17)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_data_decl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_data_decl_6_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_data_decl_6_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_data_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_data_decl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_data_decl_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_decl_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_data_decl_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_decl_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_data_decl_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_decl_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module18)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_decl_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_func_decl_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_func_decl'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_decl_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Word) MR_string_const("MR_CALL ", 8);
	MR_r6 = MR_tempr1;
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__get_initializer_array_size_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module19)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_decl_body_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_decl_body_7_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,6,7,5,9,10,12,13,15,17,18)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_decl_body'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_decl_body_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i15);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i12);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(2, MR_tempr3, 0), 0);
	if (MR_INT_NE(MR_tempr2,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i5);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("enum ", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_e", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("struct ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_s", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__get_initializer_array_size_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_data_decl_6_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_tfield(1, MR_r5, 0);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i17);
	}
	MR_r5 = MR_tfield(1, MR_r5, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_func_decl_7_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r5, 1);
	MR_r2 = MR_tfield(1, MR_r7, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_func_decl_7_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_7_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module20)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0);
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0,5,4,10,2,3,14,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_extern_or_static'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i5);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r5;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r5;
MR_def_label(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i2);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("static ", 7);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i14);
	}
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("extern ", 7);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i25);
	}
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i25);
	}
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("auto ", 5);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module21)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_finality_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_finality_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_finality_3_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_finality'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_finality_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_finality_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("/* final */ ", 12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_finality_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module22)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_constness_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_constness_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_constness_3_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_constness'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_constness_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_constness_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("const ", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_constness_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module23)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_abstractness_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_abstractness_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_abstractness_3_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_abstractness'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_abstractness_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_abstractness_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("/* abstract */ ", 15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_abstractness_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__access_1_0);
MR_decl_entry(fn__ml_backend__mlds__per_instance_1_0);
MR_decl_entry(fn__ml_backend__mlds__virtuality_1_0);
MR_decl_entry(fn__ml_backend__mlds__finality_1_0);
MR_decl_entry(fn__ml_backend__mlds__constness_1_0);
MR_decl_entry(fn__ml_backend__mlds__abstractness_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module24)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_decl_flags_7_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,3,4,6,8,10,12,14,15,16,18)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,2,20,21,22,23,35,25,24,27,28)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,29,30,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_decl_flags'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r7 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i14) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i10) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i8));
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* default access */ ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* local: */ ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* private: */ ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* protected: */ ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* public: */ ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("/* one_copy */ ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__virtuality_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i25);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("virtual ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__finality_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_finality_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_constness_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_7_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_abstractness_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_get_prog_context_1_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(backend_libs__c_util__always_set_line_num_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module25)
	MR_init_entry1(ml_backend__mlds_to_c__output_context_opts_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__output_context_opts_4_0);
	MR_init_label4(ml_backend__mlds_to_c__output_context_opts_4_0,4,5,6,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_context_opts'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__output_context_opts_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_context_opts_4_0_i15);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__output_context_opts_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__output_context_opts_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__output_context_opts_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__output_context_opts_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__output_context_opts_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__output_context_opts_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__c_util__always_set_line_num_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__output_context_opts_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_get_arg_types_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
MR_decl_entry(solutions__aggregate_4_2);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module26)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_decl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_decl_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_decl_6_0,2,8,11,5,12,15,16,17,18,13)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_decl_6_0,19,20,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_decl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 3);
	MR_sv(7) = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_6_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(2, MR_tempr1, 0), 0);
	if (MR_INT_EQ(MR_tempr2,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_6_0_i23);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 4);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_6_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_6_0_i5);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_sv(7), 1), 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_arg_types_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(solutions__aggregate_4_2,
		ml_backend__mlds_to_c__mlds_output_decl_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_6_0_i13);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_6_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_decl_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_decl_6_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_decl_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_6_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,
		ml_backend__mlds_to_c__mlds_output_decl_6_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_decl_body_7_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module27)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_decls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_decls_6_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_decls_6_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_decls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_decls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_decls_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decls_6_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_decls_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decls_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_decl_6_0,
		ml_backend__mlds_to_c__mlds_output_decls_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decls_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decls_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decls_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module28)
	MR_init_entry1(fn__ml_backend__mlds_to_c__global_var_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_c__global_var_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'global_var_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_c__global_var_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury_envvar_", 15);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module29)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_var_3_0);
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_var_3_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_var_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_var_3_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_var_3_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_var_3_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		ml_backend__mlds_to_c__mlds_output_var_3_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_var_3_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_var_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module30)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_param_types_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_param_types_4_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_param_types_4_0,2,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_param_types'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_param_types_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_param_types_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_types_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_param_types_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_param_types_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_types_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_param_type_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_param_types_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_types_4_0,7)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module31)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_type_suffix_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_func_type_suffix_4_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_func_type_suffix_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_func_type_suffix'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_type_suffix_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_type_suffix_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_suffix_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_param_types_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module32)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0,17,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_array_type_suffix'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(int__max_3_0,
		ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 91;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 93;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__rtti__rtti_id_maybe_element_has_array_type_1_0);
MR_decl_entry(fn__backend_libs__rtti__tabling_id_has_array_type_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module33)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_type_suffix_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,49,90,82,52,4,93,8,9,10,14)
	MR_init_label9(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,17,19,21,25,91,37,92,42,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_type_suffix'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i49) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i90) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i90) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i52));
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r2),9)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i47);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i14) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i90) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i90) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i90) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i25) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i91) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i92));
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i93);
	}
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(int__max_3_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 91;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 93;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i90);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const(")(", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const(", void *", 8);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_type_suffix_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__rtti__rtti_id_maybe_element_has_array_type_1_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i82);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__rtti__tabling_id_has_array_type_1_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0_i82);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_type_suffix: unknown_type", 37);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module34)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0);
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0,3,6,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_func_type_prefix'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_i6);
	}
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_4_0,
		ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" MR_CALL (*", 11);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module35)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_type_4_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_type_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_type_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_type_gen__ml_gen_type_name_3_0);
MR_decl_entry(backend_libs__rtti__rtti_id_maybe_element_c_type_3_0);
MR_decl_entry(backend_libs__rtti__tabling_id_c_type_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module36)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_type_prefix_4_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,73,3,41,43,45,76,5,7,10,11)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,12,13,9,15,16,17,18,20,22,25)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,29,27,35,37,39,49,51,53,55,57)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,59,60,62,65,124,68,70,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_type_prefix'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i73) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i76));
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i49) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i55) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i53) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i51) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i68) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i57) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i70));
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i43);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_ArrayPtr", 11);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_type_name_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i73) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i76));
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i25) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i59) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i35) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i62) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i65));
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i9);
	}
	MR_sv(1) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_string_const("MR_Integer /* actually \140enum ", 29);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_e\' */", 6);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("struct ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_s", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("jmp_buf", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__label__", 9);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i27);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_Cont", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_NestedCont", 13);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("void MR_CALL (*", 15);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_type_prefix_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("void *", 6);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Box", 6);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_bool", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Char", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Float", 8);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Integer", 10);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_PseudoTypeInfo", 17);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_4_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i60);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" *", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(backend_libs__rtti__rtti_id_maybe_element_c_type_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i124);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(backend_libs__rtti__tabling_id_c_type_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i124);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_TypeInfo", 11);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_4_0_i71);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("prefix has unknown type", 23);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module37)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,26,3,5,7,9,11,46,15,34,17)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,20,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_mercury_type_prefix'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i26) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i46));
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i15) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i22) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i34));
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r3, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i11));
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Char", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Float", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Integer", 10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_String", 9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0_i17);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Word", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_ClosurePtr", 13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Tuple", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Box", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_det_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module38)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0);
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0,15,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_mercury_user_type_prefix'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_Word", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_det_2_0,
		ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module39)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0);
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_mercury_user_type_name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_type_name_3_0,
		ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module40)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_cast_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_cast_4_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_cast_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_cast'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_cast_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_cast_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_cast_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_cast_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module41)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_tag_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_tag_3_0);
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_tag_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_tag'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_tag_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_mktag(", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_tag_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_tag_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_tag_3_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_tag_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module42)
	MR_init_entry1(ml_backend__mlds_to_c__is_an_address_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__is_an_address_1_0);
	MR_init_label5(ml_backend__mlds_to_c__is_an_address_1_0,3,19,14,28,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_an_address'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__is_an_address_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i19);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i3);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ml_backend__mlds_to_c__is_an_address_1_0);
	}
MR_def_label(ml_backend__mlds_to_c__is_an_address_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_tempr1, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i28));
	}
MR_def_label(ml_backend__mlds_to_c__is_an_address_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i14) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1));
MR_def_label(ml_backend__mlds_to_c__is_an_address_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localtailcall(ml_backend__mlds_to_c__is_an_address_1_0);
	}
MR_def_label(ml_backend__mlds_to_c__is_an_address_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_c__is_an_address_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module43)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_proc_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_proc_label_3_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,4,5,6,7,33,9,10,11,13,14)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,3,17,18,19,20,21,22,23,35,25)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,26,27,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_proc_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_proc_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i9);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i17);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_string_const("f", 1);
	MR_sv(4) = ((MR_Integer) MR_tfield(0, MR_tempr2, 3) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = (MR_Word) MR_string_const("p", 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i25);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 95;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module44)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0,49,11,12,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_fully_qualified_proc_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_INT_NE(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 5);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_proc_label_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_proc_label_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module45)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_code_addr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_code_addr_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,4,13,14,15,16,17,19,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_code_addr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_code_addr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 4);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 5);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,
		ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,
		ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module46)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_data_var_name_4_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,5,2,3,9,11,12,13,15,23,17)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,18,30,31,32,33,34,35,36,37,45)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,21,25,27,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_data_var_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i9);
	}
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i45));
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i45));
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: module_layout", 18);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(2), 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_scalar_common_", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i27);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i25);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i21);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: internal_layout", 20);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: proc_layout", 16);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__rtti__rtti_id_has_array_type_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module47)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_data_addr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_data_addr_3_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,6,5,9,4,14,12,18,19,20,21)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,23,26,3,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_data_addr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_data_addr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i5);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__rtti_id_has_array_type_1_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i3);
	}
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i3);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 2);
	MR_np_call_localret_ent(fn__backend_libs__rtti__tabling_id_has_array_type_1_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i3);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i12);
	}
	MR_sv(3) = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i23);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__output_float_literal_3_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(backend_libs__c_util__output_quoted_multi_string_3_0);
MR_decl_entry(backend_libs__c_util__output_quoted_string_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module48)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_rval_const_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_rval_const_4_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,45,13,67,49,70,4,6,8,71,16)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,74,20,21,22,23,24,25,73,31,34)
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,36,72,39,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_rval_const'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_rval_const_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i45) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i67) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i67) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i49));
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_TRUE", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_FALSE", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_mask_field(MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("(MR_Integer) ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i70) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i72) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i73) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i74) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i34) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i8) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i36));
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("(MR_Char) ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_code_addr_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_data_addr_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("(MR_Float) ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(backend_libs__c_util__output_float_literal_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_rval_const__4442__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("output_rval_const - mlconst_foreign for language other than C.", 62);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("((", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_multi_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("(MR_String) ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i39);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_4_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_type_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module49)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_lval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_lval_4_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_lval_4_0,3,6,14,11,20,18,22,7,25,28)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_lval_4_0,27,30,31,32,33,34,5,39,38,42)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_lval_4_0,45,44,47,48,49,50,51,52,37,136)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_lval_4_0,60,137,134,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_lval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_lval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_lval_4_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_lval_4_0_i136) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_lval_4_0_i137) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_lval_4_0_i62));
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r2, 2);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i5);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_type_0_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_cast_4_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	if (MR_RTAGS_TESTR(MR_sv(3),3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i18);
	}
	MR_r2 = MR_tfield(3, MR_sv(3), 1);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")->", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_cast_4_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_strip_tag(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("MR_body(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_tag_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("))->", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r2, 3);
	if (MR_LTAGS_TESTR(MR_r5,0,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i39);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_r4, 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i38);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i37);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i37);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_r4, 0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_4_0_i44);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_hl_mask_field(", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(MR_Word) ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i49);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("MR_hl_field(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_tag_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i48);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i49);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i51);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i52);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("))", 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("unexpected field type", 21);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("*", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i60);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__global_var_name_1_0,
		ml_backend__mlds_to_c__mlds_output_lval_4_0_i134);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_var_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module50)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,4,34,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_bracketed_rval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0_i34);
	}
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0_i34);
	}
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,10)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module51)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0,4,3,6,7,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_rval_as_op_arg'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0_i4);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0_i24);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module52)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_rval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_rval_4_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_rval_4_0,7,57,13,14,15,16,5,46,3,60)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_rval_4_0,10,61,19,20,21,22,23,24,27,29)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_rval_4_0,62,32,33,34,35,36,37,38,39,40)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_rval_4_0,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_rval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_rval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0_i57) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0_i46));
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_mkword(", 10);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_tag_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_const_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0_i60) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0_i61) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0_i62) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0_i27));
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_binop_6_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_scalar_common_", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("this", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_unop_5_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_vector_common_", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i39);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" + ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_rval_4_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module53)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_unop_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_unop_5_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_unop_5_0,3,9,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_unop'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_unop_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unop_5_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unop_5_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unop_5_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unop_5_0_i7));
MR_def_label(ml_backend__mlds_to_c__mlds_output_unop_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unop_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unop_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_cast_rval_5_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unop_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_std_unop_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module54)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_cast_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_cast_rval_5_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_cast_rval_5_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_cast_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_cast_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_cast_rval_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_rval_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_cast_rval_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_rval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_cast_rval_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_cast_rval_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_rval_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module55)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,122,4,2,15,13,17,8,9,22,21)
	MR_init_label9(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,26,27,20,38,64,40,29,43,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_boxed_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i4);
	}
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i2);
	}
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i9);
	}
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_type_0_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i122);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__is_an_address_1_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i122);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i20);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i20);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_box_float(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = MR_tag(MR_tempr1);
	if ((MR_r5 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i38);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i64) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i64) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i64) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i29));
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i29);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i29);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("((MR_Box) (MR_Word) (", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i44);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("((MR_Box) (", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0_i44);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("))", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module56)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,4,3,8,2,20,46,22,23,24,25)
	MR_init_label9(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,26,27,11,30,31,32,33,34,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_unboxed_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i2);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_unbox_float(", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = MR_tag(MR_tempr1);
	if ((MR_r5 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i20);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i11));
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i11);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i11);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(MR_Word) ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_5_0,35)
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

MR_decl_entry(backend_libs__c_util__unary_prefix_op_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module57)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_std_unop_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_std_unop_5_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_std_unop_5_0,2,3,4,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_std_unop'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_std_unop_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__unary_prefix_op_2_0,
		ml_backend__mlds_to_c__mlds_output_std_unop_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_std_unop_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_std_unop_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_std_unop_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_std_unop_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_std_unop_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_std_unop_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("(MR_Word) ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_std_unop_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_std_unop_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_std_unop_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_std_unop_5_0,9)
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

MR_decl_entry(backend_libs__c_util__binop_category_string_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module58)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_binop_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_binop_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_binop_6_0,2,4,5,6,7,9,11,12,13,14)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_binop_6_0,15,16,19,20,21,22,23,24,27,28)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_binop_6_0,29,30,31,32,34,35,36,37,38,39)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_binop_6_0,40,41,42,44,45,46,47,48,49,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_binop'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_binop_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(backend_libs__c_util__binop_category_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_6_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_6_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_6_0_i34) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_6_0_i44) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_6_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_6_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_6_0_i19) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_6_0_i27));
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_binop: compound_compare_binop", 41);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_as_op_arg_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(strcmp(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i39);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0)", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(((MR_Unsigned) ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i46);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i48);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ((MR_Unsigned) ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i49);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_binop_6_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("))", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module59)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,5,6,7,8,9,10,11,14,12,19)
	MR_init_label5(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,20,21,23,24,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_maybe_output_call_profile_instr'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i54);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i5);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_prof_call_profile(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(2, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module60)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0);
	MR_init_label9(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,5,6,7,8,9,10,11,12,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_maybe_output_time_profile_instr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 7);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0_i24);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0_i5);
	}
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_set_prof_current_proc(", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module61)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_label_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_label_name_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_label_name_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_label_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_label_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_label_name_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_label_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module62)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label9(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,15,16,17,18,20,22,23,24,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_maybe_output_heap_profile_instr'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 5);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i45);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i5);
	}
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_record_allocation(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", \"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("\"\"", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_sv(4), 0);
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(1), 2), 0);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module63)
	MR_init_entry1(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0);
	MR_init_label8(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,27,3,30,19,20,22,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_needs_forwarding_pointer_space'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i27) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i3) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i30));
MR_def_label(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i25));
MR_def_label(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_tailcall_ent(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0);
MR_def_label(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i20) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0_i22));
MR_def_label(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("type_needs_forwarding_pointer_space: rtti_type", 46);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("type_needs_forwarding_pointer_space: tabling_type", 49);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("type_needs_forwarding_pointer_space: unknown_type", 49);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module64)
	MR_init_entry1(ml_backend__mlds_to_c__write_lval_or_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__write_lval_or_string_4_0);
	MR_init_label1(ml_backend__mlds_to_c__write_lval_or_string_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_lval_or_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__write_lval_or_string_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__write_lval_or_string_4_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0);
MR_def_label(ml_backend__mlds_to_c__write_lval_or_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module65)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_init_args_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_init_args_10_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_init_args_10_0,37,28,3,9,10,11,12,13,14,15)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_init_args_10_0,16,17,18,19,20,21,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_init_args'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_init_args_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_args_10_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_args_10_0_i40);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_init_args: length mismatch", 38);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_args_10_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r8;
	MR_tempr3 = MR_r2;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_r1;
	MR_sv(9) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(10) = MR_tfield(1, MR_tempr4, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_hl_field(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_mktag(", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__write_lval_or_string_4_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") = ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_boxed_rval_5_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_10_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_args_10_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module66)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,26,27,16,17,18,19,3,4,5,6)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,7,135,9,10,11,12,13,21,22,23)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,29,31,34,36,37,38,41,42,43,44)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,48,49,50,51,52,53,54,57,58,59)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,60,61,138,63,64,65,66,67,68,74)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,56,75,76,77,78,79,82,81,83,84)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,85,86,80,88,90,91,92,94,96,97)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,98,99,101,103,104,105,106,107,108,143)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,110,111,112,113,114,115,109,117,118,119)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,121,122,124,125,126,127,129,130)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_atomic_stmt'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i26) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i16) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i135));
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_GC_check();\n", 15);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r4, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r4, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i21) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i36) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i124) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i129) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i121));
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_assign_if_in_heap(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i127);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r4, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_free_heap(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i127);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r4, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tfield(3, MR_r4, 2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("inline_target_code only works for language C", 44);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r4, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_mark_hp(", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i127);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(10) = MR_tfield(3, MR_tempr2, 7);
	MR_sv(11) = MR_tfield(3, MR_tempr2, 8);
	MR_sv(12) = MR_tfield(3, MR_tempr2, 9);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i44);
	}
	MR_tag_alloc_heap(MR_sv(13), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(13), 0) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_tfield(0, MR_r1, 10);
	if (MR_INT_EQ(MR_r4,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i57);
	}
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i74);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(1,10,1);
	MR_sv(14) = (MR_Word) MR_string_const("base", 4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i48);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i49);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i51);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i52);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i54);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 10);
	if (MR_INT_NE(MR_tempr1,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i74);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i58);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i59);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_GC_check();\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i60);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i61);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i63);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r6 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i56);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i64);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i65);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* reserve space for GC forwarding pointer*/\n", 45);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i66);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i67);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i68);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_hp_alloc(1);\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i138);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tfield(0, MR_sv(3), 0);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(9) = MR_r6;
	MR_sv(10) = MR_r4;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_8_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i75);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i76);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i77);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__write_lval_or_string_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i78);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i79);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i81);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_cast_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i82);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Integer) 0;
	MR_sv(6) = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i80);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_sv(6), 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_cast_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i83);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_mkword(", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i84);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_tag_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i85);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i86);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_string_const(")", 1);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i88);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_new_object(", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i90);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_new_object_atomic(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i90);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i91);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i92);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i94);
	}
	MR_r1 = (MR_Integer) -1;
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i98);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(1, MR_sv(8), 0);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i96);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i97);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" * sizeof(MR_Word))", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i98);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i99);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i101);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i105);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(1, MR_sv(9), 0);
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i103);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(7), 2), 0);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i104);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i105);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i106);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i107);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i108);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(13),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i110);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(3);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i109);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_sv(13), 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i111);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i112);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i113);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i114);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i115);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i143);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r7;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_init_args_10_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i117);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i118);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i119);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i122);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("outline_foreign_proc is not used in C backend", 45);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r4, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i125);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_restore_hp(", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i126);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i127);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0_i130);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("trail_ops not implemented", 25);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
MR_decl_entry(fn__list__filter_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module67)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_enum_constants_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_enum_constants_6_0);
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_enum_constants_6_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_enum_constants'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_enum_constants_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(fn__list__filter_2_0,
		ml_backend__mlds_to_c__mlds_output_enum_constants_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constants_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_enum_constants_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constants_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module68)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_initializer_body_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,37,43,16,44,19,20,22,23,45,6)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,5,8,9,11,12,13,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_initializer_body'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i42) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i43) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i44) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i45));
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(2, MR_r3, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i37);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(3, MR_r3, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i5);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{ 0 }\n", 6);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i37);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_5_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module69)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_data_defn_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_data_defn_6_0);
	MR_init_label9(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,2,3,4,5,6,14,25,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_data_defn'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_data_defn_6_0)
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
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__get_initializer_array_size_1_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(4)),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i25) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i8) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i14) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i8));
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(4), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i8);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_6_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module70)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_defns_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_defns_7_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_defns_7_0,17,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_defns'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_defns_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defns_7_0_i17);
	}
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_defn_list_7_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_defns_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_defns_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defns_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defn_list_7_0,
		ml_backend__mlds_to_c__mlds_output_defns_7_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defns_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_defn_list_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module71)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_defn_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_defn_list_7_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_defn_list_7_0,10,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_defn_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_defn_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_list_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_list_7_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r5, 1);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defn_7_0,
		ml_backend__mlds_to_c__mlds_output_defn_list_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_list_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_list_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module72)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_defn_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_defn_7_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_defn_7_0,7,3,4,2,12,13,14,15,10,16)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_defn_7_0,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_defn'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_defn_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 3);
	MR_r7 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r8 = MR_tempr2;
	if (((MR_tempr2 == MR_mktag((MR_Integer) 1)) || (MR_tempr2 == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_7_0_i3);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_7_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(7) = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_7_0_i2);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_r7;
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_defn_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_r7;
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_defn_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_7_0_i10);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_defn_7_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_defn_7_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_defn_7_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_defn_7_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_defn_7_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_decl_flags_7_0,
		ml_backend__mlds_to_c__mlds_output_defn_7_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_defn_body_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module73)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_defn_body_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_defn_body_7_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_defn_body_7_0,33,6,8,35,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_defn_body'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_defn_body_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r5);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_body_7_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_body_7_0_i33);
	}
	MR_r5 = MR_tfield(2, MR_r5, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_class_7_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_body_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_data_defn_6_0,
		ml_backend__mlds_to_c__mlds_output_defn_body_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_body_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_body_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r8 = MR_tfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_body_7_0_i35);
	}
	MR_tempr1 = MR_tempr2;
	MR_r5 = MR_tfield(1, MR_r5, 1);
	MR_r6 = MR_tfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_8_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_body_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 2);
	MR_r2 = MR_tfield(1, MR_r8, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0,
		ml_backend__mlds_to_c__mlds_output_defn_body_7_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_body_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module74)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_gc_statement_7_0);
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0,12,34,4,5,8,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_gc_statement'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0_i34);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0_i35);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r4, 0);
	MR_r1 = MR_r5;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_gc_statement_7_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#if 0 /* GC trace code */\n", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_gc_statement_7_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(2, MR_r4, 0);
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_gc_statement_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#if 0 /* GC initialiser */\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_gc_statement_7_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,7,2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_gc_statement_7_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#endif\n", 7);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_append_class_qualifier_5_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module75)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_class_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_class_7_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_class_7_0,6,3,2,11,13,14,15,18,19,17)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_class_7_0,21,22,24,16,25,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_class'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_class_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_class_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tfield(0, MR_r1, 9);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_append_class_qualifier_5_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_class_7_0_i2);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("mlds_output_class", 17);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_make_base_class_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" {\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_class_7_0_i17);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_enum_constants_6_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_class_7_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,4);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defns_7_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_class_7_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_defns_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_get_func_signature_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module76)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_func_8_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_func_8_0,2,4,6,28,8,9,10,11,7,13)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_func_8_0,14,15,16,18,29,20,21,22,23,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_func'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_func_decl_7_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_8_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_sv(6), 0);
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_8_0_i8);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_8_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_func_signature_1_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_8_0_i20);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_func_8_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module77)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_statements_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_statements_6_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_statements_6_0,10,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_statements'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_statements_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_statements_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statements_6_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r4, 1);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_statements_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statements_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statements_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statements_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(list__foldl2_6_2);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
MR_decl_entry(__Unify___ml_backend__mlds__mlds_context_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module78)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_statement_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_statement_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,385,2,6,7,8,225,10,12,226,14)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,15,13,17,9,19,20,205,208,209,210)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,211,212,213,214,207,216,217,218,107,108)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,109,110,111,119,112,124,132,135,136,137)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,224,4,23,24,25,26,27,28,32,31)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,34,35,37,29,30,38,41,42,39,47)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,46,50,51,43,52,53,55,56,59,58)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,61,62,63,57,65,69,70,71,72,73)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,75,76,77,78,79,82,83,86,87,85)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,89,92,95,97,98,100,101,102,141,142)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,143,145,146,147,248,149,152,151,157,158)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,159,160,161,162,163,165,166,167,169,173)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,172,180,181,182,183,184,185,186,187,188)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_statement_6_0,171,190,191,192,193,194,195,196,197,198)
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_statement_6_0,199,200,201,202,203,397)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_statement'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_statement_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,385)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(4)),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i205) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i107) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i224));
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i10);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_tfield(0, MR_tfield(0, MR_sv(3), 0), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i14);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_decls_6_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i226);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defns_7_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i225);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statements_6_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i167);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i207);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i208);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("do\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i209);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i210);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i211);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i212);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("while (", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i213);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i214);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i216);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("while (", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i217);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i218);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i188);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i108);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("if (", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i109);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i110);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i111);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i112);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(4);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i112);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i112);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(1, MR_sv(6), 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i119);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i135);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i124);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(4);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i124);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i124);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i385);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i132);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i397);
	}
	MR_sv(4) = MR_tfield(1, MR_sv(6), 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i135);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i136);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("else\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i137);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i385);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(4), 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i157) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i141) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i92) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i69) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i145) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i169) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i82) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_statement_6_0_i4));
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(3, MR_sv(4), 1);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_atomic_stmt_7_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_sv(3) = MR_tfield(3, MR_tempr3, 1);
	MR_tempr2 = MR_tempr3;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(9) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_7_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_sv(11), 1);
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i32);
	}
	MR_r2 = MR_tfield(0, MR_sv(3), 1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i30);
	}
	MR_r2 = MR_tfield(0, MR_sv(3), 1);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i34);
	}
	MR_sv(3) = MR_r3;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("return ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_sv(3) = MR_r3;
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i39);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_tfield(1, MR_sv(6), 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(8);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i46);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i51);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_lval_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i51);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i52);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i55);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i56);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i59);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i58);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i57);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i61);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i57);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i62);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i63);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("return;\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i65);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_6_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i65);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i167);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(3, MR_sv(4), 1);
	MR_sv(4) = MR_tfield(3, MR_sv(4), 2);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i70);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch (", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i71);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i72);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") {\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i73);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i75);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i76);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i77);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("default: /*NOTREACHED*/ MR_assert(0);\n", 38);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i78);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i79);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i167);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_sv(4), 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i83);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i85);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_builtin_longjmp(", 19);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i86);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i87);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", 1)", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i248);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goto ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i89);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i248);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(4), 1);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i100);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i97);
	}
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i95);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("break;\n", 7);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i98);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("continue;\n", 10);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i101);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goto ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i102);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_label_name_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i248);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_sv(4), 1);
	MR_r1 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i142);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_label_name_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i143);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":;\n", 3);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_sv(4), 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i146);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("return", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i147);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i149);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,248)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i151);
	}
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Integer) 32;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i152);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i248);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_rval_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i248);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i158);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i159);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch (", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i160);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i161);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") {\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i162);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i163);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_switch_case_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i165);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i166);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i167);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i171);
	}
	MR_tempr2 = MR_sv(4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_context_0_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i173);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i172);
	}
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i172);
	}
	MR_r3 = MR_tfield(2, MR_sv(7), 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i172);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(5);
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i180);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i181);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("if (MR_builtin_setjmp(", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i182);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i183);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") == 0)\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i184);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i185);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i186);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i187);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("else\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i188);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_statement_6_0_i385);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i190);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i191);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i192);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goto ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i193);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i194);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_done;\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i195);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i196);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i197);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i198);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i199);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i200);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i201);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i202);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_6_0_i203);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_done:\t;\n", 9);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_6_0,397)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module79)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_switch_default_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_switch_default_7_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,23,24,46,5,6,7,8,9,4,10)
	MR_init_label9(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,11,12,31,14,15,16,17,19,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_switch_default'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_switch_default_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i46);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i47);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r4;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("default: /*NOTREACHED*/ MR_assert(0);\n", 38);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r7 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i5);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r5, 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i4);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(1, MR_r5, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("default:\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i14);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_7_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("break;\n", 7);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_global_data__ml_global_data_get_all_global_defns_4_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_exported_enum_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module80)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_hdr_file_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,2,3,4,5,6,8,7,13,14,16)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,17,18,19,21,22,23,24,26,27,28)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_hdr_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_global_data_get_all_global_defns_4_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_hdr_start_5_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(map__search_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i7);
	}
	MR_r3 = MR_sv(5);
	MR_sv(4) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,6);
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,7);
	MR_r1 = MR_sv(9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_6_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_export_enum_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_exported_enum);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defns_7_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_tfield(0, MR_tempr1, 11) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_tempr2, 12);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_decls_6_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_5_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_hdr_end_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module81)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_src_imports_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_src_imports_5_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_src_imports_5_0,4,7,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_src_imports'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_src_imports_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r1, 9);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_src_imports_5_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_src_imports_5_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_src_imports_5_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_src_imports_5_0_i14) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_src_imports_5_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_src_imports_5_0_i7));
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_imports_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_src_import_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_imports_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("expected target asm or target c", 31);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_imports_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module82)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_src_import_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_src_import_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_src_import'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_src_import_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(fn__set__union_list_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module83)
	MR_init_entry1(fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0);
	MR_init_label1(fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_get_env_var_names'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__set__union_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__name_mangle__output_init_name_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module84)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,2,3,4,5,21,7,8,9,6,12)
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,14,15,16,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_init_and_final_comments'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("/*\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("INIT ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_init_name_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("init\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i7);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("REQUIRED_INIT ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_init_name_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("required_init\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i12);
	}
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,10);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("REQUIRED_FINAL ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__name_mangle__output_init_name_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("required_final\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,11);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ENDINIT\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("*/\n\n", 4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module85)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_src_start_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_src_start_9_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_src_start_9_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_src_start_9_0,12,13,14,16,19,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_src_start'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_src_start_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(library__version_1_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_tfield(0, MR_sv(1), 12);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(".m", 2);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(backend_libs__c_util__output_c_file_intro_and_grade_5_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- module ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(". */\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- implementation. */\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_src_start_9_0_i22);
	}
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,
		ml_backend__mlds_to_c__mlds_output_src_start_9_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module86)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_src_end_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_src_end_4_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_src_end_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_src_end'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_src_end_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_src_end_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_end_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- end_module ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_src_end_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_end_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_c__mlds_output_src_end_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_end_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(". */\n", 5);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module87)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_grade_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_grade_var_2_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_grade_var_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_grade_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_grade_var_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("/* ensure everything is compiled with the same grade */\n", 56);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_grade_var_2_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_grade_var_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("static const void *const MR_grade = &MR_GRADE_VAR;\n", 51);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module88)
	MR_init_entry1(ml_backend__mlds_to_c__output_required_calls_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__output_required_calls_3_0);
	MR_init_label5(ml_backend__mlds_to_c__output_required_calls_3_0,12,4,5,6,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_required_calls'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__output_required_calls_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__output_required_calls_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__output_required_calls_3_0_i14);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const("();\n", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_required_calls_3_0_i4);
MR_def_label(ml_backend__mlds_to_c__output_required_calls_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_required_calls_3_0_i5);
MR_def_label(ml_backend__mlds_to_c__output_required_calls_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__output_required_calls_3_0_i6);
MR_def_label(ml_backend__mlds_to_c__output_required_calls_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__output_required_calls_3_0_i12);
MR_def_label(ml_backend__mlds_to_c__output_required_calls_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module89)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0,13,4,6,7,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_calls_to_init_entry'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0_i15);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_r1 = (MR_Word) MR_string_const("\tMR_init_entry(", 15);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module90)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0,13,4,6,7,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_calls_to_register_tci'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0_i15);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_r1 = (MR_Word) MR_string_const("\tMR_register_type_ctor_info(&", 29);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module91)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,2,3,7,8,10,11,4,14,15,16)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,52,18,19,20,22,23,25,26,27,28)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,29,32,33,34,35,36,37,38,30,42)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,43,44,45,46,47,48,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_init_fn_defns'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_init_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 8);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i4);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,3);
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_sv(3), 1);
	MR_sv(3) = MR_tfield(0, MR_tfield(1, MR_sv(3), 0), 0);
	MR_r1 = (MR_Word) MR_string_const("\tMR_init_entry(", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("_type_tables", 12);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_init_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i18);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_np_call_localret_ent(io__write_strings_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_r1 = (MR_Word) MR_string_const("\tMR_register_type_ctor_info(&", 29);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i52);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("_debugger", 9);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_init_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tMR_fatal_error(\"debugger initialization in MLDS grade\");\n", 58);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i30);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("required_init", 13);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_required_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("();\n", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_required_calls_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i40);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("required_final", 14);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_required_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i44);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("();\n", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i46);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_required_calls_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0_i48);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module92)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_decls_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_c_decls_5_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_c_decls_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_c_decls'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_decls_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_c__mlds_output_c_decls_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_decls_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_c_hdr_decl_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_TAG_COMMON(1,6,1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
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

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pragma_export_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module93)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_defns_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_c_defns_6_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_c_defns_6_0,2,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_c_defns'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_defns_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_c__mlds_output_c_defns_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_defns_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_c_foreign_import_module_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_c__mlds_output_c_defns_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_defns_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_c__mlds_output_c_defns_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_defns_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_c_defn_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_c_defns_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_defns_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_c_defns_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_defns_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module94)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,19,4,5,6,7,8,9,10,11,12)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,13,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_scalar_cell_group_decls'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i21);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nstatic /* final */ const ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_scalar_common_", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module95)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,20,4,5,6,7,8,9,10,11,12)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,13,14,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_vector_cell_group_decls'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defn_7_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nstatic /* final */ const ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_vector_common_", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__list_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module96)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,23,4,5,6,7,8,9,10,11,12)
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,13,14,16,17,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_scalar_cell_group_defns'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nstatic /* final */ const ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_scalar_common_", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_cell_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(8);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module97)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,23,4,5,6,7,8,9,10,11,12)
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,13,14,16,17,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_vector_cell_group_defns'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\nstatic /* final */ const ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_vector_common_", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = {\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_cell_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;
MR_decl_entry(map__to_assoc_list_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module98)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_src_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_src_file_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_src_file_5_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_src_file_5_0,12,13,14,16,18,20,22,24,26,27)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_src_file_5_0,28,29,30,31,32,33,34,35,36,37)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_src_file_5_0,38,39,40,41,42,43,44,45,46,47)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_src_file_5_0,48,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_src_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_src_file_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_global_data_get_all_global_defns_4_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(11) = MR_tempr1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, ml_scalar_common_type_num);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_scalar_cell_group);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, ml_vector_common_type_num);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_vector_cell_group);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__mlds_get_c_foreign_code_1_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__mlds_get_env_var_names_1_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_src_start_9_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_src_imports_5_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_c_decls_5_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,12);
	MR_r4 = MR_sv(12);
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,15);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,16);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defns_7_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_decls_6_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_decls_6_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_vector_cell_group_decls_7_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_scalar_cell_group_defns_6_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i39);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_vector_cell_group_defns_6_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_c_defns_6_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defns_7_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i44);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_init_fn_defns_8_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i46);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_grade_var_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i48);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_5_0_i49);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_src_end_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module99)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_get_env_var_names_from_defn'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module100)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_env_var_decl'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("extern MR_Word ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury_envvar_", 15);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module101)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_env_var_init_3_0);
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_env_var_init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ENVVAR ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_env_var_init_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_env_var_init_3_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module102)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_hdr_decl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_c_hdr_decl_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_c_hdr_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_hdr_decl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module103)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_foreign_import_module_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_c_foreign_import_module_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_c_foreign_import_module'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_foreign_import_module_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module104)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_defn_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_c_defn_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_c_defn'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_defn_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module105)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0,3,7,8,9,10,11,6,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_export_func_name'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_func_name__1019__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("export to language other than C.", 32);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_tempr2;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_i6);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Word) MR_string_const("", 0);
	MR_r8 = MR_sv(5);
	MR_r9 = (MR_Word) MR_TAG_COMMON(0,16,0);
	MR_r10 = (MR_Word) MR_TAG_COMMON(0,16,1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__foreign__exported_type_to_string_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module106)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,41,67,52,24,44,10,16,12,18,14)
	MR_init_label9(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,26,28,30,32,69,35,37,39,66)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_export_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i66);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i67) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i24) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i44));
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i26) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i39));
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_np_call_localret_ent(fn__backend_libs__foreign__exported_type_to_string_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i52);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_ArrayPtr", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i10) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i69) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i37));
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(3, MR_r2, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i16) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i14));
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_type_prefix: il foreign_type", 40);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_type_prefix: java foreign_type", 42);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_type_prefix: erlang foreign_type", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_bool", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Char", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Float", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Integer", 10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" *", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Word", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_pragma_export_type: unknown_type", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module107)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_export_type_prefix_suffix'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module108)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_export_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,15);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module109)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,3,5,7,9,11,18,19,20,21,22)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,23,15,25,26,27,14,10,31,34,35)
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,33,39,43,44,45,47,38,49,50,51)
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,53,61,62,58,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_export_defn_body'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,18);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,19);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,16);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,17);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i10);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(5);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i14);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(9) = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i15);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ret_value;\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" boxed_ret_value;\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i10);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ret_value;\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i10);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(5);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i38);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(6) = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i39);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i39);
	}
	MR_r1 = (MR_Word) MR_string_const("\tboxed_ret_value = ", 19);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tret_value = (", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i44);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_call_6_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\treturn (", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i49);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i51);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(5);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i54);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i58);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i58);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", 29);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i61);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_prefix_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i62);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", boxed_ret_value, ret_value);\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0_i58);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\treturn ret_value;\n", 19);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module110)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,3,4,5,23,7,8,9,10,6,12)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,13,24,15,16,17,18,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_export_defn'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn__999__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("foreign_export to language other than C.", 40);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_func_name_6_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i7);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i15);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_6_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module111)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_type_ignore_opts_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_export_type_ignore_opts_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_export_type_ignore_opts'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_type_ignore_opts_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module112)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,6,3,12,13,14,15,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_input_arg'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr5, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr5, 1);
	if (MR_PTAG_TESTR(MR_tfield(0, MR_tempr1, 2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tfield(0, MR_tempr1, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i3);
	}
	MR_sv(1) = MR_tempr4;
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("\tMR_MAYBE_BOX_FOREIGN_TYPE(", 27);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("boxed_name called for non-var argument", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module113)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,6,3,12,13,14,17,18,19,20,21)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_output_arg'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr5, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr5, 1);
	if (MR_PTAG_TESTR(MR_tfield(0, MR_tempr1, 2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tfield(0, MR_tempr1, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i3);
	}
	MR_sv(1) = MR_tempr4;
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", 29);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("boxed_name called for non-var argument", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i14);
	}
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("pointed_to_type: not pointer", 28);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", *", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module114)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0,2,6,3,12,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_export_input_defns'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_sv(2) = MR_tempr4;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0_i12);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("boxed_name called for non-var argument", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module115)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,2,6,3,12,13,16,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_export_output_defns'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i3);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_tempr4;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i12);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("boxed_name called for non-var argument", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i13);
	}
	MR_r2 = MR_tfield(3, MR_sv(4), 1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("pointed_to_type: not pointer", 28);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module116)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,2,20,24,21,30,16,32,33,34,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pragma_export_arg'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr5, 0);
	MR_sv(3) = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i2);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i2);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i21);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i21);
	}
	MR_sv(2) = MR_r2;
	MR_tempr4 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(4), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i16);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i16);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i21);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("boxed_name called for non-var argument", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module117)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_export_enum_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_export_enum_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_export_enum'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_export_enum_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module118)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0);
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,2,3,4,5,16,10,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_exported_enum_constant'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("#define ", 8);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i5);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i5);
	}
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i10);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i10);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i10);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_exported_enum_constant__1403__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("mlconst_foreign for language other than C.", 42);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("tag for export enumeration is not enum or foreign", 49);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module119)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_cell_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_cell_7_0);
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_cell_7_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_cell'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_cell_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_cell_7_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cell_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* row ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_cell_7_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cell_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_cell_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cell_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_cell_7_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cell_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0,
		ml_backend__mlds_to_c__mlds_output_cell_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cell_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_cell_7_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cell_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module120)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0);
	MR_init_label9(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,1,15,7,10,9,13,3,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_type_list_contains_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred ml_backend.mlds_to_c.mlds_type_list_contains_type/2-0", 6,
		MR_ENTRY(MR_do_fail));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i1);
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i15);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_tempr1, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i4));
	}
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i4);
	}
	MR_fv(1) = MR_r1;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_succeed();
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_fv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_fv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i9);
	MR_fv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_succeed();
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_fv(5);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_fv(2);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succeed();
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_fv(1);
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_fv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_fv(4);
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module121)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0,7,9,5,14,15,16,43,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_type_forward_decl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i43);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i42);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_type_name_3_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r3, 3);
	if (MR_INT_EQ(MR_tempr1,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i43);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module122)
	MR_init_entry1(ml_backend__mlds_to_c__is_static_member_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__is_static_member_1_0);
	MR_init_label3(ml_backend__mlds_to_c__is_static_member_1_0,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_static_member'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__is_static_member_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TEST(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_static_member_1_0_i2);
	}
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		ml_backend__mlds_to_c__is_static_member_1_0_i5);
MR_def_label(ml_backend__mlds_to_c__is_static_member_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_static_member_1_0_i1);
	}
MR_def_label(ml_backend__mlds_to_c__is_static_member_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_c__is_static_member_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module123)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_make_base_class_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_make_base_class_5_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_make_base_class_5_0,2,3,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_make_base_class'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_make_base_class_5_0)
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
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_c__mlds_make_base_class_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_make_base_class_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("base_", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_make_base_class_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_make_base_class_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_0,
		ml_backend__mlds_to_c__mlds_make_base_class_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_make_base_class_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module124)
	MR_init_entry1(ml_backend__mlds_to_c__is_enum_const_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__is_enum_const_1_0);
	MR_init_label1(ml_backend__mlds_to_c__is_enum_const_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_enum_const'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__is_enum_const_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		ml_backend__mlds_to_c__is_enum_const_1_0_i2);
MR_def_label(ml_backend__mlds_to_c__is_enum_const_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module125)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_enum_constant_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,7,8,9,10,11,12,14,22,38,17)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,3,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_enum_constant'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_tfield(0, MR_r4, 3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r6);
	if (((MR_tempr1 == MR_mktag((MR_Integer) 1)) || (MR_tempr1 == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i7);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_r4, 0);
	MR_sv(5) = MR_tfield(0, MR_r6, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_r6, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(5)),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i49) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i22) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i38));
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(5), 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i49);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_6_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_initializer_body_5_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_enum_constant: constant is not data", 47);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module126)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0);
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0,4,5,6,7,8,9,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_pred_proc_id'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("/* pred_id: ", 12);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", proc_id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module127)
	MR_init_entry1(ml_backend__mlds_to_c__standardize_param_names_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__standardize_param_names_4_0);
	MR_init_label4(ml_backend__mlds_to_c__standardize_param_names_4_0,3,11,5,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'standardize_param_names'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__standardize_param_names_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_EQ(MR_tag(MR_r3),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__standardize_param_names_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("standardize_param_names: unexpected entity name", 47);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__standardize_param_names_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r3, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_c__standardize_param_names_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__standardize_param_names_4_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__standardize_param_names_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__standardize_param_names_4_0_i16));
MR_def_label(ml_backend__mlds_to_c__standardize_param_names_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("standardize_param_names: unexpected data name", 45);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__standardize_param_names_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_string_const("param", 5);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = MR_tempr3;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_c__standardize_param_names_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(3, MR_r4, 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__standardize_param_names_4_0_i11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module128)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_prefix_suffix'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0));
	MR_np_tailcall_ent(do_call_closure_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module129)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_param_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_param_9_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_param_9_0,4,5,6,7,8,3,9,10,11,12)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_param_9_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_param'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_param_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr2 = MR_r7;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_r1;
	MR_r5 = MR_tfield(0, MR_tempr3, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_param_9_0_i4);
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_param_9_0_i3);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_r6;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_param_9_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_param_9_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_param_9_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_param_9_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_param_9_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_param_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__ml_backend__mlds_to_c__mlds_output_param_9_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_param_9_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_param_9_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_param_9_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__ml_backend__mlds_to_c__mlds_output_param_9_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_gc_statement_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module130)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_param_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_param_type_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_param_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_param_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module131)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_type_suffix_no_size_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_type_suffix_no_size_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_type_suffix_no_size'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_type_suffix_no_size_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module132)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_computed_goto_label'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i3);
	}
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("case ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": goto ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module133)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_case_cond_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_case_cond_6_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,5,6,7,8,9,10,11,12,13,3)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,17,18,19,20,21,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_case_cond'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_case_cond_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i5);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("case ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ... ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i17);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("case ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_6_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module134)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_switch_case_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_switch_case_7_0);
	MR_init_label9(ml_backend__mlds_to_c__mlds_output_switch_case_7_0,2,4,5,14,7,8,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_switch_case'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_switch_case_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_case_cond_6_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_7_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_case_cond_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_c__mlds_output_switch_case_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_6_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_7_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_switch_case_7_0_i7);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_7_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_7_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_7_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_7_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("break;\n", 7);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__always_reset_line_num_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module135)
	MR_init_entry1(ml_backend__mlds_to_c__reset_context_opts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__reset_context_opts_3_0);
	MR_init_label1(ml_backend__mlds_to_c__reset_context_opts_3_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_context_opts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__reset_context_opts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__reset_context_opts_3_0_i12);
	}
	MR_np_tailcall_ent(backend_libs__c_util__always_reset_line_num_2_0);
	}
MR_def_label(ml_backend__mlds_to_c__reset_context_opts_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module136)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_target_code_component_5_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,64,22,23,24,25,20,27,28,29,30)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,3,65,66,36,15,16,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_target_code_component'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i64) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i65) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i66));
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_r5 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i20);
	}
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i22);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	MR_r1 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_context_opts_4_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__reset_context_opts_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(2, MR_r3, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r6 = MR_tfield(3, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i36);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_4_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r3, 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module137)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__decl_or_defn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_c__decl_or_defn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_c__decl_or_defn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module138)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__decl_or_defn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_c__decl_or_defn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_c__decl_or_defn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_func_signature_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module139)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__func_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_c__func_info_0_0);
	MR_init_label3(__Unify___ml_backend__mlds_to_c__func_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_c__func_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__func_info_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		__Unify___ml_backend__mlds_to_c__func_info_0_0_i4);
MR_def_label(__Unify___ml_backend__mlds_to_c__func_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__func_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_func_signature_0_0);
MR_def_label(__Unify___ml_backend__mlds_to_c__func_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_c__func_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_fully_qualified_name_1_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_func_signature_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module140)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__func_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_c__func_info_0_0);
	MR_init_label4(__Compare___ml_backend__mlds_to_c__func_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_c__func_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__func_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__func_info_0_0_i2);
MR_def_label(__Compare___ml_backend__mlds_to_c__func_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__mlds_to_c__func_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		__Compare___ml_backend__mlds_to_c__func_info_0_0_i5);
MR_def_label(__Compare___ml_backend__mlds_to_c__func_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__func_info_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__mlds__mlds_func_signature_0_0);
MR_def_label(__Compare___ml_backend__mlds_to_c__func_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module141)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__indent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_c__indent_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_c__indent_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module142)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__indent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_c__indent_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_c__indent_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module143)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__locn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_c__locn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_c__locn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module144)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__locn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_c__locn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_c__locn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_lval_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module145)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_c__lval_or_string_0_0);
	MR_init_label3(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0,14,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_lval_0_0);
	}
MR_def_label(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_lval_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module146)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_c__lval_or_string_0_0);
	MR_init_label5(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0_i2);
MR_def_label(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__mlds__mlds_lval_0_0);
MR_def_label(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___libs__globals__globals_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module147)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0);
	MR_init_label2(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 4);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 5);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 6);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 7);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 7);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 8);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 8);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 9);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 9);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 10);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 10);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 11);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 11);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 12);
	MR_r2 = MR_tfield(0, MR_tempr2, 12);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___libs__globals__globals_0_0);
	}
MR_def_label(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___libs__globals__globals_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module148)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0);
	MR_init_label10(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label5(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,37,41,45,49,109)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i3);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i2);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i5);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i9);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i13);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i17);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i21);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i25);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i29);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i33);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i37);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i41);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i45);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i49);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0_i109);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(24);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___libs__globals__globals_0_0);
MR_def_label(__Compare___ml_backend__mlds_to_c__mlds_to_c_opts_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module149)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__output_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_c__output_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_c__output_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module150)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__output_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_c__output_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_c__output_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module151)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_c_hdr_decls__890__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_c_hdr_decls__890__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__mlds_output_c_hdr_decls__890__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_c_hdr_decls__890__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#include \"", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module152)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn__999__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn__999__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__mlds_output_pragma_export_defn__999__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn__999__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module153)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_func_name__1019__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_func_name__1019__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__mlds_output_pragma_export_func_name__1019__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_func_name__1019__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module154)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1134__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1134__1_1_0);
	MR_init_label1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1134__1_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1134__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1134__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1134__1_1_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1));
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1134__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module155)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1_1_0);
	MR_init_label1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1_1_0_i1);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1_1_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1));
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__1138__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module156)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_exported_enum_constant__1403__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_exported_enum_constant__1403__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__mlds_output_exported_enum_constant__1403__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_exported_enum_constant__1403__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module157)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_rval_const__4442__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_rval_const__4442__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__mlds_output_rval_const__4442__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_rval_const__4442__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module158)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_fully_qualified__ho2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module159)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,3,6,11,12,13,14,15,17,19,16)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_func_decl_ho__ho9'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	MR_r8 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r8;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_r6, 0);
	MR_sv(7) = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_4_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(0,4,20);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_TAG_COMMON(0,4,21);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_tfield(0, MR_r6, 0);
	MR_tempr3 = MR_r8;
	MR_sv(7) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r7 = MR_tfield(0, MR_tempr1, 11);
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i17);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_sv(3), 0);
	MR_r5 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i16);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_sv(3), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,22);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_5_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module160)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_return_list__ho13'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,23);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module161)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0);
	MR_init_label10(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,3,6,9,10,11,12,13,15,17,18)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_func_decl_ho__ho14'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r8;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	MR_r12 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(9) = MR_tempr1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r12;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_tfield(0, MR_r8, 0);
	MR_sv(9) = MR_tempr2;
	MR_sv(10) = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_prefix_suffix_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r9;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_tempr4 = MR_r10;
	MR_tfield(0, MR_tempr1, 5) = MR_tempr4;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_tempr4;
	MR_sv(8) = MR_tfield(0, MR_r8, 0);
	MR_tempr5 = MR_r12;
	MR_sv(9) = MR_tempr5;
	MR_sv(10) = MR_r2;
	MR_r1 = MR_tempr5;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 11);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i15);
	}
	MR_r1 = MR_tempr2;
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_tfield(0, MR_sv(3), 0);
	MR_r7 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_sv(3), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,4,24);
	MR_r5 = MR_sv(8);
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(9);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0_i19);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_5_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module162)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_c__mlds_output_params__ho18_9_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0,2,4,6,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_params__ho18'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(18,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_param_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(0,4,25);
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_TAG_COMMON(0,4,26);
	MR_tfield(0, MR_tempr1, 6) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_params__ho18_9_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_params__ho18_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__file_names__module_name_to_search_file_name_6_0);
MR_decl_entry(mdbcomp__prim_data__strip_outermost_qualifier_3_0);
MR_decl_entry(parse_tree__file_names__mercury_std_library_module_name_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module163)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0);
	MR_init_label9(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,4,3,5,7,6,9,11,8,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_src_import__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_string_const(".dll", 4);
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 12);
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i7);
	}
	MR_sv(3) = (MR_Word) MR_string_const(".mih", 4);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_string_const(".mh", 3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__prim_data__strip_outermost_qualifier_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i8);
	}
	if ((strcmp(MR_string_const("mercury", 7), (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i8);
	}
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_tfield(0, MR_sv(1), 12);
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r1 = MR_tfield(0, MR_sv(1), 12);
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#include \"", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module164)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0);
	MR_init_label9(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0,6,7,24,9,10,11,12,3,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_c_hdr_decl__[2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r3, 1);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0_i40);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0_i9);
	}
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0_i12);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0_i24);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("foreign code other than C", 25);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module165)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0);
	MR_init_label2(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_c_foreign_import_module__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_0);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("foreign code other than C", 25);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module166)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0);
	MR_init_label7(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0,4,16,6,7,8,9,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_c_defn__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0_i6);
	}
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0_i16);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_c_defn: foreign code other than C", 45);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module167)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_pragma_export_type_ignore_opts__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_114_97_103_109_97_95_101_120_112_111_114_116_95_116_121_112_101_95_105_103_110_111_114_101_95_111_112_116_115_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module168)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0);
	MR_init_label9(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0,4,19,6,7,8,9,5,11,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_export_enum__[2]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_i27);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_i6);
	}
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_exported_enum_constant);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__always_set_line_num_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_i19);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(list__reverse_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,27);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module169)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0,4,5,3,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_class_decl__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,4)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("enum ", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_e", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("struct ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_s", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module170)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_return_list__ho3__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(io__write_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module171)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_return_list__ho4__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(io__write_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_52_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module172)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0);
	MR_init_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_return_list__ho15__[1, 2, 3, 4, 5]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(io__write_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module173)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0);
	MR_init_label4(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0,2,4,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_params__ho16__[1, 2]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(18,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_param_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module174)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0);
	MR_init_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__mlds_output_return_list__ho17__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(io__write_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_101_116_117_114_110_95_108_105_115_116_95_95_104_111_49_55_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__mlds_to_c_maybe_bunch_0(void)
{
	ml_backend__mlds_to_c_module0();
	ml_backend__mlds_to_c_module1();
	ml_backend__mlds_to_c_module2();
	ml_backend__mlds_to_c_module3();
	ml_backend__mlds_to_c_module4();
	ml_backend__mlds_to_c_module5();
	ml_backend__mlds_to_c_module6();
	ml_backend__mlds_to_c_module7();
	ml_backend__mlds_to_c_module8();
	ml_backend__mlds_to_c_module9();
	ml_backend__mlds_to_c_module10();
	ml_backend__mlds_to_c_module11();
	ml_backend__mlds_to_c_module12();
	ml_backend__mlds_to_c_module13();
	ml_backend__mlds_to_c_module14();
	ml_backend__mlds_to_c_module15();
	ml_backend__mlds_to_c_module16();
	ml_backend__mlds_to_c_module17();
	ml_backend__mlds_to_c_module18();
	ml_backend__mlds_to_c_module19();
	ml_backend__mlds_to_c_module20();
	ml_backend__mlds_to_c_module21();
	ml_backend__mlds_to_c_module22();
	ml_backend__mlds_to_c_module23();
	ml_backend__mlds_to_c_module24();
	ml_backend__mlds_to_c_module25();
	ml_backend__mlds_to_c_module26();
	ml_backend__mlds_to_c_module27();
	ml_backend__mlds_to_c_module28();
	ml_backend__mlds_to_c_module29();
	ml_backend__mlds_to_c_module30();
	ml_backend__mlds_to_c_module31();
	ml_backend__mlds_to_c_module32();
	ml_backend__mlds_to_c_module33();
	ml_backend__mlds_to_c_module34();
	ml_backend__mlds_to_c_module35();
	ml_backend__mlds_to_c_module36();
	ml_backend__mlds_to_c_module37();
	ml_backend__mlds_to_c_module38();
	ml_backend__mlds_to_c_module39();
}

static void mercury__ml_backend__mlds_to_c_maybe_bunch_1(void)
{
	ml_backend__mlds_to_c_module40();
	ml_backend__mlds_to_c_module41();
	ml_backend__mlds_to_c_module42();
	ml_backend__mlds_to_c_module43();
	ml_backend__mlds_to_c_module44();
	ml_backend__mlds_to_c_module45();
	ml_backend__mlds_to_c_module46();
	ml_backend__mlds_to_c_module47();
	ml_backend__mlds_to_c_module48();
	ml_backend__mlds_to_c_module49();
	ml_backend__mlds_to_c_module50();
	ml_backend__mlds_to_c_module51();
	ml_backend__mlds_to_c_module52();
	ml_backend__mlds_to_c_module53();
	ml_backend__mlds_to_c_module54();
	ml_backend__mlds_to_c_module55();
	ml_backend__mlds_to_c_module56();
	ml_backend__mlds_to_c_module57();
	ml_backend__mlds_to_c_module58();
	ml_backend__mlds_to_c_module59();
	ml_backend__mlds_to_c_module60();
	ml_backend__mlds_to_c_module61();
	ml_backend__mlds_to_c_module62();
	ml_backend__mlds_to_c_module63();
	ml_backend__mlds_to_c_module64();
	ml_backend__mlds_to_c_module65();
	ml_backend__mlds_to_c_module66();
	ml_backend__mlds_to_c_module67();
	ml_backend__mlds_to_c_module68();
	ml_backend__mlds_to_c_module69();
	ml_backend__mlds_to_c_module70();
	ml_backend__mlds_to_c_module71();
	ml_backend__mlds_to_c_module72();
	ml_backend__mlds_to_c_module73();
	ml_backend__mlds_to_c_module74();
	ml_backend__mlds_to_c_module75();
	ml_backend__mlds_to_c_module76();
	ml_backend__mlds_to_c_module77();
	ml_backend__mlds_to_c_module78();
	ml_backend__mlds_to_c_module79();
}

static void mercury__ml_backend__mlds_to_c_maybe_bunch_2(void)
{
	ml_backend__mlds_to_c_module80();
	ml_backend__mlds_to_c_module81();
	ml_backend__mlds_to_c_module82();
	ml_backend__mlds_to_c_module83();
	ml_backend__mlds_to_c_module84();
	ml_backend__mlds_to_c_module85();
	ml_backend__mlds_to_c_module86();
	ml_backend__mlds_to_c_module87();
	ml_backend__mlds_to_c_module88();
	ml_backend__mlds_to_c_module89();
	ml_backend__mlds_to_c_module90();
	ml_backend__mlds_to_c_module91();
	ml_backend__mlds_to_c_module92();
	ml_backend__mlds_to_c_module93();
	ml_backend__mlds_to_c_module94();
	ml_backend__mlds_to_c_module95();
	ml_backend__mlds_to_c_module96();
	ml_backend__mlds_to_c_module97();
	ml_backend__mlds_to_c_module98();
	ml_backend__mlds_to_c_module99();
	ml_backend__mlds_to_c_module100();
	ml_backend__mlds_to_c_module101();
	ml_backend__mlds_to_c_module102();
	ml_backend__mlds_to_c_module103();
	ml_backend__mlds_to_c_module104();
	ml_backend__mlds_to_c_module105();
	ml_backend__mlds_to_c_module106();
	ml_backend__mlds_to_c_module107();
	ml_backend__mlds_to_c_module108();
	ml_backend__mlds_to_c_module109();
	ml_backend__mlds_to_c_module110();
	ml_backend__mlds_to_c_module111();
	ml_backend__mlds_to_c_module112();
	ml_backend__mlds_to_c_module113();
	ml_backend__mlds_to_c_module114();
	ml_backend__mlds_to_c_module115();
	ml_backend__mlds_to_c_module116();
	ml_backend__mlds_to_c_module117();
	ml_backend__mlds_to_c_module118();
	ml_backend__mlds_to_c_module119();
}

static void mercury__ml_backend__mlds_to_c_maybe_bunch_3(void)
{
	ml_backend__mlds_to_c_module120();
	ml_backend__mlds_to_c_module121();
	ml_backend__mlds_to_c_module122();
	ml_backend__mlds_to_c_module123();
	ml_backend__mlds_to_c_module124();
	ml_backend__mlds_to_c_module125();
	ml_backend__mlds_to_c_module126();
	ml_backend__mlds_to_c_module127();
	ml_backend__mlds_to_c_module128();
	ml_backend__mlds_to_c_module129();
	ml_backend__mlds_to_c_module130();
	ml_backend__mlds_to_c_module131();
	ml_backend__mlds_to_c_module132();
	ml_backend__mlds_to_c_module133();
	ml_backend__mlds_to_c_module134();
	ml_backend__mlds_to_c_module135();
	ml_backend__mlds_to_c_module136();
	ml_backend__mlds_to_c_module137();
	ml_backend__mlds_to_c_module138();
	ml_backend__mlds_to_c_module139();
	ml_backend__mlds_to_c_module140();
	ml_backend__mlds_to_c_module141();
	ml_backend__mlds_to_c_module142();
	ml_backend__mlds_to_c_module143();
	ml_backend__mlds_to_c_module144();
	ml_backend__mlds_to_c_module145();
	ml_backend__mlds_to_c_module146();
	ml_backend__mlds_to_c_module147();
	ml_backend__mlds_to_c_module148();
	ml_backend__mlds_to_c_module149();
	ml_backend__mlds_to_c_module150();
	ml_backend__mlds_to_c_module151();
	ml_backend__mlds_to_c_module152();
	ml_backend__mlds_to_c_module153();
	ml_backend__mlds_to_c_module154();
	ml_backend__mlds_to_c_module155();
	ml_backend__mlds_to_c_module156();
	ml_backend__mlds_to_c_module157();
	ml_backend__mlds_to_c_module158();
	ml_backend__mlds_to_c_module159();
}

static void mercury__ml_backend__mlds_to_c_maybe_bunch_4(void)
{
	ml_backend__mlds_to_c_module160();
	ml_backend__mlds_to_c_module161();
	ml_backend__mlds_to_c_module162();
	ml_backend__mlds_to_c_module163();
	ml_backend__mlds_to_c_module164();
	ml_backend__mlds_to_c_module165();
	ml_backend__mlds_to_c_module166();
	ml_backend__mlds_to_c_module167();
	ml_backend__mlds_to_c_module168();
	ml_backend__mlds_to_c_module169();
	ml_backend__mlds_to_c_module170();
	ml_backend__mlds_to_c_module171();
	ml_backend__mlds_to_c_module172();
	ml_backend__mlds_to_c_module173();
	ml_backend__mlds_to_c_module174();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__mlds_to_c__init(void);
void mercury__ml_backend__mlds_to_c__init_type_tables(void);
void mercury__ml_backend__mlds_to_c__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__mlds_to_c__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__mlds_to_c__init_complexity_procs(void);
#endif

void mercury__ml_backend__mlds_to_c__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__mlds_to_c_maybe_bunch_0();
	mercury__ml_backend__mlds_to_c_maybe_bunch_1();
	mercury__ml_backend__mlds_to_c_maybe_bunch_2();
	mercury__ml_backend__mlds_to_c_maybe_bunch_3();
	mercury__ml_backend__mlds_to_c_maybe_bunch_4();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_decl_or_defn_0,
		ml_backend__mlds_to_c__decl_or_defn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_func_info_0,
		ml_backend__mlds_to_c__func_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_indent_0,
		ml_backend__mlds_to_c__indent_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_locn_0,
		ml_backend__mlds_to_c__locn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_lval_or_string_0,
		ml_backend__mlds_to_c__lval_or_string_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_mlds_to_c_opts_0,
		ml_backend__mlds_to_c__mlds_to_c_opts_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_output_type_0,
		ml_backend__mlds_to_c__output_type_0_0);
	mercury__ml_backend__mlds_to_c__init_debugger();
}

void mercury__ml_backend__mlds_to_c__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_decl_or_defn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_func_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_indent_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_locn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_lval_or_string_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_mlds_to_c_opts_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_output_type_0);
	}
}


void mercury__ml_backend__mlds_to_c__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__mlds_to_c__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__mlds_to_c);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__mlds_to_c__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
