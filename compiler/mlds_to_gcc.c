/*
** Automatically generated from `mlds_to_gcc.m'
** by the Mercury compiler,
** version rotd-2007-12-21, configured for i686-pc-linux-gnu.
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
INIT mercury__mlds_to_gcc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 532 "../library/io.int"
#include "io.mh"

#line 27 "mlds_to_gcc.c"
#line 540 "../library/io.int"
#include "string.mh"

#line 31 "mlds_to_gcc.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "mlds_to_gcc.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "mlds_to_gcc.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "mlds_to_gcc.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 47 "mlds_to_gcc.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "mlds_to_gcc.c"
#line 52 "mlds_to_gcc.c"
#include "mlds_to_gcc.mh"

#line 55 "mlds_to_gcc.c"
#line 56 "mlds_to_gcc.c"
#ifndef MLDS_TO_GCC_DECL_GUARD
#define MLDS_TO_GCC_DECL_GUARD

#line 60 "mlds_to_gcc.c"
#line 61 "mlds_to_gcc.c"

#endif
#line 64 "mlds_to_gcc.c"

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
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1[128];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_String f2[14];
	MR_Integer f3;
	MR_String f4;
	MR_Integer f5[7];
	MR_String f6[3];
	MR_Integer f7;
	MR_String f8;
	MR_Integer f9[3];
	MR_String f10;
	MR_Integer f11[2];
	MR_String f12[2];
	MR_Integer f13;
	MR_String f14[3];
	MR_Integer f15;
	MR_String f16;
	MR_Integer f17;
	MR_String f18;
	MR_Integer f19[3];
	MR_String f20;
	MR_Integer f21[4];
	MR_String f22[2];
	MR_Integer f23[4];
	MR_String f24;
	MR_Integer f25[2];
	MR_String f26;
	MR_Integer f27;
	MR_String f28;
	MR_Integer f29[2];
	MR_String f30;
	MR_Integer f31[3];
	MR_String f32;
	MR_Integer f33[2];
	MR_String f34[2];
	MR_Integer f35;
	MR_String f36;
	MR_Integer f37[2];
	MR_String f38;
	MR_Integer f39;
	MR_String f40;
	MR_Integer f41[3];
	MR_String f42;
	MR_Integer f43[2];
	MR_String f44;
	MR_Integer f45[5];
	MR_String f46;
	MR_Integer f47[2];
	MR_String f48;
	MR_Integer f49[2];
	MR_String f50;
	MR_Integer f51;
	MR_String f52;
	MR_Integer f53;
	MR_String f54;
	MR_Integer f55[2];
	MR_String f56;
	MR_Integer f57[6];
	MR_String f58;
	MR_Integer f59;
	MR_String f60;
	MR_Integer f61[6];
	MR_String f62;
	MR_Integer f63[3];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mlds_to_gcc__type_ctor_info_symbol_table_0,
	mercury_data_mlds_to_gcc__type_ctor_info_label_table_0,
	mercury_data_mlds_to_gcc__type_ctor_info_initializer_array_size_0,
	mercury_data_mlds_to_gcc__type_ctor_info_global_info_0,
	mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_table_0,
	mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0,
	mercury_data_mlds_to_gcc__type_ctor_info_field_table_0,
	mercury_data_mlds_to_gcc__type_ctor_info_defn_info_0;
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0, 2,4,5,7,9,11,3,13)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0, 15,14,17,19,18,21,23,22)
MR_decl_label5(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0, 25,27,26,29,30)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0, 78,79,80,11,12,18,82,83)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0, 31,33,34,40,41,49,50,88)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 71,5,73,9,10,74,13,14)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 16,19,17,20,22,23,24,25)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 26,29,30,31,27,32,33,34)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 36,37,39,40,42,43,45,46)
MR_decl_label3(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 48,49,72)
MR_decl_label7(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0, 27,18,3,9,10,11,30)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 201,5,6,185,202,10,11,14)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 13,16,186,203,20,21,22,25)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 28,204,30,31,35,36,37,38)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 205,188,43,212,49,211,191,206)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 54,207,57,58,59,60,123,62)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 61,64,193,68,71,65,195,74)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 77,208,84,82,86,91,209,96)
MR_decl_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 97,98,99,100,101,102,103,104)
MR_decl_label7(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0, 199,210,108,110,112,113,116)
MR_decl_label8(mlds_to_gcc__add_func_decl_flags_4_0, 2,4,6,8,9,11,3,13)
MR_decl_label8(mlds_to_gcc__add_func_decl_flags_4_0, 16,18,17,20,22,21,24,26)
MR_decl_label3(mlds_to_gcc__add_func_decl_flags_4_0, 25,28,29)
MR_decl_label8(mlds_to_gcc__add_var_decl_flags_4_0, 2,4,6,9,11,3,12,14)
MR_decl_label8(mlds_to_gcc__add_var_decl_flags_4_0, 13,16,29,18,17,20,30,22)
MR_decl_label2(mlds_to_gcc__add_var_decl_flags_4_0, 24,25)
MR_decl_label3(mlds_to_gcc__build_args_5_0, 16,5,6)
MR_decl_label8(mlds_to_gcc__build_array_initializer_7_0, 30,5,8,10,12,13,14,16)
MR_decl_label5(mlds_to_gcc__build_array_initializer_7_0, 17,18,19,6,20)
MR_decl_label2(mlds_to_gcc__build_call_6_0, 2,3)
MR_decl_label2(mlds_to_gcc__build_cast_rval_6_0, 2,3)
MR_decl_label8(mlds_to_gcc__build_data_addr_4_0, 2,6,3,4,8,9,10,12)
MR_decl_label3(mlds_to_gcc__build_data_addr_4_0, 13,14,15)
MR_decl_label8(mlds_to_gcc__build_du_exist_info_type_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(mlds_to_gcc__build_du_exist_info_type_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label7(mlds_to_gcc__build_du_exist_info_type_3_0, 18,19,20,21,22,23,24)
MR_decl_label8(mlds_to_gcc__build_du_exist_locn_type_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(mlds_to_gcc__build_dummy_param_decls_4_0, 16,5,6)
MR_decl_label8(mlds_to_gcc__build_field_defn_6_0, 13,14,15,19,20,16,22,26)
MR_decl_label3(mlds_to_gcc__build_field_defn_6_0, 27,6,4)
MR_decl_label8(mlds_to_gcc__build_field_defns_8_0, 3,5,9,10,6,12,13,14)
MR_decl_label3(mlds_to_gcc__build_fields_4_0, 16,5,6)
MR_decl_label7(mlds_to_gcc__build_initializer_6_0, 4,6,21,9,22,13,14)
MR_decl_label8(mlds_to_gcc__build_local_data_defn_8_0, 7,8,9,10,14,15,20,22)
MR_decl_label8(mlds_to_gcc__build_local_data_defn_8_0, 24,25,26,28,29,30,31,18)
MR_decl_label8(mlds_to_gcc__build_local_data_defn_8_0, 32,33,34,35,36,17,38,39)
MR_decl_label5(mlds_to_gcc__build_local_data_defn_8_0, 40,50,41,43,44)
MR_decl_label7(mlds_to_gcc__build_local_defns_6_0, 23,3,10,8,6,4,11)
MR_decl_label8(mlds_to_gcc__build_lval_5_0, 4,9,7,12,14,15,18,19)
MR_decl_label8(mlds_to_gcc__build_lval_5_0, 20,16,22,23,24,25,26,27)
MR_decl_label8(mlds_to_gcc__build_lval_5_0, 29,30,31,32,33,34,35,36)
MR_decl_label8(mlds_to_gcc__build_lval_5_0, 37,38,39,6,42,45,46,47)
MR_decl_label8(mlds_to_gcc__build_lval_5_0, 43,49,50,51,52,53,54,56)
MR_decl_label8(mlds_to_gcc__build_lval_5_0, 57,58,59,60,61,62,64,65)
MR_decl_label8(mlds_to_gcc__build_lval_5_0, 67,68,70,72,71,76,75,80)
MR_decl_label8(mlds_to_gcc__build_lval_5_0, 81,82,84,79,88,89,90,93)
MR_decl_label6(mlds_to_gcc__build_lval_5_0, 94,95,87,97,98,99)
MR_decl_label1(mlds_to_gcc__build_param_types_6_0, 2)
MR_decl_label4(mlds_to_gcc__build_param_types_7_0, 14,4,5,6)
MR_decl_label8(mlds_to_gcc__build_param_types_and_decls_8_0, 4,5,6,3,7,8,12,13)
MR_decl_label5(mlds_to_gcc__build_param_types_and_decls_8_0, 14,9,16,17,18)
MR_decl_label8(mlds_to_gcc__build_pseudo_type_info_type_4_0, 4,42,7,8,9,10,11,12)
MR_decl_label8(mlds_to_gcc__build_pseudo_type_info_type_4_0, 43,20,21,22,23,24,25,26)
MR_decl_label8(mlds_to_gcc__build_pseudo_type_info_type_4_0, 27,28,29,30,31,32,40,35)
MR_decl_label8(mlds_to_gcc__build_rtti_type_5_0, 5,7,8,10,12,3,15,17)
MR_decl_label2(mlds_to_gcc__build_rtti_type_5_0, 18,19)
MR_decl_label8(mlds_to_gcc__build_rtti_type_name_4_0, 4,11,12,13,14,26,28,29)
MR_decl_label8(mlds_to_gcc__build_rtti_type_name_4_0, 30,31,32,33,35,37,38,39)
MR_decl_label8(mlds_to_gcc__build_rtti_type_name_4_0, 40,41,42,46,47,49,50,52)
MR_decl_label8(mlds_to_gcc__build_rtti_type_name_4_0, 53,54,55,56,57,58,59,60)
MR_decl_label8(mlds_to_gcc__build_rtti_type_name_4_0, 61,62,63,64,65,130,71,73)
MR_decl_label8(mlds_to_gcc__build_rtti_type_name_4_0, 132,133,134,135,82,83,84,86)
MR_decl_label8(mlds_to_gcc__build_rtti_type_name_4_0, 87,89,90,91,92,93,94,95)
MR_decl_label8(mlds_to_gcc__build_rtti_type_name_4_0, 96,97,98,99,100,101,102,104)
MR_decl_label8(mlds_to_gcc__build_rtti_type_name_4_0, 105,106,107,140,111,112,113,114)
MR_decl_label2(mlds_to_gcc__build_rtti_type_name_4_0, 116,118)
MR_decl_label8(mlds_to_gcc__build_rtti_type_tc_name_4_0, 4,45,46,47,48,49,18,20)
MR_decl_label6(mlds_to_gcc__build_rtti_type_tc_name_4_0, 51,44,25,52,42,30)
MR_decl_label8(mlds_to_gcc__build_rval_5_0, 4,44,7,8,9,10,12,14)
MR_decl_label4(mlds_to_gcc__build_rval_5_0, 47,41,17,15)
MR_decl_label8(mlds_to_gcc__build_rval_const_5_0, 4,5,8,10,12,13,15,17)
MR_decl_label6(mlds_to_gcc__build_rval_const_5_0, 53,21,22,46,25,54)
MR_decl_label1(mlds_to_gcc__build_sized_array_type_5_0, 3)
MR_decl_label8(mlds_to_gcc__build_std_binop_7_0, 7,9,11,13,15,17,4,19)
MR_decl_label8(mlds_to_gcc__build_std_binop_7_0, 20,21,22,3,27,25,29,30)
MR_decl_label8(mlds_to_gcc__build_std_binop_7_0, 33,34,31,39,42,45,48,51)
MR_decl_label8(mlds_to_gcc__build_std_binop_7_0, 54,57,60,63,66,67,69,70)
MR_decl_label8(mlds_to_gcc__build_std_binop_7_0, 72,73,75,76,78,79,81,82)
MR_decl_label8(mlds_to_gcc__build_std_binop_7_0, 84,86,88,90,92,94,96,97)
MR_decl_label8(mlds_to_gcc__build_std_binop_7_0, 99,100,102,103,105,106,108,110)
MR_decl_label8(mlds_to_gcc__build_std_binop_7_0, 113,116,119,120,122,123,125,126)
MR_decl_label8(mlds_to_gcc__build_std_binop_7_0, 128,129,131,132,134,135,137,138)
MR_decl_label5(mlds_to_gcc__build_std_binop_7_0, 139,140,142,38,145)
MR_decl_label1(mlds_to_gcc__build_std_unop_6_0, 2)
MR_decl_label8(mlds_to_gcc__build_struct_initializer_6_0, 32,5,6,7,10,12,14,15)
MR_decl_label7(mlds_to_gcc__build_struct_initializer_6_0, 16,18,19,20,21,8,22)
MR_decl_label2(mlds_to_gcc__build_struct_type_5_0, 2,3)
MR_decl_label8(mlds_to_gcc__build_tc_constr_struct_type_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(mlds_to_gcc__build_tc_constr_struct_type_4_0, 10,11,12)
MR_decl_label8(mlds_to_gcc__build_tc_constr_type_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(mlds_to_gcc__build_tc_constr_type_3_0, 10,11,12,13)
MR_decl_label8(mlds_to_gcc__build_tc_decl_type_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(mlds_to_gcc__build_tc_decl_type_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(mlds_to_gcc__build_tc_decl_type_3_0, 18,19,20,21,22,23,24,25)
MR_decl_label8(mlds_to_gcc__build_tc_id_method_type_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label3(mlds_to_gcc__build_tc_id_method_type_3_0, 10,11,12)
MR_decl_label8(mlds_to_gcc__build_tc_id_type_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(mlds_to_gcc__build_tc_id_type_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(mlds_to_gcc__build_tc_id_type_3_0, 18,19,20,21,22,23,24,25)
MR_decl_label8(mlds_to_gcc__build_tc_id_type_3_0, 26,27,28,29,30,31,32,33)
MR_decl_label8(mlds_to_gcc__build_tc_instance_type_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(mlds_to_gcc__build_tc_instance_type_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label7(mlds_to_gcc__build_tc_instance_type_3_0, 18,19,20,21,22,23,24)
MR_decl_label8(mlds_to_gcc__build_type_6_0, 4,154,155,156,157,158,160,161)
MR_decl_label8(mlds_to_gcc__build_type_6_0, 162,163,24,26,153,29,32,144)
MR_decl_label8(mlds_to_gcc__build_type_6_0, 36,166,38,41,42,39,44,46)
MR_decl_label8(mlds_to_gcc__build_type_6_0, 47,159,52,171,57,56,60,61)
MR_decl_label8(mlds_to_gcc__build_type_6_0, 62,63,64,65,66,167,70,168)
MR_decl_label8(mlds_to_gcc__build_type_6_0, 169,76,77,83,80,84,87,88)
MR_decl_label4(mlds_to_gcc__build_type_6_0, 150,91,170,94)
MR_decl_label8(mlds_to_gcc__build_type_info_type_4_0, 49,18,19,20,21,22,23,24)
MR_decl_label8(mlds_to_gcc__build_type_info_type_4_0, 25,26,48,5,6,7,8,9)
MR_decl_label6(mlds_to_gcc__build_type_info_type_4_0, 10,11,12,13,14,47)
MR_decl_label8(mlds_to_gcc__build_unop_6_0, 4,7,11,5,15,19,13,28)
MR_decl_label8(mlds_to_gcc__build_unop_6_0, 31,35,36,37,101,29,42,44)
MR_decl_label8(mlds_to_gcc__build_unop_expr_5_0, 54,5,6,7,11,55,13,14)
MR_decl_label8(mlds_to_gcc__build_unop_expr_5_0, 15,16,17,18,56,23,24,57)
MR_decl_label8(mlds_to_gcc__build_unop_expr_5_0, 29,30,31,32,58,35,36,37)
MR_decl_label6(mlds_to_gcc__build_unop_expr_5_0, 38,59,41,60,45,46)
MR_decl_label8(mlds_to_gcc__compile_to_asm_4_0, 2,3,4,8,9,11,12,13)
MR_decl_label5(mlds_to_gcc__compile_to_asm_4_0, 14,15,16,17,18)
MR_decl_label6(mlds_to_gcc__gen_case_4_0, 2,3,4,5,6,7)
MR_decl_label6(mlds_to_gcc__gen_case_label_4_0, 4,5,3,7,8,9)
MR_decl_label8(mlds_to_gcc__gen_class_7_0, 2,5,3,7,8,11,12,15)
MR_decl_label8(mlds_to_gcc__gen_class_7_0, 13,17,18,19,22,23,24,25)
MR_decl_label2(mlds_to_gcc__gen_class_7_0, 26,27)
MR_decl_label8(mlds_to_gcc__gen_default_4_0, 26,29,8,9,10,11,12,13)
MR_decl_label2(mlds_to_gcc__gen_default_4_0, 27,30)
MR_decl_label8(mlds_to_gcc__gen_defn_body_8_0, 9,10,11,14,15,17,18,20)
MR_decl_label8(mlds_to_gcc__gen_defn_body_8_0, 21,22,23,25,26,27,28,29)
MR_decl_label8(mlds_to_gcc__gen_defn_body_8_0, 30,12,31,32,33,34,7,48)
MR_decl_label1(mlds_to_gcc__gen_defn_body_8_0, 5)
MR_decl_label3(mlds_to_gcc__gen_defns_6_0, 10,3,4)
MR_decl_label8(mlds_to_gcc__gen_func_9_0, 33,4,5,6,7,8,9,10)
MR_decl_label8(mlds_to_gcc__gen_func_9_0, 11,12,13,14,15,16,17,18)
MR_decl_label7(mlds_to_gcc__gen_func_9_0, 19,20,21,22,23,24,25)
MR_decl_label8(mlds_to_gcc__gen_init_fn_defns_5_0, 2,3,5,4,7,9,10,11)
MR_decl_label8(mlds_to_gcc__gen_init_fn_defns_5_0, 12,13,14,15,16,17,18,19)
MR_decl_label5(mlds_to_gcc__gen_init_fn_defns_5_0, 20,21,22,23,24)
MR_decl_label4(mlds_to_gcc__gen_statement_4_0, 2,3,4,5)
MR_decl_label8(mlds_to_gcc__get_func_name_3_0, 7,8,9,12,13,5,16,17)
MR_decl_label8(mlds_to_gcc__get_func_name_3_0, 18,21,19,23,24,25,28,31)
MR_decl_label2(mlds_to_gcc__get_func_name_3_0, 32,2)
MR_decl_label3(mlds_to_gcc__is_static_member_1_0, 5,2,1)
MR_decl_label8(mlds_to_gcc__make_func_decl_6_0, 2,8,5,11,12,21,17,19)
MR_decl_label8(mlds_to_gcc__make_func_decl_6_0, 13,14,30,31,32,34,35,36)
MR_decl_label8(mlds_to_gcc__make_func_decl_for_defn_7_0, 2,8,5,11,12,21,17,19)
MR_decl_label8(mlds_to_gcc__make_func_decl_for_defn_7_0, 15,13,14,30,31,32,34,35)
MR_decl_label2(mlds_to_gcc__mlds_make_base_class_5_0, 2,3)
MR_decl_label8(mlds_to_gcc__rtti_enum_const_2_0, 3,58,5,6,9,10,12,13)
MR_decl_label8(mlds_to_gcc__rtti_enum_const_2_0, 14,15,16,17,20,21,22,23)
MR_decl_label8(mlds_to_gcc__rtti_enum_const_2_0, 24,25,26,27,28,29,30,31)
MR_decl_label8(mlds_to_gcc__rtti_enum_const_2_0, 32,33,34,35,36,37,38,39)
MR_decl_label8(mlds_to_gcc__rtti_enum_const_2_0, 40,41,42,43,44,45,47,48)
MR_decl_label8(mlds_to_gcc__rtti_enum_const_2_0, 49,50,51,52,53,54,55,56)
MR_decl_label8(mlds_to_gcc__run_gcc_backend_5_0, 2,3,5,6,7,8,9,12)
MR_decl_label8(mlds_to_gcc__run_gcc_backend_5_0, 13,16,17,20,21,22,23,24)
MR_decl_label7(mlds_to_gcc__run_gcc_backend_5_0, 25,26,27,28,29,30,34)
MR_decl_label1(mlds_to_gcc__statement_contains_label_2_0, 1)
MR_decl_label8(fn__mlds_to_gcc__build_data_name_1_0, 4,90,82,9,11,34,35,36)
MR_decl_label8(fn__mlds_to_gcc__build_data_name_1_0, 37,32,30,12,15,18,19,14)
MR_decl_label7(fn__mlds_to_gcc__build_data_var_name_2_0, 2,6,3,4,8,9,10)
MR_decl_label8(fn__mlds_to_gcc__build_qualified_name_1_0, 4,5,7,8,9,10,11,2)
MR_decl_label6(fn__mlds_to_gcc__build_qualified_name_1_0, 20,16,18,13,29,30)
MR_decl_label3(fn__mlds_to_gcc__get_class_type_name_1_0, 4,3,2)
MR_decl_label1(fn__mlds_to_gcc__make_public_1_0, 2)
MR_decl_label5(__Unify___mlds_to_gcc__defn_info_0_0, 4,6,8,12,1)
MR_decl_label3(__Unify___mlds_to_gcc__gcc_type_info_0_0, 4,8,1)
MR_decl_label3(__Unify___mlds_to_gcc__global_info_0_0, 4,8,1)
MR_decl_label3(__Unify___mlds_to_gcc__initializer_array_size_0_0, 10,5,1)
MR_decl_label6(__Compare___mlds_to_gcc__defn_info_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___mlds_to_gcc__gcc_type_info_0_0, 3,2,5,21)
MR_decl_label4(__Compare___mlds_to_gcc__global_info_0_0, 3,2,5,21)
MR_decl_label4(__Compare___mlds_to_gcc__initializer_array_size_0_0, 18,7,5,9)
MR_def_extern_entry(mlds_to_gcc__run_gcc_backend_5_0)
MR_decl_static(fn__mlds_to_gcc__this_file_0_0)
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
MR_decl_static(mlds_to_gcc__build_unop_expr_5_0)
MR_decl_static(mlds_to_gcc__build_dummy_param_decls_4_0)
MR_decl_static(mlds_to_gcc__make_func_decl_6_0)
MR_decl_static(mlds_to_gcc__build_data_addr_4_0)
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
MR_decl_static(mlds_to_gcc__build_param_types_and_decls_8_0)
MR_decl_static(mlds_to_gcc__make_func_decl_for_defn_7_0)
MR_decl_static(mlds_to_gcc__gen_func_9_0)
MR_decl_static(mlds_to_gcc__gen_defns_6_0)
MR_decl_static(mlds_to_gcc__gen_defn_6_0)
MR_decl_static(mlds_to_gcc__gen_defn_body_8_0)
MR_decl_static(mlds_to_gcc__gen_class_7_0)
MR_def_extern_entry(mlds_to_gcc__compile_to_asm_4_0)
MR_decl_static(fn__mlds_to_gcc__make_public_1_0)
MR_decl_static(mlds_to_gcc__is_static_member_1_0)
MR_decl_static(mlds_to_gcc__mlds_make_base_class_5_0)
MR_decl_static(mlds_to_gcc__statement_contains_label_2_0)
MR_decl_static(mlds_to_gcc__gen_case_4_0)
MR_decl_static(mlds_to_gcc__gen_case_label_4_0)
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
MR_decl_static(__Unify___mlds_to_gcc__initializer_array_size_0_0)
MR_decl_static(__Compare___mlds_to_gcc__initializer_array_size_0_0)
MR_decl_static(__Unify___mlds_to_gcc__label_table_0_0)
MR_decl_static(__Compare___mlds_to_gcc__label_table_0_0)
MR_decl_static(__Unify___mlds_to_gcc__symbol_table_0_0)
MR_decl_static(__Compare___mlds_to_gcc__symbol_table_0_0)
MR_decl_static(fn__mlds_to_gcc__IntroducedFrom__func__run_gcc_backend__219__1_1_0)
MR_decl_static(mlds_to_gcc__IntroducedFrom__pred__gen_defn_body__830__1_1_0)
MR_decl_static(mlds_to_gcc__IntroducedFrom__pred__build_rtti_type__2012__1_2_0)
MR_decl_static(mlds_to_gcc__IntroducedFrom__pred__gen_stmt__2832__1_2_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0)
MR_decl_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0)

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__run_gcc_backend_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__build_rtti_type_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_func_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_target_lang_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_1;
static const struct mercury_type_0 mercury_common_0[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__run_gcc_backend_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__build_rtti_type_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__gen_func_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_target_lang),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_4_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(3,5),
MR_COMMON(3,5)
},
};

MR_decl_entry(gcc__build_label_4_0);
MR_decl_entry(ml_backend__ml_util__defn_is_type_1_0);
static const struct mercury_type_1 mercury_common_1[5] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__mlds_to_gcc__IntroducedFrom__func__run_gcc_backend__219__1_1_0),
0
},
{
MR_COMMON(10,2),
MR_ENTRY_AP(gcc__build_label_4_0),
0
},
{
MR_COMMON(12,1),
MR_ENTRY_AP(mlds_to_gcc__is_static_member_1_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(fn__mlds_to_gcc__make_public_1_0),
0
},
{
MR_COMMON(12,2),
MR_ENTRY_AP(ml_backend__ml_util__defn_is_type_1_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
5
},
{
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const struct mercury_type_3 mercury_common_3[7] =
{
{
{
MR_TAG_COMMON(1,2,0),
MR_tbmkword(0, 0)
}
},
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
MR_TAG_COMMON(2,9,1),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
9,
0
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_string_const("builtin", 7)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
-2,
-1,
-1,
-1,
5,
-1,
-1,
-1,
-1,
10,
-1,
-1,
-1,
-1,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
1,
2,
-2,
3,
-2,
-2,
-2,
4,
-2,
-2,
-1,
-1,
-2,
-1,
6,
-1,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
8,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-1,
-2,
9,
-2,
-2,
-1,
-2,
-2,
-2,
-1,
-2,
-2,
-1,
11,
-2,
-1,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
12,
-2,
-2,
-1,
-2,
-2,
-1,
-2,
13,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
14,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
0,
{
MR_string_const("MR_TYPECTOR_REP_BASETYPECLASSINFO", 33),
MR_string_const("MR_SECTAG_LOCAL", 15),
MR_string_const("MR_SECTAG_NONE", 14),
MR_string_const("MR_TYPECTOR_REP_NOTAG_GROUND", 28),
MR_string_const("MR_TYPECTOR_REP_BITMAP", 22),
MR_string_const("MR_TYPECTOR_REP_DU_USEREQ", 25),
MR_string_const("MR_TYPECTOR_REP_TICKET", 22),
MR_string_const("MR_TYPECTOR_REP_TYPECTORINFO", 28),
MR_string_const("MR_TYPECTOR_REP_NOTAG_USEREQ", 28),
MR_string_const("MR_TYPECTOR_REP_MAXFR", 21),
MR_string_const("MR_TYPECTOR_REP_C_POINTER", 25),
MR_string_const("MR_TYPECTOR_REP_FUNC", 20),
MR_string_const("MR_TYPECTOR_REP_ENUM_USEREQ", 27),
MR_string_const("MR_PREDICATE", 12)
},
0,
MR_string_const("MR_TYPECTOR_REP_FLOAT", 21),
{
0,
0,
0,
0,
0,
0,
0
},
{
MR_string_const("MR_TYPECTOR_REP_TUPLE", 21),
MR_string_const("MR_TYPECTOR_REP_CHAR", 20),
MR_string_const("MR_TYPECTOR_REP_PSEUDOTYPEDESC", 30)
},
0,
MR_string_const("MR_TYPECTOR_REP_FOREIGN", 23),
{
0,
0,
0
},
MR_string_const("MR_TYPECTOR_REP_STABLE_C_POINTER", 32),
{
0,
0
},
{
MR_string_const("MR_TYPECTOR_REP_RESERVED_ADDR_USEREQ", 36),
MR_string_const("MR_TYPECTOR_REP_TYPEDESC", 24)
},
0,
{
MR_string_const("MR_TYPECTOR_REP_REDOIP", 22),
MR_string_const("MR_TYPECTOR_REP_TRAIL_PTR", 25),
MR_string_const("MR_TYPECTOR_REP_DUMMY", 21)
},
0,
MR_string_const("MR_TYPECTOR_REP_TYPECTORDESC", 28),
0,
MR_string_const("MR_SECTAG_VARIABLE", 18),
{
0,
0,
0
},
MR_string_const("MR_TYPECTOR_REP_TYPECLASSINFO", 29),
{
0,
0,
0,
0
},
{
MR_string_const("MR_TYPECTOR_REP_VOID", 20),
MR_string_const("MR_TYPECTOR_REP_STRING", 22)
},
{
0,
0,
0,
0
},
MR_string_const("MR_TYPECTOR_REP_TYPEINFO", 24),
{
0,
0
},
MR_string_const("MR_TYPECTOR_REP_EQUIV", 21),
0,
MR_string_const("MR_TYPECTOR_REP_RESERVED_ADDR", 29),
{
0,
0
},
MR_string_const("MR_TYPECTOR_REP_SUBGOAL", 23),
{
0,
0,
0
},
MR_string_const("MR_TYPECTOR_REP_STABLE_FOREIGN", 30),
{
0,
0
},
{
MR_string_const("MR_TYPECTOR_REP_UNKNOWN", 23),
MR_string_const("MR_TYPECTOR_REP_REDOFR", 22)
},
0,
MR_string_const("MR_TYPECTOR_REP_EQUIV_GROUND", 28),
{
0,
0
},
MR_string_const("MR_TYPECTOR_REP_CURFR", 21),
0,
MR_string_const("MR_TYPECTOR_REP_ENUM", 20),
{
0,
0,
0
},
MR_string_const("MR_TYPECTOR_REP_DU", 18),
{
0,
0
},
MR_string_const("MR_TYPECTOR_REP_ARRAY", 21),
{
0,
0,
0,
0,
0
},
MR_string_const("MR_TYPECTOR_REP_HP", 18),
{
0,
0
},
MR_string_const("MR_TYPECTOR_REP_PRED", 20),
{
0,
0
},
MR_string_const("MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ", 35),
0,
MR_string_const("MR_TYPECTOR_REP_REFERENCE", 25),
0,
MR_string_const("MR_FUNCTION", 11),
{
0,
0
},
MR_string_const("MR_SECTAG_REMOTE", 16),
{
0,
0,
0,
0,
0,
0
},
MR_string_const("MR_TYPECTOR_REP_NOTAG", 21),
0,
MR_string_const("MR_TYPECTOR_REP_INT", 19),
{
0,
0,
0,
0,
0,
0
},
MR_string_const("MR_TYPECTOR_REP_SUCCIP", 22),
{
0,
0,
0
}
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
5,
MR_tbmkword(0, 5)
},
};

static const struct mercury_type_9 mercury_common_9[2] =
{
{
MR_TAG_COMMON(3,8,0)
},
{
MR_TAG_COMMON(1,2,1)
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
mercury_data__closure_layout__mlds_to_gcc__gen_func_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_tree_0;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_case_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
static const struct mercury_type_10 mercury_common_10[4] =
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
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__gen_func_9_0_2,
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

static const struct mercury_type_11 mercury_common_11[2] =
{
{
MR_string_const("_type_tables", 12),
MR_tbmkword(0, 0)
},
{
MR_string_const("__init", 6),
MR_TAG_COMMON(1,11,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_defn_body_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_class_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_4_0_3;
static const struct mercury_type_12 mercury_common_12[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__gen_defn_body_8_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(3,4)
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__gen_class_7_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_4_0_3,
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
static const struct mercury_type_13 mercury_common_13[1] =
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
static const struct mercury_type_14 mercury_common_14[1] =
{
{
MR_COMMON(0,3),
MR_ENTRY_AP(ml_backend__ml_util__defn_contains_foreign_code_2_0),
1,
2
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0 = {
	&mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_tree_0;
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_tree_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0gcc__type_ctor_info_tree_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
	(MR_TypeInfo) &mercury_data_gcc__type_ctor_info_tree_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_symbol_table_0 = {
	0,
	13,
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

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0gcc__type_ctor_info_tree_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_gcc__type_ctor_info_tree_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_label_table_0 = {
	0,
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mlds_to_gcc__field_types_initializer_array_size_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mlds_to_gcc__du_functor_desc_initializer_array_size_0_0 = {
	"array_size",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mlds_to_gcc__field_types_initializer_array_size_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mlds_to_gcc__du_functor_desc_initializer_array_size_0_1 = {
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

const MR_DuFunctorDescPtr mercury_data_mlds_to_gcc__du_stag_ordered_initializer_array_size_0_0[] = {
	&mercury_data_mlds_to_gcc__du_functor_desc_initializer_array_size_0_1

};

const MR_DuFunctorDescPtr mercury_data_mlds_to_gcc__du_stag_ordered_initializer_array_size_0_1[] = {
	&mercury_data_mlds_to_gcc__du_functor_desc_initializer_array_size_0_0

};

const MR_DuPtagLayout mercury_data_mlds_to_gcc__du_ptag_ordered_initializer_array_size_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mlds_to_gcc__du_stag_ordered_initializer_array_size_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mlds_to_gcc__du_stag_ordered_initializer_array_size_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mlds_to_gcc__du_name_ordered_initializer_array_size_0[] = {
	&mercury_data_mlds_to_gcc__du_functor_desc_initializer_array_size_0_0,
	&mercury_data_mlds_to_gcc__du_functor_desc_initializer_array_size_0_1
};

const MR_Integer mercury_data_mlds_to_gcc__functor_number_map_initializer_array_size_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_initializer_array_size_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mlds_to_gcc__initializer_array_size_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mlds_to_gcc__initializer_array_size_0_0)),
	"mlds_to_gcc",
	"initializer_array_size",
	{ (void *)mercury_data_mlds_to_gcc__du_name_ordered_initializer_array_size_0 },
	{ (void *)mercury_data_mlds_to_gcc__du_ptag_ordered_initializer_array_size_0 },
	2,
	4,
	mercury_data_mlds_to_gcc__functor_number_map_initializer_array_size_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0mlds_to_gcc__type_ctor_info_gcc_type_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
	(MR_TypeInfo) &mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0
}};

const MR_PseudoTypeInfo mercury_data_mlds_to_gcc__field_types_global_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0mlds_to_gcc__type_ctor_info_gcc_type_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0gcc__type_ctor_info_tree_0
};

const MR_ConstString mercury_data_mlds_to_gcc__field_names_global_info_0_0[] = {
	"type_table",
	"global_vars"
};

static const MR_DuFunctorDesc mercury_data_mlds_to_gcc__du_functor_desc_global_info_0_0 = {
	"global_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mlds_to_gcc__field_types_global_info_0_0,
	mercury_data_mlds_to_gcc__field_names_global_info_0_0,
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
	13,
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

const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_table_0 = {
	0,
	13,
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

static const MR_FA_TypeInfo_Struct1 mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1builtin__type_ctor_info_string_0 = {
	&mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1builtin__type_ctor_info_string_0gcc__type_ctor_info_tree_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_gcc__type_ctor_info_tree_0
}};

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
	13,
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

const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_field_table_0 = {
	0,
	13,
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
extern const MR_TypeCtorInfo_Struct mercury_data_mlds_to_gcc__type_ctor_info_global_info_0;

const MR_PseudoTypeInfo mercury_data_mlds_to_gcc__field_types_defn_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mlds_to_gcc__type_ctor_info_global_info_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_entity_name_0gcc__type_ctor_info_tree_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0gcc__type_ctor_info_tree_0
};

const MR_ConstString mercury_data_mlds_to_gcc__field_names_defn_info_0_0[] = {
	"global_info",
	"func_name",
	"local_vars",
	"label_table"
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
	13,
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

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__run_gcc_backend_5_0_1 = {
{
MR_FUNCTION,
"mlds_to_gcc",
"mlds_to_gcc",
"lambda_mlds_to_gcc_m_219",
2,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
219,
"d1;c27;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__build_rtti_type_5_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"lambda_mlds_to_gcc_m_2012",
2,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
2012,
"d1;c9;d2;c2;"
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
2727,
"d1;c5;"
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
2937,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_func_9_0_1 = {
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
1515,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_func_9_0_2 = {
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
1516,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__gen_defn_body_8_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"lambda_mlds_to_gcc_m_830",
1,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
830,
"d1;c9;d2;c2;"
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
1333,
"d1;c14;"
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
1319,
"d1;c13;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_4_0_1 = {
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
247,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_4_0_2 = {
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
293,
"d1;c11;e;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mlds_to_gcc__compile_to_asm_4_0_3 = {
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
318,
"d1;c14;"
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
2942,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_1 = {
{
MR_PREDICATE,
"mlds_to_gcc",
"mlds_to_gcc",
"lambda_mlds_to_gcc_m_2832",
2,
0
},
"mlds_to_gcc",
"mlds_to_gcc.m",
2832,
"d10;c7;"
};

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(parse_tree__modules__module_name_to_file_name_6_0);
MR_decl_entry(libs__globals__io_lookup_accumulating_option_4_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(parse_tree__prog_out__maybe_write_string_4_0);
MR_decl_entry(parse_tree__prog_out__maybe_flush_output_3_0);
MR_decl_entry(gcc__run_backend_6_0);
MR_decl_entry(parse_tree__prog_out__report_error_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module0)
	MR_init_entry1(mlds_to_gcc__run_gcc_backend_5_0);
	MR_init_label8(mlds_to_gcc__run_gcc_backend_5_0,2,3,5,6,7,8,9,12)
	MR_init_label8(mlds_to_gcc__run_gcc_backend_5_0,13,16,17,20,21,22,23,24)
	MR_init_label7(mlds_to_gcc__run_gcc_backend_5_0,25,26,27,28,29,30,34)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mlds_to_gcc__run_gcc_backend_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 257;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i2);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_5_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_sv(3) = (MR_Word) MR_string_const(".pic_s", 6);
	MR_sv(4) = (MR_Word) MR_string_const("-fpic ", 6);
	MR_r2 = (MR_Word) MR_string_const(".m", 2);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_5_0_i5);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(3) = (MR_Word) MR_string_const(".s", 2);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const(".m", 2);
	MR_r3 = (MR_Integer) 0;
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		mlds_to_gcc__run_gcc_backend_5_0_i6);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		mlds_to_gcc__run_gcc_backend_5_0_i7);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 43;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i8);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_5_0_i9);
	}
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Integer) 419;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i12);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_string_const("-quiet ", 7);
	MR_r1 = (MR_Integer) 419;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i12);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_5_0_i13);
	}
	MR_sv(6) = (MR_Word) MR_string_const("-O2 -fomit-frame-pointer ", 25);
	MR_r1 = (MR_Integer) 414;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i16);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Integer) 414;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i16);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_5_0_i17);
	}
	MR_sv(7) = (MR_Word) MR_string_const("-g ", 3);
	MR_r1 = (MR_Integer) 416;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i20);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_string_const("", 0);
	MR_r1 = (MR_Integer) 416;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i20);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__list__map_2_0,
		mlds_to_gcc__run_gcc_backend_5_0_i21);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		mlds_to_gcc__run_gcc_backend_5_0_i22);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" -o ", 4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
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
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\"<GCC back-end>\" ", 17);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mlds_to_gcc__run_gcc_backend_5_0_i23);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i24);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% Invoking GCC back-end as \140", 28);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i25);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i26);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\':\n", 3);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i27);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_flush_output_3_0,
		mlds_to_gcc__run_gcc_backend_5_0_i28);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(gcc__run_backend_6_0,
		mlds_to_gcc__run_gcc_backend_5_0_i29);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__run_gcc_backend_5_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("GCC back-end failed!\n", 21);
	MR_np_call_localret_ent(parse_tree__prog_out__report_error_3_0,
		mlds_to_gcc__run_gcc_backend_5_0_i34);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% GCC back-end done.\n", 21);
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_write_string_4_0,
		mlds_to_gcc__run_gcc_backend_5_0_i34);
MR_def_label(mlds_to_gcc__run_gcc_backend_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module1)
	MR_init_entry1(fn__mlds_to_gcc__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__access_1_0);
MR_decl_entry(gcc__set_var_decl_public_3_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(fn__ml_backend__mlds__virtuality_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(fn__ml_backend__mlds__finality_1_0);
MR_decl_entry(gcc__set_var_decl_readonly_3_0);
MR_decl_entry(fn__ml_backend__mlds__constness_1_0);
MR_decl_entry(fn__ml_backend__mlds__abstractness_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module2)
	MR_init_entry1(mlds_to_gcc__add_var_decl_flags_4_0);
	MR_init_label8(mlds_to_gcc__add_var_decl_flags_4_0,2,4,6,9,11,3,12,14)
	MR_init_label8(mlds_to_gcc__add_var_decl_flags_4_0,13,16,29,18,17,20,30,22)
	MR_init_label2(mlds_to_gcc__add_var_decl_flags_4_0,24,25)
MR_BEGIN_CODE

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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(mlds_to_gcc__add_var_decl_flags_4_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__add_var_decl_flags_4_0_i6) MR_AND
		MR_LABEL_AP(mlds_to_gcc__add_var_decl_flags_4_0_i11) MR_AND
		MR_LABEL_AP(mlds_to_gcc__add_var_decl_flags_4_0_i9) MR_AND
		MR_LABEL_AP(mlds_to_gcc__add_var_decl_flags_4_0_i11));
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__set_var_decl_public_3_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i11);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140protected\' access", 18);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140default\' access", 16);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__virtuality_1_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i12);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i14);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i13);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140virtual\' variable", 18);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i13);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__finality_1_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i16);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i18);
	}
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i17);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__set_var_decl_readonly_3_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i29);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i20);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i22);
	}
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i24);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__set_var_decl_readonly_3_0,
		mlds_to_gcc__add_var_decl_flags_4_0_i30);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_var_decl_flags_4_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140abstract\' variable", 19);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(mlds_to_gcc__add_var_decl_flags_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__ptr_type_node_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module3)
	MR_init_entry1(fn__mlds_to_gcc__MR_Box_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(mlds_to_gcc_module4)
	MR_init_entry1(fn__mlds_to_gcc__MR_Integer_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mlds_to_gcc_module5)
	MR_init_entry1(fn__mlds_to_gcc__MR_Word_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(mlds_to_gcc_module6)
	MR_init_entry1(mlds_to_gcc__build_sized_array_type_5_0);
	MR_init_label1(mlds_to_gcc__build_sized_array_type_5_0,3)
MR_BEGIN_CODE

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
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_tailcall_ent(gcc__build_array_type_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__empty_field_list_3_0);
MR_decl_entry(gcc__build_field_decl_5_0);
MR_decl_entry(gcc__cons_field_list_5_0);

MR_BEGIN_MODULE(mlds_to_gcc_module7)
	MR_init_entry1(mlds_to_gcc__build_fields_4_0);
	MR_init_label3(mlds_to_gcc__build_fields_4_0,16,5,6)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(mlds_to_gcc__build_fields_4_0,
		mlds_to_gcc__build_fields_4_0_i5);
MR_def_label(mlds_to_gcc__build_fields_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_fields_4_0_i6);
MR_def_label(mlds_to_gcc__build_fields_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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

MR_BEGIN_MODULE(mlds_to_gcc_module8)
	MR_init_entry1(mlds_to_gcc__build_struct_type_5_0);
	MR_init_label2(mlds_to_gcc__build_struct_type_5_0,2,3)
MR_BEGIN_CODE

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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
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


MR_BEGIN_MODULE(mlds_to_gcc_module9)
	MR_init_entry1(fn__mlds_to_gcc__MR_TypeInfo_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mlds_to_gcc_module10)
	MR_init_entry1(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(mlds_to_gcc_module11)
	MR_init_entry1(fn__mlds_to_gcc__MR_int_least16_t_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mlds_to_gcc_module12)
	MR_init_entry1(mlds_to_gcc__build_du_exist_locn_type_3_0);
	MR_init_label8(mlds_to_gcc__build_du_exist_locn_type_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_arg_num", 16);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i3);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_offset_in_tci", 22);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = (MR_Word) MR_string_const("MR_exist_offset_in_tci", 22);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i4);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuExistLocn", 14);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_du_exist_locn_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_du_exist_locn_type_3_0,9)
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

MR_BEGIN_MODULE(mlds_to_gcc_module13)
	MR_init_entry1(fn__mlds_to_gcc__MR_int_least8_t_0_0);
MR_BEGIN_CODE

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
MR_decl_entry(fn__string__format_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module14)
	MR_init_entry1(mlds_to_gcc__build_tc_constr_struct_type_4_0);
	MR_init_label8(mlds_to_gcc__build_tc_constr_struct_type_4_0,2,3,4,5,6,7,8,9)
	MR_init_label3(mlds_to_gcc__build_tc_constr_struct_type_4_0,10,11,12)
MR_BEGIN_CODE

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
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_decl_type_3_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i4);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i5);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassConstraint_%dStruct", 31);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i6);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_constr_arg_ptis", 21);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_string_const("MR_tc_constr_type_class", 23);
	MR_sv(5) = (MR_Word) MR_string_const("MR_tc_constr_arg_ptis", 21);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i7);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i8);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i9);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i10);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i11);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_constr_struct_type_4_0_i12);
MR_def_label(mlds_to_gcc__build_tc_constr_struct_type_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module15)
	MR_init_entry1(mlds_to_gcc__build_tc_constr_type_3_0);
	MR_init_label8(mlds_to_gcc__build_tc_constr_type_3_0,2,3,4,5,6,7,8,9)
	MR_init_label4(mlds_to_gcc__build_tc_constr_type_3_0,10,11,12,13)
MR_BEGIN_CODE

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
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_decl_type_3_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i4);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassConstraint_%dStruct", 31);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_constr_arg_ptis", 21);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_string_const("MR_tc_constr_type_class", 23);
	MR_sv(5) = (MR_Word) MR_string_const("MR_tc_constr_arg_ptis", 21);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__declared_type_1_0,
		mlds_to_gcc__build_tc_constr_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_tc_constr_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(gcc__build_pointer_type_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module16)
	MR_init_entry1(mlds_to_gcc__build_tc_decl_type_3_0);
	MR_init_label8(mlds_to_gcc__build_tc_decl_type_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(mlds_to_gcc__build_tc_decl_type_3_0,10,11,12,13,14,15,16,17)
	MR_init_label8(mlds_to_gcc__build_tc_decl_type_3_0,18,19,20,21,22,23,24,25)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_arg_num", 16);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i3);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_offset_in_tci", 22);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = (MR_Word) MR_string_const("MR_exist_offset_in_tci", 22);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i4);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuExistLocn", 14);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__declared_type_1_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_constr_type_3_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_decl_id", 13);
	MR_sv(1) = MR_tempr1;
	MR_sv(7) = MR_r1;
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i14);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_decl_version_number", 25);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i15);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_decl_num_supers", 21);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_tc_decl_supers", 17);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_tempr5;
	MR_sv(6) = (MR_Word) MR_string_const("MR_tc_decl_num_supers", 21);
	MR_sv(8) = (MR_Word) MR_string_const("MR_tc_decl_supers", 17);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i16);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i17);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i18);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i19);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i20);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i21);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i22);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i23);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i24);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassDeclStruct", 22);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_decl_type_3_0_i25);
MR_def_label(mlds_to_gcc__build_tc_decl_type_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module17)
	MR_init_entry1(mlds_to_gcc__build_du_exist_info_type_3_0);
	MR_init_label8(mlds_to_gcc__build_du_exist_info_type_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(mlds_to_gcc__build_du_exist_info_type_3_0,10,11,12,13,14,15,16,17)
	MR_init_label7(mlds_to_gcc__build_du_exist_info_type_3_0,18,19,20,21,22,23,24)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_arg_num", 16);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i3);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_offset_in_tci", 22);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = (MR_Word) MR_string_const("MR_exist_offset_in_tci", 22);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i4);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuExistLocn", 14);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__declared_type_1_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_typeinfos_plain", 24);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_typeinfos_in_tci", 25);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i14);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_exist_tcis", 13);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_exist_typeinfo_locns", 23);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr4, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_tempr5;
	MR_sv(6) = (MR_Word) MR_string_const("MR_exist_tcis", 13);
	MR_sv(8) = (MR_Word) MR_string_const("MR_exist_typeinfo_locns", 23);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i15);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i16);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i17);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i18);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i19);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i20);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i21);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i22);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i23);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuExistInfo", 14);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_du_exist_info_type_3_0_i24);
MR_def_label(mlds_to_gcc__build_du_exist_info_type_3_0,24)
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

MR_BEGIN_MODULE(mlds_to_gcc_module18)
	MR_init_entry1(fn__mlds_to_gcc__MR_ConstString_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(mlds_to_gcc_module19)
	MR_init_entry1(fn__mlds_to_gcc__MR_bool_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mlds_to_gcc_module20)
	MR_init_entry1(fn__mlds_to_gcc__MR_ProcAddr_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mlds_to_gcc_module21)
	MR_init_entry1(fn__mlds_to_gcc__MR_Sectag_Locn_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(mlds_to_gcc_module22)
	MR_init_entry1(fn__mlds_to_gcc__MR_int_least32_t_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(mlds_to_gcc_module23)
	MR_init_entry1(mlds_to_gcc__build_rtti_type_name_4_0);
	MR_init_label8(mlds_to_gcc__build_rtti_type_name_4_0,4,11,12,13,14,26,28,29)
	MR_init_label8(mlds_to_gcc__build_rtti_type_name_4_0,30,31,32,33,35,37,38,39)
	MR_init_label8(mlds_to_gcc__build_rtti_type_name_4_0,40,41,42,46,47,49,50,52)
	MR_init_label8(mlds_to_gcc__build_rtti_type_name_4_0,53,54,55,56,57,58,59,60)
	MR_init_label8(mlds_to_gcc__build_rtti_type_name_4_0,61,62,63,64,65,130,71,73)
	MR_init_label8(mlds_to_gcc__build_rtti_type_name_4_0,132,133,134,135,82,83,84,86)
	MR_init_label8(mlds_to_gcc__build_rtti_type_name_4_0,87,89,90,91,92,93,94,95)
	MR_init_label8(mlds_to_gcc__build_rtti_type_name_4_0,96,97,98,99,100,101,102,104)
	MR_init_label8(mlds_to_gcc__build_rtti_type_name_4_0,105,106,107,140,111,112,113,114)
	MR_init_label2(mlds_to_gcc__build_rtti_type_name_4_0,116,118)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_rtti_type_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i130) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i71) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i73));
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i130) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i140) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i140) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i11) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i140) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i140) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i140) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i140) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i140) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i26) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i28) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i35) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i37) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i140) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i46) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i49) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i52) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i140));
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i12);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_notag_functor_name", 21);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i13);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_notag_functor_arg_type", 25);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i14);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_notag_functor_arg_name", 25);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("MR_NotagFunctorDesc", 19);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_succip_word = MR_sv(13);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i130) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i71) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i73));
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i29);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ra_other_functors", 20);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i30);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ra_constants", 15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i31);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ra_res_symbolic_addrs", 24);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i32);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ra_num_res_symbolic_addrs", 28);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i33);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ra_num_res_numeric_addrs", 27);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("MR_ReservedAddrTypeDesc", 23);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 12);
	MR_succip_word = MR_sv(13);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i130) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i71) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i73));
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i38);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_maybe_res_init", 17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_MaybeResFunctorDesc", 22);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_struct_type_5_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i39);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i40);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_maybe_res_name", 17);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_Integer_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i41);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_maybe_res_arity", 18);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_bool_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i42);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
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
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("MR_MaybeResAddrFunctorDesc", 26);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i47);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_functors_init", 16);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_TypeFunctors", 15);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i50);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_layout_init", 14);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("MR_TypeLayout", 13);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 14);
	MR_np_localcall_lab(mlds_to_gcc__build_rtti_type_name_4_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i53);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 15);
	MR_np_localcall_lab(mlds_to_gcc__build_rtti_type_name_4_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i54);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_Integer_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i55);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_arity", 18);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least8_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i56);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_version", 20);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least8_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i57);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_num_ptags", 22);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i58);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_rep_CAST_ME", 24);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ProcAddr_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i59);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_unify_pred", 23);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ProcAddr_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i60);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_compare_pred", 25);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i61);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_module_name", 24);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i62);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_name", 17);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_type_ctor_functors", 21);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("MR_type_ctor_layout", 19);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i63);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(11) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_num_functors", 25);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i64);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_type_ctor_flags", 18);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i65);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
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
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeCtorInfo_Struct", 22);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_du_exist_locn_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_constr_struct_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i132) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i133) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i134) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i135) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i82) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i86) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i89) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i104) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i140) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i111) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i116) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_name_4_0_i118));
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_constr_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_du_exist_info_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_ConstString_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i83);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_enum_functor_name", 20);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i84);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_enum_functor_ordinal", 23);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("MR_EnumFunctorDesc", 18);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i87);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("NYI foreign enums and asm backend.", 34);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mlds_to_gcc__build_du_exist_info_type_3_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i90);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i91);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i92);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i93);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i94);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i95);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i96);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_name", 18);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i97);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_orig_arity", 24);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least16_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i98);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_arg_type_contains_var", 35);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_Sectag_Locn_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i99);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_sectag_locn", 25);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least8_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i100);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_primary", 21);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i101);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_du_functor_secondary", 23);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i102);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
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
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuFunctorDesc", 16);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_ConstString_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i105);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ra_functor_name", 18);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i106);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ra_functor_ordinal", 21);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i107);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ra_functor_reserved_addr", 27);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("MR_ReservedAddrFunctorDesc", 26);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_int_least32_t_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i112);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_sectag_sharers", 17);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_Sectag_Locn_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i113);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_sectag_locn", 14);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rtti_type_name_4_0_i114);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_sectag_alternatives", 22);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("MR_DuPtagLayout", 15);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_struct_type_5_0);
	}
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_type_info_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_name_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(mlds_to_gcc__build_pseudo_type_info_type_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_info_0;
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module24)
	MR_init_entry1(mlds_to_gcc__build_type_info_type_4_0);
	MR_init_label8(mlds_to_gcc__build_type_info_type_4_0,49,18,19,20,21,22,23,24)
	MR_init_label8(mlds_to_gcc__build_type_info_type_4_0,25,26,48,5,6,7,8,9)
	MR_init_label6(mlds_to_gcc__build_type_info_type_4_0,10,11,12,13,14,47)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_type_info_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_info_type_4_0_i48);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_info_type_4_0_i49);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 16);
	MR_np_tailcall_ent(mlds_to_gcc__build_rtti_type_name_4_0);
	}
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info);
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__build_type_info_type_4_0_i18);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_type_info_type_4_0_i19);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_type_info_type_4_0_i20);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_array_type_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i21);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_VA_TypeInfo_Struct%d", 23);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__build_type_info_type_4_0_i22);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ti_type_ctor_info", 20);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_type_info_type_4_0_i23);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ti_var_arity_arity", 21);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_ti_var_arity_arg_typeinfos", 29);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = (MR_Word) MR_string_const("MR_ti_var_arity_arity", 21);
	MR_sv(7) = (MR_Word) MR_string_const("MR_ti_var_arity_arg_typeinfos", 29);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_type_info_type_4_0_i24);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i25);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i26);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i11);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__build_type_info_type_4_0_i5);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_type_info_type_4_0_i6);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_type_info_type_4_0_i7);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_array_type_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i8);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_FA_TypeInfo_Struct%d", 23);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__build_type_info_type_4_0_i9);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_ti_fixed_arity_arg_typeinfos", 31);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_string_const("MR_ti_type_ctor_info", 20);
	MR_sv(5) = (MR_Word) MR_string_const("MR_ti_fixed_arity_arg_typeinfos", 31);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_type_info_type_4_0_i10);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i11);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i12);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i13);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i14);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_type_info_type_4_0_i47);
MR_def_label(mlds_to_gcc__build_type_info_type_4_0,47)
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

MR_BEGIN_MODULE(mlds_to_gcc_module25)
	MR_init_entry1(mlds_to_gcc__build_pseudo_type_info_type_4_0);
	MR_init_label8(mlds_to_gcc__build_pseudo_type_info_type_4_0,4,42,7,8,9,10,11,12)
	MR_init_label8(mlds_to_gcc__build_pseudo_type_info_type_4_0,43,20,21,22,23,24,25,26)
	MR_init_label8(mlds_to_gcc__build_pseudo_type_info_type_4_0,27,28,29,30,31,32,40,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_pseudo_type_info_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_pseudo_type_info_type_4_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_pseudo_type_info_type_4_0_i42) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_pseudo_type_info_type_4_0_i43) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_pseudo_type_info_type_4_0_i35));
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 16);
	MR_np_tailcall_ent(mlds_to_gcc__build_rtti_type_name_4_0);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i7);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i8);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i9);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_array_type_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i10);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_FA_PseudoTypeInfo_Struct%d", 29);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i11);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_pti_fixed_arity_arg_pseudo_typeinfos", 39);
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_string_const("MR_pti_type_ctor_info", 21);
	MR_sv(5) = (MR_Word) MR_string_const("MR_pti_fixed_arity_arg_pseudo_typeinfos", 39);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i12);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i29);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info);
	MR_r2 = MR_ctfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i20);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i21);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i22);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_array_type_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i23);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_VA_PseudoTypeInfo_Struct%d", 29);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i24);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_pti_type_ctor_info", 21);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i25);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_pti_var_arity_arity", 22);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_pti_var_arity_arg_pseudo_typeinfos", 37);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = (MR_Word) MR_string_const("MR_pti_var_arity_arity", 22);
	MR_sv(7) = (MR_Word) MR_string_const("MR_pti_var_arity_arg_pseudo_typeinfos", 37);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i26);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i27);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i28);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i29);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i30);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i31);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i32);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_pseudo_type_info_type_4_0_i40);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
MR_def_label(mlds_to_gcc__build_pseudo_type_info_type_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("mlds_rtti_type: type_var", 24);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module26)
	MR_init_entry1(mlds_to_gcc__build_tc_id_method_type_3_0);
	MR_init_label8(mlds_to_gcc__build_tc_id_method_type_3_0,2,3,4,5,6,7,8,9)
	MR_init_label3(mlds_to_gcc__build_tc_id_method_type_3_0,10,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_tc_id_method_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__string_type_node_0_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i2);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_method_name", 17);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i3);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_method_arity", 18);
	}
	MR_np_call_localret_ent(fn__gcc__integer_type_node_0_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i4);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_method_pred_func", 22);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_tempr4;
	MR_sv(6) = (MR_Word) MR_string_const("MR_tc_method_pred_func", 22);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassMethod", 18);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_id_method_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_tc_id_method_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module27)
	MR_init_entry1(mlds_to_gcc__build_tc_id_type_3_0);
	MR_init_label8(mlds_to_gcc__build_tc_id_type_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(mlds_to_gcc__build_tc_id_type_3_0,10,11,12,13,14,15,16,17)
	MR_init_label8(mlds_to_gcc__build_tc_id_type_3_0,18,19,20,21,22,23,24,25)
	MR_init_label8(mlds_to_gcc__build_tc_id_type_3_0,26,27,28,29,30,31,32,33)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_tc_id_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__gcc__string_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i2);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_id_type_3_0_i3);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__string_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i4);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_method_name", 17);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i5);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_method_arity", 18);
	}
	MR_np_call_localret_ent(fn__gcc__integer_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i6);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_method_pred_func", 22);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_tempr4;
	MR_sv(7) = (MR_Word) MR_string_const("MR_tc_method_pred_func", 22);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_id_type_3_0_i7);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i9);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassMethod", 18);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i14);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__declared_type_1_0,
		mlds_to_gcc__build_tc_id_type_3_0_i15);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_tc_id_type_3_0_i16);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__string_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i17);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_id_module_name", 20);
	}
	MR_np_call_localret_ent(fn__gcc__string_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i18);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_id_name", 13);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i19);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_id_arity", 14);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i20);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_id_num_type_vars", 22);
	}
	MR_np_call_localret_ent(fn__gcc__int16_type_node_0_0,
		mlds_to_gcc__build_tc_id_type_3_0_i21);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr6 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_id_num_methods", 20);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_tc_id_type_var_names", 23);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
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
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tempr7 = MR_sv(3);
	MR_sv(1) = MR_ctfield(0, MR_tempr7, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr7, 1);
	MR_sv(3) = MR_ctfield(0, MR_sv(4), 0);
	MR_sv(4) = MR_ctfield(0, MR_sv(4), 1);
	MR_sv(5) = MR_ctfield(0, MR_sv(5), 0);
	MR_sv(6) = MR_ctfield(0, MR_ctfield(1, MR_tempr5, 0), 1);
	MR_sv(7) = MR_ctfield(0, MR_ctfield(1, MR_tempr4, 0), 0);
	MR_sv(8) = MR_ctfield(0, MR_ctfield(1, MR_tempr4, 0), 1);
	MR_sv(9) = MR_tempr6;
	MR_sv(10) = (MR_Word) MR_string_const("MR_tc_id_num_methods", 20);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_fields_4_0,
		mlds_to_gcc__build_tc_id_type_3_0_i22);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i23);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i24);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i25);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i26);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i27);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i28);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i29);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i30);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i31);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i32);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_TypeClassId", 14);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_id_type_3_0_i33);
MR_def_label(mlds_to_gcc__build_tc_id_type_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module28)
	MR_init_entry1(mlds_to_gcc__build_tc_instance_type_3_0);
	MR_init_label8(mlds_to_gcc__build_tc_instance_type_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(mlds_to_gcc__build_tc_instance_type_3_0,10,11,12,13,14,15,16,17)
	MR_init_label7(mlds_to_gcc__build_tc_instance_type_3_0,18,19,20,21,22,23,24)
MR_BEGIN_CODE

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
	MR_sv(9) = MR_r1;
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
	MR_sv(11) = MR_r1;
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i8);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_inst_num_type_vars", 24);
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
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_inst_num_instance_constraints", 35);
	}
	MR_np_call_localret_ent(fn__gcc__int8_type_node_0_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i10);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr7 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("MR_tc_decl_num_supers", 21);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_string_const("MR_tc_inst_type_args", 20);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_string_const("MR_tc_inst_instance_constraints", 31);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tempr4 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr4, 0);
	MR_tempr6 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 1);
	MR_sv(5) = MR_ctfield(0, MR_ctfield(1, MR_tempr5, 0), 0);
	MR_sv(6) = MR_ctfield(0, MR_ctfield(1, MR_tempr5, 0), 1);
	MR_sv(7) = MR_tempr7;
	MR_sv(8) = (MR_Word) MR_string_const("MR_tc_decl_num_supers", 21);
	MR_sv(10) = (MR_Word) MR_string_const("MR_tc_inst_type_args", 20);
	MR_sv(12) = (MR_Word) MR_string_const("MR_tc_inst_instance_constraints", 31);
	}
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i11);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i12);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i13);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i14);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i15);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i16);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i17);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i18);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i19);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i20);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i21);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i22);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i23);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_Instance", 11);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__build_tc_instance_type_3_0_i24);
MR_def_label(mlds_to_gcc__build_tc_instance_type_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module29)
	MR_init_entry1(mlds_to_gcc__build_rtti_type_tc_name_4_0);
	MR_init_label8(mlds_to_gcc__build_rtti_type_tc_name_4_0,4,45,46,47,48,49,18,20)
	MR_init_label6(mlds_to_gcc__build_rtti_type_tc_name_4_0,51,44,25,52,42,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_rtti_type_tc_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i44) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i18) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i20));
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i45) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i46) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i47) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i48) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i49));
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_id_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__string_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_id_method_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_decl_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_constr_type_3_0,
		mlds_to_gcc__build_rtti_type_tc_name_4_0_i42);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_constr_struct_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i51) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i44) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i25) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i52) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rtti_type_tc_name_4_0_i30));
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_instance_type_3_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_tailcall_ent(mlds_to_gcc__build_tc_constr_struct_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mlds_to_gcc__build_tc_constr_type_3_0,
		mlds_to_gcc__build_rtti_type_tc_name_4_0_i42);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(gcc__build_pointer_type_4_0);
MR_def_label(mlds_to_gcc__build_rtti_type_tc_name_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("build_rtti_type_tc_name: type_class_instance_methods", 52);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__rtti__rtti_id_has_array_type_1_0);
MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module30)
	MR_init_entry1(mlds_to_gcc__build_rtti_type_5_0);
	MR_init_label8(mlds_to_gcc__build_rtti_type_5_0,5,7,8,10,12,3,15,17)
	MR_init_label2(mlds_to_gcc__build_rtti_type_5_0,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_rtti_type_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_5_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rtti_type_name_4_0,
		mlds_to_gcc__build_rtti_type_5_0_i7);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rtti_type_tc_name_4_0,
		mlds_to_gcc__build_rtti_type_5_0_i7);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__rtti_id_has_array_type_1_0,
		mlds_to_gcc__build_rtti_type_5_0_i8);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_5_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_5_0_i12);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__build_array_type_5_0);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__build_array_type_5_0);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rtti_type_5_0_i15);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rtti_type_name_4_0,
		mlds_to_gcc__build_rtti_type_5_0_i17);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rtti_type_tc_name_4_0,
		mlds_to_gcc__build_rtti_type_5_0_i17);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__rtti_id_has_array_type_1_0,
		mlds_to_gcc__build_rtti_type_5_0_i18);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__IntroducedFrom__pred__build_rtti_type__2012__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r3 = (MR_Word) MR_string_const("build_rtti_type: element of non-array", 37);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		mlds_to_gcc__build_rtti_type_5_0_i19);
MR_def_label(mlds_to_gcc__build_rtti_type_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__name_mangle_1_0);
MR_decl_entry(string__format_3_0);
MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module31)
	MR_init_entry1(mlds_to_gcc__get_func_name_3_0);
	MR_init_label8(mlds_to_gcc__get_func_name_3_0,7,8,9,12,13,5,16,17)
	MR_init_label8(mlds_to_gcc__get_func_name_3_0,18,21,19,23,24,25,28,31)
	MR_init_label2(mlds_to_gcc__get_func_name_3_0,32,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__get_func_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__get_func_name_3_0_i2);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_func_name_3_0_i5);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_func_name_3_0_i7);
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = (MR_Word) MR_string_const("p", 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		mlds_to_gcc__get_func_name_3_0_i8);
MR_def_label(mlds_to_gcc__get_func_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = (MR_Word) MR_string_const("f", 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		mlds_to_gcc__get_func_name_3_0_i8);
MR_def_label(mlds_to_gcc__get_func_name_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(6);
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
	MR_np_call_localret_ent(string__format_3_0,
		mlds_to_gcc__get_func_name_3_0_i9);
MR_def_label(mlds_to_gcc__get_func_name_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_func_name_3_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		mlds_to_gcc__get_func_name_3_0_i12);
MR_def_label(mlds_to_gcc__get_func_name_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_func_name_3_0_i13);
MR_def_label(mlds_to_gcc__get_func_name_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_func_name_3_0_i23);
MR_def_label(mlds_to_gcc__get_func_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 3);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		mlds_to_gcc__get_func_name_3_0_i16);
MR_def_label(mlds_to_gcc__get_func_name_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		mlds_to_gcc__get_func_name_3_0_i17);
MR_def_label(mlds_to_gcc__get_func_name_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s_%d", 5);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__get_func_name_3_0_i18);
MR_def_label(mlds_to_gcc__get_func_name_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_func_name_3_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		mlds_to_gcc__get_func_name_3_0_i21);
MR_def_label(mlds_to_gcc__get_func_name_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		mlds_to_gcc__get_func_name_3_0_i23);
MR_def_label(mlds_to_gcc__get_func_name_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		mlds_to_gcc__get_func_name_3_0_i23);
MR_def_label(mlds_to_gcc__get_func_name_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		mlds_to_gcc__get_func_name_3_0_i24);
MR_def_label(mlds_to_gcc__get_func_name_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_func_name_3_0_i25);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(1, MR_sv(3), 0);
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
	MR_r1 = (MR_Word) MR_string_const("%s_%d_%d", 8);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__get_func_name_3_0_i28);
MR_def_label(mlds_to_gcc__get_func_name_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s_%d", 5);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__get_func_name_3_0_i28);
MR_def_label(mlds_to_gcc__get_func_name_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__get_func_name_3_0_i31);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_decr_sp_and_return(7);
MR_def_label(mlds_to_gcc__get_func_name_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__get_func_name_3_0_i32);
MR_def_label(mlds_to_gcc__get_func_name_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(7);
MR_def_label(mlds_to_gcc__get_func_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("get_func_name: non-function", 27);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0);
MR_decl_entry(fn__hlds__hlds_pred__invalid_pred_id_0_0);
MR_decl_entry(fn__backend_libs__rtti__tabling_info_id_str_1_0);
MR_decl_entry(backend_libs__rtti__id_to_c_identifier_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module32)
	MR_init_entry1(fn__mlds_to_gcc__build_data_name_1_0);
	MR_init_label8(fn__mlds_to_gcc__build_data_name_1_0,4,90,82,9,11,34,35,36)
	MR_init_label8(fn__mlds_to_gcc__build_data_name_1_0,37,32,30,12,15,18,19,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__build_data_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__mlds_to_gcc__build_data_name_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mlds_to_gcc__build_data_name_1_0_i90) MR_AND
		MR_LABEL_AP(fn__mlds_to_gcc__build_data_name_1_0_i9) MR_AND
		MR_LABEL_AP(fn__mlds_to_gcc__build_data_name_1_0_i11));
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("mlds_module_layout", 18);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		fn__mlds_to_gcc__build_data_name_1_0_i82);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__parse_tree__prog_foreign__name_mangle_1_0);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("common_%d", 9);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i12);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i30);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i32);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		fn__mlds_to_gcc__build_data_name_1_0_i34);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__get_func_name_3_0,
		fn__mlds_to_gcc__build_data_name_1_0_i35);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__backend_libs__rtti__tabling_info_id_str_1_0,
		fn__mlds_to_gcc__build_data_name_1_0_i36);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mlds_to_gcc__build_data_name_1_0_i37);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("mlds_internal_layout", 20);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("mlds_proc_layout", 16);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i14);
	}
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i15);
	}
	MR_r5 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i15);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_tfield(0, MR_tempr4, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i18);
	}
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i19);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i19);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_name_1_0_i19);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_r2;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_np_tailcall_ent(backend_libs__rtti__id_to_c_identifier_2_0);
	}
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(backend_libs__rtti__id_to_c_identifier_2_0);
	}
MR_def_label(fn__mlds_to_gcc__build_data_name_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(backend_libs__rtti__id_to_c_identifier_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module33)
	MR_init_entry1(fn__mlds_to_gcc__build_qualified_name_1_0);
	MR_init_label8(fn__mlds_to_gcc__build_qualified_name_1_0,4,5,7,8,9,10,11,2)
	MR_init_label6(fn__mlds_to_gcc__build_qualified_name_1_0,20,16,18,13,29,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__build_qualified_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(0, MR_r1, 2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__mlds_to_gcc__build_qualified_name_1_0_i4) MR_AND
		MR_LABEL_AP(fn__mlds_to_gcc__build_qualified_name_1_0_i7) MR_AND
		MR_LABEL_AP(fn__mlds_to_gcc__build_qualified_name_1_0_i9) MR_AND
		MR_LABEL_AP(fn__mlds_to_gcc__build_qualified_name_1_0_i11));
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i5);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,5)
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
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i8);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_data_name_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i8);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i2);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__get_func_name_3_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i10);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i2);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	}
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i16);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i20);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i13);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i13);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i13);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i13);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_INT_NE(MR_tempr2,2)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i13);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i13);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 5);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i13);
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i18);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_qualified_name_1_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i29);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__mlds_to_gcc__build_qualified_name_1_0_i30);
MR_def_label(fn__mlds_to_gcc__build_qualified_name_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s__%s", 6);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__empty_param_types_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module34)
	MR_init_entry1(mlds_to_gcc__build_param_types_6_0);
	MR_init_label1(mlds_to_gcc__build_param_types_6_0,2)
MR_BEGIN_CODE

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
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mlds_to_gcc__build_param_types_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__cons_param_types_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module35)
	MR_init_entry1(mlds_to_gcc__build_param_types_7_0);
	MR_init_label4(mlds_to_gcc__build_param_types_7_0,14,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_param_types_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_param_types_7_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(mlds_to_gcc__build_param_types_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(mlds_to_gcc__build_param_types_7_0,
		mlds_to_gcc__build_param_types_7_0_i4);
MR_def_label(mlds_to_gcc__build_param_types_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
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
		mlds_to_gcc__build_param_types_7_0_i6);
MR_def_label(mlds_to_gcc__build_param_types_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module36)
	MR_init_entry1(mlds_to_gcc__build_type_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_type_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(mlds_to_gcc__build_type_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__jmpbuf_type_node_0_0);
MR_decl_entry(fn__gcc__boolean_type_node_0_0);
MR_decl_entry(fn__gcc__double_type_node_0_0);
MR_decl_entry(fn__gcc__char_type_node_0_0);
MR_decl_entry(fn__gcc__void_type_node_0_0);
MR_decl_entry(gcc__build_function_type_5_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__print_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_get_func_signature_1_0);

MR_BEGIN_MODULE(mlds_to_gcc_module37)
	MR_init_entry1(mlds_to_gcc__build_type_6_0);
	MR_init_label8(mlds_to_gcc__build_type_6_0,4,154,155,156,157,158,160,161)
	MR_init_label8(mlds_to_gcc__build_type_6_0,162,163,24,26,153,29,32,144)
	MR_init_label8(mlds_to_gcc__build_type_6_0,36,166,38,41,42,39,44,46)
	MR_init_label8(mlds_to_gcc__build_type_6_0,47,159,52,171,57,56,60,61)
	MR_init_label8(mlds_to_gcc__build_type_6_0,62,63,64,65,66,167,70,168)
	MR_init_label8(mlds_to_gcc__build_type_6_0,169,76,77,83,80,84,87,88)
	MR_init_label4(mlds_to_gcc__build_type_6_0,150,91,170,94)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i26) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i153) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i36));
MR_def_label(mlds_to_gcc__build_type_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i154) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i155) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i156) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i157) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i158) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i159) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i160) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i161) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i162) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i163));
MR_def_label(mlds_to_gcc__build_type_6_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__jmpbuf_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__boolean_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__integer_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__double_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__char_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_TypeInfo_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_PseudoTypeInfo_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		mlds_to_gcc__build_type_6_0_i24);
MR_def_label(mlds_to_gcc__build_type_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("build_type: unknown type", 24);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(mlds_to_gcc__build_type_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_tailcall_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0);
MR_def_label(mlds_to_gcc__build_type_6_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = (MR_Integer) 201;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		mlds_to_gcc__build_type_6_0_i29);
MR_def_label(mlds_to_gcc__build_type_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i144);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		mlds_to_gcc__build_type_6_0_i32);
MR_def_label(mlds_to_gcc__build_type_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("--high-level-data (mercury_array_type)", 38);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(mlds_to_gcc__build_type_6_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_Word_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i166) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i159) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i52) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i167) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i168) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i169) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i91) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_type_6_0_i170));
MR_def_label(mlds_to_gcc__build_type_6_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 202;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		mlds_to_gcc__build_type_6_0_i38);
MR_def_label(mlds_to_gcc__build_type_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i39);
	}
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_type_6_0_i41);
MR_def_label(mlds_to_gcc__build_type_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__build_type_6_0_i42);
MR_def_label(mlds_to_gcc__build_type_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__gcc__cons_param_types_2_0,
		mlds_to_gcc__build_type_6_0_i44);
MR_def_label(mlds_to_gcc__build_type_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__build_type_6_0_i44);
MR_def_label(mlds_to_gcc__build_type_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_7_0,
		mlds_to_gcc__build_type_6_0_i46);
MR_def_label(mlds_to_gcc__build_type_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__build_type_6_0_i47);
MR_def_label(mlds_to_gcc__build_type_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_function_type_5_0,
		mlds_to_gcc__build_type_6_0_i150);
MR_def_label(mlds_to_gcc__build_type_6_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_Box_0_0);
MR_def_label(mlds_to_gcc__build_type_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	MR_r5 = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,4)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i171);
	}
	MR_np_tailcall_ent(fn__mlds_to_gcc__MR_Integer_0_0);
	}
MR_def_label(mlds_to_gcc__build_type_6_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		mlds_to_gcc__build_type_6_0_i57);
MR_def_label(mlds_to_gcc__build_type_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i56);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__gcc__declared_type_1_0);
MR_def_label(mlds_to_gcc__build_type_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__build_type_6_0_i60);
MR_def_label(mlds_to_gcc__build_type_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("note: undeclared class_type ", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		mlds_to_gcc__build_type_6_0_i61);
MR_def_label(mlds_to_gcc__build_type_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__print_3_0,
		mlds_to_gcc__build_type_6_0_i62);
MR_def_label(mlds_to_gcc__build_type_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", i.e. ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		mlds_to_gcc__build_type_6_0_i63);
MR_def_label(mlds_to_gcc__build_type_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_qualified_name_1_0,
		mlds_to_gcc__build_type_6_0_i64);
MR_def_label(mlds_to_gcc__build_type_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mlds_to_gcc__build_type_6_0_i65);
MR_def_label(mlds_to_gcc__build_type_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mlds_to_gcc__build_type_6_0_i66);
MR_def_label(mlds_to_gcc__build_type_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(mlds_to_gcc__build_type_6_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		mlds_to_gcc__build_type_6_0_i70);
MR_def_label(mlds_to_gcc__build_type_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(mlds_to_gcc__build_sized_array_type_5_0);
MR_def_label(mlds_to_gcc__build_type_6_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		mlds_to_gcc__build_type_6_0_i150);
MR_def_label(mlds_to_gcc__build_type_6_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_func_signature_1_0,
		mlds_to_gcc__build_type_6_0_i76);
MR_def_label(mlds_to_gcc__build_type_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i77);
	}
	}
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__build_type_6_0_i83);
MR_def_label(mlds_to_gcc__build_type_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i80);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_type_6_0_i80);
	}
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_type_6_0_i83);
MR_def_label(mlds_to_gcc__build_type_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_6_0,
		mlds_to_gcc__build_type_6_0_i88);
MR_def_label(mlds_to_gcc__build_type_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		mlds_to_gcc__build_type_6_0_i84);
MR_def_label(mlds_to_gcc__build_type_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("multiple return types", 21);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__build_type_6_0_i87);
MR_def_label(mlds_to_gcc__build_type_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_6_0,
		mlds_to_gcc__build_type_6_0_i88);
MR_def_label(mlds_to_gcc__build_type_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_function_type_5_0,
		mlds_to_gcc__build_type_6_0_i150);
MR_def_label(mlds_to_gcc__build_type_6_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_pointer_type_4_0);
MR_def_label(mlds_to_gcc__build_type_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(mlds_to_gcc__build_rtti_type_5_0);
MR_def_label(mlds_to_gcc__build_type_6_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		mlds_to_gcc__build_type_6_0_i94);
MR_def_label(mlds_to_gcc__build_type_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("NYI: tabling in the asm backend", 31);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module38)
	MR_init_entry1(mlds_to_gcc__rtti_enum_const_2_0);
	MR_init_label8(mlds_to_gcc__rtti_enum_const_2_0,3,58,5,6,9,10,12,13)
	MR_init_label8(mlds_to_gcc__rtti_enum_const_2_0,14,15,16,17,20,21,22,23)
	MR_init_label8(mlds_to_gcc__rtti_enum_const_2_0,24,25,26,27,28,29,30,31)
	MR_init_label8(mlds_to_gcc__rtti_enum_const_2_0,32,33,34,35,36,37,38,39)
	MR_init_label8(mlds_to_gcc__rtti_enum_const_2_0,40,41,42,43,44,45,47,48)
	MR_init_label8(mlds_to_gcc__rtti_enum_const_2_0,49,50,51,52,53,54,55,56)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__rtti_enum_const_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 127);
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(7,0))[(MR_Integer) MR_r3];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0))) {
		MR_GOTO_LAB(mlds_to_gcc__rtti_enum_const_2_0_i5);
	}
	MR_r3 = (MR_COMMON(6,0))[(MR_Integer) MR_r3];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i6) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i52) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i45) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i9) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i10) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i32) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i12) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i13) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i14) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i15) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i16) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i17) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i52) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i45) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i20) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i21) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i22) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i23) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i24) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i25) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i26) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i27) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i28) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i29) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i30) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i31) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i32) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i33) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i34) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i35) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i36) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i37) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i38) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i39) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i40) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i41) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i42) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i43) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i44) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i45) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i53) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i47) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i48) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i49) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i50) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i51) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i52) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i53) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i54) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i55) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i56) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__rtti_enum_const_2_0_i58));
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 34;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 27;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 43;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 26;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 33;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 22;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 30;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 41;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 37;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 39;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 32;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 35;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 24;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 25;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 42;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 36;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 17;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 31;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 40;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 44;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 23;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 29;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 21;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 18;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 20;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 28;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 38;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mlds_to_gcc__rtti_enum_const_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 19;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module39)
	MR_init_entry1(fn__mlds_to_gcc__get_class_type_name_1_0);
	MR_init_label3(fn__mlds_to_gcc__get_class_type_name_1_0,4,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__get_class_type_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__get_class_type_name_1_0_i4);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_r3, 2);
	MR_GOTO_LAB(fn__mlds_to_gcc__get_class_type_name_1_0_i3);
MR_def_label(fn__mlds_to_gcc__get_class_type_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__get_class_type_name_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__get_class_type_name_1_0_i2);
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
MR_def_label(fn__mlds_to_gcc__get_class_type_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(fn__mlds_to_gcc__get_class_type_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("non-class_type in get_type_name", 31);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__append_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module40)
	MR_init_entry1(fn__mlds_to_gcc__build_data_var_name_2_0);
	MR_init_label7(fn__mlds_to_gcc__build_data_var_name_2_0,2,6,3,4,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__build_data_var_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_data_name_1_0,
		fn__mlds_to_gcc__build_data_var_name_2_0_i2);
MR_def_label(fn__mlds_to_gcc__build_data_var_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(fn__mlds_to_gcc__build_data_var_name_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
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


MR_BEGIN_MODULE(mlds_to_gcc_module41)
	MR_init_entry1(fn__mlds_to_gcc__MR_intptr_t_0_0);
MR_BEGIN_CODE

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

MR_decl_entry(libs__globals__io_lookup_int_option_4_0);
MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);
MR_decl_entry(gcc__build_int_4_0);
MR_decl_entry(fn__gcc__bit_and_expr_0_0);
MR_decl_entry(fn__gcc__bit_not_expr_0_0);
MR_decl_entry(gcc__build_unop_6_0);
MR_decl_entry(fn__gcc__lshift_expr_0_0);
MR_decl_entry(fn__gcc__rshift_expr_0_0);
MR_decl_entry(gcc__build_binop_7_0);
MR_decl_entry(fn__gcc__hash_string_func_decl_0_0);
MR_decl_entry(gcc__build_func_addr_expr_4_0);
MR_decl_entry(gcc__empty_arg_list_3_0);
MR_decl_entry(gcc__cons_arg_list_5_0);
MR_decl_entry(gcc__build_call_expr_6_0);
MR_decl_entry(fn__gcc__truth_not_expr_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module42)
	MR_init_entry1(mlds_to_gcc__build_unop_expr_5_0);
	MR_init_label8(mlds_to_gcc__build_unop_expr_5_0,54,5,6,7,11,55,13,14)
	MR_init_label8(mlds_to_gcc__build_unop_expr_5_0,15,16,17,18,56,23,24,57)
	MR_init_label8(mlds_to_gcc__build_unop_expr_5_0,29,30,31,32,58,35,36,37)
	MR_init_label6(mlds_to_gcc__build_unop_expr_5_0,38,59,41,60,45,46)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_unop_expr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(mlds_to_gcc__build_unop_expr_5_0_i11) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_expr_5_0_i54) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_expr_5_0_i11) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_expr_5_0_i55) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_expr_5_0_i56) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_expr_5_0_i57) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_expr_5_0_i58) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_expr_5_0_i59) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_expr_5_0_i60));
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 186;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		mlds_to_gcc__build_unop_expr_5_0_i5);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		mlds_to_gcc__build_unop_expr_5_0_i6);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_unop_expr_5_0_i7);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_and_expr_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i31);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 186;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		mlds_to_gcc__build_unop_expr_5_0_i13);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		mlds_to_gcc__build_unop_expr_5_0_i14);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_unop_expr_5_0_i15);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_not_expr_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i16);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i17);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_unop_6_0,
		mlds_to_gcc__build_unop_expr_5_0_i18);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_and_expr_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i31);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 186;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		mlds_to_gcc__build_unop_expr_5_0_i23);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_unop_expr_5_0_i24);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__lshift_expr_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i31);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 186;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		mlds_to_gcc__build_unop_expr_5_0_i29);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_unop_expr_5_0_i30);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__rshift_expr_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i31);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i32);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__gcc__hash_string_func_decl_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i35);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_func_addr_expr_4_0,
		mlds_to_gcc__build_unop_expr_5_0_i36);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(gcc__empty_arg_list_3_0,
		mlds_to_gcc__build_unop_expr_5_0_i37);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__cons_arg_list_5_0,
		mlds_to_gcc__build_unop_expr_5_0_i38);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_call_expr_6_0);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__gcc__bit_not_expr_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i41);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i46);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__gcc__truth_not_expr_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i45);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_unop_expr_5_0_i46);
MR_def_label(mlds_to_gcc__build_unop_expr_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_unop_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__empty_param_decls_0_0);
MR_decl_entry(gcc__build_param_decl_5_0);
MR_decl_entry(fn__gcc__cons_param_decls_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module43)
	MR_init_entry1(mlds_to_gcc__build_dummy_param_decls_4_0);
	MR_init_label3(mlds_to_gcc__build_dummy_param_decls_4_0,16,5,6)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("<unnamed param>", 15);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(gcc__build_param_decl_5_0,
		mlds_to_gcc__build_dummy_param_decls_4_0_i5);
MR_def_label(mlds_to_gcc__build_dummy_param_decls_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(mlds_to_gcc__build_dummy_param_decls_4_0,
		mlds_to_gcc__build_dummy_param_decls_4_0_i6);
MR_def_label(mlds_to_gcc__build_dummy_param_decls_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__gcc__cons_param_decls_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__build_function_decl_8_0);

MR_BEGIN_MODULE(mlds_to_gcc_module44)
	MR_init_entry1(mlds_to_gcc__make_func_decl_6_0);
	MR_init_label8(mlds_to_gcc__make_func_decl_6_0,2,8,5,11,12,21,17,19)
	MR_init_label8(mlds_to_gcc__make_func_decl_6_0,13,14,30,31,32,34,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__make_func_decl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__make_func_decl_6_0_i8);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__make_func_decl_6_0_i8);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(mlds_to_gcc__get_func_name_3_0,
		mlds_to_gcc__make_func_decl_6_0_i12);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("multiple return types", 21);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__make_func_decl_6_0_i11);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mlds_to_gcc__get_func_name_3_0,
		mlds_to_gcc__make_func_decl_6_0_i12);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i17);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i21);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	}
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__make_func_decl_6_0_i34);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(2, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i14);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i14);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i14);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i14);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_INT_NE(MR_tempr2,2)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i14);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i14);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 5);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	}
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__make_func_decl_6_0_i34);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		mlds_to_gcc__make_func_decl_6_0_i19);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_6_0_i13);
	}
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__make_func_decl_6_0_i34);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		mlds_to_gcc__make_func_decl_6_0_i30);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		mlds_to_gcc__make_func_decl_6_0_i31);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s__%s", 6);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__make_func_decl_6_0_i32);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__make_func_decl_6_0_i34);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_7_0,
		mlds_to_gcc__make_func_decl_6_0_i35);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(mlds_to_gcc__build_dummy_param_decls_4_0,
		mlds_to_gcc__make_func_decl_6_0_i36);
MR_def_label(mlds_to_gcc__make_func_decl_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__build_function_decl_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__build_extern_var_decl_5_0);
MR_decl_entry(fn__gcc__var_expr_1_0);
MR_decl_entry(gcc__build_addr_expr_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module45)
	MR_init_entry1(mlds_to_gcc__build_data_addr_4_0);
	MR_init_label8(mlds_to_gcc__build_data_addr_4_0,2,6,3,4,8,9,10,12)
	MR_init_label3(mlds_to_gcc__build_data_addr_4_0,13,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_data_addr_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_data_name_1_0,
		mlds_to_gcc__build_data_addr_4_0_i2);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_data_addr_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		mlds_to_gcc__build_data_addr_4_0_i6);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_data_addr_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_data_addr_4_0_i12);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		mlds_to_gcc__build_data_addr_4_0_i8);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		mlds_to_gcc__build_data_addr_4_0_i9);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__string__append_2_0,
		mlds_to_gcc__build_data_addr_4_0_i10);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_data_addr_4_0_i12);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_data_addr_4_0_i13);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_extern_var_decl_5_0,
		mlds_to_gcc__build_data_addr_4_0_i14);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__var_expr_1_0,
		mlds_to_gcc__build_data_addr_4_0_i15);
MR_def_label(mlds_to_gcc__build_data_addr_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__build_addr_expr_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__build_float_4_0);
MR_decl_entry(gcc__build_string_4_0);
MR_decl_entry(gcc__build_null_pointer_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module46)
	MR_init_entry1(mlds_to_gcc__build_rval_const_5_0);
	MR_init_label8(mlds_to_gcc__build_rval_const_5_0,4,5,8,10,12,13,15,17)
	MR_init_label6(mlds_to_gcc__build_rval_const_5_0,53,21,22,46,25,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_rval_const_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_rval_const_5_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_const_5_0_i8) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_const_5_0_i10) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_const_5_0_i12));
MR_def_label(mlds_to_gcc__build_rval_const_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(gcc__build_int_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(gcc__build_int_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(gcc__build_int_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("foreign tags not yet supported with \140--target asm\'", 50);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(mlds_to_gcc__build_rval_const_5_0_i13) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_const_5_0_i15) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_const_5_0_i17) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_const_5_0_i53) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_const_5_0_i25) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_const_5_0_i54));
MR_def_label(mlds_to_gcc__build_rval_const_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(gcc__build_float_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(gcc__build_string_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("debugging not yet supported with \140--target asm\'", 47);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_const_5_0_i21);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		mlds_to_gcc__build_rval_const_5_0_i22);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_tfield(1, MR_sv(3), 0) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 2);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__invalid_pred_id_0_0,
		mlds_to_gcc__build_rval_const_5_0_i22);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__make_func_decl_6_0,
		mlds_to_gcc__build_rval_const_5_0_i46);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(gcc__build_func_addr_expr_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(mlds_to_gcc__build_data_addr_4_0);
MR_def_label(mlds_to_gcc__build_rval_const_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(gcc__build_null_pointer_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__minus_expr_0_0);
MR_decl_entry(fn__gcc__mult_expr_0_0);
MR_decl_entry(fn__gcc__plus_expr_0_0);
MR_decl_entry(gcc__convert_type_5_0);
MR_decl_entry(gcc__build_pointer_deref_4_0);
MR_decl_entry(fn__map__lookup_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_field_decl_0;
MR_decl_entry(gcc__build_component_ref_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_var_decl_0;
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_module_name_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module47)
	MR_init_entry1(mlds_to_gcc__build_lval_5_0);
	MR_init_label8(mlds_to_gcc__build_lval_5_0,4,9,7,12,14,15,18,19)
	MR_init_label8(mlds_to_gcc__build_lval_5_0,20,16,22,23,24,25,26,27)
	MR_init_label8(mlds_to_gcc__build_lval_5_0,29,30,31,32,33,34,35,36)
	MR_init_label8(mlds_to_gcc__build_lval_5_0,37,38,39,6,42,45,46,47)
	MR_init_label8(mlds_to_gcc__build_lval_5_0,43,49,50,51,52,53,54,56)
	MR_init_label8(mlds_to_gcc__build_lval_5_0,57,58,59,60,61,62,64,65)
	MR_init_label8(mlds_to_gcc__build_lval_5_0,67,68,70,72,71,76,75,80)
	MR_init_label8(mlds_to_gcc__build_lval_5_0,81,82,84,79,88,89,90,93)
	MR_init_label6(mlds_to_gcc__build_lval_5_0,94,95,87,97,98,99)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_lval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_lval_5_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_lval_5_0_i64) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_lval_5_0_i67) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_lval_5_0_i70));
MR_def_label(mlds_to_gcc__build_lval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i6);
	}
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_sv(6),0,5)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i9);
	}
	MR_r1 = MR_r5;
	MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i14);
	}
MR_def_label(mlds_to_gcc__build_lval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i7);
	}
	MR_r4 = MR_ctfield(1, MR_sv(6), 0);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i7);
	}
	MR_r1 = MR_r5;
	MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i14);
MR_def_label(mlds_to_gcc__build_lval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		mlds_to_gcc__build_lval_5_0_i12);
MR_def_label(mlds_to_gcc__build_lval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("unexpected field type", 21);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_lval_5_0_i14);
MR_def_label(mlds_to_gcc__build_lval_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_lval_5_0_i15);
MR_def_label(mlds_to_gcc__build_lval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i16);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_sv(4), 0);
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_lval_5_0_i18);
MR_def_label(mlds_to_gcc__build_lval_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__minus_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i19);
MR_def_label(mlds_to_gcc__build_lval_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_lval_5_0_i20);
MR_def_label(mlds_to_gcc__build_lval_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i27);
MR_def_label(mlds_to_gcc__build_lval_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 186;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		mlds_to_gcc__build_lval_5_0_i22);
MR_def_label(mlds_to_gcc__build_lval_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		mlds_to_gcc__build_lval_5_0_i23);
MR_def_label(mlds_to_gcc__build_lval_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ~(((MR_Integer) MR_r1 - (MR_Integer) 1));
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_lval_5_0_i24);
MR_def_label(mlds_to_gcc__build_lval_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_and_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i25);
MR_def_label(mlds_to_gcc__build_lval_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_lval_5_0_i26);
MR_def_label(mlds_to_gcc__build_lval_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i27);
MR_def_label(mlds_to_gcc__build_lval_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_lval_5_0_i29);
MR_def_label(mlds_to_gcc__build_lval_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 190;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		mlds_to_gcc__build_lval_5_0_i30);
MR_def_label(mlds_to_gcc__build_lval_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_lval_5_0_i31);
MR_def_label(mlds_to_gcc__build_lval_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__mult_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i32);
MR_def_label(mlds_to_gcc__build_lval_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_intptr_t_0_0,
		mlds_to_gcc__build_lval_5_0_i33);
MR_def_label(mlds_to_gcc__build_lval_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i34);
MR_def_label(mlds_to_gcc__build_lval_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__plus_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i35);
MR_def_label(mlds_to_gcc__build_lval_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_lval_5_0_i36);
MR_def_label(mlds_to_gcc__build_lval_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i37);
MR_def_label(mlds_to_gcc__build_lval_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		mlds_to_gcc__build_lval_5_0_i38);
MR_def_label(mlds_to_gcc__build_lval_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_lval_5_0_i39);
MR_def_label(mlds_to_gcc__build_lval_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__convert_type_5_0,
		mlds_to_gcc__build_lval_5_0_i65);
MR_def_label(mlds_to_gcc__build_lval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_lval_5_0_i42);
MR_def_label(mlds_to_gcc__build_lval_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_lval_5_0_i45);
MR_def_label(mlds_to_gcc__build_lval_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__minus_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i46);
MR_def_label(mlds_to_gcc__build_lval_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_lval_5_0_i47);
MR_def_label(mlds_to_gcc__build_lval_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i54);
MR_def_label(mlds_to_gcc__build_lval_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 186;
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		mlds_to_gcc__build_lval_5_0_i49);
MR_def_label(mlds_to_gcc__build_lval_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		mlds_to_gcc__build_lval_5_0_i50);
MR_def_label(mlds_to_gcc__build_lval_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ~(((MR_Integer) MR_r1 - (MR_Integer) 1));
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_lval_5_0_i51);
MR_def_label(mlds_to_gcc__build_lval_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_and_expr_0_0,
		mlds_to_gcc__build_lval_5_0_i52);
MR_def_label(mlds_to_gcc__build_lval_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_lval_5_0_i53);
MR_def_label(mlds_to_gcc__build_lval_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		mlds_to_gcc__build_lval_5_0_i54);
MR_def_label(mlds_to_gcc__build_lval_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		mlds_to_gcc__build_lval_5_0_i56);
MR_def_label(mlds_to_gcc__build_lval_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_lval_5_0_i57);
MR_def_label(mlds_to_gcc__build_lval_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__convert_type_5_0,
		mlds_to_gcc__build_lval_5_0_i58);
MR_def_label(mlds_to_gcc__build_lval_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_deref_4_0,
		mlds_to_gcc__build_lval_5_0_i59);
MR_def_label(mlds_to_gcc__build_lval_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__get_class_type_name_1_0,
		mlds_to_gcc__build_lval_5_0_i60);
MR_def_label(mlds_to_gcc__build_lval_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		mlds_to_gcc__build_lval_5_0_i61);
MR_def_label(mlds_to_gcc__build_lval_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		mlds_to_gcc__build_lval_5_0_i62);
MR_def_label(mlds_to_gcc__build_lval_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__build_component_ref_5_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_lval_5_0_i65);
MR_def_label(mlds_to_gcc__build_lval_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__build_pointer_deref_4_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		mlds_to_gcc__build_lval_5_0_i68);
MR_def_label(mlds_to_gcc__build_lval_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("build_lval: global_var_ref NYI", 30);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_ctfield(3, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 0);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_tempr4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_ctfield(0, MR_sv(1), 2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		mlds_to_gcc__build_lval_5_0_i72);
MR_def_label(mlds_to_gcc__build_lval_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i71);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__gcc__var_expr_1_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_ctfield(0, MR_ctfield(0, MR_sv(1), 0), 1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		mlds_to_gcc__build_lval_5_0_i76);
MR_def_label(mlds_to_gcc__build_lval_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i75);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__gcc__var_expr_1_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mlds_to_gcc__build_lval_5_0_i80);
MR_def_label(mlds_to_gcc__build_lval_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		mlds_to_gcc__build_lval_5_0_i81);
MR_def_label(mlds_to_gcc__build_lval_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		mlds_to_gcc__build_lval_5_0_i82);
MR_def_label(mlds_to_gcc__build_lval_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i79);
	}
	MR_r1 = MR_ctfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(mlds_to_gcc__rtti_enum_const_2_0,
		mlds_to_gcc__build_lval_5_0_i84);
MR_def_label(mlds_to_gcc__build_lval_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i79);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__build_int_4_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		mlds_to_gcc__build_lval_5_0_i88);
MR_def_label(mlds_to_gcc__build_lval_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		mlds_to_gcc__build_lval_5_0_i89);
MR_def_label(mlds_to_gcc__build_lval_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		mlds_to_gcc__build_lval_5_0_i90);
MR_def_label(mlds_to_gcc__build_lval_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i87);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("dummy_var", 9)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_lval_5_0_i87);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_data_var_name_2_0,
		mlds_to_gcc__build_lval_5_0_i93);
MR_def_label(mlds_to_gcc__build_lval_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__MR_Word_0_0,
		mlds_to_gcc__build_lval_5_0_i94);
MR_def_label(mlds_to_gcc__build_lval_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_extern_var_decl_5_0,
		mlds_to_gcc__build_lval_5_0_i95);
MR_def_label(mlds_to_gcc__build_lval_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__gcc__var_expr_1_0);
MR_def_label(mlds_to_gcc__build_lval_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		mlds_to_gcc__build_lval_5_0_i97);
MR_def_label(mlds_to_gcc__build_lval_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_qualified_name_1_0,
		mlds_to_gcc__build_lval_5_0_i98);
MR_def_label(mlds_to_gcc__build_lval_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("undeclared variable: ", 21);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mlds_to_gcc__build_lval_5_0_i99);
MR_def_label(mlds_to_gcc__build_lval_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module48)
	MR_init_entry1(mlds_to_gcc__build_rval_5_0);
	MR_init_label8(mlds_to_gcc__build_rval_5_0,4,44,7,8,9,10,12,14)
	MR_init_label4(mlds_to_gcc__build_rval_5_0,47,41,17,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_rval_5_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_5_0_i44) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_5_0_i12) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_rval_5_0_i14));
MR_def_label(mlds_to_gcc__build_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(mlds_to_gcc__build_lval_5_0);
MR_def_label(mlds_to_gcc__build_rval_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(gcc__build_int_4_0,
		mlds_to_gcc__build_rval_5_0_i7);
MR_def_label(mlds_to_gcc__build_rval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_rval_5_0_i8);
MR_def_label(mlds_to_gcc__build_rval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__plus_expr_0_0,
		mlds_to_gcc__build_rval_5_0_i9);
MR_def_label(mlds_to_gcc__build_rval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		mlds_to_gcc__build_rval_5_0_i10);
MR_def_label(mlds_to_gcc__build_rval_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
MR_def_label(mlds_to_gcc__build_rval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_tailcall_ent(mlds_to_gcc__build_rval_const_5_0);
MR_def_label(mlds_to_gcc__build_rval_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i15);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i17);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_rval_5_0_i47);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("self rval", 9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(mlds_to_gcc__build_rval_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(mlds_to_gcc__build_lval_5_0,
		mlds_to_gcc__build_rval_5_0_i41);
MR_def_label(mlds_to_gcc__build_rval_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_addr_expr_4_0);
MR_def_label(mlds_to_gcc__build_rval_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r4 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_r3 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(mlds_to_gcc__build_std_binop_7_0);
	}
MR_def_label(mlds_to_gcc__build_rval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r3 = MR_r2;
	MR_r2 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(mlds_to_gcc__build_unop_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__box_float_func_decl_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module49)
	MR_init_entry1(mlds_to_gcc__build_unop_6_0);
	MR_init_label8(mlds_to_gcc__build_unop_6_0,4,7,11,5,15,19,13,28)
	MR_init_label8(mlds_to_gcc__build_unop_6_0,31,35,36,37,101,29,42,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_unop_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_unop_6_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_6_0_i28) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_6_0_i42) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_unop_6_0_i44));
MR_def_label(mlds_to_gcc__build_unop_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	}
	MR_np_call_localret_ent(fn__gcc__box_float_func_decl_0_0,
		mlds_to_gcc__build_unop_6_0_i11);
MR_def_label(mlds_to_gcc__build_unop_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i5);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr1 = MR_r5;
	}
	MR_np_call_localret_ent(fn__gcc__box_float_func_decl_0_0,
		mlds_to_gcc__build_unop_6_0_i11);
MR_def_label(mlds_to_gcc__build_unop_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mlds_to_gcc__build_call_6_0);
	}
MR_def_label(mlds_to_gcc__build_unop_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i13);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,5)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,9,0);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(mlds_to_gcc__build_rval_5_0);
	}
MR_def_label(mlds_to_gcc__build_unop_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_r2, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(mlds_to_gcc__build_cast_rval_6_0);
	}
MR_def_label(mlds_to_gcc__build_unop_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("boxing non-lval, non-null array", 31);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_np_tailcall_ent(mlds_to_gcc__build_cast_rval_6_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_ctfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i31);
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
		mlds_to_gcc__build_unop_6_0_i35);
MR_def_label(mlds_to_gcc__build_unop_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i29);
	}
	MR_tempr2 = MR_ctfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_unop_6_0_i29);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_tempr3 = MR_r5;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_unop_6_0_i35);
MR_def_label(mlds_to_gcc__build_unop_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__double_type_node_0_0,
		mlds_to_gcc__build_unop_6_0_i36);
MR_def_label(mlds_to_gcc__build_unop_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_pointer_type_4_0,
		mlds_to_gcc__build_unop_6_0_i37);
MR_def_label(mlds_to_gcc__build_unop_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__convert_type_5_0,
		mlds_to_gcc__build_unop_6_0_i101);
MR_def_label(mlds_to_gcc__build_unop_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__build_pointer_deref_4_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_np_tailcall_ent(mlds_to_gcc__build_cast_rval_6_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_tailcall_ent(mlds_to_gcc__build_cast_rval_6_0);
MR_def_label(mlds_to_gcc__build_unop_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 0);
	MR_np_tailcall_ent(mlds_to_gcc__build_std_unop_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module50)
	MR_init_entry1(mlds_to_gcc__build_cast_rval_6_0);
	MR_init_label2(mlds_to_gcc__build_cast_rval_6_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_cast_rval_6_0)
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
		mlds_to_gcc__build_cast_rval_6_0_i2);
MR_def_label(mlds_to_gcc__build_cast_rval_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_cast_rval_6_0_i3);
MR_def_label(mlds_to_gcc__build_cast_rval_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__convert_type_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module51)
	MR_init_entry1(mlds_to_gcc__build_std_unop_6_0);
	MR_init_label1(mlds_to_gcc__build_std_unop_6_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_std_unop_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_std_unop_6_0_i2);
MR_def_label(mlds_to_gcc__build_std_unop_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mlds_to_gcc__build_unop_expr_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__eq_expr_0_0);
MR_decl_entry(fn__gcc__ne_expr_0_0);
MR_decl_entry(fn__gcc__lt_expr_0_0);
MR_decl_entry(fn__gcc__gt_expr_0_0);
MR_decl_entry(fn__gcc__le_expr_0_0);
MR_decl_entry(fn__gcc__ge_expr_0_0);
MR_decl_entry(fn__gcc__strcmp_func_decl_0_0);
MR_decl_entry(fn__gcc__array_ref_0_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0);
MR_decl_entry(fn__gcc__trunc_div_expr_0_0);
MR_decl_entry(fn__gcc__trunc_mod_expr_0_0);
MR_decl_entry(fn__gcc__bit_ior_expr_0_0);
MR_decl_entry(fn__gcc__bit_xor_expr_0_0);
MR_decl_entry(fn__gcc__truth_andif_expr_0_0);
MR_decl_entry(fn__gcc__truth_orif_expr_0_0);
MR_decl_entry(fn__gcc__rdiv_expr_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module52)
	MR_init_entry1(mlds_to_gcc__build_std_binop_7_0);
	MR_init_label8(mlds_to_gcc__build_std_binop_7_0,7,9,11,13,15,17,4,19)
	MR_init_label8(mlds_to_gcc__build_std_binop_7_0,20,21,22,3,27,25,29,30)
	MR_init_label8(mlds_to_gcc__build_std_binop_7_0,33,34,31,39,42,45,48,51)
	MR_init_label8(mlds_to_gcc__build_std_binop_7_0,54,57,60,63,66,67,69,70)
	MR_init_label8(mlds_to_gcc__build_std_binop_7_0,72,73,75,76,78,79,81,82)
	MR_init_label8(mlds_to_gcc__build_std_binop_7_0,84,86,88,90,92,94,96,97)
	MR_init_label8(mlds_to_gcc__build_std_binop_7_0,99,100,102,103,105,106,108,110)
	MR_init_label8(mlds_to_gcc__build_std_binop_7_0,113,116,119,120,122,123,125,126)
	MR_init_label8(mlds_to_gcc__build_std_binop_7_0,128,129,131,132,134,135,137,138)
	MR_init_label5(mlds_to_gcc__build_std_binop_7_0,139,140,142,38,145)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_std_binop_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i3);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i7) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i9) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i11) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i13) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i15) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i17) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i3));
MR_def_label(mlds_to_gcc__build_std_binop_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__eq_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__ne_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__lt_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__gt_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__le_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__ge_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i4);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__strcmp_func_decl_0_0,
		mlds_to_gcc__build_std_binop_7_0_i19);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r3 = MR_sv(4);
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
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i22);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,25)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__gcc__le_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i27);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("unsigned comparison operator", 28);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_std_binop_7_0_i29);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_std_binop_7_0_i30);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__gcc__array_ref_0_0,
		mlds_to_gcc__build_std_binop_7_0_i33);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,
		mlds_to_gcc__build_std_binop_7_0_i34);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tag(MR_tempr1);
	if ((MR_r4 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(mlds_to_gcc__build_std_binop_7_0_i38);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i39) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i42) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i45) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i48) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i51) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i54) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i57) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i60) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i63) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i66) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i69) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i72) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i75) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i78) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i81) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i84) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i86) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i88) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i90) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i92) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i94) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i96) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i99) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i102) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i105) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i108) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i110) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i113) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i116) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i119) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i122) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i125) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i128) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i131) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i134) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i137) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i140) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_std_binop_7_0_i142));
	}
MR_def_label(mlds_to_gcc__build_std_binop_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__plus_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i67);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__minus_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i67);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__mult_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i67);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__trunc_div_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i67);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__trunc_mod_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i67);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__lshift_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i67);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__rshift_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i67);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_and_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i67);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_ior_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i67);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__bit_xor_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i67);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__truth_andif_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i70);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__truth_orif_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i73);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__eq_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i76);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ne_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i79);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__minus_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i82);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__intptr_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("str_eq", 6);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_std_binop_7_0_i145);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("str_ne", 6);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_std_binop_7_0_i145);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("str_lt", 6);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_std_binop_7_0_i145);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("str_gt", 6);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_std_binop_7_0_i145);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("str_le", 6);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_std_binop_7_0_i145);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("str_ge", 6);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_std_binop_7_0_i145);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__lt_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i97);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__gt_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i100);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__le_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i103);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ge_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i106);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("unsigned_le", 11);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_std_binop_7_0_i145);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__plus_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i120);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__minus_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i120);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__mult_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i120);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__rdiv_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i120);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__double_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__eq_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i123);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ne_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i126);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__lt_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i129);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__gt_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i132);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__le_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i135);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__ge_expr_0_0,
		mlds_to_gcc__build_std_binop_7_0_i138);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		mlds_to_gcc__build_std_binop_7_0_i139);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("compound_eq", 11);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_std_binop_7_0_i145);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("compound_lt", 11);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_std_binop_7_0_i145);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("array_index", 11);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_std_binop_7_0_i145);
MR_def_label(mlds_to_gcc__build_std_binop_7_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(gcc__build_binop_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module53)
	MR_init_entry1(mlds_to_gcc__build_call_6_0);
	MR_init_label2(mlds_to_gcc__build_call_6_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(gcc__build_func_addr_expr_4_0,
		mlds_to_gcc__build_call_6_0_i2);
MR_def_label(mlds_to_gcc__build_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_args_5_0,
		mlds_to_gcc__build_call_6_0_i3);
MR_def_label(mlds_to_gcc__build_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__build_call_expr_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module54)
	MR_init_entry1(mlds_to_gcc__build_args_5_0);
	MR_init_label3(mlds_to_gcc__build_args_5_0,16,5,6)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_args_5_0_i5);
MR_def_label(mlds_to_gcc__build_args_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(mlds_to_gcc__build_args_5_0,
		mlds_to_gcc__build_args_5_0_i6);
MR_def_label(mlds_to_gcc__build_args_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__cons_arg_list_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__get_struct_field_decls_4_0);
MR_decl_entry(gcc__get_array_elem_type_4_0);
MR_decl_entry(gcc__build_initializer_expr_5_0);

MR_BEGIN_MODULE(mlds_to_gcc_module55)
	MR_init_entry1(mlds_to_gcc__build_initializer_6_0);
	MR_init_label7(mlds_to_gcc__build_initializer_6_0,4,6,21,9,22,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_initializer_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(mlds_to_gcc__build_initializer_6_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_initializer_6_0_i6) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_initializer_6_0_i21) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_initializer_6_0_i22));
MR_def_label(mlds_to_gcc__build_initializer_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("no_initializer (build_initializer)", 34);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(mlds_to_gcc__build_initializer_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(mlds_to_gcc__build_rval_5_0);
MR_def_label(mlds_to_gcc__build_initializer_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__get_struct_field_decls_4_0,
		mlds_to_gcc__build_initializer_6_0_i9);
MR_def_label(mlds_to_gcc__build_initializer_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_initializer_6_0_i14);
MR_def_label(mlds_to_gcc__build_initializer_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__get_array_elem_type_4_0,
		mlds_to_gcc__build_initializer_6_0_i13);
MR_def_label(mlds_to_gcc__build_initializer_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_initializer_6_0_i14);
MR_def_label(mlds_to_gcc__build_initializer_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__build_initializer_expr_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__empty_init_list_3_0);
MR_decl_entry(gcc__array_elem_initializer_4_0);
MR_decl_entry(gcc__cons_init_list_6_0);

MR_BEGIN_MODULE(mlds_to_gcc_module56)
	MR_init_entry1(mlds_to_gcc__build_array_initializer_7_0);
	MR_init_label8(mlds_to_gcc__build_array_initializer_7_0,30,5,8,10,12,13,14,16)
	MR_init_label5(mlds_to_gcc__build_array_initializer_7_0,17,18,19,6,20)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_array_initializer_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_array_initializer_7_0_i30);
	}
	MR_np_tailcall_ent(gcc__empty_init_list_3_0);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__array_elem_initializer_4_0,
		mlds_to_gcc__build_array_initializer_7_0_i5);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(mlds_to_gcc__build_array_initializer_7_0_i8) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_array_initializer_7_0_i10) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_array_initializer_7_0_i12) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_array_initializer_7_0_i16));
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("no_initializer (build_initializer)", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_array_initializer_7_0_i6);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_array_initializer_7_0_i19);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_ctfield(2, MR_r3, 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__get_struct_field_decls_4_0,
		mlds_to_gcc__build_array_initializer_7_0_i13);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_array_initializer_7_0_i14);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_array_initializer_7_0_i19);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_ctfield(3, MR_r3, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__get_array_elem_type_4_0,
		mlds_to_gcc__build_array_initializer_7_0_i17);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_array_initializer_7_0_i18);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_array_initializer_7_0_i19);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	}
	MR_np_localcall_lab(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_array_initializer_7_0_i20);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_array_initializer_7_0_i20);
MR_def_label(mlds_to_gcc__build_array_initializer_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__cons_init_list_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__next_field_decl_5_0);
MR_decl_entry(gcc__struct_field_initializer_4_0);
MR_decl_entry(gcc__field_type_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module57)
	MR_init_entry1(mlds_to_gcc__build_struct_initializer_6_0);
	MR_init_label8(mlds_to_gcc__build_struct_initializer_6_0,32,5,6,7,10,12,14,15)
	MR_init_label7(mlds_to_gcc__build_struct_initializer_6_0,16,18,19,20,21,8,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_struct_initializer_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_struct_initializer_6_0_i32);
	}
	MR_np_tailcall_ent(gcc__empty_init_list_3_0);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(gcc__next_field_decl_5_0,
		mlds_to_gcc__build_struct_initializer_6_0_i5);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(gcc__struct_field_initializer_4_0,
		mlds_to_gcc__build_struct_initializer_6_0_i6);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__field_type_4_0,
		mlds_to_gcc__build_struct_initializer_6_0_i7);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(mlds_to_gcc__build_struct_initializer_6_0_i10) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_struct_initializer_6_0_i12) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_struct_initializer_6_0_i14) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_struct_initializer_6_0_i18));
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("no_initializer (build_initializer)", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_struct_initializer_6_0_i8);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_struct_initializer_6_0_i21);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_ctfield(2, MR_r3, 1);
	MR_np_call_localret_ent(gcc__get_struct_field_decls_4_0,
		mlds_to_gcc__build_struct_initializer_6_0_i15);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_struct_initializer_6_0_i16);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_struct_initializer_6_0_i21);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_ctfield(3, MR_r3, 0);
	MR_np_call_localret_ent(gcc__get_array_elem_type_4_0,
		mlds_to_gcc__build_struct_initializer_6_0_i19);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_struct_initializer_6_0_i20);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_struct_initializer_6_0_i21);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_struct_initializer_6_0_i22);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_struct_initializer_6_0_i22);
MR_def_label(mlds_to_gcc__build_struct_initializer_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__cons_init_list_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
MR_decl_entry(fn__ml_backend__mlds__per_instance_1_0);
MR_decl_entry(gcc__build_static_var_decl_6_0);
MR_decl_entry(gcc__set_var_decl_asm_name_4_0);
MR_decl_entry(gcc__finish_static_var_decl_3_0);
MR_decl_entry(gcc__build_local_var_decl_5_0);
MR_decl_entry(gcc__gen_assign_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module58)
	MR_init_entry1(mlds_to_gcc__build_local_data_defn_8_0);
	MR_init_label8(mlds_to_gcc__build_local_data_defn_8_0,7,8,9,10,14,15,20,22)
	MR_init_label8(mlds_to_gcc__build_local_data_defn_8_0,24,25,26,28,29,30,31,18)
	MR_init_label8(mlds_to_gcc__build_local_data_defn_8_0,32,33,34,35,36,17,38,39)
	MR_init_label5(mlds_to_gcc__build_local_data_defn_8_0,40,50,41,43,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_local_data_defn_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_tag(MR_r4),3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_local_data_defn_8_0_i9);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_ctfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i8);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_sv(5), 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_local_data_defn_8_0_i9);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i10);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i10);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i14);
	}
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("build_local_data_defn: non-var", 30);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_local_data_defn_8_0_i14);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i15);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i17);
	}
	MR_r3 = MR_sv(4);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(mlds_to_gcc__build_local_data_defn_8_0_i20) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_local_data_defn_8_0_i22) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_local_data_defn_8_0_i24) MR_AND
		MR_LABEL_AP(mlds_to_gcc__build_local_data_defn_8_0_i28));
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("no_initializer (build_initializer)", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_local_data_defn_8_0_i18);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__build_local_data_defn_8_0_i31);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(2, MR_r3, 1);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__get_struct_field_decls_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i25);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__build_local_data_defn_8_0_i26);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_local_data_defn_8_0_i31);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_ctfield(3, MR_r3, 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__get_array_elem_type_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i29);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__build_local_data_defn_8_0_i30);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__build_local_data_defn_8_0_i31);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i32);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i32);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_static_var_decl_6_0,
		mlds_to_gcc__build_local_data_defn_8_0_i33);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i34);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__set_var_decl_asm_name_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i35);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__add_var_decl_flags_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i36);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__finish_static_var_decl_3_0,
		mlds_to_gcc__build_local_data_defn_8_0_i50);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i38);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_local_var_decl_5_0,
		mlds_to_gcc__build_local_data_defn_8_0_i39);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__add_var_decl_flags_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i40);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_data_defn_8_0_i41);
	}
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__build_initializer_6_0,
		mlds_to_gcc__build_local_data_defn_8_0_i43);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__gcc__var_expr_1_0,
		mlds_to_gcc__build_local_data_defn_8_0_i44);
MR_def_label(mlds_to_gcc__build_local_data_defn_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__gen_assign_4_0,
		mlds_to_gcc__build_local_data_defn_8_0_i50);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__det_insert_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module59)
	MR_init_entry1(mlds_to_gcc__build_local_defns_6_0);
	MR_init_label7(mlds_to_gcc__build_local_defns_6_0,23,3,10,8,6,4,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_local_defns_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mlds_to_gcc__build_local_defns_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_defns_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(4) = MR_tempr1;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr6 = MR_r1;
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 0);
	MR_r5 = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr4 = MR_tag(MR_tempr3);
	if ((MR_tempr4 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_defns_6_0_i6);
	}
	if ((MR_tempr4 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(mlds_to_gcc__build_local_defns_6_0_i8);
	}
	MR_sv(1) = MR_tempr5;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr6, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_tempr3;
	MR_r4 = MR_ctfield(0, MR_tempr4, 1);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_local_data_defn_8_0,
		mlds_to_gcc__build_local_defns_6_0_i10);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r3 = MR_ctfield(0, MR_sv(2), 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r4 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_np_call_localret_ent(fn__map__det_insert_3_0,
		mlds_to_gcc__build_local_defns_6_0_i11);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("nested type", 11);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_local_defns_6_0_i4);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("nested function (\140--gcc-nested-functions\' not yet supported with \140--target asm\')", 80);
	}
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__build_local_defns_6_0_i4);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__map__det_insert_3_0,
		mlds_to_gcc__build_local_defns_6_0_i11);
MR_def_label(mlds_to_gcc__build_local_defns_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mlds_to_gcc__build_local_defns_6_0_i23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module60)
	MR_init_entry1(mlds_to_gcc__gen_statements_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_statements_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__gen_statement_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;

MR_BEGIN_MODULE(mlds_to_gcc_module61)
	MR_init_entry1(mlds_to_gcc__gen_cases_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_cases_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__gen_case_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_0);
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

MR_BEGIN_MODULE(mlds_to_gcc_module62)
	MR_init_entry1(mlds_to_gcc__gen_statement_4_0);
	MR_init_label4(mlds_to_gcc__gen_statement_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_statement_4_0_i2);
MR_def_label(mlds_to_gcc__gen_statement_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_statement_4_0_i3);
MR_def_label(mlds_to_gcc__gen_statement_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_statement_4_0_i4);
MR_def_label(mlds_to_gcc__gen_statement_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
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

MR_BEGIN_MODULE(mlds_to_gcc_module63)
	MR_init_entry1(mlds_to_gcc__gen_default_4_0);
	MR_init_label8(mlds_to_gcc__gen_default_4_0,26,29,8,9,10,11,12,13)
	MR_init_label2(mlds_to_gcc__gen_default_4_0,27,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_default_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(mlds_to_gcc__gen_default_4_0_i29);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_default_4_0_i30);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	}
	MR_np_call_localret_ent(gcc__build_unnamed_label_3_0,
		mlds_to_gcc__gen_default_4_0_i26);
MR_def_label(mlds_to_gcc__gen_default_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__gen_default_case_label_3_0);
MR_def_label(mlds_to_gcc__gen_default_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(gcc__build_unnamed_label_3_0,
		mlds_to_gcc__gen_default_4_0_i8);
MR_def_label(mlds_to_gcc__gen_default_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__gen_default_case_label_3_0,
		mlds_to_gcc__gen_default_4_0_i9);
MR_def_label(mlds_to_gcc__gen_default_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_default_4_0_i10);
MR_def_label(mlds_to_gcc__gen_default_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_default_4_0_i11);
MR_def_label(mlds_to_gcc__gen_default_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_default_4_0_i12);
MR_def_label(mlds_to_gcc__gen_default_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__gen_line_note_4_0,
		mlds_to_gcc__gen_default_4_0_i13);
MR_def_label(mlds_to_gcc__gen_default_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,
		mlds_to_gcc__gen_default_4_0_i27);
MR_def_label(mlds_to_gcc__gen_default_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__gen_break_2_0);
MR_def_label(mlds_to_gcc__gen_default_4_0,30)
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

MR_BEGIN_MODULE(mlds_to_gcc_module64)
	MR_init_entry1(mlds_to_gcc__gen_init_fn_defns_5_0);
	MR_init_label8(mlds_to_gcc__gen_init_fn_defns_5_0,2,3,5,4,7,9,10,11)
	MR_init_label8(mlds_to_gcc__gen_init_fn_defns_5_0,12,13,14,15,16,17,18,19)
	MR_init_label5(mlds_to_gcc__gen_init_fn_defns_5_0,20,21,22,23,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_init_fn_defns_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i2);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i3);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(string__prefix_2_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i5);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_init_fn_defns_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,11,1);
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i9);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(string__append_3_2,
		mlds_to_gcc__gen_init_fn_defns_5_0_i7);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,11,1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i9);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__empty_param_types_0_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i10);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__empty_param_decls_0_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i11);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i12);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_function_decl_8_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i13);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(4), 0) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_np_call_localret_ent(map__init_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i14);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_np_call_localret_ent(map__init_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i15);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	}
	MR_np_call_localret_ent(term__context_init_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i16);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i17);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(gcc__start_function_3_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i18);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i19);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i20);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i21);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__gen_line_note_4_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i22);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i23);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__end_function_2_0,
		mlds_to_gcc__gen_init_fn_defns_5_0_i24);
MR_def_label(mlds_to_gcc__gen_init_fn_defns_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module65)
	MR_init_entry1(mlds_to_gcc__build_field_defn_6_0);
	MR_init_label8(mlds_to_gcc__build_field_defn_6_0,13,14,15,19,20,16,22,26)
	MR_init_label3(mlds_to_gcc__build_field_defn_6_0,27,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__build_field_defn_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tempr5 = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr5, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr5, 3);
	MR_r5 = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr2);
	MR_r6 = MR_tempr3;
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i4);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i6);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_r6 = MR_tempr4;
	if (MR_INT_EQ(MR_tag(MR_tempr4),3)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i13);
	}
	MR_sv(2) = MR_ctfield(0, MR_tempr5, 2);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tempr4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_field_defn_6_0_i15);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(4) = MR_ctfield(0, MR_r5, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_ctfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__build_field_defn_6_0_i14);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_field_defn_6_0_i15);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(3), 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i16);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_field_defn_6_0_i19);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__build_field_decl_5_0,
		mlds_to_gcc__build_field_defn_6_0_i20);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i22);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("build_field_data_defn: non-var", 30);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__build_field_defn_6_0_i22);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defn_6_0_i26);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("build_field_data_defn: initializer", 34);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__build_field_defn_6_0_i26);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,
		mlds_to_gcc__build_field_defn_6_0_i27);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("type nested in type", 19);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(mlds_to_gcc__build_field_defn_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("function nested in type", 23);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module66)
	MR_init_entry1(mlds_to_gcc__build_field_defns_8_0);
	MR_init_label8(mlds_to_gcc__build_field_defns_8_0,3,5,9,10,6,12,13,14)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_r4;
	MR_np_call_localret_ent(gcc__empty_field_list_3_0,
		mlds_to_gcc__build_field_defns_8_0_i14);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_field_defn_6_0,
		mlds_to_gcc__build_field_defns_8_0_i5);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_sv(4), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defns_8_0_i6);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_field_defns_8_0_i6);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_field_defns_8_0_i9);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__map__det_insert_3_0,
		mlds_to_gcc__build_field_defns_8_0_i10);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_localcall_lab(mlds_to_gcc__build_field_defns_8_0,
		mlds_to_gcc__build_field_defns_8_0_i13);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("non-var field", 13);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_field_defns_8_0_i12);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(mlds_to_gcc__build_field_defns_8_0,
		mlds_to_gcc__build_field_defns_8_0_i13);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__cons_field_list_5_0,
		mlds_to_gcc__build_field_defns_8_0_i14);
MR_def_label(mlds_to_gcc__build_field_defns_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__set_func_decl_public_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module67)
	MR_init_entry1(mlds_to_gcc__add_func_decl_flags_4_0);
	MR_init_label8(mlds_to_gcc__add_func_decl_flags_4_0,2,4,6,8,9,11,3,13)
	MR_init_label8(mlds_to_gcc__add_func_decl_flags_4_0,16,18,17,20,22,21,24,26)
	MR_init_label3(mlds_to_gcc__add_func_decl_flags_4_0,25,28,29)
MR_BEGIN_CODE

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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(mlds_to_gcc__add_func_decl_flags_4_0_i4) MR_AND
		MR_LABEL_AP(mlds_to_gcc__add_func_decl_flags_4_0_i6) MR_AND
		MR_LABEL_AP(mlds_to_gcc__add_func_decl_flags_4_0_i8) MR_AND
		MR_LABEL_AP(mlds_to_gcc__add_func_decl_flags_4_0_i9) MR_AND
		MR_LABEL_AP(mlds_to_gcc__add_func_decl_flags_4_0_i11));
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__set_func_decl_public_3_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i8);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140protected\' access", 18);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140default\' access", 16);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140local\' access", 14);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i3);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i13);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__virtuality_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i16);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i17);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140virtual\' function", 18);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i17);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__finality_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i20);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i21);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140final\' function", 16);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i21);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i24);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i28);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140const\' function", 16);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i25);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		mlds_to_gcc__add_func_decl_flags_4_0_i28);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__add_func_decl_flags_4_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140abstract\' function", 19);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(mlds_to_gcc__add_func_decl_flags_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module68)
	MR_init_entry1(mlds_to_gcc__build_param_types_and_decls_8_0);
	MR_init_label8(mlds_to_gcc__build_param_types_and_decls_8_0,4,5,6,3,7,8,12,13)
	MR_init_label5(mlds_to_gcc__build_param_types_and_decls_8_0,14,9,16,17,18)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__empty_param_decls_0_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i5);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_np_call_localret_ent(map__init_1_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i6);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(mlds_to_gcc__build_param_types_and_decls_8_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i7);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i8);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_param_types_and_decls_8_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(5), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(mlds_to_gcc__build_param_types_and_decls_8_0_i9);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_var_name_to_string_1_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i12);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(gcc__build_param_decl_5_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i13);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__det_insert_3_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i14);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__gcc__cons_param_types_2_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i17);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("build_param_types_and_decls: invalid param name", 47);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i16);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__cons_param_types_2_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i17);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__gcc__cons_param_decls_2_0,
		mlds_to_gcc__build_param_types_and_decls_8_0_i18);
MR_def_label(mlds_to_gcc__build_param_types_and_decls_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module69)
	MR_init_entry1(mlds_to_gcc__make_func_decl_for_defn_7_0);
	MR_init_label8(mlds_to_gcc__make_func_decl_for_defn_7_0,2,8,5,11,12,21,17,19)
	MR_init_label8(mlds_to_gcc__make_func_decl_for_defn_7_0,15,13,14,30,31,32,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__make_func_decl_for_defn_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	}
	MR_np_call_localret_ent(fn__gcc__void_type_node_0_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i8);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i8);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(mlds_to_gcc__get_func_name_3_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i12);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("multiple return types", 21);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i11);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mlds_to_gcc__get_func_name_3_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i12);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_tag(MR_r3);
	MR_r4 = MR_tempr1;
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i17);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i21);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i14);
	}
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i15);
	}
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r3, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i14);
	}
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i14);
	}
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i14);
	}
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	if ((strcmp((char *)MR_r3, (char *)(MR_Word) MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i14);
	}
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i14);
	}
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i14);
	}
	MR_r3 = MR_ctfield(0, MR_tempr1, 5);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i14);
	}
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(6) = MR_r2;
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i15);
	}
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r3, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__module_qualify_name_of_rtti_id_1_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i19);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mlds_to_gcc__make_func_decl_for_defn_7_0_i13);
	}
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(6);
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_and_decls_8_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i34);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i30);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i31);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s__%s", 6);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i32);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_param_types_and_decls_8_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i34);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(gcc__build_function_decl_8_0,
		mlds_to_gcc__make_func_decl_for_defn_7_0_i35);
MR_def_label(mlds_to_gcc__make_func_decl_for_defn_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__push_gc_context_2_0);
MR_decl_entry(solutions__solutions_2_1);
MR_decl_entry(list__map_foldl_5_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(gcc__set_context_4_0);
MR_decl_entry(gcc__pop_gc_context_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module70)
	MR_init_entry1(mlds_to_gcc__gen_func_9_0);
	MR_init_label8(mlds_to_gcc__gen_func_9_0,33,4,5,6,7,8,9,10)
	MR_init_label8(mlds_to_gcc__gen_func_9_0,11,12,13,14,15,16,17,18)
	MR_init_label7(mlds_to_gcc__gen_func_9_0,19,20,21,22,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_func_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_func_9_0_i33);
	}
	MR_r1 = MR_r6;
	MR_proceed();
MR_def_label(mlds_to_gcc__gen_func_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_ctfield(1, MR_r5, 0);
	}
	MR_np_call_localret_ent(gcc__push_gc_context_2_0,
		mlds_to_gcc__gen_func_9_0_i4);
MR_def_label(mlds_to_gcc__gen_func_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__make_func_decl_for_defn_7_0,
		mlds_to_gcc__gen_func_9_0_i5);
MR_def_label(mlds_to_gcc__gen_func_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(mlds_to_gcc__add_func_decl_flags_4_0,
		mlds_to_gcc__gen_func_9_0_i6);
MR_def_label(mlds_to_gcc__gen_func_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__statement_contains_label_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(solutions__solutions_2_1,
		mlds_to_gcc__gen_func_9_0_i7);
MR_def_label(mlds_to_gcc__gen_func_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(list__map_foldl_5_0,
		mlds_to_gcc__gen_func_9_0_i8);
MR_def_label(mlds_to_gcc__gen_func_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		mlds_to_gcc__gen_func_9_0_i9);
MR_def_label(mlds_to_gcc__gen_func_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_func_9_0_i10);
MR_def_label(mlds_to_gcc__gen_func_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_func_9_0_i11);
MR_def_label(mlds_to_gcc__gen_func_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_func_9_0_i12);
MR_def_label(mlds_to_gcc__gen_func_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__set_context_4_0,
		mlds_to_gcc__gen_func_9_0_i13);
MR_def_label(mlds_to_gcc__gen_func_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__start_function_3_0,
		mlds_to_gcc__gen_func_9_0_i14);
MR_def_label(mlds_to_gcc__gen_func_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_func_9_0_i15);
MR_def_label(mlds_to_gcc__gen_func_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_func_9_0_i16);
MR_def_label(mlds_to_gcc__gen_func_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_func_9_0_i17);
MR_def_label(mlds_to_gcc__gen_func_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(gcc__gen_line_note_4_0,
		mlds_to_gcc__gen_func_9_0_i18);
MR_def_label(mlds_to_gcc__gen_func_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,
		mlds_to_gcc__gen_func_9_0_i19);
MR_def_label(mlds_to_gcc__gen_func_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_func_9_0_i20);
MR_def_label(mlds_to_gcc__gen_func_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_func_9_0_i21);
MR_def_label(mlds_to_gcc__gen_func_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_func_9_0_i22);
MR_def_label(mlds_to_gcc__gen_func_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(gcc__set_context_4_0,
		mlds_to_gcc__gen_func_9_0_i23);
MR_def_label(mlds_to_gcc__gen_func_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__end_function_2_0,
		mlds_to_gcc__gen_func_9_0_i24);
MR_def_label(mlds_to_gcc__gen_func_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__pop_gc_context_2_0,
		mlds_to_gcc__gen_func_9_0_i25);
MR_def_label(mlds_to_gcc__gen_func_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module71)
	MR_init_entry1(mlds_to_gcc__gen_defns_6_0);
	MR_init_label3(mlds_to_gcc__gen_defns_6_0,10,3,4)
MR_BEGIN_CODE

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
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(mlds_to_gcc__gen_defn_6_0,
		mlds_to_gcc__gen_defns_6_0_i4);
MR_def_label(mlds_to_gcc__gen_defns_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mlds_to_gcc__gen_defns_6_0_i10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module72)
	MR_init_entry1(mlds_to_gcc__gen_defn_6_0);
MR_BEGIN_CODE

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
	MR_tempr3 = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 0);
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r5 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr2, 2);
	MR_r4 = MR_ctfield(0, MR_tempr2, 3);
	MR_np_tailcall_ent(mlds_to_gcc__gen_defn_body_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module73)
	MR_init_entry1(mlds_to_gcc__gen_defn_body_8_0);
	MR_init_label8(mlds_to_gcc__gen_defn_body_8_0,9,10,11,14,15,17,18,20)
	MR_init_label8(mlds_to_gcc__gen_defn_body_8_0,21,22,23,25,26,27,28,29)
	MR_init_label8(mlds_to_gcc__gen_defn_body_8_0,30,12,31,32,33,34,7,48)
	MR_init_label1(mlds_to_gcc__gen_defn_body_8_0,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_defn_body_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r4);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(mlds_to_gcc__gen_defn_body_8_0_i48);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(mlds_to_gcc__gen_defn_body_8_0_i7);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mlds_to_gcc__gen_defn_body_8_0_i9);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mlds_to_gcc__gen_defn_body_8_0_i10);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_qualified_name_1_0,
		mlds_to_gcc__gen_defn_body_8_0_i11);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(mlds_to_gcc__gen_defn_body_8_0_i14) MR_AND
		MR_LABEL_AP(mlds_to_gcc__gen_defn_body_8_0_i17) MR_AND
		MR_LABEL_AP(mlds_to_gcc__gen_defn_body_8_0_i20) MR_AND
		MR_LABEL_AP(mlds_to_gcc__gen_defn_body_8_0_i25));
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i15);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("no_initializer (build_initializer)", 34);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__gen_defn_body_8_0_i12);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i18);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_sv(5), 0);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		mlds_to_gcc__gen_defn_body_8_0_i30);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i21);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_ctfield(2, MR_sv(5), 1);
	MR_np_call_localret_ent(gcc__get_struct_field_decls_4_0,
		mlds_to_gcc__gen_defn_body_8_0_i22);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(mlds_to_gcc__build_struct_initializer_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i23);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__gen_defn_body_8_0_i30);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(5) = MR_ctfield(3, MR_r3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__list__length_1_0,
		mlds_to_gcc__gen_defn_body_8_0_i26);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i27);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(gcc__get_array_elem_type_4_0,
		mlds_to_gcc__gen_defn_body_8_0_i28);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(mlds_to_gcc__build_array_initializer_7_0,
		mlds_to_gcc__gen_defn_body_8_0_i29);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_initializer_expr_5_0,
		mlds_to_gcc__gen_defn_body_8_0_i30);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(gcc__build_static_var_decl_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i31);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__build_static_var_decl_6_0,
		mlds_to_gcc__gen_defn_body_8_0_i31);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__add_var_decl_flags_4_0,
		mlds_to_gcc__gen_defn_body_8_0_i32);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__finish_static_var_decl_3_0,
		mlds_to_gcc__gen_defn_body_8_0_i33);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_ctfield(0, MR_sv(4), 1);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__det_insert_3_0,
		mlds_to_gcc__gen_defn_body_8_0_i34);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(4), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(2, MR_r4, 0);
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(mlds_to_gcc__gen_class_7_0);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__IntroducedFrom__pred__gen_defn_body__830__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r4;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(1, MR_tempr2, 4);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r3 = (MR_Word) MR_string_const("gen_defn_body: EnvVarNames", 26);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		mlds_to_gcc__gen_defn_body_8_0_i5);
MR_def_label(mlds_to_gcc__gen_defn_body_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(mlds_to_gcc__gen_func_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_get_globals_3_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_append_class_qualifier_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__append_3_1);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module74)
	MR_init_entry1(mlds_to_gcc__gen_class_7_0);
	MR_init_label8(mlds_to_gcc__gen_class_7_0,2,5,3,7,8,11,12,15)
	MR_init_label8(mlds_to_gcc__gen_class_7_0,13,17,18,19,22,23,24,25)
	MR_init_label2(mlds_to_gcc__gen_class_7_0,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_class_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		mlds_to_gcc__gen_class_7_0_i2);
MR_def_label(mlds_to_gcc__gen_class_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i3);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_append_class_qualifier_5_0,
		mlds_to_gcc__gen_class_7_0_i5);
MR_def_label(mlds_to_gcc__gen_class_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r6 = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i7);
	}
MR_def_label(mlds_to_gcc__gen_class_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("mlds_output_enum_constants", 26);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__gen_class_7_0_i7);
MR_def_label(mlds_to_gcc__gen_class_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__mlds_make_base_class_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r6 = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		mlds_to_gcc__gen_class_7_0_i12);
MR_def_label(mlds_to_gcc__gen_class_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("constructors", 12);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		mlds_to_gcc__gen_class_7_0_i11);
MR_def_label(mlds_to_gcc__gen_class_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__map_foldl_5_1,
		mlds_to_gcc__gen_class_7_0_i12);
MR_def_label(mlds_to_gcc__gen_class_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),4)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i13);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__append_3_1,
		mlds_to_gcc__gen_class_7_0_i15);
MR_def_label(mlds_to_gcc__gen_class_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("enum type (\140--high-level-data\' not yet implemented for \140--target asm\')", 70);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(mlds_to_gcc__gen_class_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(list__filter_4_0,
		mlds_to_gcc__gen_class_7_0_i17);
MR_def_label(mlds_to_gcc__gen_class_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__append_3_1,
		mlds_to_gcc__gen_class_7_0_i18);
MR_def_label(mlds_to_gcc__gen_class_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),4)) {
		MR_GOTO_LAB(mlds_to_gcc__gen_class_7_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("enum type (\140--high-level-data\' not yet implemented for \140--target asm\')", 70);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		mlds_to_gcc__gen_class_7_0_i27);
MR_def_label(mlds_to_gcc__gen_class_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_np_call_localret_ent(map__init_1_0,
		mlds_to_gcc__gen_class_7_0_i22);
MR_def_label(mlds_to_gcc__gen_class_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__build_field_defns_8_0,
		mlds_to_gcc__gen_class_7_0_i23);
MR_def_label(mlds_to_gcc__gen_class_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__mlds_to_gcc__build_qualified_name_1_0,
		mlds_to_gcc__gen_class_7_0_i24);
MR_def_label(mlds_to_gcc__gen_class_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__build_struct_type_decl_5_0,
		mlds_to_gcc__gen_class_7_0_i25);
MR_def_label(mlds_to_gcc__gen_class_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_tempr2 = MR_sv(4);
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		mlds_to_gcc__gen_class_7_0_i26);
MR_def_label(mlds_to_gcc__gen_class_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	}
MR_def_label(mlds_to_gcc__gen_class_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mlds_to_gcc__gen_defns_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
MR_decl_entry(ml_backend__mlds_to_c__output_header_file_4_0);
MR_decl_entry(ml_backend__mlds_to_c__output_c_file_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module75)
	MR_init_entry1(mlds_to_gcc__compile_to_asm_4_0);
	MR_init_label8(mlds_to_gcc__compile_to_asm_4_0,2,3,4,8,9,11,12,13)
	MR_init_label5(mlds_to_gcc__compile_to_asm_4_0,14,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mlds_to_gcc__compile_to_asm_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,14,0);
	MR_r3 = MR_ctfield(0, MR_sv(1), 3);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		mlds_to_gcc__compile_to_asm_4_0_i2);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		mlds_to_gcc__compile_to_asm_4_0_i3);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__compile_to_asm_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__compile_to_asm_4_0_i4);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mlds_to_gcc__compile_to_asm_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 0;
	MR_sv(3) = (MR_Integer) 1;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_header_file_4_0,
		mlds_to_gcc__compile_to_asm_4_0_i11);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__list__map_2_0,
		mlds_to_gcc__compile_to_asm_4_0_i8);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_c_file_4_0,
		mlds_to_gcc__compile_to_asm_4_0_i9);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(1) = (MR_Integer) 1;
	MR_sv(3) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_c__output_header_file_4_0,
		mlds_to_gcc__compile_to_asm_4_0_i11);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(list__filter_4_0,
		mlds_to_gcc__compile_to_asm_4_0_i12);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		mlds_to_gcc__compile_to_asm_4_0_i13);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mlds_to_gcc__compile_to_asm_4_0_i14);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mlds_to_gcc__compile_to_asm_4_0_i15);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(mlds_to_gcc__gen_defns_6_0,
		mlds_to_gcc__compile_to_asm_4_0_i16);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__gen_defns_6_0,
		mlds_to_gcc__compile_to_asm_4_0_i17);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(mlds_to_gcc__compile_to_asm_4_0_i18);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__gen_init_fn_defns_5_0,
		mlds_to_gcc__compile_to_asm_4_0_i18);
MR_def_label(mlds_to_gcc__compile_to_asm_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__set_access_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module76)
	MR_init_entry1(fn__mlds_to_gcc__make_public_1_0);
	MR_init_label1(fn__mlds_to_gcc__make_public_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__make_public_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__set_access_2_0,
		fn__mlds_to_gcc__make_public_1_0_i2);
MR_def_label(fn__mlds_to_gcc__make_public_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module77)
	MR_init_entry1(mlds_to_gcc__is_static_member_1_0);
	MR_init_label3(mlds_to_gcc__is_static_member_1_0,5,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__is_static_member_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TEST(MR_tempr2,0)) {
		MR_GOTO_LAB(mlds_to_gcc__is_static_member_1_0_i2);
	}
	MR_r1 = MR_tempr1;
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

MR_BEGIN_MODULE(mlds_to_gcc_module78)
	MR_init_entry1(mlds_to_gcc__mlds_make_base_class_5_0);
	MR_init_label2(mlds_to_gcc__mlds_make_base_class_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__mlds_make_base_class_5_0)
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
		mlds_to_gcc__mlds_make_base_class_5_0_i2);
MR_def_label(mlds_to_gcc__mlds_make_base_class_5_0,2)
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
		mlds_to_gcc__mlds_make_base_class_5_0_i3);
MR_def_label(mlds_to_gcc__mlds_make_base_class_5_0,3)
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

MR_declare_entry(MR_do_fail);
MR_decl_entry(ml_backend__ml_util__statement_contains_statement_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(mlds_to_gcc_module79)
	MR_init_entry1(mlds_to_gcc__statement_contains_label_2_0);
	MR_init_label1(mlds_to_gcc__statement_contains_label_2_0,1)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;

MR_BEGIN_MODULE(mlds_to_gcc_module80)
	MR_init_entry1(mlds_to_gcc__gen_case_4_0);
	MR_init_label6(mlds_to_gcc__gen_case_4_0,2,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__gen_case_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__gen_case_label_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_tempr2 = MR_tempr4;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		mlds_to_gcc__gen_case_4_0_i2);
MR_def_label(mlds_to_gcc__gen_case_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		mlds_to_gcc__gen_case_4_0_i3);
MR_def_label(mlds_to_gcc__gen_case_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_file_1_0,
		mlds_to_gcc__gen_case_4_0_i4);
MR_def_label(mlds_to_gcc__gen_case_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__context_line_1_0,
		mlds_to_gcc__gen_case_4_0_i5);
MR_def_label(mlds_to_gcc__gen_case_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(gcc__gen_line_note_4_0,
		mlds_to_gcc__gen_case_4_0_i6);
MR_def_label(mlds_to_gcc__gen_case_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,
		mlds_to_gcc__gen_case_4_0_i7);
MR_def_label(mlds_to_gcc__gen_case_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(gcc__gen_break_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__gen_case_label_4_0);

MR_BEGIN_MODULE(mlds_to_gcc_module81)
	MR_init_entry1(mlds_to_gcc__gen_case_label_4_0);
	MR_init_label6(mlds_to_gcc__gen_case_label_4_0,4,5,3,7,8,9)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
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
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(gcc__gen_case_label_4_0);
MR_def_label(mlds_to_gcc__gen_case_label_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(1);
	}
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
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("match_range", 11);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mlds_to_gcc_module82)
	MR_init_entry1(__Unify___mlds_to_gcc__defn_info_0_0);
	MR_init_label5(__Unify___mlds_to_gcc__defn_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__defn_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__defn_info_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mlds_to_gcc__global_info_0_0,
		__Unify___mlds_to_gcc__defn_info_0_0_i4);
MR_def_label(__Unify___mlds_to_gcc__defn_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__defn_info_0_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		__Unify___mlds_to_gcc__defn_info_0_0_i6);
MR_def_label(__Unify___mlds_to_gcc__defn_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__defn_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___mlds_to_gcc__defn_info_0_0_i8);
MR_def_label(__Unify___mlds_to_gcc__defn_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__defn_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mlds_to_gcc__defn_info_0_0,12)
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

MR_BEGIN_MODULE(mlds_to_gcc_module83)
	MR_init_entry1(__Compare___mlds_to_gcc__defn_info_0_0);
	MR_init_label6(__Compare___mlds_to_gcc__defn_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

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
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___mlds_to_gcc__global_info_0_0,
		__Compare___mlds_to_gcc__defn_info_0_0_i5);
MR_def_label(__Compare___mlds_to_gcc__defn_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__defn_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		__Compare___mlds_to_gcc__defn_info_0_0_i9);
MR_def_label(__Compare___mlds_to_gcc__defn_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__defn_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___mlds_to_gcc__defn_info_0_0_i13);
MR_def_label(__Compare___mlds_to_gcc__defn_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__defn_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mlds_to_gcc__defn_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module84)
	MR_init_entry1(__Unify___mlds_to_gcc__field_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__field_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
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


MR_BEGIN_MODULE(mlds_to_gcc_module85)
	MR_init_entry1(__Compare___mlds_to_gcc__field_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__field_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
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

MR_BEGIN_MODULE(mlds_to_gcc_module86)
	MR_init_entry1(__Unify___mlds_to_gcc__gcc_type_info_0_0);
	MR_init_label3(__Unify___mlds_to_gcc__gcc_type_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__gcc_type_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__gcc_type_info_0_0_i8);
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
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___gcc__tree_0_0,
		__Unify___mlds_to_gcc__gcc_type_info_0_0_i4);
MR_def_label(__Unify___mlds_to_gcc__gcc_type_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__gcc_type_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mlds_to_gcc__gcc_type_info_0_0,8)
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

MR_BEGIN_MODULE(mlds_to_gcc_module87)
	MR_init_entry1(__Compare___mlds_to_gcc__gcc_type_info_0_0);
	MR_init_label4(__Compare___mlds_to_gcc__gcc_type_info_0_0,3,2,5,21)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___gcc__tree_0_0,
		__Compare___mlds_to_gcc__gcc_type_info_0_0_i5);
MR_def_label(__Compare___mlds_to_gcc__gcc_type_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__gcc_type_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, field_decl);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mlds_to_gcc__gcc_type_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module88)
	MR_init_entry1(__Unify___mlds_to_gcc__gcc_type_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__gcc_type_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
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


MR_BEGIN_MODULE(mlds_to_gcc_module89)
	MR_init_entry1(__Compare___mlds_to_gcc__gcc_type_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__gcc_type_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
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


MR_BEGIN_MODULE(mlds_to_gcc_module90)
	MR_init_entry1(__Unify___mlds_to_gcc__global_info_0_0);
	MR_init_label3(__Unify___mlds_to_gcc__global_info_0_0,4,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__global_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__global_info_0_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___mlds_to_gcc__global_info_0_0_i4);
MR_def_label(__Unify___mlds_to_gcc__global_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__global_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___mlds_to_gcc__global_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mlds_to_gcc__global_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module91)
	MR_init_entry1(__Compare___mlds_to_gcc__global_info_0_0);
	MR_init_label4(__Compare___mlds_to_gcc__global_info_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__global_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__global_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
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
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mlds_to_gcc, gcc_type_info);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___mlds_to_gcc__global_info_0_0_i5);
MR_def_label(__Compare___mlds_to_gcc__global_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__global_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, var_decl);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mlds_to_gcc__global_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module92)
	MR_init_entry1(__Unify___mlds_to_gcc__initializer_array_size_0_0);
	MR_init_label3(__Unify___mlds_to_gcc__initializer_array_size_0_0,10,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__initializer_array_size_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__initializer_array_size_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__initializer_array_size_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mlds_to_gcc__initializer_array_size_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mlds_to_gcc__initializer_array_size_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mlds_to_gcc__initializer_array_size_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mlds_to_gcc__initializer_array_size_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mlds_to_gcc_module93)
	MR_init_entry1(__Compare___mlds_to_gcc__initializer_array_size_0_0);
	MR_init_label4(__Compare___mlds_to_gcc__initializer_array_size_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__initializer_array_size_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__initializer_array_size_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__initializer_array_size_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__initializer_array_size_0_0_i7);
	}
MR_def_label(__Compare___mlds_to_gcc__initializer_array_size_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mlds_to_gcc__initializer_array_size_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mlds_to_gcc__initializer_array_size_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mlds_to_gcc__initializer_array_size_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mlds_to_gcc__initializer_array_size_0_0,9)
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


MR_BEGIN_MODULE(mlds_to_gcc_module94)
	MR_init_entry1(__Unify___mlds_to_gcc__label_table_0_0);
MR_BEGIN_CODE

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
MR_BEGIN_CODE

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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mlds_to_gcc__symbol_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mlds_to_gcc__symbol_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
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
	MR_init_entry1(fn__mlds_to_gcc__IntroducedFrom__func__run_gcc_backend__219__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mlds_to_gcc__IntroducedFrom__func__run_gcc_backend__219__1_1_0)
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
	MR_init_entry1(mlds_to_gcc__IntroducedFrom__pred__gen_defn_body__830__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__IntroducedFrom__pred__gen_defn_body__830__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(set__empty_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module100)
	MR_init_entry1(mlds_to_gcc__IntroducedFrom__pred__build_rtti_type__2012__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__IntroducedFrom__pred__build_rtti_type__2012__1_2_0)
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
	MR_init_entry1(mlds_to_gcc__IntroducedFrom__pred__gen_stmt__2832__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mlds_to_gcc__IntroducedFrom__pred__gen_stmt__2832__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module102)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0);
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,2,4,5,7,9,11,3,13)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,15,14,17,19,18,21,23,22)
	MR_init_label5(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,25,27,26,29,30)
MR_BEGIN_CODE

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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i4) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i5) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i7) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i9) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i11));
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140protected\' field", 17);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140private\' field", 15);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140default\' field", 15);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140local\' field", 13);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i13);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i14);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140static\' field", 14);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i14);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__virtuality_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i17);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i18);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140virtual\' field", 15);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i18);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__finality_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i21);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i22);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140final\' field", 13);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i22);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i25);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i29);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140const\' field", 13);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i26);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i29);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("\140abstract\' field", 16);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_102_105_101_108_100_95_100_101_99_108_95_102_108_97_103_115_95_95_91_50_93_95_48_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module103)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0);
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,78,79,80,11,12,18,82,83)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,31,33,34,40,41,49,50,88)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i78) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i79) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i80) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i11) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i18) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i83) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i31) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i31) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i33) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i40) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i49));
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__char_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__string_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__double_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 201;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i12);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("--high-level-data (pred_type)", 29);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__ptr_type_node_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i82);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(gcc__build_pointer_type_4_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__ptr_type_node_0_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_succip_word = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i78) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i79) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i80) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i11) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i18) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i83) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i31) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i31) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i33) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i40) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i49));
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 201;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i34);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("--high-level-data (typeclass_info_type)", 39);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 201;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i41);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("--high-level-data (base_typeclass_info_type)", 44);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 201;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i50);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0_i88);
	}
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("--high-level-data (user_type)", 29);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_109_101_114_99_117_114_121_95_116_121_112_101_95_95_91_49_93_95_48_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__gcc__intptr_type_node_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(gcc__start_block_2_0);
MR_decl_entry(gcc__end_block_2_0);
MR_decl_entry(gcc__gen_start_loop_3_0);
MR_decl_entry(gcc__gen_exit_loop_if_false_4_0);
MR_decl_entry(gcc__gen_end_loop_2_0);
MR_decl_entry(gcc__gen_start_cond_3_0);
MR_decl_entry(gcc__gen_start_else_2_0);
MR_decl_entry(gcc__build_range_type_6_0);
MR_decl_entry(gcc__gen_start_switch_4_0);
MR_decl_entry(gcc__gen_end_switch_3_0);
MR_decl_entry(gcc__gen_label_3_0);
MR_decl_entry(gcc__gen_goto_3_0);
MR_decl_entry(gcc__gen_return_3_0);
MR_decl_entry(gcc__gen_expr_stmt_3_0);
MR_decl_entry(fn__gcc__setjmp_func_decl_0_0);
MR_decl_entry(gcc__gen_end_cond_2_0);
MR_decl_entry(fn__gcc__longjmp_func_decl_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module104)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0);
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,201,5,6,185,202,10,11,14)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,13,16,186,203,20,21,22,25)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,28,204,30,31,35,36,37,38)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,205,188,43,212,49,211,191,206)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,54,207,57,58,59,60,123,62)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,61,64,193,68,71,65,195,74)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,77,208,84,82,86,91,209,96)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,97,98,99,100,101,102,103,104)
	MR_init_label7(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,199,210,108,110,112,113,116)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i201) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i202) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i203) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i28));
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(gcc__start_block_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i5);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 1), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_local_defns_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i6);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statements_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i185);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__end_block_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(gcc__gen_start_loop_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i10);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i11);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i13);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(gcc__gen_exit_loop_if_false_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i14);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i186);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i16);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(gcc__gen_exit_loop_if_false_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i186);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_end_loop_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i20);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__gen_start_cond_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i21);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i22);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i199);
	}
	MR_sv(2) = MR_ctfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(gcc__gen_start_else_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i25);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i199);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i204) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i205) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i43) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i206) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i207) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i208) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i209) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i210) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i116));
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 5);
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i30);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(gcc__build_range_type_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i31);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i35);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(gcc__gen_start_switch_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i36);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mlds_to_gcc__gen_default_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i37);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__gen_cases_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i38);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_end_switch_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_ctfield(0, MR_sv(1), 3);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i188);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_label_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i211);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i212);
	}
	MR_np_tailcall_ent(gcc__gen_break_2_0);
	}
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i49);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("continue", 8);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(gcc, label);
	MR_r3 = MR_ctfield(0, MR_sv(1), 3);
	MR_r4 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i191);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_goto_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i54);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("computed goto", 13);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mlds_to_gcc__IntroducedFrom__pred__gen_stmt__2832__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(3, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 5);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 6);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i57);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const("method call", 11);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i58);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(mlds_to_gcc__build_args_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i59);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i60);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i62);
	}
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i61);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i123);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(gcc__build_call_expr_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i64);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i65);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i65);
	}
	MR_r3 = MR_ctfield(1, MR_tempr1, 0);
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i68);
	}
	}
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_return_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r3;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_lval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i71);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_assign_4_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i74);
	}
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_expr_stmt_3_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i77);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("call with multiple outputs", 26);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i82);
	}
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i84);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("gen_stmt: return without return value", 37);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i86);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i86);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i193);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i91);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("gen_stmt: multiple return values", 32);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__gcc__setjmp_func_decl_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i96);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_call_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i97);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(gcc__build_int_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i98);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__eq_expr_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i99);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__boolean_type_node_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i100);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i101);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__gen_start_cond_3_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i102);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i103);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(gcc__gen_start_else_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i104);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mlds_to_gcc__gen_statement_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i199);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(gcc__gen_end_cond_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i108);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__gcc__longjmp_func_decl_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i113);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i110);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("non-lval argument to do_commit", 30);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i112);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__longjmp_func_decl_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i113);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,3,6);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_call_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i195);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_116_109_116_95_95_91_51_93_95_48_5_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_np_tailcall_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__gcc__alloc_func_decl_0_0);

MR_BEGIN_MODULE(mlds_to_gcc_module105)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0);
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,71,5,73,9,10,74,13,14)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,16,19,17,20,22,23,24,25)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,26,29,30,31,27,32,33,34)
	MR_init_label8(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,36,37,39,40,42,43,45,46)
	MR_init_label3(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,48,49,72)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i71) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i72) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i73) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i74));
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i5);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("gc_check", 8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(2, MR_tempr1, 1);
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_lval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i9);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i10);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(gcc__gen_assign_4_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i13) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i16) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i36) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i39) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i42) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i45) MR_AND
		MR_LABEL_AP(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i48));
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i14);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("delete_object", 13);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(6) = MR_ctfield(3, MR_tempr2, 8);
	MR_sv(5) = MR_ctfield(3, MR_tempr2, 7);
	MR_sv(4) = MR_ctfield(3, MR_tempr2, 4);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(3, MR_tempr2, 5);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Integer) 190;
	}
	MR_np_call_localret_ent(libs__globals__io_lookup_int_option_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i19);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_tempr2;
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__gcc__alloc_func_decl_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i23);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i20);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("new_object with unknown size", 28);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i22);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__gcc__alloc_func_decl_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i23);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_call_6_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i24);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(mlds_to_gcc__build_type_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i25);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(gcc__convert_type_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i26);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(gcc__build_int_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i29);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(fn__gcc__plus_expr_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i30);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(gcc__build_binop_7_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i31);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i32);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(8) = (MR_Integer) 0;
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(mlds_to_gcc__build_lval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i33);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(gcc__gen_assign_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i34);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i37);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mark_hp", 7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i40);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("restore_hp", 10);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i43);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("trail_op", 8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i46);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("target_code (for \140--target asm\')", 32);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mlds_to_gcc__this_file_0_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0_i49);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("outline_foreign_proc (for \140--target asm\')", 41);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_97_116_111_109_105_99_95_115_116_109_116_95_95_91_51_93_95_48_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mlds_to_gcc_module106)
	MR_init_entry1(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0);
	MR_init_label7(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,27,18,3,9,10,11,30)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i30);
	}
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_gcc.m", 13);
	MR_r2 = (MR_Word) MR_string_const("gen_init_args: length mismatch", 30);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr7 = MR_r6;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tempr8 = MR_r4;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tempr9 = MR_r3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr3;
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
	MR_tempr11 = MR_r2;
	MR_tfield(0, MR_tempr5, 0) = MR_ctfield(1, MR_tempr11, 0);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 3);
	MR_sv(7) = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr5;
	MR_tempr12 = MR_r1;
	MR_tfield(3, MR_tempr6, 2) = MR_ctfield(1, MR_tempr12, 0);
	MR_sv(1) = MR_tempr9;
	MR_sv(2) = MR_tempr8;
	MR_sv(3) = MR_tempr10;
	MR_sv(4) = MR_tempr7;
	MR_tempr13 = MR_r7;
	MR_sv(5) = MR_tempr13;
	MR_sv(6) = MR_ctfield(1, MR_tempr11, 1);
	MR_sv(8) = MR_ctfield(1, MR_tempr12, 1);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr13;
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_lval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i9);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mlds_to_gcc__build_rval_5_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i10);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(gcc__gen_assign_4_0,
		f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i11);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0_i27);
MR_def_label(f_109_108_100_115_95_116_111_95_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_105_110_105_116_95_97_114_103_115_95_95_91_51_93_95_48_10_0,30)
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
		mercury_data_mlds_to_gcc__type_ctor_info_symbol_table_0,
		mlds_to_gcc__symbol_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_label_table_0,
		mlds_to_gcc__label_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_initializer_array_size_0,
		mlds_to_gcc__initializer_array_size_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_global_info_0,
		mlds_to_gcc__global_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_table_0,
		mlds_to_gcc__gcc_type_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0,
		mlds_to_gcc__gcc_type_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_field_table_0,
		mlds_to_gcc__field_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mlds_to_gcc__type_ctor_info_defn_info_0,
		mlds_to_gcc__defn_info_0_0);
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
		&mercury_data_mlds_to_gcc__type_ctor_info_symbol_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_label_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_initializer_array_size_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_global_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_gcc_type_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_field_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mlds_to_gcc__type_ctor_info_defn_info_0);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
