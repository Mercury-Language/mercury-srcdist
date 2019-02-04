/*
** Automatically generated from `mlds_to_c.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "ml_backend.mlds_to_c.c"
#line 31 "../library/array.int2"
#include "array.mh"

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
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_12 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];

struct mercury_type_19 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_19 mercury_common_19[];

struct mercury_type_20 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_20 mercury_common_20[];

struct mercury_type_11 {
	MR_Integer f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_vector_common_11_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_output_type_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_lval_or_string_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_locn_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_initializer_array_size_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_indent_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_func_info_0,
	mercury_data_ml_backend__mlds_to_c__type_ctor_info_decl_or_defn_0;
MR_decl_label1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__994__1_1_0, 1)
MR_decl_label1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__998__1_1_0, 1)
MR_decl_label6(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0, 4,5,6,7,8,16)
MR_decl_label2(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_49_93_95_48_4_0, 4,3)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0, 6,7,8,9,10,11,3,33)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0, 4,5,3,7,8)
MR_decl_label7(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0, 4,5,6,7,8,10,25)
MR_decl_label4(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0, 2,4,6,8)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0, 4,3,5,7,6,9,11,8)
MR_decl_label1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0, 14)
MR_decl_label5(ml_backend__mlds_to_c__is_an_address_1_0, 11,19,14,30,1)
MR_decl_label1(ml_backend__mlds_to_c__is_enum_const_1_0, 2)
MR_decl_label3(ml_backend__mlds_to_c__is_static_member_1_0, 5,2,1)
MR_decl_label1(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0, 1)
MR_decl_label3(ml_backend__mlds_to_c__mlds_indent_3_0, 10,3,12)
MR_decl_label4(ml_backend__mlds_to_c__mlds_indent_4_0, 2,3,4,5)
MR_decl_label2(ml_backend__mlds_to_c__mlds_make_base_class_5_0, 4,8)
MR_decl_label8(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0, 2,5,6,7,8,9,10,13)
MR_decl_label7(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0, 11,18,19,20,22,23,3)
MR_decl_label8(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0, 2,5,6,7,8,9,10,11)
MR_decl_label8(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0, 12,13,14,15,16,17,19,21)
MR_decl_label3(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0, 22,23,3)
MR_decl_label8(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0, 2,5,6,7,8,9,10,11)
MR_decl_label1(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0, 3)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_abstractness_3_0, 13)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0, 17,5)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 17,18,9,10,11,12,3,4)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 5,6,7,120,14,15,20,22)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 25,27,28,29,32,33,34,35)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 39,40,41,42,43,45,46,49)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 50,51,123,53,54,55,56,47)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 63,64,65,66,69,68,70,71)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 72,73,67,75,77,78,79,81)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 83,84,85,86,88,90,91,92)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 93,94,95,128,97,98,99,100)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 101,96,103,104,106,107,109,110)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0, 111,112,114,115)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_binop_5_0, 2,4,5,6,7,9,11,12)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_binop_5_0, 13,14,15,16,19,20,21,22)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_binop_5_0, 23,24,27,28,29,30,31,34)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_binop_5_0, 35,36,37,38,39,40,41,42)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_binop_5_0, 44,45,46,47,48,49,50)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0, 122,4,2,15,13,17,8,9)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0, 22,21,26,27,20,38,64,40)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0, 29,43,44)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0, 4,34,9,10)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_c_decls_4_0, 2)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_c_defns_5_0, 2,4,5,7,8)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0, 2,5,3,8,9,15,16,18)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0, 20,23)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0, 13,4,6,7,15)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0, 13,4,6,7,15)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_case_cond_5_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_case_cond_5_0, 3,14,15,16,17,18,19,20)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_cast_3_0, 2,3,4)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_cast_rval_4_0, 2,3,4,5)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_class_6_0, 4,5,3,2,7,9,10,11)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_class_6_0, 14,16,18,19,13,21,22,23)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_class_6_0, 12,24,25)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_code_addr_3_0, 4,13,14,15,16,17,19,3)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0, 10,11,12)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_constness_3_0, 13)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_data_addr_3_0, 5,3,11,9,14,15)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_data_decl_5_0, 2,3,4)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_data_defn_5_0, 3,4,2,13,14,15,16,25)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_data_defn_5_0, 21,18,31,17)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_data_name_3_0, 8,48,19,49,4,25,6,10)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_data_name_3_0, 51,47)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0, 5,2,3,9,10,11,12,19)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0, 29,30,14,15,36,17,21,23)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0, 24)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_decl_5_0, 2,5,9,6,14,15,16,17)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_decl_5_0, 18,19,22)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_decl_blank_line_5_0, 2)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_decl_body_6_0, 14,15,3,6,7,5,9,10)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_decl_body_6_0, 25,27,28,29)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0, 2,3,37,5,7,9,11,13)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0, 15,4,17,18,38,20,19,24)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0, 25,26,27,40,29,28,31,32)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0, 33,34,35)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_defn_6_0, 5,3,7,2,8,9,10,11)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_defn_6_0, 12,13)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_defn_body_6_0, 6,3,8,35,11)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_defns_6_0, 3,12,5,8)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0, 4,5,6,7,8,10,19,15)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0, 12,25,3,49)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0, 2,3,4)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0, 2,3)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0, 2,3,4,9,20,14,5,26)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0, 5,4,10,2,3,14,25)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_finality_3_0, 13)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0, 2,3,4,5,6)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0, 10,5,7,2,3,23,24,25)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0, 26)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0, 49,11,12,13,14)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_func_7_0, 2,4,6,7,8,9,10,11)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_func_7_0, 12,13,30,15,16,17,18,19)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_func_7_0, 20,21,22,24,26,27)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0, 3,6,9,10,11,12,13,14)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0, 15,16,17,18)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0, 3,6,11,12,13,14,15,16)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0, 17,18,19,20)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0, 3,6,8)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_func_type_suffix_3_0, 2)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0, 4,34,12,13,16,35)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_grade_var_2_0, 2)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0, 2,6,7,8,9,10,11,16)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0, 17,18,19,20,21,22,23,24)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0, 2,3,4,6,5,12,14,15)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0, 16,17,19,20,21,22,24,25)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0, 26,27)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0, 18,19,20,21,22,23,27,28)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0, 29,30,31,32,37,38)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0, 2,3,4,5,21,7,8,9)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0, 6,12,14,15,16,18,19)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_args_9_0, 38,29,3,9,10,11,12,13)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_args_9_0, 14,15,16,17,18,19,20,21)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_init_args_9_0, 22,41)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0, 2,3,5,4,7,9,10,11)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0, 12,13,14,15,16,18,17,20)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0, 22,23,24,25,26,27,28,29)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0, 31,30,33,35,36,37,38,39)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0, 40,43,41,47,45)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0, 2,3,4,10,11,12,13,8)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0, 15,20,21,23,24,6,27,28)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0, 29,69,31,35,36,38,39,41)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0, 42,43,44,45,48,49,50,51)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0, 52,53,54,46,58,59,60,61)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0, 62,63,64,56)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0, 36,41,15,42,18,19,21,22)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0, 43,4,7,6,10,11,12,40)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_label_name_3_0, 2)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_lval_3_0, 131,6,14,17,20,18,22,7)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_lval_3_0, 25,28,27,30,31,32,33,34)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_lval_3_0, 5,38,37,43,45,48,47,50)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_lval_3_0, 51,52,53,54,55,132,61,133)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_lval_3_0, 129,63)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0, 27,3,5,7,9,11,47,48)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0, 16,49,35,18,21,23)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_4_0, 2,4)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0, 2,4,7,6)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_name_3_0, 40,19,3,41,8,9,12,5)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_name_3_0, 39)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_param_8_0, 3,4,5,6,7,8,9,10)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_param_8_0, 11,14,21,22,23,26,12)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_param_types_3_0, 2,4,7)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0, 2,4,6,10)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0, 2,20,24,21,30,16,32,33)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0, 34,35)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0, 2,3,5)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0, 3,5,8,9,10,11,12,15)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0, 16,17,18,19,20)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0, 3,5,7,9,11,18,19,20)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0, 21,22,23,15,25,26,27,14)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0, 31,34,35,33,39,43,44,45)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0, 47,38,49,50,51,53,61,62)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0, 58,54)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0, 2,6,3,12,13,14,15,16)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0, 2,6,3,12,13,16,17,18)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0, 19,20)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0, 2)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0, 63,89,74,39,66,16,93,24)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0, 18,94,27,95,21,41,43,45)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0, 47,92,52,58,90,61,88)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0, 6,3,12,13,14,15,16,17)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0, 18,19)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0, 6,3,12,13,14,17,18,19)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0, 20,21,22,23)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pred_label_3_0, 4,5,6,7,32,9,10,11)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pred_label_3_0, 13,14,3,17,18,25,28,29)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_pred_label_3_0, 2)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0, 2,5,6,7,8,9,10,3)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0, 2)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_proc_label_3_0, 4,5,6,7,36,9,10,11)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_proc_label_3_0, 13,14,3,17,18,25,38,27)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_proc_label_3_0, 28,29,31)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0, 2,3,5)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0, 2,3,5)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0, 2,3,5)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0, 2,3,5)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_rval_3_0, 7,49,13,14,15,16,17,18)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_rval_3_0, 5,27,3,52,10,22)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_rval_const_3_0, 38,7,60,21,61,14,15,16)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_rval_const_3_0, 17,18,42,3,5,64,10,66)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_rval_const_3_0, 24,27,29,65,32,33,34)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_src_end_4_0, 2,3,4)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_src_file_4_0, 3,2,10,11,12,13,14,15)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_src_file_4_0, 16,17,18,19,21,23,25,27)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_src_file_4_0, 29,31,32,33,34,35,36,37)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_src_file_4_0, 38,39,40,41,42,43,44)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_src_imports_4_0, 2,5,3)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_src_start_8_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_src_start_8_0, 10,11,12,13,14,16,19,22)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_statement_5_0, 2,3,4,5)
MR_decl_label5(ml_backend__mlds_to_c__mlds_output_std_unop_4_0, 2,3,4,5,9)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 5,6,7,220,9,11,221,13)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 14,16,18,201,204,205,206,203)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 209,210,211,212,213,214,111,112)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 113,114,115,123,124,125,116,127)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 135,138,139,219,3,21,22,23)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 24,25,29,28,31,32,34,234)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 36,37,35,40,43,26,27,46)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 47,48,45,53,54,52,55,56)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 57,58,59,61,62,65,64,67)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 68,63,70,74,75,76,77,78)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 80,81,82,85,86,87,90,91)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 89,93,96,99,101,102,104,105)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 106,143,144,145,147,148,149,245)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 151,154,153,158,159,160,161,162)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 163,165,166,168,169,173,172,180)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 181,182,183,184,185,186,187,171)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 189,190,191,192,193,194,195,196)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_stmt_6_0, 197,198,199,2)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_switch_case_6_0, 3,4,5,6,7,8,9,10)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_switch_case_6_0, 11,12,13)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_switch_default_6_0, 23,40,4,5,6,7,8,9)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_switch_default_6_0, 10,11,12,13,14,15,16,17)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_switch_default_6_0, 18,19,41)
MR_decl_label2(ml_backend__mlds_to_c__mlds_output_tag_3_0, 2,3)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0, 52,16,21,22,23,24,25,26)
MR_decl_label7(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0, 48,6,53,54,12,3,4)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_type_3_0, 2)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0, 7,9,5,14,15,16,43,42)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0, 80,3,44,45,47,52,83,5)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0, 7,10,11,14,9,16,17,21)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0, 22,24,27,30,32,29,38,40)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0, 42,56,58,60,62,64,66,67)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0, 69,72,131,75,77,78)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0, 45,80,73,48,4,8,11,13)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0, 14,16,20,82,32,83,37,81)
MR_decl_label1(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0, 43)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0, 4,3,8,2,20,46,22,23)
MR_decl_label8(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0, 24,25,26,27,11,30,31,32)
MR_decl_label3(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0, 33,34,35)
MR_decl_label4(ml_backend__mlds_to_c__mlds_output_unop_4_0, 3,9,5,7)
MR_decl_label6(ml_backend__mlds_to_c__mlds_output_var_3_0, 2,3,4,5,6,7)
MR_decl_label8(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0, 1,15,7,10,9,13,3,4)
MR_decl_label1(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0, 2)
MR_decl_label3(ml_backend__mlds_to_c__output_c_file_4_0, 2,3,4)
MR_decl_label3(ml_backend__mlds_to_c__output_context_3_0, 2,3,4)
MR_decl_label7(ml_backend__mlds_to_c__output_header_file_4_0, 2,3,4,5,6,7,9)
MR_decl_label8(ml_backend__mlds_to_c__output_init_fn_name_4_0, 2,3,5,4,7,9,10,11)
MR_decl_label1(ml_backend__mlds_to_c__output_init_fn_name_4_0, 12)
MR_decl_label1(ml_backend__mlds_to_c__output_mlds_4_0, 2)
MR_decl_label5(ml_backend__mlds_to_c__output_required_calls_3_0, 12,4,5,6,14)
MR_decl_label8(ml_backend__mlds_to_c__output_required_fn_name_4_0, 2,3,5,4,7,9,10,11)
MR_decl_label1(ml_backend__mlds_to_c__output_required_fn_name_4_0, 12)
MR_decl_label1(ml_backend__mlds_to_c__write_lval_or_string_3_0, 3)
MR_decl_label8(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0, 2,3,6,7,8,10,11,12)
MR_decl_label8(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0, 13,14,15,16,5,19,20,27)
MR_decl_label8(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0, 43,29,30,31,33,36,37,38)
MR_decl_label8(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0, 27,3,30,19,20,22,24,25)
MR_decl_label3(__Unify___ml_backend__mlds_to_c__func_info_0_0, 4,8,1)
MR_decl_label3(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0, 10,5,1)
MR_decl_label3(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0, 14,5,1)
MR_decl_label4(__Compare___ml_backend__mlds_to_c__func_info_0_0, 3,2,5,21)
MR_decl_label4(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0, 18,7,5,9)
MR_decl_label5(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0, 3,2,7,5,10)
MR_def_extern_entry(ml_backend__mlds_to_c__output_header_file_4_0)
MR_def_extern_entry(ml_backend__mlds_to_c__output_c_file_4_0)
MR_def_extern_entry(ml_backend__mlds_to_c__output_mlds_4_0)
MR_def_extern_entry(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0)
MR_def_extern_entry(ml_backend__mlds_to_c__output_context_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_indent_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0)
MR_decl_static(ml_backend__mlds_to_c__output_init_fn_name_4_0)
MR_decl_static(ml_backend__mlds_to_c__output_required_fn_name_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_decls_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_defns_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0)
MR_decl_static(fn__ml_backend__mlds_to_c__this_file_0_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_src_imports_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_src_import_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_src_start_8_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_src_end_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_grade_var_2_0)
MR_decl_static(ml_backend__mlds_to_c__output_required_calls_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pred_label_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_data_name_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_name_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_decls_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_defns_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_src_file_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0)
MR_decl_static(fn__ml_backend__mlds_to_c__global_var_name_1_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_hdr_decl_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_foreign_import_module_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_c_defn_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_indent_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_param_types_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_type_suffix_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_type_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_cast_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_export_enum_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_data_decl_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_decl_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_decl_body_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_finality_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_constness_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_abstractness_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_decl_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_decl_blank_line_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_statements_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_var_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_tag_3_0)
MR_decl_static(ml_backend__mlds_to_c__is_an_address_1_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_proc_label_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_code_addr_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_data_addr_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_rval_const_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_lval_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_rval_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_unop_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_cast_rval_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_std_unop_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_binop_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_label_name_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0)
MR_decl_static(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0)
MR_decl_static(ml_backend__mlds_to_c__write_lval_or_string_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_init_args_9_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_statement_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_stmt_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_switch_default_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_class_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_data_defn_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_defn_body_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_defn_6_0)
MR_decl_static(ml_backend__mlds_to_c__is_static_member_1_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_make_base_class_5_0)
MR_decl_static(ml_backend__mlds_to_c__is_enum_const_1_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_param_8_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_param_type_3_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_switch_case_6_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_case_cond_5_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__decl_or_defn_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__decl_or_defn_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__func_info_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__func_info_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__indent_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__indent_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__locn_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__locn_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_c__output_type_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_c__output_type_0_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_c_hdr_decls__783__1_3_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn__885__1_2_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_func_name__901__1_2_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__994__1_1_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__998__1_1_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_exported_enum_constant__1257__1_2_0)
MR_decl_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_rval_const__3844__1_2_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0)
MR_decl_static(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_header_file_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_file_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_exported_enum_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_imports_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_9;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_10;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_11;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_2;
static const struct mercury_type_0 mercury_common_0[22] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__output_header_file_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_file_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_exported_enum),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_imports_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_import),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_3,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_4,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_5,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_6,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_7,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_8,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_9,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_10,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_11,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, locn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_c, locn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, target_code_component),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[6] =
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
MR_TAG_COMMON(1,1,1)
},
{
MR_string_const("\tstatic MR_bool initialised = MR_FALSE;\n", 40),
MR_TAG_COMMON(1,1,2)
},
{
MR_string_const("\"\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const(".mih", 4),
MR_TAG_COMMON(1,1,4)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_rval_const_3_0_1;
static const struct mercury_type_2 mercury_common_2[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_COMMON(6,2)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_COMMON(6,2)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_2,
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
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(6,3),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_rval_const_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
};

MR_decl_entry(parse_tree__file_names__module_name_to_file_name_2_0);
MR_decl_entry(ml_backend__ml_util__defn_is_commit_type_var_1_0);
MR_decl_entry(ml_backend__ml_util__defn_is_public_1_0);
MR_decl_entry(ml_backend__ml_util__defn_is_type_1_0);
MR_decl_entry(ml_backend__ml_util__defn_is_function_1_0);
MR_decl_entry(ml_backend__ml_util__defn_is_type_ctor_info_1_0);
static const struct mercury_type_3 mercury_common_3[33] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(parse_tree__file_names__module_name_to_file_name_2_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_c_hdr_decls__783__1_3_0),
0
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_commit_type_var_1_0),
0
},
{
MR_COMMON(9,1),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_public_1_0),
0
},
{
MR_COMMON(9,2),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_public_1_0),
0
},
{
MR_COMMON(9,3),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_type_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0),
0
},
{
MR_COMMON(9,4),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_public_1_0),
0
},
{
MR_COMMON(9,5),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_type_1_0),
0
},
{
MR_COMMON(9,6),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_type_1_0),
0
},
{
MR_COMMON(9,7),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_function_1_0),
0
},
{
MR_COMMON(9,8),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_type_ctor_info_1_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_param_type_3_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_3_0),
0
},
{
MR_COMMON(9,9),
MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__994__1_1_0),
0
},
{
MR_COMMON(9,10),
MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__998__1_1_0),
0
},
{
MR_COMMON(9,11),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_function_1_0),
0
},
{
MR_COMMON(4,6),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_rval_3_0),
0
},
{
MR_COMMON(9,12),
MR_ENTRY_AP(ml_backend__mlds_to_c__is_enum_const_1_0),
0
},
{
MR_COMMON(9,13),
MR_ENTRY_AP(ml_backend__mlds_to_c__is_static_member_1_0),
0
},
{
MR_COMMON(4,7),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_rval_3_0),
0
},
{
MR_COMMON(4,8),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_lval_3_0),
0
},
{
MR_COMMON(4,9),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_3_0),
0
},
{
MR_COMMON(4,10),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0),
0
},
{
MR_COMMON(4,11),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0),
0
},
{
MR_COMMON(4,12),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0),
0
},
{
MR_COMMON(4,13),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0),
0
},
{
MR_COMMON(4,14),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0),
0
},
{
MR_COMMON(4,15),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_param_types_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0_1;
static const struct mercury_type_4 mercury_common_4[16] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_2,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_3,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_param_types_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_2,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_2,
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
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(20,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[2] =
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
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
static const struct mercury_type_6 mercury_common_6[5] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_decl_is_local)
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
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decls_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_decls_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pragma_export_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statements_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_func_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_switch_case_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_1;
static const struct mercury_type_7 mercury_common_7[11] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(6,0),
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decls_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_5,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_decls_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_COMMON(6,0),
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statements_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds_to_c, func_info),
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_switch_case_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(17,0),
MR_COMMON(17,0),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(17,0),
MR_COMMON(17,0),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_defns_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_defns_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_4,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds_to_c, func_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_defns_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_8;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_4;
static const struct mercury_type_9 mercury_common_9[14] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_defns_6_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_3,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_4,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_5,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_6,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_7,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_8,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_4,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
};

static const struct mercury_type_10 mercury_common_10[1] =
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

static const struct mercury_type_12 mercury_common_12[2] =
{
{
MR_string_const("array", 5)
},
{
MR_string_const("base", 4)
},
};

static const struct mercury_type_13 mercury_common_13[1] =
{
{
MR_TAG_COMMON(0,12,0),
MR_string_const("array", 5)
},
};

static const struct mercury_type_14 mercury_common_14[1] =
{
{
MR_TAG_COMMON(1,13,0),
1
},
};

static const struct mercury_type_15 mercury_common_15[2] =
{
{
MR_COMMON(0,16),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0),
1,
0
},
{
MR_COMMON(0,17),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0),
1,
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_3;
static const struct mercury_type_16 mercury_common_16[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
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

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_17 mercury_common_17[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
3,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
},
};

static const struct mercury_type_18 mercury_common_18[1] =
{
{
MR_COMMON(7,9),
MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0),
2,
MR_TAG_COMMON(0,3,27),
MR_TAG_COMMON(0,3,28)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0_1;
static const struct mercury_type_19 mercury_common_19[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_3,
(MR_Word *) (MR_Integer) 0
},
8,
{
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
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
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

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_defn_0;
static const struct mercury_type_20 mercury_common_20[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_defn)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_defn)
}
},
};

static const struct mercury_type_11 mercury_vector_common_11_0[3] =
{
{
162,
1
},
{
163,
1
},
{
164,
1
},
};

static const MR_VA_TypeInfo_Struct3 mercury_data___vti_pred_3ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	3,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0,
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
	{ (void *)&mercury_data___vti_pred_3ml_backend__mlds__type_ctor_info_mlds_type_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_c__field_types_lval_or_string_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_c__du_functor_desc_lval_or_string_0_0 = {
	"lval",
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
	"string",
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_c__field_types_initializer_array_size_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_c__du_functor_desc_initializer_array_size_0_0 = {
	"array_size",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_c__field_types_initializer_array_size_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_c__du_functor_desc_initializer_array_size_0_1 = {
	"no_size",
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

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_c__du_stag_ordered_initializer_array_size_0_0[] = {
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_initializer_array_size_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_c__du_stag_ordered_initializer_array_size_0_1[] = {
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_initializer_array_size_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_c__du_ptag_ordered_initializer_array_size_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__mlds_to_c__du_stag_ordered_initializer_array_size_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_c__du_stag_ordered_initializer_array_size_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_c__du_name_ordered_initializer_array_size_0[] = {
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_initializer_array_size_0_0,
	&mercury_data_ml_backend__mlds_to_c__du_functor_desc_initializer_array_size_0_1
};

const MR_Integer mercury_data_ml_backend__mlds_to_c__functor_number_map_initializer_array_size_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_c__type_ctor_info_initializer_array_size_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0)),
	"ml_backend.mlds_to_c",
	"initializer_array_size",
	{ (void *)mercury_data_ml_backend__mlds_to_c__du_name_ordered_initializer_array_size_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_c__du_ptag_ordered_initializer_array_size_0 },
	2,
	4,
	mercury_data_ml_backend__mlds_to_c__functor_number_map_initializer_array_size_0
};

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

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_header_file_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_hdr_file",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
156,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__output_c_file_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_src_file",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
140,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_1 = {
{
MR_PREDICATE,
"parse_tree.file_names",
"parse_tree.file_names",
"module_name_to_file_name",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
782,
"d1;c21;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_783",
3,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
783,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_c_hdr_decl",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
787,
"d1;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decls_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_decl_blank_line",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1279,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_defns_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_defn",
6,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1285,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_defns_6_0_2 = {
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
1292,
"d1;c10;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_1 = {
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
184,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_2 = {
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
184,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_3 = {
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
185,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_export_enum",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1218,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_5 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_decl_blank_line",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1279,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_imports_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_src_import",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
219,
"d1;c6;d2;c2;"
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
461,
"d1;c16;"
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
461,
"d1;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_decls_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_c_hdr_decl",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
828,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_c_foreign_import_module",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
838,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_c_defn",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
840,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_c_defns_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_defn",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
842,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_1 = {
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
331,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_2 = {
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
331,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_3 = {
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
285,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_4 = {
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
304,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_5 = {
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
305,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_6 = {
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
307,
"d1;c21;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_7 = {
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
308,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_src_file_4_0_8 = {
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
309,
"d1;c25;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_arg",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1159,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_param_types_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_param_type",
3,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1963,
"d1;c6;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type",
3,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2418,
"d16;c5;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_994",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
994,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_998",
1,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
998,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_input_defns",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1004,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_output_defns",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1006,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_5 = {
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
1033,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_6 = {
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
1033,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_7 = {
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
1033,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_8 = {
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
1033,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_9 = {
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
1063,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_10 = {
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
1063,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_11 = {
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
1063,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_885",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
885,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_901",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
901,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_type",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
907,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_type",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
907,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_1257",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1257,
"d1;c10;t;e;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_5_0_1 = {
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
1362,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_decl_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type_forward_decl",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1362,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_statements_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_statement",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2607,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_rval_const_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"lambda_mlds_to_c_m_3844",
2,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
3844,
"d4;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_target_code_component",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
3296,
"d9;c7;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_1 = {
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
2631,
"d1;c10;d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_rval",
3,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2834,
"d11;c27;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_computed_goto_label",
7,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2763,
"d10;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_stmt_6_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_switch_case",
6,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2730,
"d5;c16;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_1 = {
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
1584,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_2 = {
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
1653,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_enum_constant",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1654,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_class_6_0_4 = {
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
1573,
"d1;c11;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_initializer_body",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1788,
"d4;c7;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_initializer_body",
4,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1768,
"d3;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_switch_case_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_case_cond",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
2989,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_rval",
3,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_lval",
3,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type",
3,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type_prefix",
3,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type_suffix",
3,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_prefix_suffix",
5,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_pragma_export_type",
3,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_prefix_suffix",
5,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1868,
"d1;c11;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type_prefix",
3,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_type_suffix",
3,
0
},
"ml_backend.mlds_to_c",
"",
0,
""
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_param",
8,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1907,
"d1;c11;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0_1 = {
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
1231,
"d1;c6;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_c",
"ml_backend.mlds_to_c",
"mlds_output_param",
8,
0
},
"ml_backend.mlds_to_c",
"mlds_to_c.m",
1907,
"d1;c11;d2;c4;"
};

MR_decl_entry(fn__ml_backend__mlds__mlds_get_module_name_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_6_0);
MR_decl_entry(libs__file_util__output_to_file_4_0);
MR_decl_entry(parse_tree__module_cmds__update_interface_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module0)
	MR_init_entry1(ml_backend__mlds_to_c__output_header_file_4_0);
	MR_init_label7(ml_backend__mlds_to_c__output_header_file_4_0,2,3,4,5,6,7,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_c__output_header_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_module_name_1_0,
		ml_backend__mlds_to_c__output_header_file_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__output_header_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".tmp", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_header_file_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__output_header_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".mih", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_header_file_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__output_header_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		ml_backend__mlds_to_c__output_header_file_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__output_header_file_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".mih", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_header_file_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__output_header_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		ml_backend__mlds_to_c__output_header_file_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__output_header_file_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__file_util__output_to_file_4_0,
		ml_backend__mlds_to_c__output_header_file_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__output_header_file_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__module_cmds__update_interface_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module1)
	MR_init_entry1(ml_backend__mlds_to_c__output_c_file_4_0);
	MR_init_label3(ml_backend__mlds_to_c__output_c_file_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_c__output_c_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_module_name_1_0,
		ml_backend__mlds_to_c__output_c_file_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__output_c_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".c", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__output_c_file_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__output_c_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		ml_backend__mlds_to_c__output_c_file_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__output_c_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_src_file_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__file_util__output_to_file_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module2)
	MR_init_entry1(ml_backend__mlds_to_c__output_mlds_4_0);
	MR_init_label1(ml_backend__mlds_to_c__output_mlds_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_c__output_mlds_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_c_file_4_0,
		ml_backend__mlds_to_c__output_mlds_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__output_mlds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__output_header_file_4_0);
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
MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(fn__hlds__hlds_pred__proc_id_to_int_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module3)
	MR_init_entry1(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0);
	MR_init_label8(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,2,3,6,7,8,10,11,12)
	MR_init_label8(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,13,14,15,16,5,19,20,27)
	MR_init_label8(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,43,29,30,31,33,36,37,38)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i5);
	}
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 3);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
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
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
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
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i43);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i19);
	}
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(4) = (MR_Word) MR_string_const("f", 1);
	MR_sv(5) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 3) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i20);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = (MR_Word) MR_string_const("p", 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i20);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s_%d_%s", 8);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i27);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i29);
	}
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__proc_id_to_int_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i33);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i30);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i31);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i43);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("_%d", 3);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i36);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i37);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_for_", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0_i38);
MR_def_label(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,38)
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

MR_decl_entry(fn__ml_backend__mlds__mlds_get_prog_context_1_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(backend_libs__c_util__set_line_num_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module4)
	MR_init_entry1(ml_backend__mlds_to_c__output_context_3_0);
	MR_init_label3(ml_backend__mlds_to_c__output_context_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_c__output_context_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__output_context_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__output_context_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__output_context_3_0_i3);
MR_def_label(ml_backend__mlds_to_c__output_context_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__output_context_3_0_i4);
MR_def_label(ml_backend__mlds_to_c__output_context_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__c_util__set_line_num_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module5)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_indent_3_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_indent_3_0,10,3,12)
MR_BEGIN_CODE

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
MR_decl_entry(backend_libs__c_util__output_c_file_intro_and_grade_4_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(parse_tree__prog_out__write_sym_name_3_0);
MR_decl_entry(libs__globals__io_get_target_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module6)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,10,11,12,13,14,15,16,17)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,18,19,20,21,22,23,27,28)
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,29,30,31,32,37,38)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(library__version_1_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".m", 2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__c_util__output_c_file_intro_and_grade_4_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- module ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(". */\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- interface. */\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#ifndef MR_HEADER_GUARD_", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#define MR_HEADER_GUARD_", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__io_get_target_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#ifdef __cplusplus\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("extern \"C\" {\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#endif\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_start_4_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#include \"mercury.h\"\n", 21);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module7)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,2,6,7,8,9,10,11,16)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,17,18,19,20,21,22,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(libs__globals__io_get_target_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#ifdef __cplusplus\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#endif\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#endif /* MR_HEADER_GUARD_", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- end_interface ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_end_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0,24)
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

MR_decl_entry(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0);
MR_decl_entry(string__prefix_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module8)
	MR_init_entry1(ml_backend__mlds_to_c__output_init_fn_name_4_0);
	MR_init_label8(ml_backend__mlds_to_c__output_init_fn_name_4_0,2,3,5,4,7,9,10,11)
	MR_init_label1(ml_backend__mlds_to_c__output_init_fn_name_4_0,12)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module9)
	MR_init_entry1(ml_backend__mlds_to_c__output_required_fn_name_4_0);
	MR_init_label8(ml_backend__mlds_to_c__output_required_fn_name_4_0,2,3,5,4,7,9,10,11)
	MR_init_label1(ml_backend__mlds_to_c__output_required_fn_name_4_0,12)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module10)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,2,3,5,4,7,9,10,11)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,12,13,14,15,16,18,17,20)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,22,23,24,25,26,27,28,29)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,31,30,33,35,36,37,38,39)
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,40,43,41,47,45)
MR_BEGIN_CODE

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
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module11)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,2,5,3,8,9,15,16,18)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,20,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds__is_std_lib_module_2_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__foreign__decl_guard_1_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
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
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__get_ancestors_1_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_c_hdr_decl_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(1,5,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n#endif\n", 8);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module12)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_decls_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_decls_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_decl_blank_line_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module13)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_defns_6_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_defns_6_0,3,12,5,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_defns_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_defn_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_r1 = (MR_Integer) 279;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_defns_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defns_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defns_6_0_i5);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_defns_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defns_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_defns_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defns_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__mlds_to_c__mlds_output_defns_6_0_i12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_exported_enum_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module14)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,2,3,4,6,5,12,14,15)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,16,17,19,20,21,22,24,25)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 6);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_hdr_start_4_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(map__search_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i5);
	}
	MR_r3 = MR_sv(4);
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_c_hdr_decls_5_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_export_enum_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_exported_enum);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defns_6_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_decl_blank_line_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_init_fn_decls_5_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_hdr_file_4_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_hdr_file_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_hdr_end_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module15)
	MR_init_entry1(fn__ml_backend__mlds_to_c__this_file_0_0);
MR_BEGIN_CODE

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

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module16)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_src_imports_4_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_src_imports_4_0,2,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_src_imports_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(libs__globals__io_get_target_3_0,
		ml_backend__mlds_to_c__mlds_output_src_imports_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_imports_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_src_imports_4_0_i3);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_src_imports_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_src_import_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_imports_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("expected target asm or target c", 31);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_imports_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module17)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_src_import_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_src_import_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__name_mangle__output_init_name_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module18)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,2,3,4,5,21,7,8,9)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,6,12,14,15,16,18,19)
MR_BEGIN_CODE

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
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_np_call_localret_ent(list__foldl_4_0,
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
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_np_call_localret_ent(list__foldl_4_0,
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module19)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_src_start_8_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_src_start_8_0,2,3,4,5,6,7,8,9)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_src_start_8_0,10,11,12,13,14,16,19,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_src_start_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(library__version_1_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".m", 2);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(backend_libs__c_util__output_c_file_intro_and_grade_4_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- module ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(". */\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- implementation. */\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_init_and_final_comments_6_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_src_start_8_0_i22);
	}
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,
		ml_backend__mlds_to_c__mlds_output_src_start_8_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_start_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module20)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_src_end_4_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_src_end_4_0,2,3,4)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module21)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_grade_var_2_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_grade_var_2_0,2)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module22)
	MR_init_entry1(ml_backend__mlds_to_c__output_required_calls_3_0);
	MR_init_label5(ml_backend__mlds_to_c__output_required_calls_3_0,12,4,5,6,14)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
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

MR_decl_entry(io__write_int_3_0);
MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module23)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pred_label_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,4,5,6,7,32,9,10,11)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,13,14,3,17,18,25,28,29)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,2)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
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
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
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
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i32);
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
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i17);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_string_const("f", 1);
	MR_sv(3) = ((MR_Integer) MR_ctfield(0, MR_tempr1, 3) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_string_const("p", 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s_%d_%s", 8);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i2);
	}
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_pred_label_3_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,29)
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

MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0);
MR_decl_entry(backend_libs__rtti__id_to_c_identifier_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module24)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_data_name_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_data_name_3_0,8,48,19,49,4,25,6,10)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_data_name_3_0,51,47)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_data_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_name_3_0_i8) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_name_3_0_i48) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_name_3_0_i49) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_name_3_0_i25));
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_name_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: module_layout", 18);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_name_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		ml_backend__mlds_to_c__mlds_output_data_name_3_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_name_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_data_name_3_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_name_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("common_", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_name_3_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_name_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_name_3_0_i51);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_name_3_0_i10);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_name_3_0_i6);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,
		ml_backend__mlds_to_c__mlds_output_data_name_3_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: internal_layout", 20);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_name_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: proc_layout", 16);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_name_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		ml_backend__mlds_to_c__mlds_output_data_name_3_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_name_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module25)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_name_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_name_3_0,40,19,3,41,8,9,12,5)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_name_3_0,39)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i40) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_name_3_0_i5));
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s_%d", 5);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_data_name_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pred_label_3_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("_%d", 3);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ml_backend__mlds_to_c__mlds_output_name_3_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_name_3_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(2), 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("_%d", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_name_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module26)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,10,5,7,2,3,23,24,25)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,26)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i5);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i10);
	}
	if ((MR_tempr2 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_name_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_INT_NE(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 5);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_name_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
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
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module27)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0,13,4,6,7,15)
MR_BEGIN_CODE

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
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module28)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0,13,4,6,7,15)
MR_BEGIN_CODE

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
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
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

MR_decl_entry(libs__globals__io_get_globals_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module29)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,2,3,4,10,11,12,13,8)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,15,20,21,23,24,6,27,28)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,29,69,31,35,36,38,39,41)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,42,43,44,45,48,49,50,51)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,52,53,54,46,58,59,60,61)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,62,63,64,56)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_init_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_11_0, 0);
	MR_sv(10) = (MR_Integer) 2;
	MR_sv(11) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(12) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i10);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(10);
	if (MR_INT_GE(MR_r4,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i11);
	}
	MR_sv(10) = ((MR_Integer) MR_sv(10) + (MR_Integer) 2);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(11);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_11_0, (MR_Integer) MR_r4);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_np_call_localret_ent(io__write_strings_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(0, MR_ctfield(1, MR_tempr1, 0), 0);
	MR_r1 = (MR_Word) MR_string_const("\tMR_init_entry(", 15);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_calls_to_init_entry_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("_type_tables", 12);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_init_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i31);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_np_call_localret_ent(io__write_strings_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(3), 1);
	MR_sv(3) = MR_ctfield(0, MR_ctfield(1, MR_sv(3), 0), 0);
	MR_r1 = (MR_Word) MR_string_const("\tMR_register_type_ctor_info(&", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,36)
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
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i39);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_calls_to_register_tci_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i69);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("_debugger", 9);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_init_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tMR_fatal_error(\"debugger initialization in MLDS grade\");\n", 58);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i44);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i46);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i48);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("required_init", 13);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_required_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i49);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("();\n", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i51);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i52);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_required_calls_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i54);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i46);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i56);
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i58);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("required_final", 14);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_required_fn_name_4_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i59);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i60);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("();\n", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i61);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i62);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i63);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_required_calls_3_0,
		ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0_i64);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module30)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_decls_4_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_c_decls_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_decls_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_c__mlds_output_c_decls_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_decls_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_c_hdr_decl_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module31)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_defns_5_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_c_defns_5_0,2,4,5,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_defns_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_c__mlds_output_c_defns_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_defns_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_c_foreign_import_module_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__mlds_to_c__mlds_output_c_defns_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_defns_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_c__mlds_output_c_defns_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_defns_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_c_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_c_defns_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_defns_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_c_defns_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_c_defns_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export);
	MR_r2 = MR_sv(4);
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

MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(fn__set__union_list_1_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module32)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_src_file_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_src_file_4_0,3,2,10,11,12,13,14,15)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_src_file_4_0,16,17,18,19,21,23,25,27)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_src_file_4_0,29,31,32,33,34,35,36,37)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_src_file_4_0,38,39,40,41,42,43,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_src_file_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(map__search_3_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_src_file_4_0_i2);
	}
	MR_r4 = MR_sv(4);
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_src_file_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(list__filter_map_3_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_list_1_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_src_start_8_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_src_imports_4_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_c_decls_4_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,14);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,15);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defns_6_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_decls_5_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_c_defns_5_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defns_6_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i39);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_init_fn_defns_7_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_grade_var_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_src_file_4_0_i44);
MR_def_label(ml_backend__mlds_to_c__mlds_output_src_file_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_src_end_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module33)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_get_env_var_names_from_defn_2_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 4);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module34)
	MR_init_entry1(fn__ml_backend__mlds_to_c__global_var_name_1_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module35)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_env_var_decl_3_0,2,3,4)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module36)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0);
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_env_var_init_3_0,2,3)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module37)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_hdr_decl_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_hdr_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module38)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_foreign_import_module_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_foreign_import_module_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module39)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_c_defn_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_c_defn_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module40)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_indent_4_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_indent_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_indent_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_indent_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_indent_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_indent_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_indent_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_indent_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_indent_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_indent_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_indent_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_indent_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__foreign__exported_type_to_string_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module41)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,63,89,74,39,66,16,93,24)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,18,94,27,95,21,41,43,45)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,47,92,52,58,90,61,88)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i88);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i63) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i89) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i66));
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i45) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i43) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i90));
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(1, MR_r2, 2);
	MR_np_call_localret_ent(fn__backend_libs__foreign__exported_type_to_string_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i74);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_ArrayPtr", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i16) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i92) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i58));
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(3, MR_r2, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i93) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i94) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i95));
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mlds_output_type_prefix: il foreign_type", 40);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mlds_output_type_prefix: java foreign_type", 42);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mlds_output_type_prefix: erlang foreign_type", 44);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_bool", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Char", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Float", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Integer", 10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i52);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" *", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Word", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0_i61);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mlds_output_pragma_export_type: unknown_type", 44);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module42)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0,2)
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

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module43)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0,2,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module44)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_param_types_3_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_param_types_3_0,2,4,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_param_types_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_param_types_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_types_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_param_types_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_param_types_3_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_types_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,16);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_param_types_3_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_types_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module45)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_type_suffix_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_func_type_suffix_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_type_suffix_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_type_suffix_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_suffix_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_param_types_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(int__max_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module46)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0);
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0,17,5)
MR_BEGIN_CODE

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
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(int__max_3_0,
		ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("[%d]", 4);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__format_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
MR_decl_entry(fn__backend_libs__rtti__rtti_id_maybe_element_has_array_type_1_0);
MR_decl_entry(fn__backend_libs__rtti__tabling_id_has_array_type_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module47)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,45,80,73,48,4,8,11,13)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,14,16,20,82,32,83,37,81)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i45) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i80) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i80) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i48));
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r1),9)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i81);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i8) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i80) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i80) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i80) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i82) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i83));
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i80);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const(")(", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,17);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 214;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const(", void *", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_type_suffix_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__rtti__rtti_id_maybe_element_has_array_type_1_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i73);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__backend_libs__rtti__tabling_id_has_array_type_1_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i73);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_array_type_suffix_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_type_suffix_4_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mlds_output_type_suffix: unknown_type", 37);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module48)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module49)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0,3,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0_i6);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_3_0,
		ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0,
		ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" MR_CALL (*", 11);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module50)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_type_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_type_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_type_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_type_gen__ml_gen_type_name_3_0);
MR_decl_entry(backend_libs__rtti__rtti_id_maybe_element_c_type_3_0);
MR_decl_entry(backend_libs__rtti__tabling_id_c_type_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module51)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,80,3,44,45,47,52,83,5)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,7,10,11,14,9,16,17,21)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,22,24,27,30,32,29,38,40)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,42,56,58,60,62,64,66,67)
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,69,72,131,75,77,78)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i80) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i44) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i83));
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i21) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i56) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i62) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i60) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i58) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i42) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i40) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i75) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i64) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i77));
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 213;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i47);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_ArrayPtr", 11);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,14,0);
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_type_name_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i52);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_tempr2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i80) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i44) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i83));
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i42) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i66) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i69) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i72));
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i9);
	}
	MR_sv(1) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_string_const("MR_Integer /* actually \140enum ", 29);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("_%d_e", 5);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\' */", 4);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("struct ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("_%d_s", 5);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 279;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("jmp_buf", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__label__", 9);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i29);
	}
	MR_r1 = (MR_Integer) 214;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i32);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_Cont", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_NestedCont", 13);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("void MR_CALL (*", 15);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_type_prefix_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("void *", 6);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Box", 6);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_bool", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Char", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Float", 8);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Integer", 10);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_PseudoTypeInfo", 17);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i67);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" *", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(backend_libs__rtti__rtti_id_maybe_element_c_type_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i131);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(backend_libs__rtti__tabling_id_c_type_3_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i131);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_TypeInfo", 11);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_type_prefix_3_0_i78);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,78)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module52)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,27,3,5,7,9,11,47,48)
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,16,49,35,18,21,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i47));
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i48) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i21) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i49));
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r4,
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i11));
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Char", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Float", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Integer", 10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_String", 9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 213;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i18);
	}
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Word", 7);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_ClosurePtr", 13);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Tuple", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_type_prefix_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_Box", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module53)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0,2,4,7,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 213;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_Word", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0_i6);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_user_type_prefix_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_mercury_user_type_prefix", 36);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module54)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_4_0);
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_4_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_type_name_3_0,
		ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 4;
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_mercury_user_type_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module55)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,3,5,7,9,11,18,19,20)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,21,22,23,15,25,26,27,14)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,31,34,35,33,39,43,44,45)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,47,38,49,50,51,53,61,62)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,58,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,18);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,19);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__filter_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i14);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(7) = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i15);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ret_value;\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" boxed_ret_value;\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ret_value;\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i38);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i39);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i39);
	}
	MR_r1 = (MR_Word) MR_string_const("\tboxed_ret_value = ", 19);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\tret_value = (", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i44);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_call_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\treturn (", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i49);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i51);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,15);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i54);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i58);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i58);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", 29);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i61);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i62);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", boxed_ret_value, ret_value);\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0_i58);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\treturn ret_value;\n", 19);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module56)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,3,5,8,9,10,11,12,15)
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,16,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn__885__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("foreign_export to language other than C.", 40);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_func_name__901__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tempr2 = MR_tempr3;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("export to language other than C.", 32);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r6 = (MR_Word) MR_string_const("", 0);
	MR_r7 = MR_sv(7);
	MR_r8 = (MR_Word) MR_TAG_COMMON(0,15,0);
	MR_r9 = (MR_Word) MR_TAG_COMMON(0,15,1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_body_5_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_defn_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module57)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,6,3,12,13,14,15,16,17)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0,18,19)
MR_BEGIN_CODE

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
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr5, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr5, 1);
	if (MR_PTAG_TESTR(MR_ctfield(0, MR_tempr1, 2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_ctfield(0, MR_tempr1, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_input_arg_4_0_i3);
	}
	MR_sv(1) = MR_tempr4;
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module58)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,6,3,12,13,14,17,18,19)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0,20,21,22,23)
MR_BEGIN_CODE

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
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr5, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr5, 1);
	if (MR_PTAG_TESTR(MR_ctfield(0, MR_tempr1, 2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_ctfield(0, MR_tempr1, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_output_arg_4_0_i3);
	}
	MR_sv(1) = MR_tempr4;
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
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
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module59)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0,2,6,3,12,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr4;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0_i12);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("boxed_name called for non-var argument", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_input_defns_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module60)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,2,6,3,12,13,16,17,18)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i3);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(1) = MR_tempr4;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i12);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("boxed_name called for non-var argument", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i13);
	}
	MR_r1 = MR_ctfield(3, MR_sv(3), 1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("pointed_to_type: not pointer", 28);
	MR_np_call_localret_ent(fn__libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_output_defns_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module61)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_cast_3_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_cast_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_cast_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_cast_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_cast_3_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_cast_3_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module62)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,2,20,24,21,30,16,32,33)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 0);
	MR_sv(2) = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i2);
	}
	MR_tempr3 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i2);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i21);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_tempr4 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_sv(3), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i16);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i21);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("boxed_", 6);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("boxed_name called for non-var argument", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pragma_export_arg_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module63)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_export_enum_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_export_enum_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module64)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,2,3,4,9,20,14,5,26)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
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
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(2);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_LTAGS_TESTR(MR_r3,0,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i5);
	}
	MR_r3 = MR_ctfield(0, MR_tempr4, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i5);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i9);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i9);
	}
	MR_tempr3 = MR_ctfield(2, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i9);
	}
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i14);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i14);
	}
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i14);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_exported_enum_constant__1257__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("mlconst_foreign for language other than C.", 42);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("tag for export enumeration is not integer or foreign", 52);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("exported enumeration constant is not mlds_data", 46);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_exported_enum_constant_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module65)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_data_decl_5_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_data_decl_5_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_data_decl_5_0)
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
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_data_decl_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_data_decl_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_data_decl_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_decl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module66)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_decl_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_decl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_string_const("MR_CALL ", 8);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module67)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_decl_body_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,14,15,3,6,7,5,9,10)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,25,27,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_decl_body_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i25);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i3);
	}
	MR_r3 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_EQ(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i14);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_data_decl_5_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_ctfield(3, MR_r3, 0);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_data_decl_5_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(2, MR_r4, 0), 0);
	if (MR_INT_NE(MR_tempr1,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i5);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("enum ", 5);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_e", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("struct ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_s", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_ctfield(1, MR_r4, 0);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i27);
	}
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_func_decl_6_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_r4, 1);
	MR_r1 = MR_ctfield(1, MR_r6, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_func_decl_6_0,
		ml_backend__mlds_to_c__mlds_output_decl_body_6_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_body_6_0,29)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module68)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0);
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_extern_or_static_7_0,5,4,10,2,3,14,25)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(1, MR_r1, 2);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module69)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_finality_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_finality_3_0,13)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module70)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_constness_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_constness_3_0,13)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module71)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_abstractness_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_abstractness_3_0,13)
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module72)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,2,3,37,5,7,9,11,13)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,15,4,17,18,38,20,19,24)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,25,26,27,40,29,28,31,32)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,33,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 113;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i5);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(5),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i15) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i9));
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* default access */ ", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* local: */ ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* private: */ ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* protected: */ ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* public: */ ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Integer) 113;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i20);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("/* one_copy */ ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,25)
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
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__virtuality_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i29);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("virtual ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__finality_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_finality_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_constness_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_flags_6_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_abstractness_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_get_arg_types_1_0);
MR_decl_entry(solutions__aggregate_4_2);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module73)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_decl_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_decl_5_0,2,5,9,6,14,15,16,17)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_decl_5_0,18,19,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(6) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_5_0_i2);
	}
	MR_tempr2 = MR_ctfield(0, MR_ctfield(2, MR_tempr1, 0), 0);
	if (MR_INT_EQ(MR_tempr2,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_5_0_i22);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 213;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_decl_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_5_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_decl_5_0_i6);
	}
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_sv(6), 1), 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_arg_types_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(0,18);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(solutions__aggregate_4_2,
		ml_backend__mlds_to_c__mlds_output_decl_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_decl_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_decl_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_decl_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_decl_5_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_decl_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,
		ml_backend__mlds_to_c__mlds_output_decl_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_decl_body_6_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module74)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_decl_blank_line_5_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_decl_blank_line_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_decl_blank_line_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_decl_blank_line_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_decl_blank_line_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_decl_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);
MR_decl_entry(list__member_2_1);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module75)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,1,15,7,10,9,13,3,4)
	MR_init_label1(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,2)
MR_BEGIN_CODE

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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
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
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_succeed();
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_fv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_fv(5) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_fv(6) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i9);
	MR_fv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_type_list_contains_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
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
	MR_r1 = MR_ctfield(3, MR_r1, 1);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module76)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0,7,9,5,14,15,16,43,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i43);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i42);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_type_name_3_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 3);
	if (MR_INT_EQ(MR_tempr1,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i43);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ml_backend__mlds_to_c__mlds_output_type_forward_decl_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module77)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_statements_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_statements_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_statement_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module78)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_var_3_0);
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_var_3_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module79)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_tag_3_0);
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_tag_3_0,2,3)
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module80)
	MR_init_entry1(ml_backend__mlds_to_c__is_an_address_1_0);
	MR_init_label5(ml_backend__mlds_to_c__is_an_address_1_0,11,19,14,30,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__is_an_address_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr3);
	MR_r2 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i19);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i11);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i1);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__is_an_address_1_0_i30));
	}
MR_def_label(ml_backend__mlds_to_c__is_an_address_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localtailcall(ml_backend__mlds_to_c__is_an_address_1_0);
MR_def_label(ml_backend__mlds_to_c__is_an_address_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i14);
	}
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 2);
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_c__is_an_address_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__is_an_address_1_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_localtailcall(ml_backend__mlds_to_c__is_an_address_1_0);
	}
MR_def_label(ml_backend__mlds_to_c__is_an_address_1_0,30)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module81)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_proc_label_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,4,5,6,7,36,9,10,11)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,13,14,3,17,18,25,38,27)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,28,29,31)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 3);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
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
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
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
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i17);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_string_const("f", 1);
	MR_sv(4) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 3) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = (MR_Word) MR_string_const("p", 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s_%d_%s", 8);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i27);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_proc_label_3_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("_%d", 3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__format_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module82)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0,49,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_INT_NE(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 5);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0_i49);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_proc_label_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module83)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_code_addr_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,4,13,14,15,16,17,19,3)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 2), 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 4);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 5);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i4);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_proc_label_3_0,
		ml_backend__mlds_to_c__mlds_output_code_addr_3_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_code_addr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
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
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_proc_label_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module84)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,5,2,3,9,10,11,12,19)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,29,30,14,15,36,17,21,23)
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,24)
MR_BEGIN_CODE

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
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
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
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i19) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i14) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i36));
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: module_layout", 18);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("common_", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i23);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i21);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i17);
	}
	MR_r1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__mlds_tabling_data_name_2_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: internal_layout", 20);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("NYI: proc_layout", 16);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		ml_backend__mlds_to_c__mlds_output_data_var_name_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,24)
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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module85)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_data_addr_3_0);
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,5,3,11,9,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_data_addr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__rtti_id_has_array_type_1_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i9);
	}
	MR_r1 = MR_ctfield(3, MR_sv(2), 2);
	MR_np_call_localret_ent(fn__backend_libs__rtti__tabling_id_has_array_type_1_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(&", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_data_var_name_4_0,
		ml_backend__mlds_to_c__mlds_output_data_addr_3_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_addr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__output_float_literal_3_0);
MR_decl_entry(backend_libs__c_util__output_quoted_multi_string_3_0);
MR_decl_entry(backend_libs__c_util__output_quoted_string_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module86)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_rval_const_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,38,7,60,21,61,14,15,16)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,17,18,42,3,5,64,10,66)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,24,27,29,65,32,33,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_rval_const_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i60) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i61) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i42));
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_TRUE", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_FALSE", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("(MR_Integer) ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_rval_const__3844__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(2, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r3 = (MR_Word) MR_string_const("output_rval_const - mlconst_foreign for language other than C.", 62);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("((", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i64) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i65) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i66) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i29));
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_code_addr_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_data_addr_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("(MR_Float) ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__c_util__output_float_literal_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_multi_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("NULL", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("(MR_String) ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_const_3_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_const_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_type_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module87)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_lval_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_lval_3_0,131,6,14,17,20,18,22,7)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_lval_3_0,25,28,27,30,31,32,33,34)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_lval_3_0,5,38,37,43,45,48,47,50)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_lval_3_0,51,52,53,54,55,132,61,133)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_lval_3_0,129,63)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_lval_3_0_i131) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_lval_3_0_i132) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_lval_3_0_i133) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_lval_3_0_i63));
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_3_0_i5);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_3_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(5), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_3_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_type_0_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_3_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_cast_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(4),3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_3_0_i18);
	}
	MR_r1 = MR_ctfield(3, MR_sv(4), 1);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")->", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_cast_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_3_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_strip_tag(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("MR_body(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_tag_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("))->", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(1) = MR_ctfield(0, MR_r3, 0);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_3_0_i38);
	}
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_3_0_i37);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_3_0_i37);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unexpected field type", 21);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_lval_3_0_i47);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_hl_mask_field(", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i48);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(MR_Word) ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i52);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("MR_hl_field(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_tag_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i51);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i52);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i54);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i55);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("))", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("*", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i61);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__global_var_name_1_0,
		ml_backend__mlds_to_c__mlds_output_lval_3_0_i129);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_lval_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_var_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module88)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,4,34,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0_i34);
	}
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0_i34);
	}
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module89)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_rval_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_rval_3_0,7,49,13,14,15,16,17,18)
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_rval_3_0,5,27,3,52,10,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_3_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_3_0_i49) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_3_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_rval_3_0_i27));
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("MR_mkword(", 10);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_3_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_mktag(", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_3_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_3_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_3_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_3_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_3_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_const_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_rval_3_0_i22);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_rval_3_0_i3);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_rval_3_0_i52);
	}
	MR_r1 = (MR_Word) MR_string_const("this", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_binop_5_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_rval_3_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_rval_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_unop_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module90)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_unop_4_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_unop_4_0,3,9,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_unop_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unop_4_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unop_4_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unop_4_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unop_4_0_i7));
MR_def_label(ml_backend__mlds_to_c__mlds_output_unop_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unop_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unop_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_cast_rval_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unop_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_std_unop_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module91)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_cast_rval_4_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_cast_rval_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_cast_rval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_cast_rval_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_rval_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_cast_rval_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_rval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_cast_rval_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_rval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_cast_rval_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_cast_rval_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module92)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,122,4,2,15,13,17,8,9)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,22,21,26,27,20,38,64,40)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,29,43,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i2);
	}
	MR_sv(1) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i9);
	}
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_type_0_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i122);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__is_an_address_1_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i122);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i20);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i20);
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_box_float(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_tag(MR_tempr1);
	if ((MR_r4 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i38);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i64) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i64) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i64) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i29));
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i29);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i29);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("((MR_Box) (MR_Word) (", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i44);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("((MR_Box) (", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0_i44);
MR_def_label(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("))", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module93)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,4,3,8,2,20,46,22,23)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,24,25,26,27,11,30,31,32)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,33,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i2);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i2);
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r2;
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_unbox_float(", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_tag(MR_tempr1);
	if ((MR_r4 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i20);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i11));
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i11);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i11);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(MR_Word) ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_unboxed_rval_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__unary_prefix_op_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module94)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_std_unop_4_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_std_unop_4_0,2,3,4,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_std_unop_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(backend_libs__c_util__unary_prefix_op_2_0,
		ml_backend__mlds_to_c__mlds_output_std_unop_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_std_unop_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_std_unop_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_std_unop_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_std_unop_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_std_unop_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_std_unop_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("(MR_Word) ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_std_unop_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_std_unop_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_std_unop_4_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_std_unop_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__binop_category_string_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module95)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_binop_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_binop_5_0,2,4,5,6,7,9,11,12)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_binop_5_0,13,14,15,16,19,20,21,22)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_binop_5_0,23,24,27,28,29,30,31,34)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_binop_5_0,35,36,37,38,39,40,41,42)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_binop_5_0,44,45,46,47,48,49,50)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_binop_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(backend_libs__c_util__binop_category_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_5_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_5_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_5_0_i34) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_5_0_i44) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_5_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_5_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_5_0_i19) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_binop_5_0_i27));
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_binop: compound_compare_binop", 41);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(strcmp(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i36);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i39);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0)", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("( (MR_Unsigned) ", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i46);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i48);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (MR_Unsigned) ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i49);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_binop_5_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_binop_5_0,50)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module96)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,2,5,6,7,8,9,10,13)
	MR_init_label7(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,11,18,19,20,22,23,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 162;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_prof_call_profile(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i11);
	}
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i11);
	}
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module97)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,2,5,6,7,8,9,10,11)
	MR_init_label1(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 163;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_set_prof_current_proc(", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module98)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_label_name_3_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_label_name_3_0,2)
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module99)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,2,5,6,7,8,9,10,11)
	MR_init_label8(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,12,13,14,15,16,17,19,21)
	MR_init_label3(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,22,23,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Integer) 164;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_record_allocation(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", \"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("\"\"", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_sv(1), 2), 0);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module100)
	MR_init_entry1(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0);
	MR_init_label8(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,27,3,30,19,20,22,24,25)
MR_BEGIN_CODE

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
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_tailcall_ent(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0);
MR_def_label(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module101)
	MR_init_entry1(ml_backend__mlds_to_c__write_lval_or_string_3_0);
	MR_init_label1(ml_backend__mlds_to_c__write_lval_or_string_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__write_lval_or_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__write_lval_or_string_3_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0);
MR_def_label(ml_backend__mlds_to_c__write_lval_or_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module102)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_init_args_9_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_args_9_0,38,29,3,9,10,11,12,13)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_init_args_9_0,14,15,16,17,18,19,20,21)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_init_args_9_0,22,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_init_args_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_args_9_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_args_9_0_i41);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_init_args: length mismatch", 38);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_args_9_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r1;
	MR_sv(8) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(9) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_hl_field(", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_tag_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__write_lval_or_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") = ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_boxed_rval_4_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_init_args_9_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_init_args_9_0_i38);
MR_def_label(ml_backend__mlds_to_c__mlds_output_init_args_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;
MR_decl_entry(libs__globals__io_get_gc_method_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module103)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,17,18,9,10,11,12,3,4)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,5,6,7,120,14,15,20,22)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,25,27,28,29,32,33,34,35)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,39,40,41,42,43,45,46,49)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,50,51,123,53,54,55,56,47)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,63,64,65,66,69,68,70,71)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,72,73,67,75,77,78,79,81)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,83,84,85,86,88,90,91,92)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,93,94,95,128,97,98,99,100)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,101,96,103,104,106,107,109,110)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,111,112,114,115)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i120));
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_GC_check();\n", 15);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i14) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i109) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i114) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i106));
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("delete_object not implemented", 29);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r1 = MR_ctfield(3, MR_tempr3, 1);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i22);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,19);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(3, MR_tempr2, 2);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("inline_target_code only works for language C", 44);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_mark_hp(", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i29);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i112);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 6);
	MR_sv(9) = MR_ctfield(3, MR_tempr1, 7);
	MR_sv(10) = MR_ctfield(3, MR_tempr1, 8);
	MR_sv(11) = MR_ctfield(3, MR_tempr1, 9);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i33);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i35);
	}
	MR_tag_alloc_heap(MR_sv(12), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(12), 0) = MR_sv(4);
	MR_np_call_localret_ent(libs__globals__io_get_gc_method_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i46);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(1,12,1);
	MR_sv(13) = (MR_Word) MR_string_const("base", 4);
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i39);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i40);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i41);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i42);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__io_get_gc_method_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i46);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i123);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i49);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_GC_check();\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i50);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__type_needs_forwarding_pointer_space_1_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i51);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i53);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r5 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_ctfield(0, MR_sv(2), 0);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i54);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* reserve space for GC forwarding pointer*/\n", 45);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i55);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i56);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_hp_alloc(1);\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i123);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_maybe_output_heap_profile_instr_7_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i63);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i64);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__write_lval_or_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i65);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i66);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i68);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_cast_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i69);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 0;
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i67);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_cast_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i70);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_mkword(", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i71);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_tag_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i72);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i73);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_string_const(")", 1);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i75);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_new_object(", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i77);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_new_object_atomic(", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i77);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i78);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i79);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i81);
	}
	MR_r1 = (MR_Integer) -1;
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i85);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(1, MR_sv(7), 0);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i83);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i84);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" * sizeof(MR_Word))", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i85);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i86);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i88);
	}
	MR_r1 = (MR_Word) MR_string_const("NULL", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i92);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(1, MR_sv(8), 0);
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i90);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_sv(6), 2), 0);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i91);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i92);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i93);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i94);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i95);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(12),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i97);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(2);
	MR_r7 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = (MR_Integer) 0;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i96);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(1, MR_sv(12), 0);
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i98);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i99);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i100);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i101);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i128);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_init_args_9_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i103);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i104);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i107);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("outline_foreign_proc is not used in C backend", 45);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i110);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_restore_hp(", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i111);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i112);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_c__this_file_0_0,
		ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0_i115);
MR_def_label(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("trail_ops not implemented", 25);
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module104)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_statement_5_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_statement_5_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_statement_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_statement_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_statement_5_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_statement_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_statement_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_statement_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_stmt_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldl2_6_2);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
MR_decl_entry(__Unify___ml_backend__mlds__mlds_context_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module105)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_stmt_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,5,6,7,220,9,11,221,13)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,14,16,18,201,204,205,206,203)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,209,210,211,212,213,214,111,112)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,113,114,115,123,124,125,116,127)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,135,138,139,219,3,21,22,23)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,24,25,29,28,31,32,34,234)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,36,37,35,40,43,26,27,46)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,47,48,45,53,54,52,55,56)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,57,58,59,61,62,65,64,67)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,68,63,70,74,75,76,77,78)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,80,81,82,85,86,87,90,91)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,89,93,96,99,101,102,104,105)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,106,143,144,145,147,148,149,245)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,151,154,153,158,159,160,161,162)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,163,165,166,168,169,173,172,180)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,181,182,183,184,185,186,187,171)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_stmt_6_0,189,190,191,192,193,194,195,196)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_stmt_6_0,197,198,199,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_stmt_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i201) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i111) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i219));
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i9);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statements_5_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_ctfield(0, MR_ctfield(0, MR_sv(2), 0), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,20);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i13);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defns_6_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_decls_5_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i221);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i220);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i166);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i203);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i204);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("while (", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i205);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i206);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i125);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i209);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("do\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i210);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i211);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i212);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("while (", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i213);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i214);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i112);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("if (", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i113);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i114);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i115);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i116);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(5);
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i116);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i116);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(4) = MR_ctfield(1, MR_sv(6), 0);
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i123);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i124);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("else\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i125);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i127);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(5);
	MR_tempr1 = MR_ctfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i127);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 2);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i127);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i135);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(1, MR_sv(6), 0);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i138);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("else\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i139);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r3, 0),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i158) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i143) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i96) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i74) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i21) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i147) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i168) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i85) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i3));
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_atomic_stmt_6_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(3, MR_tempr1, 5);
	MR_sv(8) = MR_ctfield(3, MR_tempr1, 6);
	MR_tempr2 = MR_r2;
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_maybe_output_call_profile_instr_6_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_sv(10), 1);
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i29);
	}
	MR_r2 = MR_ctfield(0, MR_sv(2), 1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i28);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i27);
	}
	MR_r2 = MR_ctfield(0, MR_sv(2), 1);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i31);
	}
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i32);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const("return ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i34);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i36);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i35);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i37);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i234);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(11),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i40);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i43);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i54);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i46);
	}
	MR_r1 = MR_sv(4);
	MR_sv(2) = MR_r3;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i45);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i47);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i48);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i57);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i52);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i53);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i54);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i58);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i55);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i56);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_bracketed_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i58);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i59);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,21);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i61);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i62);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i65);
	}
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i64);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i63);
	}
	MR_r1 = MR_sv(3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i67);
	}
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i63);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i68);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("return;\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i70);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_maybe_output_time_profile_instr_5_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i70);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i166);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i75);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch (", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i76);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i77);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") {\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i78);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i80);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i81);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("default: /*NOTREACHED*/ MR_assert(0);\n", 38);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i82);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i166);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i86);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 279;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i87);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i89);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_builtin_longjmp(", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i90);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i91);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", 1)", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i245);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goto ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i93);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i245);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r3, 1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i104);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i101);
	}
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i99);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("break;\n", 7);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i102);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("continue;\n", 10);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i105);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goto ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i106);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_label_name_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i245);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i144);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_label_name_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i145);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":;\n", 3);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i148);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("return", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i149);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i151);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i153);
	}
	MR_sv(1) = MR_ctfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Integer) 32;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i154);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i245);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i245);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i159);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch (", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i160);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i161);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") {\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i162);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i163);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_switch_case_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i165);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i166);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Integer) 279;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i169);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i171);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_context_0_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i173);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i172);
	}
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i172);
	}
	MR_r3 = MR_ctfield(2, MR_sv(7), 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i172);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_stmt_6_0_i180);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i181);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("if (MR_builtin_setjmp(", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i182);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i183);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") == 0)\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i184);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i185);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i186);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("else\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i187);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i189);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i190);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("goto ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i191);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i192);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_done;\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i193);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i194);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i195);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i196);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i197);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i198);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_stmt_6_0_i199);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_done:\t;\n", 9);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_stmt_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module106)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_switch_default_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,23,40,4,5,6,7,8,9)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,10,11,12,13,14,15,16,17)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,18,19,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_switch_default_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i40);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr3),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i41);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("default: /*NOTREACHED*/ MR_assert(0);\n", 38);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r4, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("default:\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_stmt_6_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_switch_default_6_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("break;\n", 7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_default_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module107)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0);
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0,4,34,12,13,16,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0_i34);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0_i35);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(2, MR_r3, 0);
	MR_r1 = MR_r4;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_gc_statement_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#if 0 /* GC initialiser */\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_gc_statement_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_gc_statement_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#if 0 /* GC trace code */\n", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_gc_statement_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,6,4);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0,
		ml_backend__mlds_to_c__mlds_output_gc_statement_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#endif\n", 7);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_append_class_qualifier_5_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module108)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_class_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_class_6_0,4,5,3,2,7,9,10,11)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_class_6_0,14,16,18,19,13,21,22,23)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_class_6_0,12,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_class_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_class_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_append_class_qualifier_5_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	MR_r3 = MR_ctfield(0, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("mlds_output_enum_constants", 26);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_make_base_class_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" {\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_class_6_0_i13);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__append_3_1,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,22);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_class_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,23);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_defns_6_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_class_6_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_class_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_defns_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module109)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,36,41,15,42,18,19,21,22)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,43,4,7,6,10,11,12,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i40) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i42) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i43));
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(2, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,21);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i36);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i6);
	}
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,20);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i36);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_initializer_body_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module110)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_data_defn_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,3,4,2,13,14,15,16,25)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,21,18,31,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_data_defn_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_ctfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(3)),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i25) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i21) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i18));
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i17);
	}
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(3), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i18);
	}
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i17);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i31);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0,
		ml_backend__mlds_to_c__mlds_output_data_defn_5_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,17)
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

MR_decl_entry(fn__ml_backend__mlds__mlds_get_func_signature_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module111)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_7_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_func_7_0,2,4,6,7,8,9,10,11)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_func_7_0,12,13,30,15,16,17,18,19)
	MR_init_label6(ml_backend__mlds_to_c__mlds_output_func_7_0,20,21,22,24,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_func_decl_6_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_7_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = (MR_Integer) 163;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_7_0_i15);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_func_signature_1_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_set_prof_current_proc(", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i30);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_4_0,
		ml_backend__mlds_to_c__mlds_output_func_7_0_i27);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_7_0,27)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module112)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_defn_body_6_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_defn_body_6_0,6,3,8,35,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_defn_body_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_body_6_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_body_6_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_data_defn_5_0,
		ml_backend__mlds_to_c__mlds_output_defn_body_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_body_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_gc_statement_6_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_body_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(2, MR_r4, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_class_6_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_body_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_r7 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_body_6_0_i35);
	}
	MR_tempr1 = MR_tempr2;
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	MR_r5 = MR_ctfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_7_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_body_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 2);
	MR_r1 = MR_ctfield(1, MR_r7, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,
		ml_backend__mlds_to_c__mlds_output_defn_body_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_body_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_func_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module113)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_defn_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_defn_6_0,5,3,7,2,8,9,10,11)
	MR_init_label2(ml_backend__mlds_to_c__mlds_output_defn_6_0,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_defn_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_6_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_6_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tempr1;
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_defn_6_0_i2);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_r6;
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_defn_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_r6;
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_defn_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_defn_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_defn_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_defn_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_defn_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_defn_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_decl_flags_6_0,
		ml_backend__mlds_to_c__mlds_output_defn_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_defn_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_defn_body_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module114)
	MR_init_entry1(ml_backend__mlds_to_c__is_static_member_1_0);
	MR_init_label3(ml_backend__mlds_to_c__is_static_member_1_0,5,2,1)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module115)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_make_base_class_5_0);
	MR_init_label2(ml_backend__mlds_to_c__mlds_make_base_class_5_0,4,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_make_base_class_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("base_%d", 7);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ml_backend__mlds_to_c__mlds_make_base_class_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_make_base_class_5_0,4)
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
		ml_backend__mlds_to_c__mlds_make_base_class_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_make_base_class_5_0,8)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module116)
	MR_init_entry1(ml_backend__mlds_to_c__is_enum_const_1_0);
	MR_init_label1(ml_backend__mlds_to_c__is_enum_const_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__is_enum_const_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module117)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,4,5,6,7,8,10,19,15)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,12,25,3,49)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r3, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(4)),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i19) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i15) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i12));
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i49);
	}
	MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(4), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i12);
	}
	if (MR_INT_NE((MR_Integer) 0,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i49);
	}
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_enum_constant_5_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_initializer_body_4_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_enum_constant: constant is not data", 47);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_enum_constant_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module118)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,2,5,6,7,8,9,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 113;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("/* pred_id: ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", proc_id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_pred_proc_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module119)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0);
	MR_init_label1(ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0));
	MR_np_tailcall_ent(do_call_closure_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module120)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_param_8_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_param_8_0,3,4,5,6,7,8,9,10)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_param_8_0,11,14,21,22,23,26,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_param_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr2 = MR_r6;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_r5;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_param_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ml_backend__mlds_to_c__mlds_output_param_8_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_param_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__ml_backend__mlds_to_c__mlds_output_param_8_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_param_8_0_i21);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_param_8_0_i12);
	}
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#if 0 /* GC initialiser */\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#if 0 /* GC trace code */\n", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,6,4);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_statement_5_0,
		ml_backend__mlds_to_c__mlds_output_param_8_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("#endif\n", 7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_param_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module121)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_param_type_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_param_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module122)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,2,3,4,5,6,7,8,9)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("case ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": goto ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_computed_goto_label_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module123)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_switch_case_6_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,3,4,5,6,7,8,9,10)
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_switch_case_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_case_cond_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_ctfield(0, MR_r4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_r4, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_stmt_6_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_switch_case_6_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_switch_case_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("break;\n", 7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module124)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_case_cond_5_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,4,5,6,7,8,9,10,11)
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,3,14,15,16,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_case_cond_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i3);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i7);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i8);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("case ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ... ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r3, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_indent_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("case ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_case_cond_5_0_i20);
MR_def_label(ml_backend__mlds_to_c__mlds_output_case_cond_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(backend_libs__c_util__reset_line_num_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module125)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,52,16,21,22,23,24,25,26)
	MR_init_label7(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,48,6,53,54,12,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i52) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i53) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i54));
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i16);
	}
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i21);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i22);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i23);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i24);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i25);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i26);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i48);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__c_util__reset_line_num_2_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(2, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_rval_3_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_lval_3_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_target_code_component_4_0_i4);
MR_def_label(ml_backend__mlds_to_c__mlds_output_target_code_component_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module126)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__decl_or_defn_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module127)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__decl_or_defn_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module128)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__func_info_0_0);
	MR_init_label3(__Unify___ml_backend__mlds_to_c__func_info_0_0,4,8,1)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module129)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__func_info_0_0);
	MR_init_label4(__Compare___ml_backend__mlds_to_c__func_info_0_0,3,2,5,21)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module130)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__indent_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module131)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__indent_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module132)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0);
	MR_init_label3(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0,10,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__mlds_to_c__initializer_array_size_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module133)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0);
	MR_init_label4(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0_i7);
	}
MR_def_label(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_c__initializer_array_size_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module134)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__locn_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module135)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__locn_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module136)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0);
	MR_init_label3(__Unify___ml_backend__mlds_to_c__lval_or_string_0_0,14,5,1)
MR_BEGIN_CODE

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
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
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
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_ctfield(1, MR_sv(2), 0);
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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module137)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0);
	MR_init_label5(__Compare___ml_backend__mlds_to_c__lval_or_string_0_0,3,2,7,5,10)
MR_BEGIN_CODE

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
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
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
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module138)
	MR_init_entry1(__Unify___ml_backend__mlds_to_c__output_type_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module139)
	MR_init_entry1(__Compare___ml_backend__mlds_to_c__output_type_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module140)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_c_hdr_decls__783__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_c_hdr_decls__783__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,5);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module141)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn__885__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn__885__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module142)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_func_name__901__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_func_name__901__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module143)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__994__1_1_0);
	MR_init_label1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__994__1_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__994__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__994__1_1_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1));
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__994__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module144)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__998__1_1_0);
	MR_init_label1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__998__1_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__998__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__998__1_1_0_i1);
	}
	MR_tempr2 = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__998__1_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 1);
	MR_r1 = (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1));
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_pragma_export_defn_body__998__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module145)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_exported_enum_constant__1257__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_exported_enum_constant__1257__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module146)
	MR_init_entry1(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_rval_const__3844__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__IntroducedFrom__pred__mlds_output_rval_const__3844__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module147)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0);
	MR_init_label5(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_fully_qualified__ho2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module148)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0,2,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,24);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho3_4_0,5)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module149)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0,2,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,25);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho4_4_0,5)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module150)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0,2,3,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0_i3);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,26);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0_i5);
MR_def_label(ml_backend__mlds_to_c__mlds_output_return_list__ho7_4_0,5)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module151)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,3,6,11,12,13,14,15,16)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,17,18,19,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r7 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_r5, 0);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_type_prefix_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_r5, 0);
	MR_sv(6) = MR_r7;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,18,0);
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i18);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i19);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0_i20);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_type_suffix_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho9_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module152)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0);
	MR_init_label3(ml_backend__mlds_to_c__mlds_output_return_list__ho13_4_0,2,3,5)
MR_BEGIN_CODE

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
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,29);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module153)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0);
	MR_init_label8(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,3,6,9,10,11,12,13,14)
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	MR_r11 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_tempr1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r11;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_ctfield(0, MR_r7, 0);
	MR_sv(8) = MR_tempr2;
	MR_sv(10) = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_prefix_suffix_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r8;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r9;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_ctfield(0, MR_r7, 0);
	MR_sv(8) = MR_r11;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n#error multiple return values\n", 31);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i9);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t{", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i11);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i12);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i13);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i14);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i15);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__mlds_output_fully_qualified_name_3_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i16);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_ctfield(0, MR_sv(2), 0);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0,
		ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i17);
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(8);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0_i18);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ml_backend__mlds_to_c__mlds_output_pragma_export_type_4_0);
	}
MR_def_label(ml_backend__mlds_to_c__mlds_output_func_decl_ho__ho14_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module154)
	MR_init_entry1(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0);
	MR_init_label4(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0,2,4,6,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_i2);
MR_def_label(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_i6);
MR_def_label(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(19,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_param_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(0,3,30);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_TAG_COMMON(0,3,31);
	MR_tfield(0, MR_tempr1, 5) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_c__mlds_output_params__ho18_8_0_i10);
MR_def_label(ml_backend__mlds_to_c__mlds_output_params__ho18_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__file_names__module_name_to_search_file_name_5_0);
MR_decl_entry(mdbcomp__prim_data__strip_outermost_qualifier_3_0);
MR_decl_entry(parse_tree__file_names__mercury_std_library_module_name_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module155)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0);
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,4,3,5,7,6,9,11,8)
	MR_init_label1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".dll", 4);
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i7);
	}
	MR_sv(2) = (MR_Word) MR_string_const(".mih", 4);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const(".mh", 3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(mdbcomp__prim_data__strip_outermost_qualifier_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i8);
	}
	if ((strcmp(MR_string_const("mercury", 7), (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i8);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#include \"", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module156)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0);
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0,6,7,8,9,10,11,3,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r2, 1);
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i33);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_r1 = MR_ctfield(0, MR_tempr3, 3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("foreign code other than C", 25);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_49_93_95_48_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module157)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_49_93_95_48_4_0);
	MR_init_label2(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_49_93_95_48_4_0,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_49_93_95_48_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_49_93_95_48_4_0);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("foreign code other than C", 25);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module158)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0);
	MR_init_label6(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0,4,5,6,7,8,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_49_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_c.m", 11);
	MR_r2 = (MR_Word) MR_string_const("foreign code other than C", 25);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_c_module159)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0);
	MR_init_label7(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0,4,5,6,7,8,10,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0_i25);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 3);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,20,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,32);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_0);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_49_93_95_48_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module160)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_108_97_115_115_95_100_101_99_108_95_95_91_49_93_95_48_5_0,4,5,3,7,8)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_c_module161)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0);
	MR_init_label4(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0,2,4,6,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(19,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_c__mlds_output_param_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 5;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_112_97_114_97_109_115_95_95_104_111_49_54_95_95_91_49_44_32_50_93_95_48_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_char_3_0);
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
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_output_type_0,
		ml_backend__mlds_to_c__output_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_lval_or_string_0,
		ml_backend__mlds_to_c__lval_or_string_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_locn_0,
		ml_backend__mlds_to_c__locn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_initializer_array_size_0,
		ml_backend__mlds_to_c__initializer_array_size_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_indent_0,
		ml_backend__mlds_to_c__indent_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_func_info_0,
		ml_backend__mlds_to_c__func_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_c__type_ctor_info_decl_or_defn_0,
		ml_backend__mlds_to_c__decl_or_defn_0_0);
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
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_output_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_lval_or_string_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_locn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_initializer_array_size_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_indent_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_func_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_c__type_ctor_info_decl_or_defn_0);
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
