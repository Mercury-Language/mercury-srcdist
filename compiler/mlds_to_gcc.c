/*
** Automatically generated from `mlds_to_gcc.m'
** by the Mercury compiler,
** version rotd-2011-09-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mlds_to_gcc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "mlds_to_gcc.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "mlds_to_gcc.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "mlds_to_gcc.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "mlds_to_gcc.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "mlds_to_gcc.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "mlds_to_gcc.c"
#line 49 "mlds_to_gcc.c"
#include "mlds_to_gcc.mh"

#line 52 "mlds_to_gcc.c"
#line 53 "mlds_to_gcc.c"
#ifndef MLDS_TO_GCC_DECL_GUARD
#define MLDS_TO_GCC_DECL_GUARD

#line 57 "mlds_to_gcc.c"
#line 58 "mlds_to_gcc.c"

#endif
#line 61 "mlds_to_gcc.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mlds_to_gcc__type_ctor_info_defn_info_0,
	mercury_data_mlds_to_gcc__type_ctor_info_field_table_0,
	mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0,
	mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_table_0,
	mercury_data_mlds_to_gcc__type_ctor_info_global_info_0,
	mercury_data_mlds_to_gcc__type_ctor_info_label_table_0,
	mercury_data_mlds_to_gcc__type_ctor_info_symbol_table_0;
MR_decl_label1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0, 12)
MR_decl_label1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_99_111_110_115_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0, 12)
MR_decl_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0, 2,4,5,7,9,3,12,14,13,16)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0, 18,17,20,22,21,24,25,26)
MR_decl_label1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_117_110_99_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0, 12)
MR_decl_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0, 109,3,111,5,8,10,14,16,117,12)
MR_decl_label4(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0, 21,119,25,27)
MR_decl_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 4,5,3,11,10,9,16,18,19,20)
MR_decl_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 22,23,24,25,21,26,27,8,29,31)
MR_decl_label6(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 33,35,37,39,41,130)
MR_decl_label7(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0, 37,26,3,17,18,19,40)
MR_decl_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 3,6,7,251,5,12,13,14,16,17)
MR_decl_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 15,18,252,20,26,23,10,31,34,35)
MR_decl_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 30,45,256,47,43,52,53,54,57,51)
MR_decl_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 258,60,259,67,65,63,73,74,78,79)
MR_decl_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 80,81,72,84,87,88,89,90,91,92)
MR_decl_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 93,94,263,83,98,99,102,101,104,264)
MR_decl_label1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 97)
MR_decl_label10(mlds_to_gcc__add_func_decl_flags_4_0, 2,29,4,5,7,9,3,12,15,17)
MR_decl_label8(mlds_to_gcc__add_func_decl_flags_4_0, 16,19,21,20,23,25,24,27)
MR_decl_label10(mlds_to_gcc__add_var_decl_flags_4_0, 2,4,28,5,6,8,3,11,13,12)
MR_decl_label7(mlds_to_gcc__add_var_decl_flags_4_0, 15,17,16,19,21,23,24)
MR_decl_label3(mlds_to_gcc__build_args_5_0, 16,5,6)
MR_decl_label10(mlds_to_gcc__build_array_initializer_7_0, 40,5,8,9,7,11,14,15,16,13)
MR_decl_label2(mlds_to_gcc__build_array_initializer_7_0, 6,18)
MR_decl_label2(mlds_to_gcc__build_call_6_0, 2,3)
MR_decl_label2(mlds_to_gcc__build_cast_rval_6_0, 2,3)
MR_decl_label10(mlds_to_gcc__build_code_addr_5_0, 3,5,10,9,13,12,8,15,16,17)
MR_decl_label2(mlds_to_gcc__build_code_addr_5_0, 18,19)
MR_decl_label10(mlds_to_gcc__build_du_exist_info_type_3_0, 2,5,6,7,8,9,10,11,12,13)
MR_decl_label10(mlds_to_gcc__build_du_exist_info_type_3_0, 14,16,18,23,24,25,26,27,28,29)
MR_decl_label3(mlds_to_gcc__build_du_exist_info_type_3_0, 30,31,32)
MR_decl_label8(mlds_to_gcc__build_du_exist_locn_type_3_0, 2,5,6,7,8,9,10,11)
MR_decl_label3(mlds_to_gcc__build_dummy_param_decls_4_0, 16,5,6)
MR_decl_label10(mlds_to_gcc__build_field_defn_6_0, 5,6,10,11,7,13,17,18,4,19)
MR_decl_label9(mlds_to_gcc__build_field_defns_8_0, 4,3,5,9,12,6,14,15,16)
MR_decl_label3(mlds_to_gcc__build_fields_4_0, 16,5,6)
MR_decl_label6(mlds_to_gcc__build_initializer_6_0, 4,3,7,10,11,9)
MR_decl_label2(mlds_to_gcc__build_label_table_4_0, 3,5)
MR_decl_label10(mlds_to_gcc__build_local_data_defn_8_0, 2,3,4,8,9,14,15,13,17,20)
MR_decl_label10(mlds_to_gcc__build_local_data_defn_8_0, 21,22,19,12,24,25,26,27,28,11)
MR_decl_label7(mlds_to_gcc__build_local_data_defn_8_0, 30,31,32,45,33,35,36)
MR_decl_label7(mlds_to_gcc__build_local_defns_6_0, 34,3,7,6,9,5,12)
MR_decl_label10(mlds_to_gcc__build_lval_5_0, 6,9,10,11,12,13,8,15,16,17)
MR_decl_label10(mlds_to_gcc__build_lval_5_0, 18,19,20,21,22,23,25,27,5,31)
MR_decl_label10(mlds_to_gcc__build_lval_5_0, 29,35,36,39,40,41,42,43,38,45)
MR_decl_label10(mlds_to_gcc__build_lval_5_0, 46,47,48,49,50,51,52,53,54,55)
MR_decl_label10(mlds_to_gcc__build_lval_5_0, 56,57,58,59,3,197,62,70,68,75)
MR_decl_label10(mlds_to_gcc__build_lval_5_0, 73,79,80,81,83,78,87,88,89,92)
MR_decl_label6(mlds_to_gcc__build_lval_5_0, 93,201,86,96,97,65)
MR_decl_label1(mlds_to_gcc__build_param_types_6_0, 2)
MR_decl_label4(mlds_to_gcc__build_param_types_7_0, 18,4,5,7)
MR_decl_label10(mlds_to_gcc__build_param_types_and_decls_8_0, 4,5,7,3,8,9,13,14,17,10)
MR_decl_label3(mlds_to_gcc__build_param_types_and_decls_8_0, 19,20,21)
MR_decl_label10(mlds_to_gcc__build_pseudo_type_info_type_4_0, 3,6,7,8,9,10,11,13,14,15)
MR_decl_label10(mlds_to_gcc__build_pseudo_type_info_type_4_0, 16,17,57,5,21,22,23,24,25,26)
MR_decl_label2(mlds_to_gcc__build_pseudo_type_info_type_4_0, 28,20)
MR_decl_label10(mlds_to_gcc__build_rtti_type_5_0, 5,7,8,10,3,12,14,15,19,17)
MR_decl_label10(mlds_to_gcc__build_rtti_type_name_4_0, 403,4,5,6,7,8,9,10,12,14)
MR_decl_label10(mlds_to_gcc__build_rtti_type_name_4_0, 16,18,20,22,3,38,41,44,47,40)
MR_decl_label10(mlds_to_gcc__build_rtti_type_name_4_0, 51,54,57,60,56,64,66,68,70,72)
MR_decl_label10(mlds_to_gcc__build_rtti_type_name_4_0, 74,76,78,80,82,84,86,89,92,93)
MR_decl_label10(mlds_to_gcc__build_rtti_type_name_4_0, 95,97,88,106,109,112,105,116,118,120)
MR_decl_label10(mlds_to_gcc__build_rtti_type_name_4_0, 123,126,129,122,133,136,139,142,145,148)
MR_decl_label10(mlds_to_gcc__build_rtti_type_name_4_0, 135,153,154,155,157,159,161,163,165,167)
MR_decl_label10(mlds_to_gcc__build_rtti_type_name_4_0, 169,173,175,177,152,194,193,198,200,203)
MR_decl_label2(mlds_to_gcc__build_rtti_type_name_4_0, 202,207)
MR_decl_label10(mlds_to_gcc__build_rtti_type_tc_name_4_0, 3,5,7,9,12,14,16,18,20,93)
MR_decl_label2(mlds_to_gcc__build_rtti_type_tc_name_4_0, 22,25)
MR_decl_label10(mlds_to_gcc__build_rval_5_0, 3,5,7,62,9,13,14,15,16,12)
MR_decl_label3(mlds_to_gcc__build_rval_5_0, 18,20,22)
MR_decl_label10(mlds_to_gcc__build_rval_const_5_0, 3,5,8,12,9,10,14,15,16,18)
MR_decl_label10(mlds_to_gcc__build_rval_const_5_0, 19,20,102,7,23,25,27,29,31,33)
MR_decl_label3(mlds_to_gcc__build_rval_const_5_0, 35,37,39)
MR_decl_label1(mlds_to_gcc__build_sized_array_type_5_0, 3)
MR_decl_label10(mlds_to_gcc__build_std_binop_7_0, 5,7,9,11,13,4,17,20,21,22)
MR_decl_label10(mlds_to_gcc__build_std_binop_7_0, 3,27,25,29,30,33,34,35,31,36)
MR_decl_label1(mlds_to_gcc__build_std_unop_6_0, 2)
MR_decl_label10(mlds_to_gcc__build_struct_initializer_6_0, 42,5,6,7,10,11,9,13,16,17)
MR_decl_label4(mlds_to_gcc__build_struct_initializer_6_0, 18,15,8,20)
MR_decl_label2(mlds_to_gcc__build_struct_type_5_0, 2,3)
MR_decl_label10(mlds_to_gcc__build_tc_constr_struct_type_4_0, 2,3,4,5,6,7,8,10,11,12)
MR_decl_label3(mlds_to_gcc__build_tc_constr_struct_type_4_0, 13,14,15)
MR_decl_label10(mlds_to_gcc__build_tc_constr_type_3_0, 2,3,4,5,6,7,8,10,11,12)
MR_decl_label4(mlds_to_gcc__build_tc_constr_type_3_0, 13,14,15,16)
MR_decl_label10(mlds_to_gcc__build_tc_decl_type_3_0, 2,5,6,7,8,9,10,11,12,13)
MR_decl_label10(mlds_to_gcc__build_tc_decl_type_3_0, 14,15,17,19,24,25,26,27,28,29)
MR_decl_label4(mlds_to_gcc__build_tc_decl_type_3_0, 30,31,32,33)
MR_decl_label10(mlds_to_gcc__build_tc_id_method_type_3_0, 2,5,8,9,10,11,12,13,14,15)
MR_decl_label1(mlds_to_gcc__build_tc_id_method_type_3_0, 16)
MR_decl_label10(mlds_to_gcc__build_tc_id_type_3_0, 2,3,4,7,10,11,12,13,14,15)
MR_decl_label10(mlds_to_gcc__build_tc_id_type_3_0, 16,17,18,19,20,21,23,25,27,29)
MR_decl_label8(mlds_to_gcc__build_tc_id_type_3_0, 38,39,40,41,42,43,44,45)
MR_decl_label10(mlds_to_gcc__build_tc_instance_type_3_0, 2,3,4,5,6,7,9,11,13,21)
MR_decl_label10(mlds_to_gcc__build_tc_instance_type_3_0, 22,23,24,25,26,27,28,29,30,31)
MR_decl_label3(mlds_to_gcc__build_tc_instance_type_3_0, 32,33,34)
MR_decl_label10(mlds_to_gcc__build_type_6_0, 3,5,260,16,14,19,20,22,23,24)
MR_decl_label10(mlds_to_gcc__build_type_6_0, 25,26,8,29,32,35,36,34,38,39)
MR_decl_label10(mlds_to_gcc__build_type_6_0, 40,31,43,46,49,48,52,51,47,54)
MR_decl_label10(mlds_to_gcc__build_type_6_0, 45,57,59,61,64,63,66,68,70,72)
MR_decl_label6(mlds_to_gcc__build_type_6_0, 74,253,76,79,81,83)
MR_decl_label10(mlds_to_gcc__build_type_info_type_4_0, 54,6,7,8,9,10,11,13,14,5)
MR_decl_label10(mlds_to_gcc__build_type_info_type_4_0, 20,21,22,23,24,25,27,31,32,33)
MR_decl_label5(mlds_to_gcc__build_type_info_type_4_0, 34,35,36,37,53)
MR_decl_label10(mlds_to_gcc__build_unop_6_0, 6,10,4,15,21,13,3,31,33,37)
MR_decl_label5(mlds_to_gcc__build_unop_6_0, 41,42,43,147,35)
MR_decl_label10(mlds_to_gcc__build_unop_expr_6_0, 4,3,8,9,10,11,7,14,15,13)
MR_decl_label10(mlds_to_gcc__build_unop_expr_6_0, 18,19,17,23,25,26,27,28,29,30)
MR_decl_label10(mlds_to_gcc__build_unop_expr_6_0, 24,35,36,37,38,39,34,42,43,44)
MR_decl_label3(mlds_to_gcc__build_unop_expr_6_0, 45,41,47)
MR_decl_label10(mlds_to_gcc__compile_to_asm_5_0, 3,4,6,7,9,10,16,17,18,19)
MR_decl_label7(mlds_to_gcc__compile_to_asm_5_0, 12,20,22,24,25,26,27)
MR_decl_label10(mlds_to_gcc__convert_binary_op_3_0, 3,6,9,13,12,16,15,18,22,21)
MR_decl_label10(mlds_to_gcc__convert_binary_op_3_0, 25,24,28,27,31,30,34,33,36,40)
MR_decl_label10(mlds_to_gcc__convert_binary_op_3_0, 39,42,46,45,48,51,55,54,58,57)
MR_decl_label10(mlds_to_gcc__convert_binary_op_3_0, 61,60,64,63,66,69,72,76,75,79)
MR_decl_label10(mlds_to_gcc__convert_binary_op_3_0, 78,82,81,84,88,89,87,90,92,94)
MR_decl_label9(mlds_to_gcc__convert_binary_op_3_0, 96,98,100,102,104,106,108,110,112)
MR_decl_label7(mlds_to_gcc__gen_case_4_0, 2,4,5,6,7,8,9)
MR_decl_label6(mlds_to_gcc__gen_case_label_4_0, 4,5,3,7,8,9)
MR_decl_label10(mlds_to_gcc__gen_class_7_0, 4,5,2,7,9,8,12,15,13,18)
MR_decl_label8(mlds_to_gcc__gen_class_7_0, 19,20,24,25,26,27,30,32)
MR_decl_label10(mlds_to_gcc__gen_default_4_0, 25,4,7,8,9,10,11,12,26,28)
MR_decl_label10(mlds_to_gcc__gen_defn_body_8_0, 68,7,8,10,11,12,15,16,14,18)
MR_decl_label10(mlds_to_gcc__gen_defn_body_8_0, 21,22,23,20,13,25,26,27,28,5)
MR_decl_label1(mlds_to_gcc__gen_defn_body_8_0, 31)
MR_decl_label3(mlds_to_gcc__gen_defns_6_0, 10,3,4)
MR_decl_label10(mlds_to_gcc__gen_func_9_0, 52,4,6,10,9,5,12,13,14,15)
MR_decl_label10(mlds_to_gcc__gen_func_9_0, 16,18,19,20,21,22,23,24,25,26)
MR_decl_label3(mlds_to_gcc__gen_func_9_0, 27,28,29)
MR_decl_label10(mlds_to_gcc__gen_init_fn_defns_5_0, 2,3,5,4,10,15,16,17,18,19)
MR_decl_label10(mlds_to_gcc__gen_init_fn_defns_5_0, 22,23,26,28,30,31,32,33,34,35)
MR_decl_label1(mlds_to_gcc__gen_init_fn_defns_5_0, 36)
MR_decl_label4(mlds_to_gcc__gen_statement_4_0, 2,3,4,5)
MR_decl_label10(mlds_to_gcc__get_func_name_3_0, 4,5,7,11,12,13,14,15,16,19)
MR_decl_label2(mlds_to_gcc__get_func_name_3_0, 18,2)
MR_decl_label10(mlds_to_gcc__get_pred_label_name_2_0, 4,5,6,7,8,10,14,3,22,23)
MR_decl_label8(mlds_to_gcc__get_pred_label_name_2_0, 24,25,26,27,28,31,32,2)
MR_decl_label10(mlds_to_gcc__get_qualified_func_name_4_0, 4,5,7,11,12,13,14,15,16,19)
MR_decl_label10(mlds_to_gcc__get_qualified_func_name_4_0, 18,2,21,27,25,29,23,38,39,40)
MR_decl_label1(mlds_to_gcc__get_qualified_func_name_4_0, 41)
MR_decl_label3(mlds_to_gcc__is_static_member_1_0, 5,2,1)
MR_decl_label8(mlds_to_gcc__maybe_add_module_qualifier_3_0, 7,5,9,2,3,18,19,20)
MR_decl_label3(mlds_to_gcc__mlds_make_base_class_5_0, 2,3,6)
MR_decl_label10(mlds_to_gcc__rtti_enum_const_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(mlds_to_gcc__rtti_enum_const_2_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(mlds_to_gcc__rtti_enum_const_2_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(mlds_to_gcc__rtti_enum_const_2_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label10(mlds_to_gcc__rtti_enum_const_2_0, 43,44,45,46,47,48,49,50,51,52)
MR_decl_label2(mlds_to_gcc__rtti_enum_const_2_0, 53,1)
MR_decl_label10(mlds_to_gcc__run_gcc_backend_6_0, 2,3,5,6,7,8,10,9,11,13)
MR_decl_label10(mlds_to_gcc__run_gcc_backend_6_0, 12,14,16,15,17,19,20,30,31,32)
MR_decl_label6(mlds_to_gcc__run_gcc_backend_6_0, 33,34,35,36,37,40)
MR_decl_label1(mlds_to_gcc__statement_contains_label_2_0, 1)
MR_decl_label10(fn__mlds_to_gcc__build_data_name_1_0, 127,3,9,14,15,8,6,34,36,37)
MR_decl_label5(fn__mlds_to_gcc__build_data_name_1_0, 38,33,40,42,44)
MR_decl_label7(fn__mlds_to_gcc__build_data_var_name_2_0, 2,6,3,4,8,9,10)
MR_decl_label10(fn__mlds_to_gcc__build_qualified_name_1_0, 4,3,75,9,10,12,16,17,18,19)
MR_decl_label10(fn__mlds_to_gcc__build_qualified_name_1_0, 20,21,23,7,6,27,28,29,30,73)
MR_decl_label3(fn__mlds_to_gcc__get_class_type_name_1_0, 4,3,2)
MR_decl_label1(fn__mlds_to_gcc__make_public_1_0, 2)
MR_decl_label5(__Unify___mlds_to_gcc__defn_info_0_0, 4,7,9,13,1)
MR_decl_label3(__Unify___mlds_to_gcc__gcc_type_info_0_0, 4,9,1)
MR_decl_label4(__Unify___mlds_to_gcc__global_info_0_0, 5,7,11,1)
MR_decl_label6(__Compare___mlds_to_gcc__defn_info_0_0, 3,2,5,9,14,50)
MR_decl_label4(__Compare___mlds_to_gcc__gcc_type_info_0_0, 3,2,5,28)
MR_decl_label5(__Compare___mlds_to_gcc__global_info_0_0, 3,2,6,11,40)
MR_def_extern_entry(mlds_to_gcc__run_gcc_backend_6_0)
MR_decl_static(mlds_to_gcc__add_var_decl_flags_4_0)
MR_decl_static(fn__mlds_to_gcc__MR_Box_0_0)
MR_decl_static(fn__mlds_to_gcc__MR_Integer_0_0)
MR_decl_static(fn__mlds_to_gcc__MR_Word_0_0)
MR_decl_static(mlds_to_gcc__build_sized_array_type_5_0)
MR_decl_static(mlds_to_gcc__build_fields_4_0)
MR_decl_static(mlds_to_gcc__build_struct_type_5_0)
MR_decl_static(fn__mlds_to_gcc__MR_TypeInfo_0_0)
MR_decl_static(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0)
MR_decl_static(fn__mlds_to_gcc__MR_int_least16_t_0_0)
MR_decl_static(mlds_to_gcc__build_du_exist_locn_type_3_0)
MR_decl_static(fn__mlds_to_gcc__MR_int_least8_t_0_0)
MR_decl_static(mlds_to_gcc__build_tc_constr_struct_type_4_0)
MR_decl_static(mlds_to_gcc__build_tc_constr_type_3_0)
MR_decl_static(mlds_to_gcc__build_tc_decl_type_3_0)
MR_decl_static(mlds_to_gcc__build_du_exist_info_type_3_0)
MR_decl_static(fn__mlds_to_gcc__MR_ConstString_0_0)
MR_decl_static(fn__mlds_to_gcc__MR_bool_0_0)
MR_decl_static(fn__mlds_to_gcc__MR_ProcAddr_0_0)
MR_decl_static(fn__mlds_to_gcc__MR_Sectag_Locn_0_0)
MR_decl_static(fn__mlds_to_gcc__MR_int_least32_t_0_0)
MR_decl_static(mlds_to_gcc__build_rtti_type_name_4_0)
MR_decl_static(mlds_to_gcc__build_type_info_type_4_0)
MR_decl_static(mlds_to_gcc__build_pseudo_type_info_type_4_0)
MR_decl_static(mlds_to_gcc__build_tc_id_method_type_3_0)
MR_decl_static(mlds_to_gcc__build_tc_id_type_3_0)
MR_decl_static(mlds_to_gcc__build_tc_instance_type_3_0)
MR_decl_static(mlds_to_gcc__build_rtti_type_tc_name_4_0)
MR_decl_static(mlds_to_gcc__build_rtti_type_5_0)
MR_decl_static(mlds_to_gcc__maybe_add_module_qualifier_3_0)
MR_decl_static(mlds_to_gcc__get_pred_label_name_2_0)
MR_decl_static(mlds_to_gcc__get_func_name_3_0)
MR_decl_static(fn__mlds_to_gcc__build_data_name_1_0)
MR_decl_static(fn__mlds_to_gcc__build_qualified_name_1_0)
MR_decl_static(mlds_to_gcc__build_param_types_6_0)
MR_decl_static(mlds_to_gcc__build_param_types_7_0)
MR_decl_static(mlds_to_gcc__build_type_5_0)
MR_decl_static(mlds_to_gcc__build_type_6_0)
MR_decl_static(mlds_to_gcc__rtti_enum_const_2_0)
MR_decl_static(fn__mlds_to_gcc__get_class_type_name_1_0)
MR_decl_static(fn__mlds_to_gcc__build_data_var_name_2_0)
MR_decl_static(fn__mlds_to_gcc__MR_intptr_t_0_0)
MR_decl_static(mlds_to_gcc__build_unop_expr_6_0)
MR_decl_static(mlds_to_gcc__convert_binary_op_3_0)
MR_decl_static(mlds_to_gcc__build_dummy_param_decls_4_0)
MR_decl_static(mlds_to_gcc__get_qualified_func_name_4_0)
MR_decl_static(mlds_to_gcc__build_code_addr_5_0)
MR_decl_static(mlds_to_gcc__build_rval_const_5_0)
MR_decl_static(mlds_to_gcc__build_lval_5_0)
MR_decl_static(mlds_to_gcc__build_rval_5_0)
MR_decl_static(mlds_to_gcc__build_unop_6_0)
MR_decl_static(mlds_to_gcc__build_cast_rval_6_0)
MR_decl_static(mlds_to_gcc__build_std_unop_6_0)
MR_decl_static(mlds_to_gcc__build_std_binop_7_0)
MR_decl_static(mlds_to_gcc__build_call_6_0)
MR_decl_static(mlds_to_gcc__build_args_5_0)
MR_decl_static(mlds_to_gcc__build_initializer_6_0)
MR_decl_static(mlds_to_gcc__build_array_initializer_7_0)
MR_decl_static(mlds_to_gcc__build_struct_initializer_6_0)
MR_decl_static(mlds_to_gcc__build_local_data_defn_8_0)
MR_decl_static(mlds_to_gcc__build_local_defns_6_0)
MR_decl_static(mlds_to_gcc__gen_statements_4_0)
MR_decl_static(mlds_to_gcc__gen_cases_4_0)
MR_decl_static(mlds_to_gcc__gen_statement_4_0)
MR_decl_static(mlds_to_gcc__gen_default_4_0)
MR_decl_static(mlds_to_gcc__gen_init_fn_defns_5_0)
MR_decl_static(mlds_to_gcc__build_field_defn_6_0)
MR_decl_static(mlds_to_gcc__build_field_defns_8_0)
MR_decl_static(mlds_to_gcc__add_func_decl_flags_4_0)
MR_decl_static(mlds_to_gcc__build_label_table_4_0)
MR_decl_static(mlds_to_gcc__build_param_types_and_decls_8_0)
MR_decl_static(mlds_to_gcc__gen_func_9_0)
MR_decl_static(mlds_to_gcc__gen_defns_6_0)
MR_decl_static(mlds_to_gcc__gen_defn_6_0)
MR_decl_static(mlds_to_gcc__gen_defn_body_8_0)
MR_decl_static(mlds_to_gcc__gen_class_7_0)
MR_def_extern_entry(mlds_to_gcc__compile_to_asm_5_0)
MR_decl_static(fn__mlds_to_gcc__make_public_1_0)
MR_decl_static(mlds_to_gcc__is_static_member_1_0)
MR_decl_static(mlds_to_gcc__mlds_make_base_class_5_0)
MR_decl_static(mlds_to_gcc__statement_contains_label_2_0)
MR_decl_static(mlds_to_gcc__gen_case_label_4_0)
MR_decl_static(mlds_to_gcc__gen_case_4_0)
MR_decl_static(__Unify___mlds_to_gcc__defn_info_0_0)
MR_decl_static(__Compare___mlds_to_gcc__defn_info_0_0)
MR_decl_static(__Unify___mlds_to_gcc__field_table_0_0)
MR_decl_static(__Compare___mlds_to_gcc__field_table_0_0)
MR_decl_static(__Unify___mlds_to_gcc__gcc_type_info_0_0)
MR_decl_static(__Compare___mlds_to_gcc__gcc_type_info_0_0)
MR_decl_static(__Unify___mlds_to_gcc__gcc_type_table_0_0)
MR_decl_static(__Compare___mlds_to_gcc__gcc_type_table_0_0)
MR_decl_static(__Unify___mlds_to_gcc__global_info_0_0)
MR_decl_static(__Compare___mlds_to_gcc__global_info_0_0)
MR_decl_static(__Unify___mlds_to_gcc__label_table_0_0)
MR_decl_static(__Compare___mlds_to_gcc__label_table_0_0)
MR_decl_static(__Unify___mlds_to_gcc__symbol_table_0_0)
MR_decl_static(__Compare___mlds_to_gcc__symbol_table_0_0)
MR_decl_static(fn__mlds_to_gcc__IntroducedFrom__func__run_gcc_backend__228__1_1_0)
MR_decl_static(mlds_to_gcc__IntroducedFrom__pred__gen_defn_body__823__1_1_0)
MR_decl_static(mlds_to_gcc__IntroducedFrom__pred__build_rtti_type__1955__1_2_0)
MR_decl_static(mlds_to_gcc__IntroducedFrom__pred__gen_stmt__2751__1_2_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_99_111_110_115_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_117_110_99_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0)

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__run_gcc_backend_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__build_rtti_type_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_is_array_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__build_label_table_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_target_lang_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_1;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__run_gcc_backend_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__build_rtti_type_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(backend_libs__rtti, is_array),
MR_CTOR0_ADDR(backend_libs__rtti, is_array)
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__build_label_table_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_target_lang),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(4,4),
MR_COMMON(4,4)
},
};

MR_decl_entry(gcc__build_label_4_0);
MR_decl_entry(ml_backend__ml_util__defn_is_type_1_0);
static const struct mercury_type_1 mercury_common_1[5] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__mlds_to_gcc__IntroducedFrom__func__run_gcc_backend__228__1_1_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(gcc__build_label_4_0),
0
},
{
MR_COMMON(8,1),
MR_ENTRY_AP(mlds_to_gcc__is_static_member_1_0),
0
},
{
MR_COMMON(8,2),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_type_1_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(fn__mlds_to_gcc__make_public_1_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
10,
0
}
},
{
{
1,
2
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_string_const("builtin", 7)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const struct mercury_type_4 mercury_common_4[6] =
{
{
{
MR_CTOR1_ADDR(ml_backend__mlds, mlds_fully_qualified_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name)
}
},
{
{
MR_CTOR1_ADDR(ml_backend__mlds, mlds_fully_qualified_name),
MR_STRING_CTOR_ADDR
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
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
{
{
MR_TAG_COMMON(3,5,2),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_5 mercury_common_5[3] =
{
{
8,
MR_tbmkword(0, 5)
},
{
0,
MR_TAG_COMMON(3,5,0)
},
{
0,
MR_TAG_COMMON(2,11,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_statements_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_defn_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_cases_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__build_label_table_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_tree_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_case_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__gen_statements_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mlds_to_gcc, defn_info),
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__gen_cases_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mlds_to_gcc, defn_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__build_label_table_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(gcc, tree),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__gen_case_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mlds_to_gcc, defn_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_string_const("_type_tables", 12),
MR_tbmkword(0, 0)
},
{
MR_string_const("__init", 6),
MR_TAG_COMMON(1,7,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_defn_body_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_class_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_5_0_2;
static const struct mercury_type_8 mercury_common_8[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__gen_defn_body_8_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(4,3)
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__gen_class_7_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_5_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_class_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__gen_class_7_0_1,
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
};

MR_decl_entry(ml_backend__ml_util__defn_contains_foreign_code_2_0);
static const struct mercury_type_10 mercury_common_10[1] =
{
{
MR_COMMON(0,3),
MR_ENTRY_AP(ml_backend__ml_util__defn_contains_foreign_code_2_0),
1,
2
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
1
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0 = {
	&mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_tree_0;
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_tree_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0gcc__type_ctor_info_tree_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
	(MR_TypeInfo) &mercury_data_gcc__type_ctor_info_tree_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0gcc__type_ctor_info_tree_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_gcc__type_ctor_info_tree_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_global_info_0;

const MR_PseudoTypeInfo mercury_data_mlds_to_gcc__field_types_defn_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mlds_to_gcc__type_ctor_info_global_info_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0gcc__type_ctor_info_tree_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0gcc__type_ctor_info_tree_0
};

const MR_ConstString mercury_data_mlds_to_gcc__field_names_defn_info_0_0[] = {
	"di_global_info",
	"di_func_name",
	"di_local_vars",
	"di_label_table"
};

static const MR_DuFunctorDesc mercury_data_mlds_to_gcc__du_functor_desc_defn_info_0_0 = {
	"defn_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mlds_to_gcc__field_types_defn_info_0_0,
	mercury_data_mlds_to_gcc__field_names_defn_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mlds_to_gcc__du_stag_ordered_defn_info_0_0[] = {
	&mercury_data_mlds_to_gcc__du_functor_desc_defn_info_0_0

};

const MR_DuPtagLayout mercury_data_mlds_to_gcc__du_ptag_ordered_defn_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mlds_to_gcc__du_stag_ordered_defn_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mlds_to_gcc__du_name_ordered_defn_info_0[] = {
	&mercury_data_mlds_to_gcc__du_functor_desc_defn_info_0_0
};

const MR_Integer mercury_data_mlds_to_gcc__functor_number_map_defn_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_defn_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mlds_to_gcc__defn_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mlds_to_gcc__defn_info_0_0)),
	"mlds_to_gcc",
	"defn_info",
	{ (void *)mercury_data_mlds_to_gcc__du_name_ordered_defn_info_0 },
	{ (void *)mercury_data_mlds_to_gcc__du_ptag_ordered_defn_info_0 },
	1,
	4,
	mercury_data_mlds_to_gcc__functor_number_map_defn_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1builtin__type_ctor_info_string_0 = {
	&mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1builtin__type_ctor_info_string_0gcc__type_ctor_info_tree_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_gcc__type_ctor_info_tree_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_field_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mlds_to_gcc__field_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mlds_to_gcc__field_table_0_0)),
	"mlds_to_gcc",
	"field_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1builtin__type_ctor_info_string_0gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mlds_to_gcc__field_types_gcc_type_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_gcc__type_ctor_info_tree_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1builtin__type_ctor_info_string_0gcc__type_ctor_info_tree_0
};

static const MR_DuFunctorDesc mercury_data_mlds_to_gcc__du_functor_desc_gcc_type_info_0_0 = {
	"gcc_type_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mlds_to_gcc__field_types_gcc_type_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mlds_to_gcc__du_stag_ordered_gcc_type_info_0_0[] = {
	&mercury_data_mlds_to_gcc__du_functor_desc_gcc_type_info_0_0

};

const MR_DuPtagLayout mercury_data_mlds_to_gcc__du_ptag_ordered_gcc_type_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mlds_to_gcc__du_stag_ordered_gcc_type_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mlds_to_gcc__du_name_ordered_gcc_type_info_0[] = {
	&mercury_data_mlds_to_gcc__du_functor_desc_gcc_type_info_0_0
};

const MR_Integer mercury_data_mlds_to_gcc__functor_number_map_gcc_type_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mlds_to_gcc__gcc_type_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mlds_to_gcc__gcc_type_info_0_0)),
	"mlds_to_gcc",
	"gcc_type_info",
	{ (void *)mercury_data_mlds_to_gcc__du_name_ordered_gcc_type_info_0 },
	{ (void *)mercury_data_mlds_to_gcc__du_ptag_ordered_gcc_type_info_0 },
	1,
	4,
	mercury_data_mlds_to_gcc__functor_number_map_gcc_type_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0mlds_to_gcc__type_ctor_info_gcc_type_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
	(MR_TypeInfo) &mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mlds_to_gcc__gcc_type_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mlds_to_gcc__gcc_type_table_0_0)),
	"mlds_to_gcc",
	"gcc_type_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0mlds_to_gcc__type_ctor_info_gcc_type_info_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;

const MR_PseudoTypeInfo mercury_data_mlds_to_gcc__field_types_global_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0mlds_to_gcc__type_ctor_info_gcc_type_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0gcc__type_ctor_info_tree_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_globals_0
};

const MR_ConstString mercury_data_mlds_to_gcc__field_names_global_info_0_0[] = {
	"gi_type_table",
	"gi_global_vars",
	"gi_globals"
};

static const MR_DuFunctorDesc mercury_data_mlds_to_gcc__du_functor_desc_global_info_0_0 = {
	"global_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mlds_to_gcc__field_types_global_info_0_0,
	mercury_data_mlds_to_gcc__field_names_global_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mlds_to_gcc__du_stag_ordered_global_info_0_0[] = {
	&mercury_data_mlds_to_gcc__du_functor_desc_global_info_0_0

};

const MR_DuPtagLayout mercury_data_mlds_to_gcc__du_ptag_ordered_global_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mlds_to_gcc__du_stag_ordered_global_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mlds_to_gcc__du_name_ordered_global_info_0[] = {
	&mercury_data_mlds_to_gcc__du_functor_desc_global_info_0_0
};

const MR_Integer mercury_data_mlds_to_gcc__functor_number_map_global_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_global_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mlds_to_gcc__global_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mlds_to_gcc__global_info_0_0)),
	"mlds_to_gcc",
	"global_info",
	{ (void *)mercury_data_mlds_to_gcc__du_name_ordered_global_info_0 },
	{ (void *)mercury_data_mlds_to_gcc__du_ptag_ordered_global_info_0 },
	1,
	4,
	mercury_data_mlds_to_gcc__functor_number_map_global_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_label_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mlds_to_gcc__label_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mlds_to_gcc__label_table_0_0)),
	"mlds_to_gcc",
	"label_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_symbol_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mlds_to_gcc__symbol_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mlds_to_gcc__symbol_table_0_0)),
	"mlds_to_gcc",
	"symbol_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"lambda_mlds_to_gcc_m_2751",
2,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
2751,
"91"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_case_4_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"gen_case_label",
4,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
2863,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_5_0_3 = {
{
MR_FUNCTION,
"mlds_to_gcc",
"mlds_to_gcc",
"make_public",
2,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
304,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_is_type",
1,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
328,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_util",
"ml_backend.ml_util",
"defn_contains_foreign_code",
2,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
256,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_class_7_0_2 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"is_static_member",
1,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
1267,
"36"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_class_7_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"mlds_make_base_class",
5,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
1279,
"39"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_defn_body_8_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"lambda_mlds_to_gcc_m_823",
1,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
823,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__build_label_table_4_0_2 = {
{
MR_PREDICATE,
"gcc",
"gcc",
"build_label",
4,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
1448,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__build_label_table_4_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"statement_contains_label",
2,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
1447,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_cases_4_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"gen_case",
4,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
2857,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_statements_4_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"gen_statement",
4,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
2659,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__build_rtti_type_5_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"lambda_mlds_to_gcc_m_1955",
2,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
1955,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__run_gcc_backend_6_0_1 = {
{
MR_FUNCTION,
"mlds_to_gcc",
"mlds_to_gcc",
"lambda_mlds_to_gcc_m_228",
2,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
228,
"54"
};


MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);
MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(libs__file_util__maybe_write_string_4_0);
MR_decl_entry(libs__file_util__maybe_flush_output_3_0);
MR_decl_entry(gcc__run_backend_6_0);
MR_decl_entry(libs__file_util__report_error_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module0)
	MR_init_entry1(mlds_to_gcc__run_gcc_backend_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__run_gcc_backend_6_0);
	MR_init_label10(mlds_to_gcc__run_gcc_backend_6_0,2,3,5,6,7,8,10,9,11,13)
	MR_init_label10(mlds_to_gcc__run_gcc_backend_6_0,12,14,16,15,17,19,20,30,31,32)
	MR_init_label6(mlds_to_gcc__run_gcc_backend_6_0,33,34,35,36,37,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'run_gcc_backend'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mlds_to_gcc__run_gcc_backend_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 299;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		mlds_to_gcc__run_gcc_backend_6_0_i2);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_6_0_i3);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_sv(3) = (MR_Word) MR_string_const(".pic_s", 6);
	MR_sv(2) = (MR_Word) MR_string_const("-fpic ", 6);
	MR_r3 = (MR_Word) MR_string_const(".m", 2);
	MR_r4 = (MR_Integer) 1;
	MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_6_0_i5);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_sv(3) = (MR_Word) MR_string_const(".s", 2);
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	MR_r3 = (MR_Word) MR_string_const(".m", 2);
	MR_r4 = (MR_Integer) 1;
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		mlds_to_gcc__run_gcc_backend_6_0_i6);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		mlds_to_gcc__run_gcc_backend_6_0_i7);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 51;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		mlds_to_gcc__run_gcc_backend_6_0_i8);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_6_0_i10);
	}
	MR_r1 = MR_sv(7);
	MR_sv(4) = (MR_Word) MR_string_const("-quiet ", 7);
	MR_r2 = (MR_Integer) 472;
	MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_6_0_i9);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Integer) 472;
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		mlds_to_gcc__run_gcc_backend_6_0_i11);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_6_0_i13);
	}
	MR_r1 = MR_sv(7);
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Integer) 467;
	MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_6_0_i12);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(5) = (MR_Word) MR_string_const("-O2 -fomit-frame-pointer ", 25);
	MR_r2 = (MR_Integer) 467;
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		mlds_to_gcc__run_gcc_backend_6_0_i14);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_6_0_i16);
	}
	MR_r1 = MR_sv(7);
	MR_sv(6) = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Integer) 469;
	MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_6_0_i15);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_sv(6) = (MR_Word) MR_string_const("-g ", 3);
	MR_r2 = (MR_Integer) 469;
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		mlds_to_gcc__run_gcc_backend_6_0_i17);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		mlds_to_gcc__run_gcc_backend_6_0_i19);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		mlds_to_gcc__run_gcc_backend_6_0_i20);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" -o ", 4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\"<GCC back-end>\" ", 17);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mlds_to_gcc__run_gcc_backend_6_0_i30);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 41;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		mlds_to_gcc__run_gcc_backend_6_0_i31);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Invoking GCC back-end as \140", 28);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		mlds_to_gcc__run_gcc_backend_6_0_i32);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		mlds_to_gcc__run_gcc_backend_6_0_i33);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("\':\n", 3);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		mlds_to_gcc__run_gcc_backend_6_0_i34);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		mlds_to_gcc__run_gcc_backend_6_0_i35);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(gcc__run_backend_6_0,
		mlds_to_gcc__run_gcc_backend_6_0_i36);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_6_0_i37);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("% GCC back-end done.\n", 21);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		mlds_to_gcc__run_gcc_backend_6_0_i40);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("GCC back-end failed!\n", 21);
	MR_np_call_localret_ent(libs__file_util__report_error_3_0,
		mlds_to_gcc__run_gcc_backend_6_0_i40);
MR_def_label(mlds_to_gcc__run_gcc_backend_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__access_1_0);
MR_decl_entry(gcc__set_var_decl_public_3_0);
MR_decl_entry(require__sorry_3_0);
MR_decl_entry(fn__ml_backend__mlds__virtuality_1_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(fn__ml_backend__mlds__overridability_1_0);
MR_decl_entry(fn__ml_backend__mlds__constness_1_0);
MR_decl_entry(gcc__set_var_decl_readonly_3_0);
MR_decl_entry(fn__ml_backend__mlds__abstractness_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module1)
	MR_init_entry1(mlds_to_gcc__add_var_decl_flags_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__add_var_decl_flags_4_0);
	MR_init_label10(mlds_to_gcc__add_var_decl_flags_4_0,2,4,28,5,6,8,3,11,13,12)
	MR_init_label7(mlds_to_gcc__add_var_decl_flags_4_0,15,17,16,19,21,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_var_decl_flags'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__add_var_decl_flags_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i2);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i5);
	}
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__set_var_decl_public_3_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i28);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_var_access_flag\'/4", 45);
	MR_r3 = (MR_Word) MR_string_const("\140default\' access", 16);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_var_access_flag\'/4", 45);
	MR_r3 = (MR_Word) MR_string_const("\140protected\' access", 18);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__virtuality_1_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i11);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i12);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_var_virtuality_flag\'/4", 49);
	MR_r3 = (MR_Word) MR_string_const("\140virtual\' variable", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i12);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__overridability_1_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i15);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i16);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_var_overridability_flag\'/4", 53);
	MR_r3 = (MR_Word) MR_string_const("\140sealed\' variable", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i16);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i19);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i21);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__set_var_decl_readonly_3_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i21);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i23);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_var_abstractness_flag\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("\140abstract\' variable", 19);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__ptr_type_node_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module2)
	MR_init_entry1(fn__mlds_to_gcc__MR_Box_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_Box_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_Box'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_Box_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__intptr_type_node_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module3)
	MR_init_entry1(fn__mlds_to_gcc__MR_Integer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_Integer_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_Integer'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_Integer_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__intptr_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module4)
	MR_init_entry1(fn__mlds_to_gcc__MR_Word_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_Word_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_Word'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_Word_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__intptr_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__build_array_type_5_0);

MR_BEGIN_MODULE(mlds_to_gcc_module5)
	MR_init_entry1(mlds_to_gcc__build_sized_array_type_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_sized_array_type_5_0);
	MR_init_label1(mlds_to_gcc__build_sized_array_type_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_sized_array_type'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_sized_array_type_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_sized_array_type_5_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(gcc__build_array_type_5_0);
MR_def_label(mlds_to_gcc__build_sized_array_type_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(gcc__build_array_type_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__empty_field_list_3_0);
MR_decl_entry(gcc__build_field_decl_5_0);
MR_decl_entry(gcc__cons_field_list_5_0);

MR_BEGIN_MODULE(mlds_to_gcc_module6)
	MR_init_entry1(mlds_to_gcc__build_fields_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_fields_4_0);
	MR_init_label3(mlds_to_gcc__build_fields_4_0,16,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_fields'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_fields_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_fields_4_0_i16);
	}
	MR_np_tailcall_ent(gcc__empty_field_list_3_0);
MR_def_label(mlds_to_gcc__build_fields_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(mlds_to_gcc__build_fields_4_0,
		mlds_to_gcc__build_fields_4_0_i5);
MR_def_label(mlds_to_gcc__build_fields_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_fields_4_0_i6);
MR_def_label(mlds_to_gcc__build_fields_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__cons_field_list_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__build_struct_type_decl_5_0);
MR_decl_entry(fn__gcc__declared_type_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module7)
	MR_init_entry1(mlds_to_gcc__build_struct_type_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_struct_type_5_0);
	MR_init_label2(mlds_to_gcc__build_struct_type_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_struct_type'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_struct_type_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mlds_to_gcc__build_fields_4_0,
		mlds_to_gcc__build_struct_type_5_0_i2);
MR_def_label(mlds_to_gcc__build_struct_type_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_struct_type_5_0_i3);
MR_def_label(mlds_to_gcc__build_struct_type_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module8)
	MR_init_entry1(fn__mlds_to_gcc__MR_TypeInfo_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_TypeInfo_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_TypeInfo'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_TypeInfo_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module9)
	MR_init_entry1(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_PseudoTypeInfo'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__int16_type_node_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module10)
	MR_init_entry1(fn__mlds_to_gcc__MR_int_least16_t_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_int_least16_t_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_int_least16_t'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_int_least16_t_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__int16_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module11)
	MR_init_entry1(mlds_to_gcc__build_du_exist_locn_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_du_exist_locn_type_3_0);
	MR_init_label8(mlds_to_gcc__build_du_exist_locn_type_3_0,2,5,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_du_exist_locn_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_du_exist_locn_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i2);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_exist_offset_in_tci", 22);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(1) = (MR_Word) MR_string_const("MR_exist_arg_num", 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuExistLocn", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__int8_type_node_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module12)
	MR_init_entry1(fn__mlds_to_gcc__MR_int_least8_t_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_int_least8_t_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_int_least8_t'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_int_least8_t_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__int8_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__build_pointer_type_4_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module13)
	MR_init_entry1(mlds_to_gcc__build_tc_constr_struct_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_tc_constr_struct_type_4_0);
	MR_init_label10(mlds_to_gcc__build_tc_constr_struct_type_4_0,2,3,4,5,6,7,8,10,11,12)
	MR_init_label3(mlds_to_gcc__build_tc_constr_struct_type_4_0,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_tc_constr_struct_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_tc_constr_struct_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i2);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_array_type_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i3);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_decl_type_3_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i4);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i5);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i6);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Struct", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i7);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassConstraint_", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i8);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_tc_constr_arg_ptis", 21);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("MR_tc_constr_type_class", 23);
	MR_sv(4) = (MR_Word) MR_string_const("MR_tc_constr_arg_ptis", 21);
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i10);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i11);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i12);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i13);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i14);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i15);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module14)
	MR_init_entry1(mlds_to_gcc__build_tc_constr_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_tc_constr_type_3_0);
	MR_init_label10(mlds_to_gcc__build_tc_constr_type_3_0,2,3,4,5,6,7,8,10,11,12)
	MR_init_label4(mlds_to_gcc__build_tc_constr_type_3_0,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_tc_constr_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_tc_constr_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i2);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(gcc__build_array_type_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i3);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_decl_type_3_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i4);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 5;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Struct", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassConstraint_", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_tc_constr_arg_ptis", 21);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("MR_tc_constr_type_class", 23);
	MR_sv(4) = (MR_Word) MR_string_const("MR_tc_constr_arg_ptis", 21);
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i14);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i15);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__declared_type_1_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i16);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(gcc__build_pointer_type_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module15)
	MR_init_entry1(mlds_to_gcc__build_tc_decl_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_tc_decl_type_3_0);
	MR_init_label10(mlds_to_gcc__build_tc_decl_type_3_0,2,5,6,7,8,9,10,11,12,13)
	MR_init_label10(mlds_to_gcc__build_tc_decl_type_3_0,14,15,17,19,24,25,26,27,28,29)
	MR_init_label4(mlds_to_gcc__build_tc_decl_type_3_0,30,31,32,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_tc_decl_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_tc_decl_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i2);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_exist_offset_in_tci", 22);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("MR_exist_arg_num", 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuExistLocn", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__declared_type_1_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_constr_type_3_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i14);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i15);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_decl_id", 13);
	MR_sv(1) = MR_tempr1;
	MR_sv(8) = MR_r1;
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i17);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_decl_version_number", 25);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i19);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_tc_decl_num_supers", 21);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_decl_supers", 17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_r1;
	MR_sv(5) = (MR_Word) MR_string_const("MR_tc_decl_num_supers", 21);
	MR_sv(7) = (MR_Word) MR_string_const("MR_tc_decl_supers", 17);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i24);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i25);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i26);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i27);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i28);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i29);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i30);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i31);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i32);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassDeclStruct", 22);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i33);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module16)
	MR_init_entry1(mlds_to_gcc__build_du_exist_info_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_du_exist_info_type_3_0);
	MR_init_label10(mlds_to_gcc__build_du_exist_info_type_3_0,2,5,6,7,8,9,10,11,12,13)
	MR_init_label10(mlds_to_gcc__build_du_exist_info_type_3_0,14,16,18,23,24,25,26,27,28,29)
	MR_init_label3(mlds_to_gcc__build_du_exist_info_type_3_0,30,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_du_exist_info_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_du_exist_info_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i2);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_exist_offset_in_tci", 22);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("MR_exist_arg_num", 16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuExistLocn", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__declared_type_1_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i14);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_typeinfos_plain", 24);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i16);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_typeinfos_in_tci", 25);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i18);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_exist_tcis", 13);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_typeinfo_locns", 23);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_r1;
	MR_sv(5) = (MR_Word) MR_string_const("MR_exist_tcis", 13);
	MR_sv(7) = (MR_Word) MR_string_const("MR_exist_typeinfo_locns", 23);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i23);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i24);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i25);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i26);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i27);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i28);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i29);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i30);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i31);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuExistInfo", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i32);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__string_type_node_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module17)
	MR_init_entry1(fn__mlds_to_gcc__MR_ConstString_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_ConstString_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_ConstString'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_ConstString_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__string_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__integer_type_node_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module18)
	MR_init_entry1(fn__mlds_to_gcc__MR_bool_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_bool_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_bool'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_bool_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__integer_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module19)
	MR_init_entry1(fn__mlds_to_gcc__MR_ProcAddr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_ProcAddr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_ProcAddr'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_ProcAddr_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module20)
	MR_init_entry1(fn__mlds_to_gcc__MR_Sectag_Locn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_Sectag_Locn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_Sectag_Locn'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_Sectag_Locn_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__integer_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__int32_type_node_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module21)
	MR_init_entry1(fn__mlds_to_gcc__MR_int_least32_t_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_int_least32_t_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_int_least32_t'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_int_least32_t_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__int32_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module22)
	MR_init_entry1(mlds_to_gcc__build_rtti_type_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_rtti_type_name_4_0);
	MR_init_label10(mlds_to_gcc__build_rtti_type_name_4_0,403,4,5,6,7,8,9,10,12,14)
	MR_init_label10(mlds_to_gcc__build_rtti_type_name_4_0,16,18,20,22,3,38,41,44,47,40)
	MR_init_label10(mlds_to_gcc__build_rtti_type_name_4_0,51,54,57,60,56,64,66,68,70,72)
	MR_init_label10(mlds_to_gcc__build_rtti_type_name_4_0,74,76,78,80,82,84,86,89,92,93)
	MR_init_label10(mlds_to_gcc__build_rtti_type_name_4_0,95,97,88,106,109,112,105,116,118,120)
	MR_init_label10(mlds_to_gcc__build_rtti_type_name_4_0,123,126,129,122,133,136,139,142,145,148)
	MR_init_label10(mlds_to_gcc__build_rtti_type_name_4_0,135,153,154,155,157,159,161,163,165,167)
	MR_init_label10(mlds_to_gcc__build_rtti_type_name_4_0,169,173,175,177,152,194,193,198,200,203)
	MR_init_label2(mlds_to_gcc__build_rtti_type_name_4_0,202,207)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_rtti_type_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_rtti_type_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,403)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i3);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_du_exist_info_type_3_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i4);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i5);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i6);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i7);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i8);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i9);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i10);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_name", 18);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i12);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_orig_arity", 24);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i14);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_arg_type_contains_var", 35);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_Sectag_Locn_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i16);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_sectag_locn", 25);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least8_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i18);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_primary", 21);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i20);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_secondary", 23);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i22);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_ordinal", 21);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_du_functor_arg_types", 23);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("MR_du_functor_arg_names", 23);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_string_const("MR_du_functor_exist_info", 24);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
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
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuFunctorDesc", 16);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i38);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i40);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i41);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_sectag_alternatives", 22);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_Sectag_Locn_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i44);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_sectag_locn", 14);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i47);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_sectag_sharers", 17);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("MR_DuPtagLayout", 15);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i51);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i403);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i54);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i56);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i57);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_enum_functor_ordinal", 23);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i60);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_enum_functor_name", 20);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("MR_EnumFunctorDesc", 18);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i64);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i66);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i68);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_du_exist_info_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i70);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_du_exist_locn_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i72);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_du_exist_locn_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i74);
	}
	MR_r1 = MR_tfield(2, MR_r1, 2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_constr_struct_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i76);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_constr_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i78);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_ConstString_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i80);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i82);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i84);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i86);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i88);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i89);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_maybe_res_init", 17);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_MaybeResFunctorDesc", 22);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_struct_type_5_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i92);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i93);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_maybe_res_name", 17);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_Integer_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i95);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_maybe_res_arity", 18);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_bool_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i97);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_maybe_res_is_res", 19);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_maybe_res_ptr", 16);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("MR_MaybeResAddrFunctorDesc", 26);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i105);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i106);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_notag_functor_arg_name", 25);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i109);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_notag_functor_arg_type", 25);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i112);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_notag_functor_name", 21);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("MR_NotagFunctorDesc", 19);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i116);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_pseudo_type_info_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i118);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i120);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i122);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i123);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_ra_functor_reserved_addr", 27);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i126);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_ra_functor_ordinal", 21);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i129);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ra_functor_name", 18);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("MR_ReservedAddrFunctorDesc", 26);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i133);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 12);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i403);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i135);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i136);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_ra_other_functors", 20);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i139);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_ra_constants", 15);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i142);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_ra_res_symbolic_addrs", 24);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i145);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_ra_num_res_symbolic_addrs", 28);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i148);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ra_num_res_numeric_addrs", 27);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("MR_ReservedAddrTypeDesc", 23);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i152);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 14);
	MR_np_localcall_lab(mlds_to_gcc__build_rtti_type_name_4_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i153);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 15);
	MR_np_localcall_lab(mlds_to_gcc__build_rtti_type_name_4_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i154);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_Integer_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i155);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_arity", 18);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least8_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i157);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_version", 20);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least8_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i159);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_num_ptags", 22);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i161);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_rep_CAST_ME", 24);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ProcAddr_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i163);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_unify_pred", 23);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ProcAddr_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i165);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_compare_pred", 25);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i167);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_module_name", 24);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i169);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_type_ctor_name", 17);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_string_const("MR_type_ctor_functors", 21);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_layout", 19);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i173);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(11) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_num_functors", 25);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i175);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_flags", 18);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i177);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_functor_number_map", 31);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
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
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeCtorInfo_Struct", 22);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i193);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i194);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_functors_init", 16);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_TypeFunctors", 15);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i198);
	}
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i200);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_type_info_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i202);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i203);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_layout_init", 14);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_TypeLayout", 13);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_name_4_0_i207);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_rtti_type_name\'/4", 46);
	MR_r3 = (MR_Word) MR_string_const("MR_DuArgLocn", 12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_rtti_type_name\'/4", 46);
	MR_r3 = (MR_Word) MR_string_const("NYI foreign enums and asm backend", 33);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_info_0;
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module23)
	MR_init_entry1(mlds_to_gcc__build_type_info_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_type_info_type_4_0);
	MR_init_label10(mlds_to_gcc__build_type_info_type_4_0,54,6,7,8,9,10,11,13,14,5)
	MR_init_label10(mlds_to_gcc__build_type_info_type_4_0,20,21,22,23,24,25,27,31,32,33)
	MR_init_label5(mlds_to_gcc__build_type_info_type_4_0,34,35,36,37,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_type_info_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_type_info_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_info_type_4_0_i54);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 16);
	MR_np_tailcall_ent(mlds_to_gcc__build_rtti_type_name_4_0);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_info_type_4_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__build_type_info_type_4_0_i6);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_type_info_type_4_0_i7);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_type_info_type_4_0_i8);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_array_type_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i9);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__build_type_info_type_4_0_i10);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_FA_TypeInfo_Struct", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_type_info_type_4_0_i11);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_ti_fixed_arity_arg_typeinfos", 31);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_string_const("MR_ti_type_ctor_info", 20);
	MR_sv(4) = (MR_Word) MR_string_const("MR_ti_fixed_arity_arg_typeinfos", 31);
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_type_info_type_4_0_i13);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i14);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i35);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__build_type_info_type_4_0_i20);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_type_info_type_4_0_i21);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_type_info_type_4_0_i22);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_array_type_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i23);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__build_type_info_type_4_0_i24);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_VA_TypeInfo_Struct", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_type_info_type_4_0_i25);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_ti_type_ctor_info", 20);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_type_info_type_4_0_i27);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_ti_var_arity_arity", 21);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ti_var_arity_arg_typeinfos", 29);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_sv(4) = (MR_Word) MR_string_const("MR_ti_var_arity_arity", 21);
	MR_sv(6) = (MR_Word) MR_string_const("MR_ti_var_arity_arg_typeinfos", 29);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_type_info_type_4_0_i31);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i32);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i33);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i34);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i35);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i36);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i37);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i53);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

MR_BEGIN_MODULE(mlds_to_gcc_module24)
	MR_init_entry1(mlds_to_gcc__build_pseudo_type_info_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_pseudo_type_info_type_4_0);
	MR_init_label10(mlds_to_gcc__build_pseudo_type_info_type_4_0,3,6,7,8,9,10,11,13,14,15)
	MR_init_label10(mlds_to_gcc__build_pseudo_type_info_type_4_0,16,17,57,5,21,22,23,24,25,26)
	MR_init_label2(mlds_to_gcc__build_pseudo_type_info_type_4_0,28,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_pseudo_type_info_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_pseudo_type_info_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_pseudo_type_info_type_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 16);
	MR_np_tailcall_ent(mlds_to_gcc__build_rtti_type_name_4_0);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_pseudo_type_info_type_4_0_i5);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i6);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i7);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i8);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_array_type_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i9);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i10);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_FA_PseudoTypeInfo_Struct", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i11);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_pti_fixed_arity_arg_pseudo_typeinfos", 39);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_string_const("MR_pti_type_ctor_info", 21);
	MR_sv(4) = (MR_Word) MR_string_const("MR_pti_fixed_arity_arg_pseudo_typeinfos", 39);
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i13);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i14);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i15);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i16);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i17);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i57);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_pseudo_type_info_type_4_0_i20);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i21);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i22);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i23);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_array_type_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i24);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i25);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_VA_PseudoTypeInfo_Struct", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i26);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_pti_type_ctor_info", 21);
	MR_sv(2) = MR_r1;
	}
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i28);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_pti_var_arity_arity", 22);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_pti_var_arity_arg_pseudo_typeinfos", 37);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_pseudo_type_info_type\'/4", 53);
	MR_r3 = (MR_Word) MR_string_const("type_var", 8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module25)
	MR_init_entry1(mlds_to_gcc__build_tc_id_method_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_tc_id_method_type_3_0);
	MR_init_label10(mlds_to_gcc__build_tc_id_method_type_3_0,2,5,8,9,10,11,12,13,14,15)
	MR_init_label1(mlds_to_gcc__build_tc_id_method_type_3_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_tc_id_method_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_tc_id_method_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__integer_type_node_0_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i2);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_tc_method_pred_func", 22);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_tc_method_arity", 18);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__string_type_node_0_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(1) = (MR_Word) MR_string_const("MR_tc_method_name", 17);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_tfield(1, MR_tfield(1, MR_r2, 1), 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i14);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i15);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassMethod", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i16);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module26)
	MR_init_entry1(mlds_to_gcc__build_tc_id_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_tc_id_type_3_0);
	MR_init_label10(mlds_to_gcc__build_tc_id_type_3_0,2,3,4,7,10,11,12,13,14,15)
	MR_init_label10(mlds_to_gcc__build_tc_id_type_3_0,16,17,18,19,20,21,23,25,27,29)
	MR_init_label8(mlds_to_gcc__build_tc_id_type_3_0,38,39,40,41,42,43,44,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_tc_id_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_tc_id_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__string_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i2);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_id_type_3_0_i3);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__integer_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i4);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_tc_method_pred_func", 22);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_tc_method_arity", 18);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__string_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("MR_tc_method_name", 17);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_tfield(1, MR_tfield(1, MR_r2, 1), 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_id_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i14);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i15);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i16);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i17);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassMethod", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i18);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__declared_type_1_0,
		mlds_to_gcc__build_tc_id_type_3_0_i19);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_id_type_3_0_i20);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__string_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i21);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_id_module_name", 20);
	}
	MR_np_call_localret_ent(fn__gcc__string_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i23);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_id_name", 13);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i25);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_id_arity", 14);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i27);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_id_num_type_vars", 22);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i29);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_id_num_methods", 20);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_tc_id_type_var_names", 23);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("MR_tc_id_methods", 16);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tempr5 = MR_sv(2);
	MR_sv(1) = MR_tfield(0, MR_tempr5, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(2) = MR_tfield(0, MR_sv(3), 0);
	MR_sv(3) = MR_tfield(0, MR_sv(3), 1);
	MR_sv(4) = MR_tfield(0, MR_sv(4), 0);
	MR_sv(5) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_fields_4_0,
		mlds_to_gcc__build_tc_id_type_3_0_i38);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i39);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i40);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i41);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i42);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i43);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i44);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassId", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i45);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module27)
	MR_init_entry1(mlds_to_gcc__build_tc_instance_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_tc_instance_type_3_0);
	MR_init_label10(mlds_to_gcc__build_tc_instance_type_3_0,2,3,4,5,6,7,9,11,13,21)
	MR_init_label10(mlds_to_gcc__build_tc_instance_type_3_0,22,23,24,25,26,27,28,29,30,31)
	MR_init_label3(mlds_to_gcc__build_tc_instance_type_3_0,32,33,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_tc_instance_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_tc_instance_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_decl_type_3_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i2);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i3);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i4);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_constr_type_3_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_inst_type_class", 21);
	MR_sv(1) = MR_tempr1;
	MR_sv(12) = MR_r1;
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_inst_num_type_vars", 24);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_inst_num_instance_constraints", 35);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_string_const("MR_tc_decl_num_supers", 21);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_inst_type_args", 20);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_tc_inst_instance_constraints", 31);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr3, 0);
	MR_tempr5 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr5, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(6) = MR_tfield(0, MR_tfield(1, MR_tempr4, 0), 0);
	MR_sv(5) = MR_tfield(0, MR_tfield(1, MR_tempr4, 0), 1);
	MR_sv(8) = MR_r1;
	MR_sv(7) = (MR_Word) MR_string_const("MR_tc_decl_num_supers", 21);
	MR_sv(9) = (MR_Word) MR_string_const("MR_tc_inst_type_args", 20);
	MR_sv(11) = (MR_Word) MR_string_const("MR_tc_inst_instance_constraints", 31);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i21);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i22);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i23);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i24);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i25);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i26);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i27);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i28);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i29);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i30);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i31);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i32);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i33);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_Instance", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i34);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module28)
	MR_init_entry1(mlds_to_gcc__build_rtti_type_tc_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_rtti_type_tc_name_4_0);
	MR_init_label10(mlds_to_gcc__build_rtti_type_tc_name_4_0,3,5,7,9,12,14,16,18,20,93)
	MR_init_label2(mlds_to_gcc__build_rtti_type_tc_name_4_0,22,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_rtti_type_tc_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_rtti_type_tc_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i3);
	}
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i5);
	}
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_decl_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i7);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_constr_struct_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i9);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_constr_type_3_0,
		mlds_to_gcc__build_rtti_type_tc_name_4_0_i93);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i12);
	}
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_id_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i14);
	}
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_id_method_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i16);
	}
	MR_np_tailcall_ent(fn__gcc__string_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i18);
	}
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_instance_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_constr_struct_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i22);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_constr_type_3_0,
		mlds_to_gcc__build_rtti_type_tc_name_4_0_i93);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(gcc__build_pointer_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_tc_name_4_0_i25);
	}
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_rtti_type_tc_name\'/4", 49);
	MR_r3 = (MR_Word) MR_string_const("type_class_instance_methods", 27);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__rtti__rtti_id_has_array_type_1_0);
MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module29)
	MR_init_entry1(mlds_to_gcc__build_rtti_type_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_rtti_type_5_0);
	MR_init_label10(mlds_to_gcc__build_rtti_type_5_0,5,7,8,10,3,12,14,15,19,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_rtti_type'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_rtti_type_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_5_0_i5);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rtti_type_name_4_0,
		mlds_to_gcc__build_rtti_type_5_0_i7);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rtti_type_tc_name_4_0,
		mlds_to_gcc__build_rtti_type_5_0_i7);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__rtti_id_has_array_type_1_0,
		mlds_to_gcc__build_rtti_type_5_0_i8);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__IntroducedFrom__pred__build_rtti_type__1955__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r3 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_rtti_type\'/5", 41);
	MR_r4 = (MR_Word) MR_string_const("element of non-array", 20);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		mlds_to_gcc__build_rtti_type_5_0_i10);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_5_0_i12);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rtti_type_name_4_0,
		mlds_to_gcc__build_rtti_type_5_0_i14);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rtti_type_tc_name_4_0,
		mlds_to_gcc__build_rtti_type_5_0_i14);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__rtti_id_has_array_type_1_0,
		mlds_to_gcc__build_rtti_type_5_0_i15);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_5_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_5_0_i19);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__build_array_type_5_0);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__build_array_type_5_0);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0);
MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module30)
	MR_init_entry1(mlds_to_gcc__maybe_add_module_qualifier_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__maybe_add_module_qualifier_3_0);
	MR_init_label8(mlds_to_gcc__maybe_add_module_qualifier_3_0,7,5,9,2,3,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_add_module_qualifier'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__maybe_add_module_qualifier_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i5);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		mlds_to_gcc__maybe_add_module_qualifier_3_0_i7);
MR_def_label(mlds_to_gcc__maybe_add_module_qualifier_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(mlds_to_gcc__maybe_add_module_qualifier_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i9);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(mlds_to_gcc__maybe_add_module_qualifier_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_INT_NE(MR_tempr2,2)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 5);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__maybe_add_module_qualifier_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mlds_to_gcc__maybe_add_module_qualifier_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(mlds_to_gcc__maybe_add_module_qualifier_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		mlds_to_gcc__maybe_add_module_qualifier_3_0_i18);
MR_def_label(mlds_to_gcc__maybe_add_module_qualifier_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		mlds_to_gcc__maybe_add_module_qualifier_3_0_i19);
MR_def_label(mlds_to_gcc__maybe_add_module_qualifier_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__maybe_add_module_qualifier_3_0_i20);
MR_def_label(mlds_to_gcc__maybe_add_module_qualifier_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__name_mangle_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module31)
	MR_init_entry1(mlds_to_gcc__get_pred_label_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__get_pred_label_name_2_0);
	MR_init_label10(mlds_to_gcc__get_pred_label_name_2_0,4,5,6,7,8,10,14,3,22,23)
	MR_init_label8(mlds_to_gcc__get_pred_label_name_2_0,24,25,26,27,28,31,32,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_pred_label_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__get_pred_label_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__get_pred_label_name_2_0_i3);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 2);
	MR_sv(1) = MR_tfield(1, MR_r1, 3);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		mlds_to_gcc__get_pred_label_name_2_0_i4);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		mlds_to_gcc__get_pred_label_name_2_0_i5);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__get_pred_label_name_2_0_i6);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_pred_label_name_2_0_i7);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_pred_label_name_2_0_i8);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_pred_label_name_2_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		mlds_to_gcc__get_pred_label_name_2_0_i14);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(3);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__get_pred_label_name_2_0_i22);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = (MR_Word) MR_string_const("f", 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		mlds_to_gcc__get_pred_label_name_2_0_i23);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = (MR_Word) MR_string_const("p", 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		mlds_to_gcc__get_pred_label_name_2_0_i23);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_pred_label_name_2_0_i24);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__get_pred_label_name_2_0_i25);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_pred_label_name_2_0_i26);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_pred_label_name_2_0_i27);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_pred_label_name_2_0_i28);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_pred_label_name_2_0_i2);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		mlds_to_gcc__get_pred_label_name_2_0_i31);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_pred_label_name_2_0_i32);
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(mlds_to_gcc__get_pred_label_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module32)
	MR_init_entry1(mlds_to_gcc__get_func_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__get_func_name_3_0);
	MR_init_label10(mlds_to_gcc__get_func_name_3_0,4,5,7,11,12,13,14,15,16,19)
	MR_init_label2(mlds_to_gcc__get_func_name_3_0,18,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_func_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__get_func_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__get_func_name_3_0_i2);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	MR_sv(3) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__get_pred_label_name_2_0,
		mlds_to_gcc__get_func_name_3_0_i4);
MR_def_label(mlds_to_gcc__get_func_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		mlds_to_gcc__get_func_name_3_0_i5);
MR_def_label(mlds_to_gcc__get_func_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_func_name_3_0_i7);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__get_func_name_3_0_i14);
MR_def_label(mlds_to_gcc__get_func_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__get_func_name_3_0_i11);
MR_def_label(mlds_to_gcc__get_func_name_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_func_name_3_0_i12);
MR_def_label(mlds_to_gcc__get_func_name_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__get_func_name_3_0_i13);
MR_def_label(mlds_to_gcc__get_func_name_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_func_name_3_0_i14);
MR_def_label(mlds_to_gcc__get_func_name_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_func_name_3_0_i15);
MR_def_label(mlds_to_gcc__get_func_name_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_func_name_3_0_i16);
MR_def_label(mlds_to_gcc__get_func_name_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__get_func_name_3_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_func_name_3_0_i19);
MR_def_label(mlds_to_gcc__get_func_name_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(mlds_to_gcc__get_func_name_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(mlds_to_gcc__get_func_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.get_func_name\'/3", 39);
	MR_r3 = (MR_Word) MR_string_const("non-function", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0);
MR_decl_entry(backend_libs__rtti__id_to_c_identifier_2_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(fn__backend_libs__rtti__tabling_info_id_str_1_0);
MR_decl_entry(fn__require__sorry_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module33)
	MR_init_entry1(fn__mlds_to_gcc__build_data_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__build_data_name_1_0);
	MR_init_label10(fn__mlds_to_gcc__build_data_name_1_0,127,3,9,14,15,8,6,34,36,37)
	MR_init_label5(fn__mlds_to_gcc__build_data_name_1_0,38,33,40,42,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_data_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__build_data_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		fn__mlds_to_gcc__build_data_name_1_0_i127);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__prog_foreign__name_mangle_1_0);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i6);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i8);
	}
	MR_r3 = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i9);
	}
	MR_r5 = MR_tfield(0, MR_r2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r5, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i9);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i14);
	}
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i15);
	}
	MR_tempr2 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i15);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_tempr1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_tempr3;
	MR_np_tailcall_ent(backend_libs__rtti__id_to_c_identifier_2_0);
	}
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(backend_libs__rtti__id_to_c_identifier_2_0);
	}
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(backend_libs__rtti__id_to_c_identifier_2_0);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i33);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		fn__mlds_to_gcc__build_data_name_1_0_i34);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mlds_to_gcc__get_func_name_3_0,
		fn__mlds_to_gcc__build_data_name_1_0_i36);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__tabling_info_id_str_1_0,
		fn__mlds_to_gcc__build_data_name_1_0_i37);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mlds_to_gcc__build_data_name_1_0_i38);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i40);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140mlds_to_gcc.build_data_name\'/1", 40);
	MR_r3 = (MR_Word) MR_string_const("mlds_internal_layout", 20);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i42);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140mlds_to_gcc.build_data_name\'/1", 40);
	MR_r3 = (MR_Word) MR_string_const("mlds_module_layout", 18);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i44);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140mlds_to_gcc.build_data_name\'/1", 40);
	MR_r3 = (MR_Word) MR_string_const("mlds_proc_layout", 16);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r3 = (MR_Word) MR_string_const("function \140mlds_to_gcc.build_data_name\'/1", 40);
	MR_r4 = (MR_Word) MR_string_const("mlds_scalar_common_ref", 22);
	MR_np_tailcall_ent(fn__require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module34)
	MR_init_entry1(fn__mlds_to_gcc__build_qualified_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__build_qualified_name_1_0);
	MR_init_label10(fn__mlds_to_gcc__build_qualified_name_1_0,4,3,75,9,10,12,16,17,18,19)
	MR_init_label10(fn__mlds_to_gcc__build_qualified_name_1_0,20,21,23,7,6,27,28,29,30,73)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_qualified_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__build_qualified_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 2);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_data_name_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i4);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mlds_to_gcc__maybe_add_module_qualifier_3_0);
	}
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i75);
	}
	MR_r2 = MR_tfield(3, MR_r2, 0);
	MR_np_tailcall_ent(mlds_to_gcc__maybe_add_module_qualifier_3_0);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i6);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r2, 0);
	MR_sv(3) = MR_tfield(2, MR_r2, 1);
	MR_sv(4) = MR_tfield(2, MR_r2, 2);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__get_pred_label_name_2_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i9);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i10);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i12);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i19);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i16);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i17);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i18);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i19);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i20);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i21);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i23);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mlds_to_gcc__maybe_add_module_qualifier_3_0);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.get_func_name\'/3", 39);
	MR_r3 = (MR_Word) MR_string_const("non-function", 12);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i73);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i27);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i28);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i29);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i30);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(mlds_to_gcc__maybe_add_module_qualifier_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__empty_param_types_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module35)
	MR_init_entry1(mlds_to_gcc__build_param_types_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_param_types_6_0);
	MR_init_label1(mlds_to_gcc__build_param_types_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_param_types'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_param_types_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__build_param_types_6_0_i2);
MR_def_label(mlds_to_gcc__build_param_types_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mlds_to_gcc__build_param_types_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__cons_param_types_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module36)
	MR_init_entry1(mlds_to_gcc__build_param_types_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_param_types_7_0);
	MR_init_label4(mlds_to_gcc__build_param_types_7_0,18,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_param_types'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_param_types_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_param_types_7_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(mlds_to_gcc__build_param_types_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(mlds_to_gcc__build_param_types_7_0,
		mlds_to_gcc__build_param_types_7_0_i4);
MR_def_label(mlds_to_gcc__build_param_types_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		mlds_to_gcc__build_param_types_7_0_i5);
MR_def_label(mlds_to_gcc__build_param_types_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__gcc__cons_param_types_2_0,
		mlds_to_gcc__build_param_types_7_0_i7);
MR_def_label(mlds_to_gcc__build_param_types_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module37)
	MR_init_entry1(mlds_to_gcc__build_type_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_type_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_type'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_type_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(mlds_to_gcc__build_type_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__gcc__void_type_node_0_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__print_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__gcc__jmpbuf_type_node_0_0);
MR_decl_entry(gcc__build_function_type_5_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_get_func_signature_1_0);
MR_decl_entry(fn__gcc__boolean_type_node_0_0);
MR_decl_entry(fn__gcc__char_type_node_0_0);
MR_decl_entry(fn__gcc__double_type_node_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module38)
	MR_init_entry1(mlds_to_gcc__build_type_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_type_6_0);
	MR_init_label10(mlds_to_gcc__build_type_6_0,3,5,260,16,14,19,20,22,23,24)
	MR_init_label10(mlds_to_gcc__build_type_6_0,25,26,8,29,32,35,36,34,38,39)
	MR_init_label10(mlds_to_gcc__build_type_6_0,40,31,43,46,49,48,52,51,47,54)
	MR_init_label10(mlds_to_gcc__build_type_6_0,45,57,59,61,64,63,66,68,70,72)
	MR_init_label6(mlds_to_gcc__build_type_6_0,74,253,76,79,81,83)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_type'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i3);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_tailcall_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0);
MR_def_label(mlds_to_gcc__build_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i5);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		mlds_to_gcc__build_type_6_0_i64);
MR_def_label(mlds_to_gcc__build_type_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i8);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	MR_r5 = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,4)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i260);
	}
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_Integer_0_0);
	}
MR_def_label(mlds_to_gcc__build_type_6_0,260)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		mlds_to_gcc__build_type_6_0_i16);
MR_def_label(mlds_to_gcc__build_type_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i14);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
MR_def_label(mlds_to_gcc__build_type_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__build_type_6_0_i19);
MR_def_label(mlds_to_gcc__build_type_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("note: undeclared class_type ", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		mlds_to_gcc__build_type_6_0_i20);
MR_def_label(mlds_to_gcc__build_type_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__print_3_0,
		mlds_to_gcc__build_type_6_0_i22);
MR_def_label(mlds_to_gcc__build_type_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", i.e. ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		mlds_to_gcc__build_type_6_0_i23);
MR_def_label(mlds_to_gcc__build_type_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_qualified_name_1_0,
		mlds_to_gcc__build_type_6_0_i24);
MR_def_label(mlds_to_gcc__build_type_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mlds_to_gcc__build_type_6_0_i25);
MR_def_label(mlds_to_gcc__build_type_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mlds_to_gcc__build_type_6_0_i26);
MR_def_label(mlds_to_gcc__build_type_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(mlds_to_gcc__build_type_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i29);
	}
	MR_np_tailcall_ent(fn__gcc__jmpbuf_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i31);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = (MR_Integer) 238;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		mlds_to_gcc__build_type_6_0_i32);
MR_def_label(mlds_to_gcc__build_type_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i34);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_type_6_0_i35);
MR_def_label(mlds_to_gcc__build_type_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__build_type_6_0_i36);
MR_def_label(mlds_to_gcc__build_type_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__gcc__cons_param_types_2_0,
		mlds_to_gcc__build_type_6_0_i38);
MR_def_label(mlds_to_gcc__build_type_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__build_type_6_0_i38);
MR_def_label(mlds_to_gcc__build_type_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_7_0,
		mlds_to_gcc__build_type_6_0_i39);
MR_def_label(mlds_to_gcc__build_type_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__build_type_6_0_i40);
MR_def_label(mlds_to_gcc__build_type_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_function_type_5_0,
		mlds_to_gcc__build_type_6_0_i253);
MR_def_label(mlds_to_gcc__build_type_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i43);
	}
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_Box_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i45);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_func_signature_1_0,
		mlds_to_gcc__build_type_6_0_i46);
MR_def_label(mlds_to_gcc__build_type_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i48);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__build_type_6_0_i49);
MR_def_label(mlds_to_gcc__build_type_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_6_0,
		mlds_to_gcc__build_type_6_0_i54);
MR_def_label(mlds_to_gcc__build_type_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i51);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_type_6_0_i52);
MR_def_label(mlds_to_gcc__build_type_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_6_0,
		mlds_to_gcc__build_type_6_0_i54);
MR_def_label(mlds_to_gcc__build_type_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_type\'/6", 36);
	MR_r3 = (MR_Word) MR_string_const("multiple return types", 21);
	}
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__build_type_6_0_i47);
MR_def_label(mlds_to_gcc__build_type_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_6_0,
		mlds_to_gcc__build_type_6_0_i54);
MR_def_label(mlds_to_gcc__build_type_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_function_type_5_0,
		mlds_to_gcc__build_type_6_0_i253);
MR_def_label(mlds_to_gcc__build_type_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i57);
	}
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i59);
	}
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_Box_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i61);
	}
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_Word_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i63);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		mlds_to_gcc__build_type_6_0_i64);
MR_def_label(mlds_to_gcc__build_type_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mlds_to_gcc__build_sized_array_type_5_0);
MR_def_label(mlds_to_gcc__build_type_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i66);
	}
	MR_np_tailcall_ent(fn__gcc__boolean_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i68);
	}
	MR_np_tailcall_ent(fn__gcc__char_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i70);
	}
	MR_np_tailcall_ent(fn__gcc__double_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i72);
	}
	MR_np_tailcall_ent(fn__gcc__integer_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i74);
	}
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i76);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		mlds_to_gcc__build_type_6_0_i253);
MR_def_label(mlds_to_gcc__build_type_6_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_pointer_type_4_0);
MR_def_label(mlds_to_gcc__build_type_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i79);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(mlds_to_gcc__build_rtti_type_5_0);
MR_def_label(mlds_to_gcc__build_type_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i81);
	}
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_TypeInfo_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i83);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_type\'/6", 36);
	MR_r3 = (MR_Word) MR_string_const("NYI: tabling in the asm backend", 31);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(mlds_to_gcc__build_type_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_type\'/6", 36);
	MR_r3 = (MR_Word) MR_string_const("unknown type", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module39)
	MR_init_entry1(mlds_to_gcc__rtti_enum_const_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__rtti_enum_const_2_0);
	MR_init_label10(mlds_to_gcc__rtti_enum_const_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(mlds_to_gcc__rtti_enum_const_2_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(mlds_to_gcc__rtti_enum_const_2_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(mlds_to_gcc__rtti_enum_const_2_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label10(mlds_to_gcc__rtti_enum_const_2_0,43,44,45,46,47,48,49,50,51,52)
	MR_init_label2(mlds_to_gcc__rtti_enum_const_2_0,53,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rtti_enum_const'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__rtti_enum_const_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_FUNCTION", 11)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_PREDICATE", 12)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_SECTAG_NONE", 14)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_SECTAG_LOCAL", 15)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i6);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_SECTAG_REMOTE", 16)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i7);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_SECTAG_VARIABLE", 18)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i8);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_DU", 18)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i9);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_HP", 18)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i10);
	}
	MR_r2 = (MR_Integer) 20;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_INT", 19)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i11);
	}
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_CHAR", 20)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i12);
	}
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_ENUM", 20)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i13);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_FUNC", 20)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i14);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_PRED", 20)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i15);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_VOID", 20)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i16);
	}
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_ARRAY", 21)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i17);
	}
	MR_r2 = (MR_Integer) 18;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_CURFR", 21)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i18);
	}
	MR_r2 = (MR_Integer) 21;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_DUMMY", 21)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i19);
	}
	MR_r2 = (MR_Integer) 42;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_EQUIV", 21)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i20);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_FLOAT", 21)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i21);
	}
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_MAXFR", 21)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i22);
	}
	MR_r2 = (MR_Integer) 22;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_NOTAG", 21)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i23);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_TUPLE", 21)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i24);
	}
	MR_r2 = (MR_Integer) 30;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_BITMAP", 22)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i25);
	}
	MR_r2 = (MR_Integer) 43;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_REDOFR", 22)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i26);
	}
	MR_r2 = (MR_Integer) 23;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_REDOIP", 22)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i27);
	}
	MR_r2 = (MR_Integer) 24;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_STRING", 22)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i28);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_SUCCIP", 22)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i29);
	}
	MR_r2 = (MR_Integer) 19;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_TICKET", 22)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i30);
	}
	MR_r2 = (MR_Integer) 26;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_FOREIGN", 23)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i31);
	}
	MR_r2 = (MR_Integer) 37;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_SUBGOAL", 23)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i32);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_UNKNOWN", 23)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i33);
	}
	MR_r2 = (MR_Integer) 44;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_TYPEDESC", 24)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i34);
	}
	MR_r2 = (MR_Integer) 35;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_TYPEINFO", 24)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i35);
	}
	MR_r2 = (MR_Integer) 16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_SECTAG_NONE_DIRECT_ARG", 25)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i36);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_C_POINTER", 25)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i37);
	}
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_DU_USEREQ", 25)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i38);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_REFERENCE", 25)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i39);
	}
	MR_r2 = (MR_Integer) 38;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_TRAIL_PTR", 25)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i40);
	}
	MR_r2 = (MR_Integer) 25;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_ENUM_USEREQ", 27)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i41);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_EQUIV_GROUND", 28)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i42);
	}
	MR_r2 = (MR_Integer) 29;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_NOTAG_GROUND", 28)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i43);
	}
	MR_r2 = (MR_Integer) 27;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_NOTAG_USEREQ", 28)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i44);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_TYPECTORDESC", 28)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i45);
	}
	MR_r2 = (MR_Integer) 36;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_TYPECTORINFO", 28)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i46);
	}
	MR_r2 = (MR_Integer) 33;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_RESERVED_ADDR", 29)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i47);
	}
	MR_r2 = (MR_Integer) 31;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_TYPECLASSINFO", 29)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i48);
	}
	MR_r2 = (MR_Integer) 17;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_PSEUDOTYPEDESC", 30)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i49);
	}
	MR_r2 = (MR_Integer) 41;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_STABLE_FOREIGN", 30)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i50);
	}
	MR_r2 = (MR_Integer) 40;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_STABLE_C_POINTER", 32)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i51);
	}
	MR_r2 = (MR_Integer) 39;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_BASETYPECLASSINFO", 33)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i52);
	}
	MR_r2 = (MR_Integer) 34;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ", 35)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i53);
	}
	MR_r2 = (MR_Integer) 28;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("MR_TYPECTOR_REP_RESERVED_ADDR_USEREQ", 36)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i1);
	}
	MR_r2 = (MR_Integer) 32;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module40)
	MR_init_entry1(fn__mlds_to_gcc__get_class_type_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__get_class_type_name_1_0);
	MR_init_label3(fn__mlds_to_gcc__get_class_type_name_1_0,4,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_class_type_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__get_class_type_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__get_class_type_name_1_0_i4);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r3, 2);
	MR_GOTO_LAB(fn__mlds_to_gcc__get_class_type_name_1_0_i3);
MR_def_label(fn__mlds_to_gcc__get_class_type_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__get_class_type_name_1_0_i2);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__get_class_type_name_1_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
MR_def_label(fn__mlds_to_gcc__get_class_type_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(fn__mlds_to_gcc__get_class_type_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("function \140mlds_to_gcc.get_class_type_name\'/1", 44);
	MR_r3 = (MR_Word) MR_string_const("non-class_type in get_type_name", 31);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__append_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module41)
	MR_init_entry1(fn__mlds_to_gcc__build_data_var_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__build_data_var_name_2_0);
	MR_init_label7(fn__mlds_to_gcc__build_data_var_name_2_0,2,6,3,4,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_data_var_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__build_data_var_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_data_name_1_0,
		fn__mlds_to_gcc__build_data_var_name_2_0_i2);
MR_def_label(fn__mlds_to_gcc__build_data_var_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_var_name_2_0_i4);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		fn__mlds_to_gcc__build_data_var_name_2_0_i6);
MR_def_label(fn__mlds_to_gcc__build_data_var_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_var_name_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__mlds_to_gcc__build_data_var_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(fn__mlds_to_gcc__build_data_var_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		fn__mlds_to_gcc__build_data_var_name_2_0_i8);
MR_def_label(fn__mlds_to_gcc__build_data_var_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__mlds_to_gcc__build_data_var_name_2_0_i9);
MR_def_label(fn__mlds_to_gcc__build_data_var_name_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__string__append_2_0,
		fn__mlds_to_gcc__build_data_var_name_2_0_i10);
MR_def_label(fn__mlds_to_gcc__build_data_var_name_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module42)
	MR_init_entry1(fn__mlds_to_gcc__MR_intptr_t_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__MR_intptr_t_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'MR_intptr_t'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__MR_intptr_t_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__intptr_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__bit_not_expr_0_0);
MR_decl_entry(fn__gcc__hash_string_func_decl_0_0);
MR_decl_entry(gcc__build_func_addr_expr_4_0);
MR_decl_entry(gcc__empty_arg_list_3_0);
MR_decl_entry(gcc__cons_arg_list_5_0);
MR_decl_entry(gcc__build_call_expr_6_0);
MR_decl_entry(fn__gcc__truth_not_expr_0_0);
MR_decl_entry(gcc__build_unop_6_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(gcc__build_int_4_0);
MR_decl_entry(fn__gcc__lshift_expr_0_0);
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);
MR_decl_entry(fn__gcc__bit_and_expr_0_0);
MR_decl_entry(gcc__build_binop_7_0);
MR_decl_entry(fn__gcc__rshift_expr_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module43)
	MR_init_entry1(mlds_to_gcc__build_unop_expr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_unop_expr_6_0);
	MR_init_label10(mlds_to_gcc__build_unop_expr_6_0,4,3,8,9,10,11,7,14,15,13)
	MR_init_label10(mlds_to_gcc__build_unop_expr_6_0,18,19,17,23,25,26,27,28,29,30)
	MR_init_label10(mlds_to_gcc__build_unop_expr_6_0,24,35,36,37,38,39,34,42,43,44)
	MR_init_label3(mlds_to_gcc__build_unop_expr_6_0,45,41,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_unop_expr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_unop_expr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_expr_6_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__gcc__bit_not_expr_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i4);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i15);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_expr_6_0_i7);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__gcc__hash_string_func_decl_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i8);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_func_addr_expr_4_0,
		mlds_to_gcc__build_unop_expr_6_0_i9);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(gcc__empty_arg_list_3_0,
		mlds_to_gcc__build_unop_expr_6_0_i10);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__cons_arg_list_5_0,
		mlds_to_gcc__build_unop_expr_6_0_i11);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_call_expr_6_0);
	}
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_expr_6_0_i13);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__gcc__truth_not_expr_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i14);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i15);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_unop_6_0);
	}
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_expr_6_0_i17);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r3, 0), 2);
	MR_r2 = (MR_Integer) 222;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		mlds_to_gcc__build_unop_expr_6_0_i18);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_unop_expr_6_0_i19);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__lshift_expr_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i38);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_expr_6_0_i23);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_expr_6_0_i24);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r3, 0), 2);
	MR_r2 = (MR_Integer) 222;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		mlds_to_gcc__build_unop_expr_6_0_i25);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		mlds_to_gcc__build_unop_expr_6_0_i26);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_unop_expr_6_0_i27);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_not_expr_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i28);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i29);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(gcc__build_unop_6_0,
		mlds_to_gcc__build_unop_expr_6_0_i30);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_and_expr_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i38);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_expr_6_0_i34);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r3, 0), 2);
	MR_r2 = (MR_Integer) 222;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		mlds_to_gcc__build_unop_expr_6_0_i35);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		mlds_to_gcc__build_unop_expr_6_0_i36);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_unop_expr_6_0_i37);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_and_expr_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i38);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i39);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
	}
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_expr_6_0_i41);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r3, 0), 2);
	MR_r2 = (MR_Integer) 222;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		mlds_to_gcc__build_unop_expr_6_0_i42);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_unop_expr_6_0_i43);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__rshift_expr_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i44);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_unop_expr_6_0_i45);
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
	}
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_expr_6_0_i47);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(mlds_to_gcc__build_unop_expr_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_unop_expr\'/6", 41);
	MR_r3 = (MR_Word) MR_string_const("hash_string2/3", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__bit_ior_expr_0_0);
MR_decl_entry(fn__gcc__bit_xor_expr_0_0);
MR_decl_entry(fn__gcc__minus_expr_0_0);
MR_decl_entry(fn__gcc__eq_expr_0_0);
MR_decl_entry(fn__gcc__rdiv_expr_0_0);
MR_decl_entry(fn__gcc__ge_expr_0_0);
MR_decl_entry(fn__gcc__gt_expr_0_0);
MR_decl_entry(fn__gcc__le_expr_0_0);
MR_decl_entry(fn__gcc__lt_expr_0_0);
MR_decl_entry(fn__gcc__ne_expr_0_0);
MR_decl_entry(fn__gcc__plus_expr_0_0);
MR_decl_entry(fn__gcc__mult_expr_0_0);
MR_decl_entry(fn__gcc__trunc_div_expr_0_0);
MR_decl_entry(fn__gcc__trunc_mod_expr_0_0);
MR_decl_entry(fn__gcc__truth_andif_expr_0_0);
MR_decl_entry(fn__gcc__truth_orif_expr_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module44)
	MR_init_entry1(mlds_to_gcc__convert_binary_op_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__convert_binary_op_3_0);
	MR_init_label10(mlds_to_gcc__convert_binary_op_3_0,3,6,9,13,12,16,15,18,22,21)
	MR_init_label10(mlds_to_gcc__convert_binary_op_3_0,25,24,28,27,31,30,34,33,36,40)
	MR_init_label10(mlds_to_gcc__convert_binary_op_3_0,39,42,46,45,48,51,55,54,58,57)
	MR_init_label10(mlds_to_gcc__convert_binary_op_3_0,61,60,64,63,66,69,72,76,75,79)
	MR_init_label10(mlds_to_gcc__convert_binary_op_3_0,78,82,81,84,88,89,87,90,92,94)
	MR_init_label9(mlds_to_gcc__convert_binary_op_3_0,96,98,100,102,104,106,108,110,112)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_binary_op'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__convert_binary_op_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__bit_and_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i88);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i6);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__bit_ior_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i88);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i9);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__bit_xor_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i88);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i12);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__minus_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i13);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i15);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__eq_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i16);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,30)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i18);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__rdiv_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i46);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,31)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i21);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__eq_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i22);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,36)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i24);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__ge_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i25);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,34)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i27);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__gt_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i28);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,35)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i30);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__le_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i31);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,33)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i33);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__lt_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i34);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,28)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i36);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__minus_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i46);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,32)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i39);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__ne_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i40);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,27)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i42);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__plus_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i46);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,29)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i45);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__mult_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i46);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__double_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i48);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__plus_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i88);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i51);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__trunc_div_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i88);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,25)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i54);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__ge_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i55);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,23)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i57);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__gt_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i58);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,24)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i60);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__le_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i61);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,22)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i63);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__lt_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i64);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i66);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__trunc_mod_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i88);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i69);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__mult_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i88);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i72);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__minus_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i88);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i75);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__truth_andif_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i76);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i78);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__truth_orif_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i79);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i81);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__ne_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i82);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i84);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__lshift_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i88);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i87);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__rshift_expr_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i88);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__convert_binary_op_3_0_i89);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i90);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("array_index", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,39)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i92);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("compound_eq", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,40)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i94);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("compound_lt", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,38)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i96);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("float_from_dword", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,37)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i98);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("float_word_bits", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,21)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i100);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("str_cmp", 7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i102);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("str_eq", 6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,20)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i104);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("str_ge", 6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i106);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("str_gt", 6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,19)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i108);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("str_le", 6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i110);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("str_lt", 6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(mlds_to_gcc__convert_binary_op_3_0_i112);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("str_ne", 6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__convert_binary_op_3_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.convert_binary_op\'/3", 43);
	MR_r3 = (MR_Word) MR_string_const("unsigned_le", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__empty_param_decls_0_0);
MR_decl_entry(gcc__build_param_decl_5_0);
MR_decl_entry(fn__gcc__cons_param_decls_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module45)
	MR_init_entry1(mlds_to_gcc__build_dummy_param_decls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_dummy_param_decls_4_0);
	MR_init_label3(mlds_to_gcc__build_dummy_param_decls_4_0,16,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_dummy_param_decls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_dummy_param_decls_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_dummy_param_decls_4_0_i16);
	}
	MR_np_tailcall_ent(fn__gcc__empty_param_decls_0_0);
MR_def_label(mlds_to_gcc__build_dummy_param_decls_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<unnamed param>", 15);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(gcc__build_param_decl_5_0,
		mlds_to_gcc__build_dummy_param_decls_4_0_i5);
MR_def_label(mlds_to_gcc__build_dummy_param_decls_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(mlds_to_gcc__build_dummy_param_decls_4_0,
		mlds_to_gcc__build_dummy_param_decls_4_0_i6);
MR_def_label(mlds_to_gcc__build_dummy_param_decls_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__gcc__cons_param_decls_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module46)
	MR_init_entry1(mlds_to_gcc__get_qualified_func_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__get_qualified_func_name_4_0);
	MR_init_label10(mlds_to_gcc__get_qualified_func_name_4_0,4,5,7,11,12,13,14,15,16,19)
	MR_init_label10(mlds_to_gcc__get_qualified_func_name_4_0,18,2,21,27,25,29,23,38,39,40)
	MR_init_label1(mlds_to_gcc__get_qualified_func_name_4_0,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_qualified_func_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__get_qualified_func_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_r1, 2);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i2);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(2, MR_r2, 0);
	MR_sv(4) = MR_tfield(2, MR_r2, 1);
	MR_sv(5) = MR_tfield(2, MR_r2, 2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mlds_to_gcc__get_pred_label_name_2_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i4);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i5);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i7);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i14);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i11);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i12);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i13);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i14);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i15);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i16);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i19);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i21);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i21);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.get_func_name\'/3", 39);
	MR_r3 = (MR_Word) MR_string_const("non-function", 12);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i21);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i25);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i23);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i27);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i23);
	}
	MR_r2 = MR_tfield(2, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i23);
	}
	MR_r3 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i23);
	}
	MR_r3 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i23);
	}
	MR_r3 = MR_tfield(0, MR_r2, 2);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i23);
	}
	MR_r3 = MR_tfield(0, MR_r2, 3);
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i23);
	}
	MR_r3 = MR_tfield(0, MR_r2, 4);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i23);
	}
	MR_r3 = MR_tfield(0, MR_r2, 5);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_qualified_func_name_4_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i38);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i39);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i40);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_qualified_func_name_4_0_i41);
MR_def_label(mlds_to_gcc__get_qualified_func_name_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__build_function_decl_8_0);

MR_BEGIN_MODULE(mlds_to_gcc_module47)
	MR_init_entry1(mlds_to_gcc__build_code_addr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_code_addr_5_0);
	MR_init_label10(mlds_to_gcc__build_code_addr_5_0,3,5,10,9,13,12,8,15,16,17)
	MR_init_label2(mlds_to_gcc__build_code_addr_5_0,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_code_addr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_code_addr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_code_addr_5_0_i3);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = MR_r2;
	MR_sv(4) = MR_tfield(1, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		mlds_to_gcc__build_code_addr_5_0_i5);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		mlds_to_gcc__build_code_addr_5_0_i5);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_sv(3);
	MR_tfield(2, MR_r2, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(5);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_code_addr_5_0_i9);
	}
	MR_r2 = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__build_code_addr_5_0_i10);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(mlds_to_gcc__get_qualified_func_name_4_0,
		mlds_to_gcc__build_code_addr_5_0_i15);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_code_addr_5_0_i12);
	}
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_code_addr_5_0_i13);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__get_qualified_func_name_4_0,
		mlds_to_gcc__build_code_addr_5_0_i15);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.get_return_type\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("multiple return types", 21);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__build_code_addr_5_0_i8);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mlds_to_gcc__get_qualified_func_name_4_0,
		mlds_to_gcc__build_code_addr_5_0_i15);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__build_code_addr_5_0_i16);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_7_0,
		mlds_to_gcc__build_code_addr_5_0_i17);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(mlds_to_gcc__build_dummy_param_decls_4_0,
		mlds_to_gcc__build_code_addr_5_0_i18);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_function_decl_8_0,
		mlds_to_gcc__build_code_addr_5_0_i19);
MR_def_label(mlds_to_gcc__build_code_addr_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(gcc__build_func_addr_expr_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__build_extern_var_decl_5_0);
MR_decl_entry(fn__gcc__var_expr_1_0);
MR_decl_entry(gcc__build_addr_expr_4_0);
MR_decl_entry(gcc__build_float_4_0);
MR_decl_entry(gcc__build_null_pointer_3_0);
MR_decl_entry(gcc__build_string_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module48)
	MR_init_entry1(mlds_to_gcc__build_rval_const_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_rval_const_5_0);
	MR_init_label10(mlds_to_gcc__build_rval_const_5_0,3,5,8,12,9,10,14,15,16,18)
	MR_init_label10(mlds_to_gcc__build_rval_const_5_0,19,20,102,7,23,25,27,29,31,33)
	MR_init_label3(mlds_to_gcc__build_rval_const_5_0,35,37,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_rval_const'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_rval_const_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i3);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(gcc__build_int_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i5);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(mlds_to_gcc__build_code_addr_5_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_data_name_1_0,
		mlds_to_gcc__build_rval_const_5_0_i8);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		mlds_to_gcc__build_rval_const_5_0_i12);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_rval_const_5_0_i18);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		mlds_to_gcc__build_rval_const_5_0_i14);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		mlds_to_gcc__build_rval_const_5_0_i15);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__string__append_2_0,
		mlds_to_gcc__build_rval_const_5_0_i16);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_rval_const_5_0_i18);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_rval_const_5_0_i19);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_extern_var_decl_5_0,
		mlds_to_gcc__build_rval_const_5_0_i20);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__var_expr_1_0,
		mlds_to_gcc__build_rval_const_5_0_i102);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__build_addr_expr_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i23);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(gcc__build_int_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(gcc__build_int_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i27);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(gcc__build_float_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i29);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_tailcall_ent(gcc__build_int_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i31);
	}
	MR_np_tailcall_ent(gcc__build_null_pointer_3_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i33);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(gcc__build_string_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(gcc__build_int_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_rval_const\'/5", 42);
	MR_r3 = (MR_Word) MR_string_const("foreign tags not yet supported with \140--target asm\'", 50);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i39);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_rval_const\'/5", 42);
	MR_r3 = (MR_Word) MR_string_const("debugging not yet supported with \140--target asm\'", 47);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_rval_const\'/5", 42);
	MR_r3 = (MR_Word) MR_string_const("named consts not yet supported with \140--target asm\'", 50);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__convert_type_5_0);
MR_decl_entry(gcc__build_pointer_deref_4_0);
MR_decl_entry(fn__map__lookup_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_field_decl_0;
MR_decl_entry(gcc__build_component_ref_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_var_decl_0;
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_module_name_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module49)
	MR_init_entry1(mlds_to_gcc__build_lval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_lval_5_0);
	MR_init_label10(mlds_to_gcc__build_lval_5_0,6,9,10,11,12,13,8,15,16,17)
	MR_init_label10(mlds_to_gcc__build_lval_5_0,18,19,20,21,22,23,25,27,5,31)
	MR_init_label10(mlds_to_gcc__build_lval_5_0,29,35,36,39,40,41,42,43,38,45)
	MR_init_label10(mlds_to_gcc__build_lval_5_0,46,47,48,49,50,51,52,53,54,55)
	MR_init_label10(mlds_to_gcc__build_lval_5_0,56,57,58,59,3,197,62,70,68,75)
	MR_init_label10(mlds_to_gcc__build_lval_5_0,73,79,80,81,83,78,87,88,89,92)
	MR_init_label6(mlds_to_gcc__build_lval_5_0,93,201,86,96,97,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_lval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_lval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i5);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_lval_5_0_i6);
MR_def_label(mlds_to_gcc__build_lval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i8);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_sv(2), 0), 2);
	MR_r2 = (MR_Integer) 222;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		mlds_to_gcc__build_lval_5_0_i9);
MR_def_label(mlds_to_gcc__build_lval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		mlds_to_gcc__build_lval_5_0_i10);
MR_def_label(mlds_to_gcc__build_lval_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ~(((MR_Integer) MR_r1 - (MR_Integer) 1));
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_lval_5_0_i11);
MR_def_label(mlds_to_gcc__build_lval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_and_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i12);
MR_def_label(mlds_to_gcc__build_lval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_lval_5_0_i13);
MR_def_label(mlds_to_gcc__build_lval_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i18);
MR_def_label(mlds_to_gcc__build_lval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_lval_5_0_i15);
MR_def_label(mlds_to_gcc__build_lval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__minus_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i16);
MR_def_label(mlds_to_gcc__build_lval_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_lval_5_0_i17);
MR_def_label(mlds_to_gcc__build_lval_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i18);
MR_def_label(mlds_to_gcc__build_lval_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		mlds_to_gcc__build_lval_5_0_i19);
MR_def_label(mlds_to_gcc__build_lval_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_lval_5_0_i20);
MR_def_label(mlds_to_gcc__build_lval_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__convert_type_5_0,
		mlds_to_gcc__build_lval_5_0_i21);
MR_def_label(mlds_to_gcc__build_lval_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_deref_4_0,
		mlds_to_gcc__build_lval_5_0_i22);
MR_def_label(mlds_to_gcc__build_lval_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_tfield(0, MR_tempr1, 0), 0);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__get_class_type_name_1_0,
		mlds_to_gcc__build_lval_5_0_i23);
MR_def_label(mlds_to_gcc__build_lval_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR1_ADDR(ml_backend__mlds, mlds_fully_qualified_name);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		mlds_to_gcc__build_lval_5_0_i25);
MR_def_label(mlds_to_gcc__build_lval_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		mlds_to_gcc__build_lval_5_0_i27);
MR_def_label(mlds_to_gcc__build_lval_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(gcc__build_component_ref_5_0);
	}
MR_def_label(mlds_to_gcc__build_lval_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r5 = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_tfield(0, MR_r1, 3);
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	if (MR_LTAGS_TESTR(MR_sv(7),0,5)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i31);
	}
	MR_r1 = MR_r5;
	MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i35);
MR_def_label(mlds_to_gcc__build_lval_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i29);
	}
	MR_r4 = MR_tfield(2, MR_sv(7), 0);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i29);
	}
	MR_r1 = MR_r5;
	MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i35);
MR_def_label(mlds_to_gcc__build_lval_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_lval\'/5", 36);
	MR_r3 = (MR_Word) MR_string_const("unexpected field type", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__build_lval_5_0_i35);
MR_def_label(mlds_to_gcc__build_lval_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_lval_5_0_i36);
MR_def_label(mlds_to_gcc__build_lval_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i38);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_sv(2), 0), 2);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 222;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		mlds_to_gcc__build_lval_5_0_i39);
MR_def_label(mlds_to_gcc__build_lval_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		mlds_to_gcc__build_lval_5_0_i40);
MR_def_label(mlds_to_gcc__build_lval_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ~(((MR_Integer) MR_r1 - (MR_Integer) 1));
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_lval_5_0_i41);
MR_def_label(mlds_to_gcc__build_lval_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_and_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i42);
MR_def_label(mlds_to_gcc__build_lval_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_lval_5_0_i43);
MR_def_label(mlds_to_gcc__build_lval_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i48);
MR_def_label(mlds_to_gcc__build_lval_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_sv(2), 0), 2);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_lval_5_0_i45);
MR_def_label(mlds_to_gcc__build_lval_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__minus_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i46);
MR_def_label(mlds_to_gcc__build_lval_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_lval_5_0_i47);
MR_def_label(mlds_to_gcc__build_lval_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i48);
MR_def_label(mlds_to_gcc__build_lval_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_lval_5_0_i49);
MR_def_label(mlds_to_gcc__build_lval_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 226;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		mlds_to_gcc__build_lval_5_0_i50);
MR_def_label(mlds_to_gcc__build_lval_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_lval_5_0_i51);
MR_def_label(mlds_to_gcc__build_lval_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__mult_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i52);
MR_def_label(mlds_to_gcc__build_lval_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_intptr_t_0_0,
		mlds_to_gcc__build_lval_5_0_i53);
MR_def_label(mlds_to_gcc__build_lval_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i54);
MR_def_label(mlds_to_gcc__build_lval_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__plus_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i55);
MR_def_label(mlds_to_gcc__build_lval_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_lval_5_0_i56);
MR_def_label(mlds_to_gcc__build_lval_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i57);
MR_def_label(mlds_to_gcc__build_lval_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		mlds_to_gcc__build_lval_5_0_i58);
MR_def_label(mlds_to_gcc__build_lval_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_lval_5_0_i59);
MR_def_label(mlds_to_gcc__build_lval_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__convert_type_5_0,
		mlds_to_gcc__build_lval_5_0_i197);
MR_def_label(mlds_to_gcc__build_lval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i62);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_lval_5_0_i197);
MR_def_label(mlds_to_gcc__build_lval_5_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(gcc__build_pointer_deref_4_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i65);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_tfield(3, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tfield(0, MR_tempr2, 2));
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_tempr3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_tfield(0, MR_sv(2), 2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		mlds_to_gcc__build_lval_5_0_i70);
MR_def_label(mlds_to_gcc__build_lval_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i68);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__gcc__var_expr_1_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_tfield(0, MR_tfield(0, MR_sv(2), 0), 1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		mlds_to_gcc__build_lval_5_0_i75);
MR_def_label(mlds_to_gcc__build_lval_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i73);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__gcc__var_expr_1_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mlds_to_gcc__build_lval_5_0_i79);
MR_def_label(mlds_to_gcc__build_lval_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		mlds_to_gcc__build_lval_5_0_i80);
MR_def_label(mlds_to_gcc__build_lval_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		mlds_to_gcc__build_lval_5_0_i81);
MR_def_label(mlds_to_gcc__build_lval_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i78);
	}
	MR_r1 = MR_tfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(mlds_to_gcc__rtti_enum_const_2_0,
		mlds_to_gcc__build_lval_5_0_i83);
MR_def_label(mlds_to_gcc__build_lval_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i78);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(gcc__build_int_4_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mlds_to_gcc__build_lval_5_0_i87);
MR_def_label(mlds_to_gcc__build_lval_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		mlds_to_gcc__build_lval_5_0_i88);
MR_def_label(mlds_to_gcc__build_lval_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		mlds_to_gcc__build_lval_5_0_i89);
MR_def_label(mlds_to_gcc__build_lval_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i86);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("dummy_var", 9)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i86);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_data_var_name_2_0,
		mlds_to_gcc__build_lval_5_0_i92);
MR_def_label(mlds_to_gcc__build_lval_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_Word_0_0,
		mlds_to_gcc__build_lval_5_0_i93);
MR_def_label(mlds_to_gcc__build_lval_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_extern_var_decl_5_0,
		mlds_to_gcc__build_lval_5_0_i201);
MR_def_label(mlds_to_gcc__build_lval_5_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__gcc__var_expr_1_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_qualified_name_1_0,
		mlds_to_gcc__build_lval_5_0_i96);
MR_def_label(mlds_to_gcc__build_lval_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("undeclared variable: ", 21);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_lval_5_0_i97);
MR_def_label(mlds_to_gcc__build_lval_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_lval\'/5", 36);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
MR_def_label(mlds_to_gcc__build_lval_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_lval\'/5", 36);
	MR_r3 = (MR_Word) MR_string_const("global_var_ref NYI", 18);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module50)
	MR_init_entry1(mlds_to_gcc__build_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_rval_5_0);
	MR_init_label10(mlds_to_gcc__build_rval_5_0,3,5,7,62,9,13,14,15,16,12)
	MR_init_label3(mlds_to_gcc__build_rval_5_0,18,20,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr1, 3);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(mlds_to_gcc__build_std_binop_7_0);
	}
MR_def_label(mlds_to_gcc__build_rval_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i5);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(mlds_to_gcc__build_rval_const_5_0);
MR_def_label(mlds_to_gcc__build_rval_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(mlds_to_gcc__build_lval_5_0);
MR_def_label(mlds_to_gcc__build_rval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i9);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(mlds_to_gcc__build_lval_5_0,
		mlds_to_gcc__build_rval_5_0_i62);
MR_def_label(mlds_to_gcc__build_rval_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_addr_expr_4_0);
MR_def_label(mlds_to_gcc__build_rval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i12);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_rval_5_0_i13);
MR_def_label(mlds_to_gcc__build_rval_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_rval_5_0_i14);
MR_def_label(mlds_to_gcc__build_rval_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__plus_expr_0_0,
		mlds_to_gcc__build_rval_5_0_i15);
MR_def_label(mlds_to_gcc__build_rval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rval_5_0_i16);
MR_def_label(mlds_to_gcc__build_rval_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
	}
MR_def_label(mlds_to_gcc__build_rval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(mlds_to_gcc__build_unop_6_0);
	}
MR_def_label(mlds_to_gcc__build_rval_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_rval\'/5", 36);
	MR_r3 = (MR_Word) MR_string_const("scalar_common rval", 18);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__build_rval_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_rval\'/5", 36);
	MR_r3 = (MR_Word) MR_string_const("self rval", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__build_rval_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_rval\'/5", 36);
	MR_r3 = (MR_Word) MR_string_const("vector_common rval", 18);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__box_float_func_decl_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module51)
	MR_init_entry1(mlds_to_gcc__build_unop_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_unop_6_0);
	MR_init_label10(mlds_to_gcc__build_unop_6_0,6,10,4,15,21,13,3,31,33,37)
	MR_init_label5(mlds_to_gcc__build_unop_6_0,41,42,43,147,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_unop'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_unop_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i3);
	}
	MR_r5 = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r5;
	MR_np_call_localret_ent(fn__gcc__box_float_func_decl_0_0,
		mlds_to_gcc__build_unop_6_0_i10);
MR_def_label(mlds_to_gcc__build_unop_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i4);
	}
	MR_r1 = MR_tfield(2, MR_r5, 0);
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i4);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r5;
	}
	MR_np_call_localret_ent(fn__gcc__box_float_func_decl_0_0,
		mlds_to_gcc__build_unop_6_0_i10);
MR_def_label(mlds_to_gcc__build_unop_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mlds_to_gcc__build_call_6_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,4)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i13);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,5,1);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(mlds_to_gcc__build_rval_5_0);
	}
MR_def_label(mlds_to_gcc__build_unop_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(mlds_to_gcc__build_cast_rval_6_0);
	}
MR_def_label(mlds_to_gcc__build_unop_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_unop\'/6", 36);
	MR_r3 = (MR_Word) MR_string_const("boxing non-lval, non-null array", 31);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_np_tailcall_ent(mlds_to_gcc__build_cast_rval_6_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i31);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_tailcall_ent(mlds_to_gcc__build_cast_rval_6_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i33);
	}
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_np_tailcall_ent(mlds_to_gcc__build_std_unop_6_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i37);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_unop_6_0_i41);
MR_def_label(mlds_to_gcc__build_unop_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(2, MR_r5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i35);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i35);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_tempr3 = MR_r5;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_unop_6_0_i41);
MR_def_label(mlds_to_gcc__build_unop_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__double_type_node_0_0,
		mlds_to_gcc__build_unop_6_0_i42);
MR_def_label(mlds_to_gcc__build_unop_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_unop_6_0_i43);
MR_def_label(mlds_to_gcc__build_unop_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__convert_type_5_0,
		mlds_to_gcc__build_unop_6_0_i147);
MR_def_label(mlds_to_gcc__build_unop_6_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__build_pointer_deref_4_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_np_tailcall_ent(mlds_to_gcc__build_cast_rval_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module52)
	MR_init_entry1(mlds_to_gcc__build_cast_rval_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_cast_rval_6_0);
	MR_init_label2(mlds_to_gcc__build_cast_rval_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_cast_rval'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_cast_rval_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_cast_rval_6_0_i2);
MR_def_label(mlds_to_gcc__build_cast_rval_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_cast_rval_6_0_i3);
MR_def_label(mlds_to_gcc__build_cast_rval_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__convert_type_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module53)
	MR_init_entry1(mlds_to_gcc__build_std_unop_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_std_unop_6_0);
	MR_init_label1(mlds_to_gcc__build_std_unop_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_std_unop'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_std_unop_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_std_unop_6_0_i2);
MR_def_label(mlds_to_gcc__build_std_unop_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mlds_to_gcc__build_unop_expr_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__strcmp_func_decl_0_0);
MR_decl_entry(fn__gcc__array_ref_0_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module54)
	MR_init_entry1(mlds_to_gcc__build_std_binop_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_std_binop_7_0);
	MR_init_label10(mlds_to_gcc__build_std_binop_7_0,5,7,9,11,13,4,17,20,21,22)
	MR_init_label10(mlds_to_gcc__build_std_binop_7_0,3,27,25,29,30,33,34,35,31,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_std_binop'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_std_binop_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i5);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__eq_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,20)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i7);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__ge_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i9);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__gt_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,19)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i11);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__le_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i13);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__lt_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i3);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__ne_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__strcmp_func_decl_0_0,
		mlds_to_gcc__build_std_binop_7_0_i17);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_call_6_0,
		mlds_to_gcc__build_std_binop_7_0_i20);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_std_binop_7_0_i21);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i22);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
	}
MR_def_label(mlds_to_gcc__build_std_binop_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,26)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i25);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__le_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i27);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_std_binop\'/7", 41);
	MR_r3 = (MR_Word) MR_string_const("unsigned comparison operator", 28);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_std_binop_7_0_i29);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_std_binop_7_0_i30);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__gcc__array_ref_0_0,
		mlds_to_gcc__build_std_binop_7_0_i33);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,
		mlds_to_gcc__build_std_binop_7_0_i34);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_std_binop_7_0_i35);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
	}
MR_def_label(mlds_to_gcc__build_std_binop_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__convert_binary_op_3_0,
		mlds_to_gcc__build_std_binop_7_0_i36);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module55)
	MR_init_entry1(mlds_to_gcc__build_call_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_call_6_0);
	MR_init_label2(mlds_to_gcc__build_call_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(gcc__build_func_addr_expr_4_0,
		mlds_to_gcc__build_call_6_0_i2);
MR_def_label(mlds_to_gcc__build_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_args_5_0,
		mlds_to_gcc__build_call_6_0_i3);
MR_def_label(mlds_to_gcc__build_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__build_call_expr_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module56)
	MR_init_entry1(mlds_to_gcc__build_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_args_5_0);
	MR_init_label3(mlds_to_gcc__build_args_5_0,16,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_args_5_0_i16);
	}
	MR_np_tailcall_ent(gcc__empty_arg_list_3_0);
MR_def_label(mlds_to_gcc__build_args_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_args_5_0_i5);
MR_def_label(mlds_to_gcc__build_args_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(mlds_to_gcc__build_args_5_0,
		mlds_to_gcc__build_args_5_0_i6);
MR_def_label(mlds_to_gcc__build_args_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__cons_arg_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__get_array_elem_type_4_0);
MR_decl_entry(gcc__get_struct_field_decls_4_0);
MR_decl_entry(gcc__build_initializer_expr_5_0);

MR_BEGIN_MODULE(mlds_to_gcc_module57)
	MR_init_entry1(mlds_to_gcc__build_initializer_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_initializer_6_0);
	MR_init_label6(mlds_to_gcc__build_initializer_6_0,4,3,7,10,11,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_initializer'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_initializer_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_initializer_6_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(gcc__get_array_elem_type_4_0,
		mlds_to_gcc__build_initializer_6_0_i4);
MR_def_label(mlds_to_gcc__build_initializer_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_initializer_6_0_i11);
MR_def_label(mlds_to_gcc__build_initializer_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_initializer_6_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(mlds_to_gcc__build_rval_5_0);
MR_def_label(mlds_to_gcc__build_initializer_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_initializer_6_0_i9);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(gcc__get_struct_field_decls_4_0,
		mlds_to_gcc__build_initializer_6_0_i10);
MR_def_label(mlds_to_gcc__build_initializer_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_initializer_6_0_i11);
MR_def_label(mlds_to_gcc__build_initializer_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_initializer_expr_5_0);
MR_def_label(mlds_to_gcc__build_initializer_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_initializer\'/6", 43);
	MR_r3 = (MR_Word) MR_string_const("no_initializer (build_initializer)", 34);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__empty_init_list_3_0);
MR_decl_entry(gcc__array_elem_initializer_4_0);
MR_decl_entry(gcc__cons_init_list_6_0);

MR_BEGIN_MODULE(mlds_to_gcc_module58)
	MR_init_entry1(mlds_to_gcc__build_array_initializer_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_array_initializer_7_0);
	MR_init_label10(mlds_to_gcc__build_array_initializer_7_0,40,5,8,9,7,11,14,15,16,13)
	MR_init_label2(mlds_to_gcc__build_array_initializer_7_0,6,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_array_initializer'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_array_initializer_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_array_initializer_7_0_i40);
	}
	MR_np_tailcall_ent(gcc__empty_init_list_3_0);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__array_elem_initializer_4_0,
		mlds_to_gcc__build_array_initializer_7_0_i5);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_array_initializer_7_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 0);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(gcc__get_array_elem_type_4_0,
		mlds_to_gcc__build_array_initializer_7_0_i8);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_array_initializer_7_0_i9);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_array_initializer_7_0_i16);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_array_initializer_7_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_array_initializer_7_0_i16);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_array_initializer_7_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(gcc__get_struct_field_decls_4_0,
		mlds_to_gcc__build_array_initializer_7_0_i14);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_array_initializer_7_0_i15);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_array_initializer_7_0_i16);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(5) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	}
	MR_np_localcall_lab(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_array_initializer_7_0_i18);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_initializer\'/6", 43);
	MR_r3 = (MR_Word) MR_string_const("no_initializer (build_initializer)", 34);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__build_array_initializer_7_0_i6);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_array_initializer_7_0_i18);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__cons_init_list_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__next_field_decl_5_0);
MR_decl_entry(gcc__struct_field_initializer_4_0);
MR_decl_entry(gcc__field_type_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module59)
	MR_init_entry1(mlds_to_gcc__build_struct_initializer_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_struct_initializer_6_0);
	MR_init_label10(mlds_to_gcc__build_struct_initializer_6_0,42,5,6,7,10,11,9,13,16,17)
	MR_init_label4(mlds_to_gcc__build_struct_initializer_6_0,18,15,8,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_struct_initializer'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_struct_initializer_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_struct_initializer_6_0_i42);
	}
	MR_np_tailcall_ent(gcc__empty_init_list_3_0);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(gcc__next_field_decl_5_0,
		mlds_to_gcc__build_struct_initializer_6_0_i5);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(gcc__struct_field_initializer_4_0,
		mlds_to_gcc__build_struct_initializer_6_0_i6);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__field_type_4_0,
		mlds_to_gcc__build_struct_initializer_6_0_i7);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_struct_initializer_6_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_tfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(gcc__get_array_elem_type_4_0,
		mlds_to_gcc__build_struct_initializer_6_0_i10);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_struct_initializer_6_0_i11);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_struct_initializer_6_0_i18);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_struct_initializer_6_0_i13);
	}
	MR_r1 = MR_tfield(1, MR_sv(4), 0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_struct_initializer_6_0_i18);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_struct_initializer_6_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(gcc__get_struct_field_decls_4_0,
		mlds_to_gcc__build_struct_initializer_6_0_i16);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_localcall_lab(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_struct_initializer_6_0_i17);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_struct_initializer_6_0_i18);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_localcall_lab(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_struct_initializer_6_0_i20);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_initializer\'/6", 43);
	MR_r3 = (MR_Word) MR_string_const("no_initializer (build_initializer)", 34);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__build_struct_initializer_6_0_i8);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_struct_initializer_6_0_i20);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__cons_init_list_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__get_initializer_array_size_1_0);
MR_decl_entry(fn__ml_backend__mlds__per_instance_1_0);
MR_decl_entry(gcc__build_static_var_decl_6_0);
MR_decl_entry(gcc__set_var_decl_asm_name_4_0);
MR_decl_entry(gcc__finish_static_var_decl_3_0);
MR_decl_entry(gcc__build_local_var_decl_5_0);
MR_decl_entry(gcc__gen_assign_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module60)
	MR_init_entry1(mlds_to_gcc__build_local_data_defn_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_local_data_defn_8_0);
	MR_init_label10(mlds_to_gcc__build_local_data_defn_8_0,2,3,4,8,9,14,15,13,17,20)
	MR_init_label10(mlds_to_gcc__build_local_data_defn_8_0,21,22,19,12,24,25,26,27,28,11)
	MR_init_label7(mlds_to_gcc__build_local_data_defn_8_0,30,31,32,45,33,35,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_local_data_defn'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_local_data_defn_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(1) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__get_initializer_array_size_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i2);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_local_data_defn_8_0_i3);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(4), 2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(4) = MR_body((MR_Integer) MR_tempr2, (MR_Integer) 1);
	MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i8);
	}
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_local_data_defn\'/8", 47);
	MR_r3 = (MR_Word) MR_string_const("non-var", 7);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__build_local_data_defn_8_0_i8);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i9);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(5),3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i13);
	}
	MR_sv(5) = MR_tfield(3, MR_sv(5), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__get_array_elem_type_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i14);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_local_data_defn_8_0_i15);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_local_data_defn_8_0_i22);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i17);
	}
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_local_data_defn_8_0_i22);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i19);
	}
	MR_sv(5) = MR_tfield(2, MR_sv(5), 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__get_struct_field_decls_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i20);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_local_data_defn_8_0_i21);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_local_data_defn_8_0_i22);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i24);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_initializer\'/6", 43);
	MR_r3 = (MR_Word) MR_string_const("no_initializer (build_initializer)", 34);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__build_local_data_defn_8_0_i12);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i24);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_static_var_decl_6_0,
		mlds_to_gcc__build_local_data_defn_8_0_i25);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i26);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__set_var_decl_asm_name_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i27);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__add_var_decl_flags_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i28);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__finish_static_var_decl_3_0,
		mlds_to_gcc__build_local_data_defn_8_0_i45);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i30);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_local_var_decl_5_0,
		mlds_to_gcc__build_local_data_defn_8_0_i31);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__add_var_decl_flags_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i32);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i33);
	}
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__build_initializer_6_0,
		mlds_to_gcc__build_local_data_defn_8_0_i35);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__gcc__var_expr_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i36);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__gen_assign_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i45);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__det_insert_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module61)
	MR_init_entry1(mlds_to_gcc__build_local_defns_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_local_defns_6_0);
	MR_init_label7(mlds_to_gcc__build_local_defns_6_0,34,3,7,6,9,5,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_local_defns'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_local_defns_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mlds_to_gcc__build_local_defns_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_defns_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 3);
	MR_r6 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_defns_6_0_i6);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_r4 = MR_tfield(1, MR_tempr3, 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_local_data_defn_8_0,
		mlds_to_gcc__build_local_defns_6_0_i7);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r3 = MR_tfield(0, MR_sv(2), 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_np_call_localret_ent(fn__map__det_insert_3_0,
		mlds_to_gcc__build_local_defns_6_0_i12);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_defns_6_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_local_defn_body\'/8", 47);
	MR_sv(2) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("nested type", 11);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__build_local_defns_6_0_i5);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_local_defn_body\'/8", 47);
	MR_sv(2) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("nested function (\140--gcc-nested-functions\' not yet supported with \140--target asm\')", 80);
	}
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__build_local_defns_6_0_i5);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__map__det_insert_3_0,
		mlds_to_gcc__build_local_defns_6_0_i12);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mlds_to_gcc__build_local_defns_6_0_i34);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(mlds_to_gcc_module62)
	MR_init_entry1(mlds_to_gcc__gen_statements_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_statements_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_statements'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_statements_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__gen_statement_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;

MR_BEGIN_MODULE(mlds_to_gcc_module63)
	MR_init_entry1(mlds_to_gcc__gen_cases_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_cases_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_cases'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__gen_case_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_get_prog_context_1_0);
MR_decl_entry(fn__term__context_file_1_0);
MR_decl_entry(fn__term__context_line_1_0);
MR_decl_entry(gcc__gen_line_note_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module64)
	MR_init_entry1(mlds_to_gcc__gen_statement_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_statement_4_0);
	MR_init_label4(mlds_to_gcc__gen_statement_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_statement'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_statement_4_0_i2);
MR_def_label(mlds_to_gcc__gen_statement_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_statement_4_0_i3);
MR_def_label(mlds_to_gcc__gen_statement_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_statement_4_0_i4);
MR_def_label(mlds_to_gcc__gen_statement_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__gen_line_note_4_0,
		mlds_to_gcc__gen_statement_4_0_i5);
MR_def_label(mlds_to_gcc__gen_statement_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__build_unnamed_label_3_0);
MR_decl_entry(gcc__gen_default_case_label_3_0);
MR_decl_entry(gcc__gen_break_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module65)
	MR_init_entry1(mlds_to_gcc__gen_default_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_default_4_0);
	MR_init_label10(mlds_to_gcc__gen_default_4_0,25,4,7,8,9,10,11,12,26,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_default'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_default_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,1)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_default_4_0_i28);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_default_4_0_i4);
	}
	MR_np_call_localret_ent(gcc__build_unnamed_label_3_0,
		mlds_to_gcc__gen_default_4_0_i25);
MR_def_label(mlds_to_gcc__gen_default_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__gen_default_case_label_3_0);
MR_def_label(mlds_to_gcc__gen_default_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_np_call_localret_ent(gcc__build_unnamed_label_3_0,
		mlds_to_gcc__gen_default_4_0_i7);
MR_def_label(mlds_to_gcc__gen_default_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__gen_default_case_label_3_0,
		mlds_to_gcc__gen_default_4_0_i8);
MR_def_label(mlds_to_gcc__gen_default_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_default_4_0_i9);
MR_def_label(mlds_to_gcc__gen_default_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_default_4_0_i10);
MR_def_label(mlds_to_gcc__gen_default_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_default_4_0_i11);
MR_def_label(mlds_to_gcc__gen_default_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__gen_line_note_4_0,
		mlds_to_gcc__gen_default_4_0_i12);
MR_def_label(mlds_to_gcc__gen_default_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,
		mlds_to_gcc__gen_default_4_0_i26);
MR_def_label(mlds_to_gcc__gen_default_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__gen_break_2_0);
MR_def_label(mlds_to_gcc__gen_default_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0);
MR_decl_entry(string__prefix_2_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(map__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_label_0;
MR_decl_entry(term__context_init_1_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(gcc__start_function_3_0);
MR_decl_entry(gcc__end_function_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module66)
	MR_init_entry1(mlds_to_gcc__gen_init_fn_defns_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_init_fn_defns_5_0);
	MR_init_label10(mlds_to_gcc__gen_init_fn_defns_5_0,2,3,5,4,10,15,16,17,18,19)
	MR_init_label10(mlds_to_gcc__gen_init_fn_defns_5_0,22,23,26,28,30,31,32,33,34,35)
	MR_init_label1(mlds_to_gcc__gen_init_fn_defns_5_0,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_init_fn_defns'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_init_fn_defns_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i2);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i3);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(string__prefix_2_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i5);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_init_fn_defns_5_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(5);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_np_call_localret_ent(string__append_list_2_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i15);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(string__append_3_2,
		mlds_to_gcc__gen_init_fn_defns_5_0_i10);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,7,1);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i15);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i16);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__empty_param_decls_0_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i17);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i18);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(gcc__build_function_decl_8_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i19);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(4), 0) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_np_call_localret_ent(map__init_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i22);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_np_call_localret_ent(map__init_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i23);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	}
	MR_np_call_localret_ent(term__context_init_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i26);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i28);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(gcc__start_function_3_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i30);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i31);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i32);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i33);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__gen_line_note_4_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i34);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i35);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__end_function_2_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i36);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module67)
	MR_init_entry1(mlds_to_gcc__build_field_defn_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_field_defn_6_0);
	MR_init_label10(mlds_to_gcc__build_field_defn_6_0,5,6,10,11,7,13,17,18,4,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_field_defn'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_field_defn_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_r1, 3);
	MR_r5 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i4);
	}
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__get_initializer_array_size_1_0,
		mlds_to_gcc__build_field_defn_6_0_i5);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_field_defn_6_0_i6);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i7);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i7);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_body((MR_Integer) MR_tempr2, (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_field_defn_6_0_i10);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_field_defn_6_0_i11);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i13);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_field_data_defn\'/7", 47);
	MR_r3 = (MR_Word) MR_string_const("non-var", 7);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__build_field_defn_6_0_i13);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_field_data_defn\'/7", 47);
	MR_r3 = (MR_Word) MR_string_const("initializer", 11);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__build_field_defn_6_0_i17);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,
		mlds_to_gcc__build_field_defn_6_0_i18);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_field_defn_body\'/8", 47);
	MR_r3 = (MR_Word) MR_string_const("type nested in type", 19);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_field_defn_body\'/8", 47);
	MR_r3 = (MR_Word) MR_string_const("function nested in type", 23);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module68)
	MR_init_entry1(mlds_to_gcc__build_field_defns_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_field_defns_8_0);
	MR_init_label9(mlds_to_gcc__build_field_defns_8_0,4,3,5,9,12,6,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_field_defns'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_field_defns_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defns_8_0_i3);
	}
	MR_sv(2) = MR_r4;
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_field_defns_8_0_i4);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__build_field_defn_6_0,
		mlds_to_gcc__build_field_defns_8_0_i5);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(5), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defns_8_0_i6);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defns_8_0_i6);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_body((MR_Integer) MR_tempr2, (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_field_defns_8_0_i9);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		mlds_to_gcc__build_field_defns_8_0_i12);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_localcall_lab(mlds_to_gcc__build_field_defns_8_0,
		mlds_to_gcc__build_field_defns_8_0_i15);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_field_defns\'/8", 43);
	MR_r3 = (MR_Word) MR_string_const("non-var field", 13);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__build_field_defns_8_0_i14);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mlds_to_gcc__build_field_defns_8_0,
		mlds_to_gcc__build_field_defns_8_0_i15);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_field_defns_8_0_i16);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__set_func_decl_public_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module69)
	MR_init_entry1(mlds_to_gcc__add_func_decl_flags_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__add_func_decl_flags_4_0);
	MR_init_label10(mlds_to_gcc__add_func_decl_flags_4_0,2,29,4,5,7,9,3,12,15,17)
	MR_init_label8(mlds_to_gcc__add_func_decl_flags_4_0,16,19,21,20,23,25,24,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_func_decl_flags'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__add_func_decl_flags_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i2);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i4);
	}
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__set_func_decl_public_3_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i29);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_func_access_flag\'/4", 46);
	MR_r3 = (MR_Word) MR_string_const("\140default\' access", 16);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_func_access_flag\'/4", 46);
	MR_r3 = (MR_Word) MR_string_const("\140local\' access", 14);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_func_access_flag\'/4", 46);
	MR_r3 = (MR_Word) MR_string_const("\140protected\' access", 18);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i12);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__virtuality_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i15);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i16);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_func_virtuality_flag\'/4", 50);
	MR_r3 = (MR_Word) MR_string_const("\140virtual\' function", 18);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i16);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__overridability_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i19);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i20);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_func_overridability_flag\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("\140sealed\' function", 17);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i20);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i23);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i25);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i27);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_func_constness_flag\'/4", 49);
	MR_r3 = (MR_Word) MR_string_const("\140const\' function", 16);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i24);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i27);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_117_110_99_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(list__map_foldl_5_0);
MR_decl_entry(map__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module70)
	MR_init_entry1(mlds_to_gcc__build_label_table_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_label_table_4_0);
	MR_init_label2(mlds_to_gcc__build_label_table_4_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_label_table'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_label_table_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__statement_contains_label_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		mlds_to_gcc__build_label_table_4_0_i3);
MR_def_label(mlds_to_gcc__build_label_table_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(list__map_foldl_5_0,
		mlds_to_gcc__build_label_table_4_0_i5);
MR_def_label(mlds_to_gcc__build_label_table_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__from_corresponding_lists_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module71)
	MR_init_entry1(mlds_to_gcc__build_param_types_and_decls_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__build_param_types_and_decls_8_0);
	MR_init_label10(mlds_to_gcc__build_param_types_and_decls_8_0,4,5,7,3,8,9,13,14,17,10)
	MR_init_label3(mlds_to_gcc__build_param_types_and_decls_8_0,19,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_param_types_and_decls'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_param_types_and_decls_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_param_types_and_decls_8_0_i3);
	}
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i4);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__empty_param_decls_0_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i5);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_np_call_localret_ent(map__init_1_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i7);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(mlds_to_gcc__build_param_types_and_decls_8_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i8);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i9);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_param_types_and_decls_8_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(4), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_param_types_and_decls_8_0_i10);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i13);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_param_decl_5_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i14);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__map__det_insert_3_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i17);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__gcc__cons_param_types_2_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i20);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_param_types_and_decls\'/8", 53);
	MR_r3 = (MR_Word) MR_string_const("invalid param name", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i19);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__cons_param_types_2_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i20);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__gcc__cons_param_decls_2_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i21);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__push_gc_context_2_0);
MR_decl_entry(gcc__set_context_4_0);
MR_decl_entry(gcc__pop_gc_context_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module72)
	MR_init_entry1(mlds_to_gcc__gen_func_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_func_9_0);
	MR_init_label10(mlds_to_gcc__gen_func_9_0,52,4,6,10,9,5,12,13,14,15)
	MR_init_label10(mlds_to_gcc__gen_func_9_0,16,18,19,20,21,22,23,24,25,26)
	MR_init_label3(mlds_to_gcc__gen_func_9_0,27,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_func'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_func_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_func_9_0_i52);
	}
	MR_r1 = MR_r6;
	MR_proceed();
MR_def_label(mlds_to_gcc__gen_func_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(2) = MR_body((MR_Integer) MR_r5, (MR_Integer) 1);
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(gcc__push_gc_context_2_0,
		mlds_to_gcc__gen_func_9_0_i4);
MR_def_label(mlds_to_gcc__gen_func_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(7), 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_func_9_0_i6);
	}
	MR_sv(7) = MR_tfield(0, MR_sv(7), 0);
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__gen_func_9_0_i10);
MR_def_label(mlds_to_gcc__gen_func_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_func_9_0_i9);
	}
	MR_sv(7) = MR_tfield(0, MR_sv(7), 0);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__gen_func_9_0_i10);
MR_def_label(mlds_to_gcc__gen_func_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(mlds_to_gcc__gen_func_9_0_i5);
MR_def_label(mlds_to_gcc__gen_func_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.get_return_type\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("multiple return types", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__gen_func_9_0_i5);
MR_def_label(mlds_to_gcc__gen_func_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(mlds_to_gcc__get_qualified_func_name_4_0,
		mlds_to_gcc__gen_func_9_0_i12);
MR_def_label(mlds_to_gcc__gen_func_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_and_decls_8_0,
		mlds_to_gcc__gen_func_9_0_i13);
MR_def_label(mlds_to_gcc__gen_func_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(gcc__build_function_decl_8_0,
		mlds_to_gcc__gen_func_9_0_i14);
MR_def_label(mlds_to_gcc__gen_func_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(mlds_to_gcc__add_func_decl_flags_4_0,
		mlds_to_gcc__gen_func_9_0_i15);
MR_def_label(mlds_to_gcc__gen_func_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__build_label_table_4_0,
		mlds_to_gcc__gen_func_9_0_i16);
MR_def_label(mlds_to_gcc__gen_func_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_func_9_0_i18);
MR_def_label(mlds_to_gcc__gen_func_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_func_9_0_i19);
MR_def_label(mlds_to_gcc__gen_func_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_func_9_0_i20);
MR_def_label(mlds_to_gcc__gen_func_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__set_context_4_0,
		mlds_to_gcc__gen_func_9_0_i21);
MR_def_label(mlds_to_gcc__gen_func_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__start_function_3_0,
		mlds_to_gcc__gen_func_9_0_i22);
MR_def_label(mlds_to_gcc__gen_func_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		mlds_to_gcc__gen_func_9_0_i23);
MR_def_label(mlds_to_gcc__gen_func_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_func_9_0_i24);
MR_def_label(mlds_to_gcc__gen_func_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_func_9_0_i25);
MR_def_label(mlds_to_gcc__gen_func_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_func_9_0_i26);
MR_def_label(mlds_to_gcc__gen_func_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__set_context_4_0,
		mlds_to_gcc__gen_func_9_0_i27);
MR_def_label(mlds_to_gcc__gen_func_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__end_function_2_0,
		mlds_to_gcc__gen_func_9_0_i28);
MR_def_label(mlds_to_gcc__gen_func_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__pop_gc_context_2_0,
		mlds_to_gcc__gen_func_9_0_i29);
MR_def_label(mlds_to_gcc__gen_func_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module73)
	MR_init_entry1(mlds_to_gcc__gen_defns_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_defns_6_0);
	MR_init_label3(mlds_to_gcc__gen_defns_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_defns'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_defns_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mlds_to_gcc__gen_defns_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_defns_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
MR_def_label(mlds_to_gcc__gen_defns_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(mlds_to_gcc__gen_defn_6_0,
		mlds_to_gcc__gen_defns_6_0_i4);
MR_def_label(mlds_to_gcc__gen_defns_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mlds_to_gcc__gen_defns_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module74)
	MR_init_entry1(mlds_to_gcc__gen_defn_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_defn_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_defn'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_defn_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	MR_r4 = MR_tfield(0, MR_tempr2, 3);
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(mlds_to_gcc__gen_defn_body_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module75)
	MR_init_entry1(mlds_to_gcc__gen_defn_body_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_defn_body_8_0);
	MR_init_label10(mlds_to_gcc__gen_defn_body_8_0,68,7,8,10,11,12,15,16,14,18)
	MR_init_label10(mlds_to_gcc__gen_defn_body_8_0,21,22,23,20,13,25,26,27,28,5)
	MR_init_label1(mlds_to_gcc__gen_defn_body_8_0,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_defn_body'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_defn_body_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_defn_body_8_0_i68);
	}
	MR_r3 = MR_body((MR_Integer) MR_r4, (MR_Integer) 0);
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(mlds_to_gcc__gen_class_7_0);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_defn_body_8_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_r5;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mlds_to_gcc__gen_defn_body_8_0_i7);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mlds_to_gcc__gen_defn_body_8_0_i8);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_qualified_name_1_0,
		mlds_to_gcc__gen_defn_body_8_0_i10);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds__get_initializer_array_size_1_0,
		mlds_to_gcc__gen_defn_body_8_0_i11);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i12);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),3)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_defn_body_8_0_i14);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(3, MR_sv(5), 0);
	MR_np_call_localret_ent(gcc__get_array_elem_type_4_0,
		mlds_to_gcc__gen_defn_body_8_0_i15);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__gen_defn_body_8_0_i16);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__gen_defn_body_8_0_i23);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_defn_body_8_0_i18);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__gen_defn_body_8_0_i23);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_defn_body_8_0_i20);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(2, MR_sv(5), 1);
	MR_np_call_localret_ent(gcc__get_struct_field_decls_4_0,
		mlds_to_gcc__gen_defn_body_8_0_i21);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i22);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__gen_defn_body_8_0_i23);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_static_var_decl_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i25);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.build_initializer\'/6", 43);
	MR_r3 = (MR_Word) MR_string_const("no_initializer (build_initializer)", 34);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__gen_defn_body_8_0_i13);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_static_var_decl_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i25);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__add_var_decl_flags_4_0,
		mlds_to_gcc__gen_defn_body_8_0_i26);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__finish_static_var_decl_3_0,
		mlds_to_gcc__gen_defn_body_8_0_i27);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tfield(0, MR_sv(7), 1);
	MR_np_call_localret_ent(map__det_insert_4_0,
		mlds_to_gcc__gen_defn_body_8_0_i28);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_sv(7);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__IntroducedFrom__pred__gen_defn_body__823__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(2, MR_tempr2, 4);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(7) = MR_r5;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r3 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_defn_body\'/8", 39);
	MR_r4 = (MR_Word) MR_string_const("EnvVarNames", 11);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		mlds_to_gcc__gen_defn_body_8_0_i31);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(mlds_to_gcc__gen_func_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_append_class_qualifier_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__append_3_1);
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module76)
	MR_init_entry1(mlds_to_gcc__gen_class_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_class_7_0);
	MR_init_label10(mlds_to_gcc__gen_class_7_0,4,5,2,7,9,8,12,15,13,18)
	MR_init_label8(mlds_to_gcc__gen_class_7_0,19,20,24,25,26,27,30,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_class'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_class_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		mlds_to_gcc__gen_class_7_0_i4);
MR_def_label(mlds_to_gcc__gen_class_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_append_class_qualifier_5_0,
		mlds_to_gcc__gen_class_7_0_i5);
MR_def_label(mlds_to_gcc__gen_class_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i7);
	}
MR_def_label(mlds_to_gcc__gen_class_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_sv(5) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_class\'/7", 35);
	MR_r3 = (MR_Word) MR_string_const("unexpected entity", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__gen_class_7_0_i7);
MR_def_label(mlds_to_gcc__gen_class_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__mlds_make_base_class_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r6 = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i8);
	}
MR_def_label(mlds_to_gcc__gen_class_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_class\'/7", 35);
	MR_r3 = (MR_Word) MR_string_const("constructors", 12);
	MR_np_call_localret_ent(require__unexpected_3_0,
		mlds_to_gcc__gen_class_7_0_i8);
MR_def_label(mlds_to_gcc__gen_class_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(list__map_foldl_5_1,
		mlds_to_gcc__gen_class_7_0_i12);
MR_def_label(mlds_to_gcc__gen_class_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),4)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__append_3_1,
		mlds_to_gcc__gen_class_7_0_i15);
MR_def_label(mlds_to_gcc__gen_class_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_class\'/7", 35);
	MR_r3 = (MR_Word) MR_string_const("enum type (\140--high-level-data\' not yet implemented for \140--target asm\')", 70);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(mlds_to_gcc__gen_class_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		mlds_to_gcc__gen_class_7_0_i18);
MR_def_label(mlds_to_gcc__gen_class_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		mlds_to_gcc__gen_class_7_0_i19);
MR_def_label(mlds_to_gcc__gen_class_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),4)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_class\'/7", 35);
	MR_r3 = (MR_Word) MR_string_const("enum type (\140--high-level-data\' not yet implemented for \140--target asm\')", 70);
	MR_np_call_localret_ent(require__sorry_3_0,
		mlds_to_gcc__gen_class_7_0_i32);
MR_def_label(mlds_to_gcc__gen_class_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR1_ADDR(ml_backend__mlds, mlds_fully_qualified_name);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_np_call_localret_ent(map__init_1_0,
		mlds_to_gcc__gen_class_7_0_i24);
MR_def_label(mlds_to_gcc__gen_class_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_field_defns_8_0,
		mlds_to_gcc__gen_class_7_0_i25);
MR_def_label(mlds_to_gcc__gen_class_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_qualified_name_1_0,
		mlds_to_gcc__gen_class_7_0_i26);
MR_def_label(mlds_to_gcc__gen_class_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__gen_class_7_0_i27);
MR_def_label(mlds_to_gcc__gen_class_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_tempr2 = MR_sv(1);
	MR_tempr3 = MR_sv(8);
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_tempr2;
	MR_r5 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		mlds_to_gcc__gen_class_7_0_i30);
MR_def_label(mlds_to_gcc__gen_class_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	}
MR_def_label(mlds_to_gcc__gen_class_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(mlds_to_gcc__gen_defns_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
MR_decl_entry(ml_backend__mlds_to_c__output_c_header_file_5_0);
MR_decl_entry(fn__ml_backend__ml_global_data__ml_global_data_init_2_0);
MR_decl_entry(ml_backend__mlds_to_c__output_c_file_5_0);

MR_BEGIN_MODULE(mlds_to_gcc_module77)
	MR_init_entry1(mlds_to_gcc__compile_to_asm_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__compile_to_asm_5_0);
	MR_init_label10(mlds_to_gcc__compile_to_asm_5_0,3,4,6,7,9,10,16,17,18,19)
	MR_init_label7(mlds_to_gcc__compile_to_asm_5_0,12,20,22,24,25,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compile_to_asm'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mlds_to_gcc__compile_to_asm_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_sv(6) = MR_tfield(0, MR_r2, 2);
	MR_sv(7) = MR_tfield(0, MR_r2, 5);
	MR_sv(8) = MR_tfield(0, MR_r2, 6);
	MR_sv(9) = MR_tfield(0, MR_r2, 7);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,10,0);
	MR_r3 = MR_tfield(0, MR_sv(3), 4);
	MR_np_call_localret_ent(list__filter_4_0,
		mlds_to_gcc__compile_to_asm_5_0_i3);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		mlds_to_gcc__compile_to_asm_5_0_i4);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		mlds_to_gcc__compile_to_asm_5_0_i6);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		mlds_to_gcc__compile_to_asm_5_0_i7);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mlds_to_gcc__compile_to_asm_5_0_i9);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mlds_to_gcc__compile_to_asm_5_0_i10);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr3;
	if (MR_LTAGS_TESTR(MR_sv(14),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__compile_to_asm_5_0_i12);
	}
	MR_tempr4 = MR_sv(13);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__compile_to_asm_5_0_i12);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr4, 3);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__compile_to_asm_5_0_i12);
	}
	MR_sv(13) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_c_header_file_5_0,
		mlds_to_gcc__compile_to_asm_5_0_i16);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(mlds_to_gcc__gen_defns_6_0,
		mlds_to_gcc__compile_to_asm_5_0_i17);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__gen_defns_6_0,
		mlds_to_gcc__compile_to_asm_5_0_i18);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__gen_init_fn_defns_5_0,
		mlds_to_gcc__compile_to_asm_5_0_i19);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(16);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r5;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__ml_backend__ml_global_data__ml_global_data_init_2_0,
		mlds_to_gcc__compile_to_asm_5_0_i20);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		mlds_to_gcc__compile_to_asm_5_0_i22);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(9);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_c_file_5_0,
		mlds_to_gcc__compile_to_asm_5_0_i24);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_c_header_file_5_0,
		mlds_to_gcc__compile_to_asm_5_0_i25);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(mlds_to_gcc__gen_defns_6_0,
		mlds_to_gcc__compile_to_asm_5_0_i26);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__gen_defns_6_0,
		mlds_to_gcc__compile_to_asm_5_0_i27);
MR_def_label(mlds_to_gcc__compile_to_asm_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__set_access_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module78)
	MR_init_entry1(fn__mlds_to_gcc__make_public_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__make_public_1_0);
	MR_init_label1(fn__mlds_to_gcc__make_public_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_public'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__make_public_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__mlds__set_access_2_0,
		fn__mlds_to_gcc__make_public_1_0_i2);
MR_def_label(fn__mlds_to_gcc__make_public_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module79)
	MR_init_entry1(mlds_to_gcc__is_static_member_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__is_static_member_1_0);
	MR_init_label3(mlds_to_gcc__is_static_member_1_0,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_static_member'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__is_static_member_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__is_static_member_1_0_i2);
	}
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		mlds_to_gcc__is_static_member_1_0_i5);
MR_def_label(mlds_to_gcc__is_static_member_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__is_static_member_1_0_i1);
	}
MR_def_label(mlds_to_gcc__is_static_member_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__is_static_member_1_0,1)
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

MR_BEGIN_MODULE(mlds_to_gcc_module80)
	MR_init_entry1(mlds_to_gcc__mlds_make_base_class_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__mlds_make_base_class_5_0);
	MR_init_label3(mlds_to_gcc__mlds_make_base_class_5_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_make_base_class'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__mlds_make_base_class_5_0)
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
		mlds_to_gcc__mlds_make_base_class_5_0_i2);
MR_def_label(mlds_to_gcc__mlds_make_base_class_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("base_", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__mlds_make_base_class_5_0_i3);
MR_def_label(mlds_to_gcc__mlds_make_base_class_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_sv(4), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(4), 0) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_0,
		mlds_to_gcc__mlds_make_base_class_5_0_i6);
MR_def_label(mlds_to_gcc__mlds_make_base_class_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
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

MR_declare_entry(MR_do_fail);
MR_decl_entry(ml_backend__ml_util__statement_contains_statement_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(mlds_to_gcc_module81)
	MR_init_entry1(mlds_to_gcc__statement_contains_label_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__statement_contains_label_2_0);
	MR_init_label1(mlds_to_gcc__statement_contains_label_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'statement_contains_label'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__statement_contains_label_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred mlds_to_gcc.statement_contains_label/2-0", 0,
		MR_ENTRY(MR_do_fail));
	MR_np_call_localret_ent(ml_backend__ml_util__statement_contains_statement_2_0,
		mlds_to_gcc__statement_contains_label_2_0_i1);
MR_def_label(mlds_to_gcc__statement_contains_label_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__gen_case_label_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module82)
	MR_init_entry1(mlds_to_gcc__gen_case_label_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_case_label_4_0);
	MR_init_label6(mlds_to_gcc__gen_case_label_4_0,4,5,3,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_case_label'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_case_label_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_case_label_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__gen_case_label_4_0_i4);
MR_def_label(mlds_to_gcc__gen_case_label_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(gcc__build_unnamed_label_3_0,
		mlds_to_gcc__gen_case_label_4_0_i5);
MR_def_label(mlds_to_gcc__gen_case_label_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__gen_case_label_4_0);
	}
MR_def_label(mlds_to_gcc__gen_case_label_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__gen_case_label_4_0_i7);
MR_def_label(mlds_to_gcc__gen_case_label_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__gen_case_label_4_0_i8);
MR_def_label(mlds_to_gcc__gen_case_label_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_unnamed_label_3_0,
		mlds_to_gcc__gen_case_label_4_0_i9);
MR_def_label(mlds_to_gcc__gen_case_label_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_case_label\'/4", 40);
	MR_r3 = (MR_Word) MR_string_const("match_range", 11);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;

MR_BEGIN_MODULE(mlds_to_gcc_module83)
	MR_init_entry1(mlds_to_gcc__gen_case_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__gen_case_4_0);
	MR_init_label7(mlds_to_gcc__gen_case_4_0,2,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_case'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_case_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(mlds_to_gcc__gen_case_label_4_0,
		mlds_to_gcc__gen_case_4_0_i2);
MR_def_label(mlds_to_gcc__gen_case_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__gen_case_label_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		mlds_to_gcc__gen_case_4_0_i4);
MR_def_label(mlds_to_gcc__gen_case_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_case_4_0_i5);
MR_def_label(mlds_to_gcc__gen_case_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_case_4_0_i6);
MR_def_label(mlds_to_gcc__gen_case_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_case_4_0_i7);
MR_def_label(mlds_to_gcc__gen_case_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__gen_line_note_4_0,
		mlds_to_gcc__gen_case_4_0_i8);
MR_def_label(mlds_to_gcc__gen_case_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,
		mlds_to_gcc__gen_case_4_0_i9);
MR_def_label(mlds_to_gcc__gen_case_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__gen_break_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module84)
	MR_init_entry1(__Unify___mlds_to_gcc__defn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mlds_to_gcc__defn_info_0_0);
	MR_init_label5(__Unify___mlds_to_gcc__defn_info_0_0,4,7,9,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__defn_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__defn_info_0_0_i13);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mlds_to_gcc__global_info_0_0,
		__Unify___mlds_to_gcc__defn_info_0_0_i4);
MR_def_label(__Unify___mlds_to_gcc__defn_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__defn_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		__Unify___mlds_to_gcc__defn_info_0_0_i7);
MR_def_label(__Unify___mlds_to_gcc__defn_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___mlds_to_gcc__defn_info_0_0_i9);
MR_def_label(__Unify___mlds_to_gcc__defn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__defn_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mlds_to_gcc__defn_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mlds_to_gcc__defn_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_fully_qualified_name_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module85)
	MR_init_entry1(__Compare___mlds_to_gcc__defn_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mlds_to_gcc__defn_info_0_0);
	MR_init_label6(__Compare___mlds_to_gcc__defn_info_0_0,3,2,5,9,14,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__defn_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__defn_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mlds_to_gcc__defn_info_0_0_i2);
MR_def_label(__Compare___mlds_to_gcc__defn_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mlds_to_gcc__defn_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___mlds_to_gcc__global_info_0_0,
		__Compare___mlds_to_gcc__defn_info_0_0_i5);
MR_def_label(__Compare___mlds_to_gcc__defn_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__defn_info_0_0_i50);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		__Compare___mlds_to_gcc__defn_info_0_0_i9);
MR_def_label(__Compare___mlds_to_gcc__defn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__defn_info_0_0_i50);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___mlds_to_gcc__defn_info_0_0_i14);
MR_def_label(__Compare___mlds_to_gcc__defn_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__defn_info_0_0_i50);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mlds_to_gcc__defn_info_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module86)
	MR_init_entry1(__Unify___mlds_to_gcc__field_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mlds_to_gcc__field_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__field_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module87)
	MR_init_entry1(__Compare___mlds_to_gcc__field_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mlds_to_gcc__field_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__field_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___gcc__tree_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module88)
	MR_init_entry1(__Unify___mlds_to_gcc__gcc_type_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mlds_to_gcc__gcc_type_info_0_0);
	MR_init_label3(__Unify___mlds_to_gcc__gcc_type_info_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__gcc_type_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__gcc_type_info_0_0_i9);
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
	MR_np_call_localret_ent(__Unify___gcc__tree_0_0,
		__Unify___mlds_to_gcc__gcc_type_info_0_0_i4);
MR_def_label(__Unify___mlds_to_gcc__gcc_type_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__gcc_type_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mlds_to_gcc__gcc_type_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mlds_to_gcc__gcc_type_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___gcc__tree_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module89)
	MR_init_entry1(__Compare___mlds_to_gcc__gcc_type_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mlds_to_gcc__gcc_type_info_0_0);
	MR_init_label4(__Compare___mlds_to_gcc__gcc_type_info_0_0,3,2,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__gcc_type_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__gcc_type_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mlds_to_gcc__gcc_type_info_0_0_i2);
MR_def_label(__Compare___mlds_to_gcc__gcc_type_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mlds_to_gcc__gcc_type_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___gcc__tree_0_0,
		__Compare___mlds_to_gcc__gcc_type_info_0_0_i5);
MR_def_label(__Compare___mlds_to_gcc__gcc_type_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__gcc_type_info_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mlds_to_gcc__gcc_type_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module90)
	MR_init_entry1(__Unify___mlds_to_gcc__gcc_type_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mlds_to_gcc__gcc_type_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__gcc_type_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module91)
	MR_init_entry1(__Compare___mlds_to_gcc__gcc_type_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mlds_to_gcc__gcc_type_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__gcc_type_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___libs__globals__globals_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module92)
	MR_init_entry1(__Unify___mlds_to_gcc__global_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mlds_to_gcc__global_info_0_0);
	MR_init_label4(__Unify___mlds_to_gcc__global_info_0_0,5,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__global_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__global_info_0_0_i11);
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
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___mlds_to_gcc__global_info_0_0_i5);
MR_def_label(__Unify___mlds_to_gcc__global_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__global_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___mlds_to_gcc__global_info_0_0_i7);
MR_def_label(__Unify___mlds_to_gcc__global_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__global_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___libs__globals__globals_0_0);
MR_def_label(__Unify___mlds_to_gcc__global_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mlds_to_gcc__global_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___libs__globals__globals_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module93)
	MR_init_entry1(__Compare___mlds_to_gcc__global_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mlds_to_gcc__global_info_0_0);
	MR_init_label5(__Compare___mlds_to_gcc__global_info_0_0,3,2,6,11,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__global_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__global_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mlds_to_gcc__global_info_0_0_i2);
MR_def_label(__Compare___mlds_to_gcc__global_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mlds_to_gcc__global_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___mlds_to_gcc__global_info_0_0_i6);
MR_def_label(__Compare___mlds_to_gcc__global_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__global_info_0_0_i40);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___mlds_to_gcc__global_info_0_0_i11);
MR_def_label(__Compare___mlds_to_gcc__global_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__global_info_0_0_i40);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___libs__globals__globals_0_0);
MR_def_label(__Compare___mlds_to_gcc__global_info_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module94)
	MR_init_entry1(__Unify___mlds_to_gcc__label_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mlds_to_gcc__label_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__label_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module95)
	MR_init_entry1(__Compare___mlds_to_gcc__label_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mlds_to_gcc__label_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__label_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module96)
	MR_init_entry1(__Unify___mlds_to_gcc__symbol_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mlds_to_gcc__symbol_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__symbol_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module97)
	MR_init_entry1(__Compare___mlds_to_gcc__symbol_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mlds_to_gcc__symbol_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__symbol_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module98)
	MR_init_entry1(fn__mlds_to_gcc__IntroducedFrom__func__run_gcc_backend__228__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mlds_to_gcc__IntroducedFrom__func__run_gcc_backend__228__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__run_gcc_backend__228__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__IntroducedFrom__func__run_gcc_backend__228__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module99)
	MR_init_entry1(mlds_to_gcc__IntroducedFrom__pred__gen_defn_body__823__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__IntroducedFrom__pred__gen_defn_body__823__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__gen_defn_body__823__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__IntroducedFrom__pred__gen_defn_body__823__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(set__empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module100)
	MR_init_entry1(mlds_to_gcc__IntroducedFrom__pred__build_rtti_type__1955__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__IntroducedFrom__pred__build_rtti_type__1955__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__build_rtti_type__1955__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__IntroducedFrom__pred__build_rtti_type__1955__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module101)
	MR_init_entry1(mlds_to_gcc__IntroducedFrom__pred__gen_stmt__2751__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mlds_to_gcc__IntroducedFrom__pred__gen_stmt__2751__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__gen_stmt__2751__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__IntroducedFrom__pred__gen_stmt__2751__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module102)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0);
	MR_init_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,2,4,5,7,9,3,12,14,13,16)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,18,17,20,22,21,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__add_field_decl_flags__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_field_access_flag\'/4", 47);
	MR_r3 = (MR_Word) MR_string_const("\140default\' field", 15);
	MR_np_call_localret_ent(require__sorry_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_field_access_flag\'/4", 47);
	MR_r3 = (MR_Word) MR_string_const("\140local\' field", 13);
	MR_np_call_localret_ent(require__sorry_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_field_access_flag\'/4", 47);
	MR_r3 = (MR_Word) MR_string_const("\140private\' field", 15);
	MR_np_call_localret_ent(require__sorry_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_field_access_flag\'/4", 47);
	MR_r3 = (MR_Word) MR_string_const("\140protected\' field", 17);
	MR_np_call_localret_ent(require__sorry_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i12);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i13);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_field_per_instance_flag\'/4", 53);
	MR_r3 = (MR_Word) MR_string_const("\140static\' field", 14);
	MR_np_call_localret_ent(require__unexpected_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i13);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__virtuality_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i16);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i17);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_field_virtuality_flag\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("\140virtual\' field", 15);
	MR_np_call_localret_ent(require__sorry_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i17);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__overridability_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i20);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i21);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_field_overridability_flag\'/4", 55);
	MR_r3 = (MR_Word) MR_string_const("\140sealed\' field", 14);
	MR_np_call_localret_ent(require__sorry_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i21);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i24);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_99_111_110_115_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i25);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i26);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module103)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_99_111_110_115_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_99_111_110_115_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0);
	MR_init_label1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_99_111_110_115_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__add_field_constness_flag__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_99_111_110_115_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_99_111_110_115_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_field_constness_flag\'/4", 50);
	MR_r3 = (MR_Word) MR_string_const("\140const\' field", 13);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_99_111_110_115_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module104)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0);
	MR_init_label1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__add_field_abstractness_flag__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_field_abstractness_flag\'/4", 53);
	MR_r3 = (MR_Word) MR_string_const("\140abstract\' field", 16);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module105)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_117_110_99_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_117_110_99_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0);
	MR_init_label1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_117_110_99_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__add_func_abstractness_flag__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_117_110_99_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_117_110_99_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.add_func_abstractness_flag\'/4", 52);
	MR_r3 = (MR_Word) MR_string_const("\140abstract\' function", 19);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_117_110_99_95_97_98_115_116_114_97_99_116_110_101_115_115_95_102_108_97_103_95_95_91_50_93_95_48_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module106)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0);
	MR_init_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,109,3,111,5,8,10,14,16,117,12)
	MR_init_label4(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,21,119,25,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__build_mercury_type__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i3);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__intptr_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i5);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i111);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(gcc__build_pointer_type_4_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i8);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i10);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__intptr_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i12);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i14);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__char_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i16);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__double_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i117);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__intptr_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__string_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 2)) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i21);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__intptr_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i119);
	}
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i25);
	}
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__intptr_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i27);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i109);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i119);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_succip_word = MR_sv(1);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i109);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__start_block_2_0);
MR_decl_entry(gcc__end_block_2_0);
MR_decl_entry(gcc__gen_expr_stmt_3_0);
MR_decl_entry(fn__gcc__longjmp_func_decl_0_0);
MR_decl_entry(gcc__gen_goto_3_0);
MR_decl_entry(gcc__gen_start_cond_3_0);
MR_decl_entry(gcc__gen_start_else_2_0);
MR_decl_entry(gcc__gen_label_3_0);
MR_decl_entry(gcc__gen_return_3_0);
MR_decl_entry(gcc__build_range_type_6_0);
MR_decl_entry(gcc__gen_start_switch_4_0);
MR_decl_entry(gcc__gen_end_switch_3_0);
MR_decl_entry(fn__gcc__setjmp_func_decl_0_0);
MR_decl_entry(gcc__gen_end_cond_2_0);
MR_decl_entry(gcc__gen_start_loop_3_0);
MR_decl_entry(gcc__gen_exit_loop_if_false_4_0);
MR_decl_entry(gcc__gen_end_loop_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module107)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0);
	MR_init_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,3,6,7,251,5,12,13,14,16,17)
	MR_init_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,15,18,252,20,26,23,10,31,34,35)
	MR_init_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,30,45,256,47,43,52,53,54,57,51)
	MR_init_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,258,60,259,67,65,63,73,74,78,79)
	MR_init_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,80,81,72,84,87,88,89,90,91,92)
	MR_init_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,93,94,263,83,98,99,102,101,104,264)
	MR_init_label1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,97)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__gen_stmt__[3]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i3);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i5);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(gcc__start_block_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i6);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 1), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_local_defns_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i7);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statements_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i251);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__end_block_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__IntroducedFrom__pred__gen_stmt__2751__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(3, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_tfield(3, MR_r2, 4);
	MR_sv(2) = MR_tfield(3, MR_r2, 5);
	MR_sv(3) = MR_tfield(3, MR_r2, 6);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r3 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_stmt\'/5", 34);
	MR_r4 = (MR_Word) MR_string_const("method call", 11);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i12);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__build_args_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i13);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i14);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i16);
	}
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i15);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i17);
	}
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i15);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(gcc__build_call_expr_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i18);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i20);
	}
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_expr_stmt_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i23);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i259);
	}
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_lval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i26);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_assign_4_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_stmt\'/5", 34);
	MR_r3 = (MR_Word) MR_string_const("call with multiple outputs", 26);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i30);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i31);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__gcc__longjmp_func_decl_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i35);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_stmt\'/5", 34);
	MR_r3 = (MR_Word) MR_string_const("non-lval argument to do_commit", 30);
	MR_np_call_localret_ent(require__unexpected_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i34);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__longjmp_func_decl_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i35);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_call_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i252);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i43);
	}
	MR_r4 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i45);
	}
	MR_np_tailcall_ent(gcc__gen_break_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i47);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_tfield(0, MR_sv(4), 3);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i256);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_goto_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_stmt\'/5", 34);
	MR_r3 = (MR_Word) MR_string_const("NYI continue", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i51);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(2, MR_r2, 1);
	MR_sv(1) = MR_tfield(2, MR_r2, 2);
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i52);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__gen_start_cond_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i53);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i54);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i263);
	}
	MR_sv(5) = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(gcc__gen_start_else_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i57);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i263);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i60);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_tfield(0, MR_sv(4), 3);
	MR_r4 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i258);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_label_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i63);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i65);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i67);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i259);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_return_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_stmt\'/5", 34);
	MR_r3 = (MR_Word) MR_string_const("multiple return values", 22);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_stmt\'/5", 34);
	MR_r3 = (MR_Word) MR_string_const("return without return value", 27);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i72);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_sv(2) = MR_tfield(3, MR_r2, 4);
	MR_sv(3) = MR_tfield(3, MR_r2, 5);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i73);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i74);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(gcc__build_range_type_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i74);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i78);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__gen_start_switch_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i79);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mlds_to_gcc__gen_default_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i80);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__gen_cases_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i81);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_end_switch_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i83);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__gcc__setjmp_func_decl_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i84);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_call_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i87);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(gcc__build_int_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i88);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__eq_expr_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i89);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i90);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i91);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__gen_start_cond_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i92);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i93);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__gen_start_else_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i94);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i263);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,263)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_end_cond_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i97);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_np_call_localret_ent(gcc__gen_start_loop_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i98);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i99);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i101);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i102);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__gen_exit_loop_if_false_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i264);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__gen_exit_loop_if_false_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i104);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i264);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_end_loop_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_stmt\'/5", 34);
	MR_r3 = (MR_Word) MR_string_const("NYI computed goto", 17);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__alloc_func_decl_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module108)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0);
	MR_init_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,4,5,3,11,10,9,16,18,19,20)
	MR_init_label10(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,22,23,24,25,21,26,27,8,29,31)
	MR_init_label6(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,33,35,37,39,41,130)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__gen_atomic_stmt__[3]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__build_lval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i4);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i5);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(gcc__gen_assign_4_0);
	}
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i130);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i8);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 5);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(9) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 7);
	MR_sv(5) = MR_tfield(3, MR_r2, 8);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 2);
	MR_r2 = (MR_Integer) 226;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i11);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__gcc__alloc_func_decl_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i16);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_atomic_stmt\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("new_object with unknown size", 28);
	}
	MR_np_call_localret_ent(require__sorry_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i9);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__alloc_func_decl_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i16);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__build_call_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i18);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i19);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(gcc__convert_type_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i20);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i22);
	}
	MR_r2 = MR_sv(1);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(7) = (MR_Integer) 0;
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i21);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(gcc__build_int_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i23);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__plus_expr_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i24);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i25);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(mlds_to_gcc__build_lval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i26);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(gcc__gen_assign_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i27);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_atomic_stmt\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("assign_if_in_heap", 17);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_atomic_stmt\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("NYI delete_object", 17);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_atomic_stmt\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("gc_check", 8);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i35);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_atomic_stmt\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("target_code (for \140--target asm\')", 32);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_atomic_stmt\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("mark_hp", 7);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i39);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_atomic_stmt\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("outline_foreign_proc (for \140--target asm\')", 41);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i41);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_atomic_stmt\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("restore_hp", 10);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_atomic_stmt\'/5", 41);
	MR_r3 = (MR_Word) MR_string_const("trail_op", 8);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module109)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0);
	MR_init_label7(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,37,26,3,17,18,19,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__gen_init_args__[3]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i40);
	}
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc", 11);
	MR_r2 = (MR_Word) MR_string_const("predicate \140mlds_to_gcc.gen_init_args\'/10", 40);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr7 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tempr8 = MR_r4;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tempr9 = MR_r3;
	MR_tfield(2, MR_tempr3, 0) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr4, 2) = MR_tempr5;
	MR_tfield(0, MR_tempr4, 3) = (MR_Word) MR_tbmkword(0, 5);
	MR_tempr10 = MR_r5;
	MR_tfield(0, MR_tempr4, 4) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 3);
	MR_sv(7) = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr5;
	MR_tfield(3, MR_tempr6, 2) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr9;
	MR_sv(2) = MR_tempr8;
	MR_sv(3) = MR_tempr10;
	MR_sv(4) = MR_tempr7;
	MR_tempr11 = MR_r7;
	MR_sv(5) = MR_tempr11;
	MR_sv(6) = MR_tfield(1, MR_r2, 1);
	MR_sv(8) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr11;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_lval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i17);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i18);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__gen_assign_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i19);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i37);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mlds_to_gcc_maybe_bunch_0(void)
{
	mlds_to_gcc_module0();
	mlds_to_gcc_module1();
	mlds_to_gcc_module2();
	mlds_to_gcc_module3();
	mlds_to_gcc_module4();
	mlds_to_gcc_module5();
	mlds_to_gcc_module6();
	mlds_to_gcc_module7();
	mlds_to_gcc_module8();
	mlds_to_gcc_module9();
	mlds_to_gcc_module10();
	mlds_to_gcc_module11();
	mlds_to_gcc_module12();
	mlds_to_gcc_module13();
	mlds_to_gcc_module14();
	mlds_to_gcc_module15();
	mlds_to_gcc_module16();
	mlds_to_gcc_module17();
	mlds_to_gcc_module18();
	mlds_to_gcc_module19();
	mlds_to_gcc_module20();
	mlds_to_gcc_module21();
	mlds_to_gcc_module22();
	mlds_to_gcc_module23();
	mlds_to_gcc_module24();
	mlds_to_gcc_module25();
	mlds_to_gcc_module26();
	mlds_to_gcc_module27();
	mlds_to_gcc_module28();
	mlds_to_gcc_module29();
	mlds_to_gcc_module30();
	mlds_to_gcc_module31();
	mlds_to_gcc_module32();
	mlds_to_gcc_module33();
	mlds_to_gcc_module34();
	mlds_to_gcc_module35();
	mlds_to_gcc_module36();
	mlds_to_gcc_module37();
	mlds_to_gcc_module38();
	mlds_to_gcc_module39();
}

static void mercury__mlds_to_gcc_maybe_bunch_1(void)
{
	mlds_to_gcc_module40();
	mlds_to_gcc_module41();
	mlds_to_gcc_module42();
	mlds_to_gcc_module43();
	mlds_to_gcc_module44();
	mlds_to_gcc_module45();
	mlds_to_gcc_module46();
	mlds_to_gcc_module47();
	mlds_to_gcc_module48();
	mlds_to_gcc_module49();
	mlds_to_gcc_module50();
	mlds_to_gcc_module51();
	mlds_to_gcc_module52();
	mlds_to_gcc_module53();
	mlds_to_gcc_module54();
	mlds_to_gcc_module55();
	mlds_to_gcc_module56();
	mlds_to_gcc_module57();
	mlds_to_gcc_module58();
	mlds_to_gcc_module59();
	mlds_to_gcc_module60();
	mlds_to_gcc_module61();
	mlds_to_gcc_module62();
	mlds_to_gcc_module63();
	mlds_to_gcc_module64();
	mlds_to_gcc_module65();
	mlds_to_gcc_module66();
	mlds_to_gcc_module67();
	mlds_to_gcc_module68();
	mlds_to_gcc_module69();
	mlds_to_gcc_module70();
	mlds_to_gcc_module71();
	mlds_to_gcc_module72();
	mlds_to_gcc_module73();
	mlds_to_gcc_module74();
	mlds_to_gcc_module75();
	mlds_to_gcc_module76();
	mlds_to_gcc_module77();
	mlds_to_gcc_module78();
	mlds_to_gcc_module79();
}

static void mercury__mlds_to_gcc_maybe_bunch_2(void)
{
	mlds_to_gcc_module80();
	mlds_to_gcc_module81();
	mlds_to_gcc_module82();
	mlds_to_gcc_module83();
	mlds_to_gcc_module84();
	mlds_to_gcc_module85();
	mlds_to_gcc_module86();
	mlds_to_gcc_module87();
	mlds_to_gcc_module88();
	mlds_to_gcc_module89();
	mlds_to_gcc_module90();
	mlds_to_gcc_module91();
	mlds_to_gcc_module92();
	mlds_to_gcc_module93();
	mlds_to_gcc_module94();
	mlds_to_gcc_module95();
	mlds_to_gcc_module96();
	mlds_to_gcc_module97();
	mlds_to_gcc_module98();
	mlds_to_gcc_module99();
	mlds_to_gcc_module100();
	mlds_to_gcc_module101();
	mlds_to_gcc_module102();
	mlds_to_gcc_module103();
	mlds_to_gcc_module104();
	mlds_to_gcc_module105();
	mlds_to_gcc_module106();
	mlds_to_gcc_module107();
	mlds_to_gcc_module108();
	mlds_to_gcc_module109();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mlds_to_gcc__init(void);
void mercury__mlds_to_gcc__init_type_tables(void);
void mercury__mlds_to_gcc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mlds_to_gcc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mlds_to_gcc__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mlds_to_gcc__init_threadscope_string_table(void);
#endif

void mercury__mlds_to_gcc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mlds_to_gcc_maybe_bunch_0();
	mercury__mlds_to_gcc_maybe_bunch_1();
	mercury__mlds_to_gcc_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_defn_info_0,
		mlds_to_gcc__defn_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_field_table_0,
		mlds_to_gcc__field_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0,
		mlds_to_gcc__gcc_type_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_table_0,
		mlds_to_gcc__gcc_type_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_global_info_0,
		mlds_to_gcc__global_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_label_table_0,
		mlds_to_gcc__label_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_symbol_table_0,
		mlds_to_gcc__symbol_table_0_0);
	mercury__mlds_to_gcc__init_debugger();
}

void mercury__mlds_to_gcc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_defn_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_field_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_global_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_label_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_symbol_table_0);
	}
}


void mercury__mlds_to_gcc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mlds_to_gcc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mlds_to_gcc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mlds_to_gcc__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mlds_to_gcc__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
