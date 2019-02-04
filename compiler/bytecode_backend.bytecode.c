/*
** Automatically generated from `bytecode.m'
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
INIT mercury__bytecode_backend__bytecode__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "bytecode_backend.bytecode.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "bytecode_backend.bytecode.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "bytecode_backend.bytecode.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "bytecode_backend.bytecode.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "bytecode_backend.bytecode.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "bytecode_backend.bytecode.c"
#line 49 "bytecode_backend.bytecode.c"
#include "bytecode_backend.bytecode.mh"

#line 52 "bytecode_backend.bytecode.c"
#line 53 "bytecode_backend.bytecode.c"
#ifndef BYTECODE_BACKEND__BYTECODE_DECL_GUARD
#define BYTECODE_BACKEND__BYTECODE_DECL_GUARD

#line 57 "bytecode_backend.bytecode.c"
#line 58 "bytecode_backend.bytecode.c"

#endif
#line 61 "bytecode_backend.bytecode.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_code_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_dir_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_is_func_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_label_id_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_module_id_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_pred_id_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_proc_id_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_temp_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_test_id_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_tree_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_var_0,
	mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_var_info_0;
MR_decl_label1(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0, 2)
MR_decl_label7(bytecode_backend__bytecode__debug_arg_3_0, 4,5,3,8,13,14,15)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 14,15,16,13,19,20,21,22,23,24)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 25,18,27,31,32,33,30,36,37,35)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 40,41,39,44,43,47,48,49,50,46)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 53,54,56,52,60,61,63,64,59,67)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 68,69,66,72,75,76,77,78,74,80)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 82,84,86,88,90,92,94,96,99,100)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 98,102,106,105,109,111,108,113,116,117)
MR_decl_label9(bytecode_backend__bytecode__debug_args_3_0, 118,115,436,122,126,125,128,129,407)
MR_decl_label10(bytecode_backend__bytecode__debug_binop_3_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(bytecode_backend__bytecode__debug_binop_3_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(bytecode_backend__bytecode__debug_binop_3_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(bytecode_backend__bytecode__debug_binop_3_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label2(bytecode_backend__bytecode__debug_binop_3_0, 43,44)
MR_decl_label10(bytecode_backend__bytecode__debug_bytecode_file_4_0, 2,5,6,7,8,9,10,4,12,13)
MR_decl_label4(bytecode_backend__bytecode__debug_bytecode_file_4_0, 14,15,16,17)
MR_decl_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0, 177,5,6,7,8,9,10,11,12,13)
MR_decl_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0, 14,15,16,17,18,19,20,21,22,23)
MR_decl_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0, 24,25,26,27,28,29,30,31,32,33)
MR_decl_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0, 34,35,36,37,38,39,40,41,42,43)
MR_decl_label6(bytecode_backend__bytecode__debug_bytecode_list_3_0, 44,45,46,47,48,179)
MR_decl_label10(bytecode_backend__bytecode__debug_cons_id_3_0, 3,113,8,9,10,11,7,14,13,17)
MR_decl_label10(bytecode_backend__bytecode__debug_cons_id_3_0, 18,19,20,21,22,16,25,107,24,30)
MR_decl_label10(bytecode_backend__bytecode__debug_cons_id_3_0, 29,33,34,35,36,37,32,40,39,42)
MR_decl_label2(bytecode_backend__bytecode__debug_cons_id_3_0, 43,44)
MR_decl_label3(bytecode_backend__bytecode__debug_cstring_3_0, 2,3,4)
MR_decl_label8(bytecode_backend__bytecode__debug_determinism_3_0, 3,4,5,6,7,8,9,10)
MR_decl_label1(bytecode_backend__bytecode__debug_float_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode__debug_int_3_0, 2)
MR_decl_label3(bytecode_backend__bytecode__debug_is_func_3_0, 2,8,6)
MR_decl_label1(bytecode_backend__bytecode__debug_label_id_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode__debug_length_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode__debug_pred_id_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode__debug_proc_id_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode__debug_string_3_0, 2)
MR_decl_label4(bytecode_backend__bytecode__debug_sym_name_3_0, 3,6,7,8)
MR_decl_label10(bytecode_backend__bytecode__debug_tag_3_0, 3,7,8,9,10,6,13,12,16,17)
MR_decl_label6(bytecode_backend__bytecode__debug_tag_3_0, 15,20,21,22,23,24)
MR_decl_label1(bytecode_backend__bytecode__debug_temp_3_0, 2)
MR_decl_label6(bytecode_backend__bytecode__debug_test_id_3_0, 3,6,9,12,15,18)
MR_decl_label10(bytecode_backend__bytecode__debug_unop_3_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label1(bytecode_backend__bytecode__debug_unop_3_0, 13)
MR_decl_label1(bytecode_backend__bytecode__debug_var_3_0, 2)
MR_decl_label8(bytecode_backend__bytecode__debug_var_dirs_3_0, 35,4,5,7,10,13,14,37)
MR_decl_label4(bytecode_backend__bytecode__debug_var_infos_3_0, 11,4,5,13)
MR_decl_label4(bytecode_backend__bytecode__debug_vars_3_0, 11,4,5,13)
MR_decl_label5(bytecode_backend__bytecode__output_arg_3_0, 4,3,7,6,9)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 14,15,16,13,19,20,21,22,23,24)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 25,18,27,31,32,33,30,36,37,35)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 40,41,39,44,43,47,48,49,50,46)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 53,54,56,52,60,61,63,64,59,67)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 68,69,66,72,75,76,77,78,74,80)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 82,84,86,88,90,92,94,96,99,100)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 98,102,106,105,109,111,108,113,116,117)
MR_decl_label9(bytecode_backend__bytecode__output_args_3_0, 118,115,436,122,126,125,128,129,407)
MR_decl_label10(bytecode_backend__bytecode__output_binop_3_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(bytecode_backend__bytecode__output_binop_3_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(bytecode_backend__bytecode__output_binop_3_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(bytecode_backend__bytecode__output_binop_3_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label1(bytecode_backend__bytecode__output_binop_3_0, 43)
MR_decl_label10(bytecode_backend__bytecode__output_bytecode_file_4_0, 2,5,6,7,8,9,10,4,12,13)
MR_decl_label2(bytecode_backend__bytecode__output_bytecode_file_4_0, 14,15)
MR_decl_label10(bytecode_backend__bytecode__output_bytecode_list_3_0, 176,5,6,7,8,9,10,11,12,13)
MR_decl_label10(bytecode_backend__bytecode__output_bytecode_list_3_0, 14,15,16,17,18,19,20,21,22,23)
MR_decl_label10(bytecode_backend__bytecode__output_bytecode_list_3_0, 24,25,26,27,28,29,30,31,32,33)
MR_decl_label10(bytecode_backend__bytecode__output_bytecode_list_3_0, 34,35,36,37,38,39,40,41,42,43)
MR_decl_label5(bytecode_backend__bytecode__output_bytecode_list_3_0, 44,45,46,47,178)
MR_decl_label10(bytecode_backend__bytecode__output_cons_id_3_0, 4,77,3,8,9,10,11,7,14,13)
MR_decl_label10(bytecode_backend__bytecode__output_cons_id_3_0, 17,16,20,21,22,23,24,19,27,26)
MR_decl_label6(bytecode_backend__bytecode__output_cons_id_3_0, 30,31,32,29,34,36)
MR_decl_label7(bytecode_backend__bytecode__output_determinism_3_0, 3,4,5,6,7,8,9)
MR_decl_label2(bytecode_backend__bytecode__output_is_func_3_0, 17,2)
MR_decl_label1(bytecode_backend__bytecode__output_module_id_3_0, 2)
MR_decl_label8(bytecode_backend__bytecode__output_tag_3_0, 43,6,5,9,13,12,15,16)
MR_decl_label5(bytecode_backend__bytecode__output_test_id_3_0, 3,5,7,9,11)
MR_decl_label10(bytecode_backend__bytecode__output_unop_3_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label6(bytecode_backend__bytecode__output_var_dirs_3_0, 28,4,6,8,10,30)
MR_decl_label3(bytecode_backend__bytecode__output_var_infos_3_0, 10,4,12)
MR_decl_label3(bytecode_backend__bytecode__output_vars_3_0, 10,4,12)
MR_decl_label4(__Unify___bytecode_backend__bytecode__byte_arg_0_0, 5,17,7,1)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0, 15,17,21,25,27,29,23,33,35,31)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0, 41,39,43,49,47,53,51,60,58,67)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0, 65,71,75,73,79,81,83,85,87,89)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0, 91,93,95,97,99,101,105,107,103,109)
MR_decl_label6(__Unify___bytecode_backend__bytecode__byte_code_0_0, 111,113,115,274,117,1)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0, 5,6,9,7,13,17,19,15,21,23)
MR_decl_label6(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0, 27,25,69,29,32,1)
MR_decl_label6(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0, 5,6,8,26,10,1)
MR_decl_label2(__Unify___bytecode_backend__bytecode__byte_var_info_0_0, 6,1)
MR_decl_label10(__Index___bytecode_backend__bytecode__byte_code_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(__Index___bytecode_backend__bytecode__byte_code_0_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(__Index___bytecode_backend__bytecode__byte_code_0_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(__Index___bytecode_backend__bytecode__byte_code_0_0, 33,34,35,36,37,38,39,40,41,42)
MR_decl_label1(__Index___bytecode_backend__bytecode__byte_code_0_0, 43)
MR_decl_label8(__Compare___bytecode_backend__bytecode__byte_arg_0_0, 3,2,32,5,12,35,10,16)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 4,5,6,7,10,11,12,13,14,15)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 16,17,18,462,19,23,27,31,20,41)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 45,49,53,57,38,69,66,77,81,85)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 74,95,99,92,108,112,105,121,118,129)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 133,137,141,126,152,156,149,166,170,163)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 180,184,177,190,196,200,193,206,209,212)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 215,218,221,224,227,230,236,240,233,249)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 246,257,254,265,269,262,275,281,285,289)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 278,296,302,299,310,307,317,321,8,331)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 7,8,9,10,11,12,13,14,5,18)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 302,19,20,21,22,23,24,25,16,29)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 30,33,37,41,31,48,49,50,51,52)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 27,56,57,58,59,61,62,63,64,54)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 68,69,70,71,74,78,72,84,85,86)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 66,90,91,92,93,94,95,97,98,88)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 102,103,104,105,106,107,108,110,100,114)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 115,116,117,118,119,120,123,127,131,135)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 121,112,146,147,148,149,150,151,152,153)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 144,157,158,159,160,282,161,162,163,164)
MR_decl_label5(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 286,165,167,171,177)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0, 78,7,8,9,5,13,16,14,21,11)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0, 25,26,27,23,32,33,34,30,38,39)
MR_decl_label6(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0, 73,40,74,41,43,48)
MR_decl_label4(__Compare___bytecode_backend__bytecode__byte_var_info_0_0, 3,2,5,21)
MR_decl_static(bytecode_backend__bytecode__output_var_infos_3_0)
MR_decl_static(bytecode_backend__bytecode__output_determinism_3_0)
MR_decl_static(bytecode_backend__bytecode__output_is_func_3_0)
MR_decl_static(bytecode_backend__bytecode__output_length_3_0)
MR_decl_static(bytecode_backend__bytecode__output_var_3_0)
MR_decl_static(bytecode_backend__bytecode__output_arg_3_0)
MR_decl_static(bytecode_backend__bytecode__output_vars_3_0)
MR_decl_static(bytecode_backend__bytecode__output_temp_3_0)
MR_decl_static(bytecode_backend__bytecode__output_var_dirs_3_0)
MR_decl_static(bytecode_backend__bytecode__output_test_id_3_0)
MR_decl_static(bytecode_backend__bytecode__output_module_id_3_0)
MR_decl_static(bytecode_backend__bytecode__output_pred_id_3_0)
MR_decl_static(bytecode_backend__bytecode__output_proc_id_3_0)
MR_decl_static(bytecode_backend__bytecode__output_label_id_3_0)
MR_decl_static(bytecode_backend__bytecode__output_tag_3_0)
MR_decl_static(bytecode_backend__bytecode__output_cons_id_3_0)
MR_decl_static(bytecode_backend__bytecode__output_binop_3_0)
MR_decl_static(bytecode_backend__bytecode__output_unop_3_0)
MR_decl_static(bytecode_backend__bytecode__output_args_3_0)
MR_decl_static(bytecode_backend__bytecode__output_bytecode_list_3_0)
MR_def_extern_entry(bytecode_backend__bytecode__output_bytecode_file_4_0)
MR_decl_static(bytecode_backend__bytecode__debug_string_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_var_infos_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_determinism_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_int_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_is_func_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_length_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_var_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_float_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_arg_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_vars_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_temp_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_var_dirs_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_test_id_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_sym_name_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_module_id_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_pred_id_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_proc_id_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_label_id_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_tag_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_cstring_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_cons_id_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_binop_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_unop_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_args_3_0)
MR_decl_static(bytecode_backend__bytecode__debug_bytecode_list_3_0)
MR_def_extern_entry(bytecode_backend__bytecode__debug_bytecode_file_4_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_arg_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_arg_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_code_0_0)
MR_def_extern_entry(__Index___bytecode_backend__bytecode__byte_code_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_code_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_dir_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_dir_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_is_func_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_is_func_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_label_id_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_label_id_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_module_id_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_module_id_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_pred_id_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_pred_id_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_proc_id_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_proc_id_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_reg_type_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_reg_type_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_temp_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_temp_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_test_id_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_test_id_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_tree_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_tree_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_var_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_var_0_0)
MR_def_extern_entry(__Unify___bytecode_backend__bytecode__byte_var_info_0_0)
MR_def_extern_entry(__Compare___bytecode_backend__bytecode__byte_var_info_0_0)
MR_decl_static(bytecode_backend__bytecode__IntroducedFrom__pred__output_args__266__1_2_0)
MR_decl_static(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_dir)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__bytecode_backend__bytecode__output_args_3_0_1;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__bytecode_backend__bytecode__output_args_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(1,0),
MR_COMMON(1,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__bytecode_backend__bytecode__debug_args_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__bytecode_backend__bytecode__debug_args_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(bytecode_backend__bytecode__debug_cons_id_3_0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_arg_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0 = {
	"byte_arg_var",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_arg_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_arg_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1 = {
	"byte_arg_int_const",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_arg_0_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_arg_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2 = {
	"byte_arg_float_const",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_arg_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_0[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_1[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_2[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2

};

const MR_DuPtagLayout mercury_data_bytecode_backend__bytecode__du_ptag_ordered_byte_arg_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_name_ordered_byte_arg_0[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0
};

const MR_Integer mercury_data_bytecode_backend__bytecode__functor_number_map_byte_arg_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_arg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_arg_0_0)),
	"bytecode_backend.bytecode",
	"byte_arg",
	{ (void *)mercury_data_bytecode_backend__bytecode__du_name_ordered_byte_arg_0 },
	{ (void *)mercury_data_bytecode_backend__bytecode__du_ptag_ordered_byte_arg_0 },
	3,
	4,
	mercury_data_bytecode_backend__bytecode__functor_number_map_byte_arg_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_0 = {
	"byte_enter_pred",
	4,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_1 = {
	"byte_endof_pred",
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
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_var_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_var_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_var_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_var_info_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_2 = {
	"byte_enter_proc",
	6,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_2,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_3 = {
	"byte_endof_proc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_4 = {
	"byte_label",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	4,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_4,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_5 = {
	"byte_enter_disjunction",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_5,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_6 = {
	"byte_endof_disjunction",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_7 = {
	"byte_enter_disjunct",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	7,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_7,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_8 = {
	"byte_endof_disjunct",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	8,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_8,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_9 = {
	"byte_enter_switch",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	9,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_9,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_10 = {
	"byte_endof_switch",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0
}};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_11 = {
	"byte_enter_switch_arm",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	11,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_11,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_12 = {
	"byte_endof_switch_arm",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	12,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_12,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_13 = {
	"byte_enter_if",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	13,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_13,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_14 = {
	"byte_enter_then",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	14,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_14,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_15 = {
	"byte_endof_then",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	15,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_15,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_16 = {
	"byte_enter_else",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	16,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_16,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_17 = {
	"byte_endof_if",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	17,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_18 = {
	"byte_enter_negation",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	18,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_18,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_19 = {
	"byte_endof_negation_goal",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	19,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_19,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_20 = {
	"byte_endof_negation",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	20,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_21 = {
	"byte_enter_commit",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	13,
	21,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_21,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_22[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_22 = {
	"byte_endof_commit",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	14,
	22,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_22,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_23[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_23 = {
	"byte_assign",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	15,
	23,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_23,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_test_id_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_24[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_test_id_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_24 = {
	"byte_test",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	16,
	24,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_24,
	NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_25[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_25 = {
	"byte_construct",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	17,
	25,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_25,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_26[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_26 = {
	"byte_deconstruct",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	18,
	26,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_26,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_dir_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_dir_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0
}};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_27[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_27 = {
	"byte_complex_construct",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	19,
	27,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_27,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_28[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_28 = {
	"byte_complex_deconstruct",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	20,
	28,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_28,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_29[] = {
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_29 = {
	"byte_place_arg",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	21,
	29,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_29,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_30[] = {
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_30 = {
	"byte_pickup_arg",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	22,
	30,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_30,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_31[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_31 = {
	"byte_call",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	23,
	31,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_31,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_32[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_32 = {
	"byte_higher_order_call",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	24,
	32,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_32,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_33[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_33 = {
	"byte_builtin_binop",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	25,
	33,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_33,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_34[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_34 = {
	"byte_builtin_unop",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	26,
	34,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_34,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_35[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_35 = {
	"byte_builtin_bintest",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	27,
	35,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_35,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_36[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_36 = {
	"byte_builtin_untest",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	28,
	36,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_36,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_37 = {
	"byte_semidet_succeed",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	37,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_38 = {
	"byte_semidet_success_check",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	38,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_39 = {
	"byte_fail",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	39,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_40[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_40 = {
	"byte_context",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	29,
	40,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_code_0_40,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_41 = {
	"byte_not_supported",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	41,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_code_0_0[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_1,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_3,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_6,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_10,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_17,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_20,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_37,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_38,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_39,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_41

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_code_0_1[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_0

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_code_0_2[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_2

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_code_0_3[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_4,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_5,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_7,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_8,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_9,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_11,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_12,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_13,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_14,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_15,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_16,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_18,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_19,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_21,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_22,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_23,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_24,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_25,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_26,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_27,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_28,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_29,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_30,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_31,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_32,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_33,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_34,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_35,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_36,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_40

};

const MR_DuPtagLayout mercury_data_bytecode_backend__bytecode__du_ptag_ordered_byte_code_0[] = {
	{ 10, MR_SECTAG_LOCAL,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_code_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_code_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_code_0_2 },
	{ 30, MR_SECTAG_REMOTE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_code_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_name_ordered_byte_code_0[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_23,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_33,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_35,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_34,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_36,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_31,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_27,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_28,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_25,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_40,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_26,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_22,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_8,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_6,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_17,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_20,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_19,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_1,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_3,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_10,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_12,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_15,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_21,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_7,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_5,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_16,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_13,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_18,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_0,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_2,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_9,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_11,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_14,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_39,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_32,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_4,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_41,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_30,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_29,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_37,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_38,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_code_0_24
};

const MR_Integer mercury_data_bytecode_backend__bytecode__functor_number_map_byte_code_0[] = {
	28,
	17,
	29,
	18,
	35,
	24,
	13,
	23,
	12,
	30,
	19,
	31,
	20,
	26,
	32,
	21,
	25,
	14,
	27,
	16,
	15,
	22,
	11,
	0,
	41,
	8,
	10,
	6,
	7,
	38,
	37,
	5,
	34,
	1,
	3,
	2,
	4,
	39,
	40,
	33,
	9,
	36 };
	
const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_code_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0)),
	"bytecode_backend.bytecode",
	"byte_code",
	{ (void *)mercury_data_bytecode_backend__bytecode__du_name_ordered_byte_code_0 },
	{ (void *)mercury_data_bytecode_backend__bytecode__du_ptag_ordered_byte_code_0 },
	42,
	4,
	mercury_data_bytecode_backend__bytecode__functor_number_map_byte_code_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0 = {
	"byte_cons",
	4,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1 = {
	"byte_int_const",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2 = {
	"byte_string_const",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3 = {
	"byte_float_const",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_3,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4 = {
	"byte_char_const",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_4,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5 = {
	"byte_pred_const",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_5,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6 = {
	"byte_type_ctor_info_const",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	6,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_6,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7 = {
	"byte_base_typeclass_info_const",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	7,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_id_0_7,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8 = {
	"byte_type_info_cell_constructor",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9 = {
	"byte_typeclass_info_cell_constructor",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_0[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_1[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_2[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_3[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7

};

const MR_DuPtagLayout mercury_data_bytecode_backend__bytecode__du_ptag_ordered_byte_cons_id_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_2 },
	{ 6, MR_SECTAG_REMOTE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_name_ordered_byte_cons_id_0[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9
};

const MR_Integer mercury_data_bytecode_backend__bytecode__functor_number_map_byte_cons_id_0[] = {
	2,
	4,
	6,
	3,
	1,
	5,
	7,
	0,
	8,
	9 };
	
const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0)),
	"bytecode_backend.bytecode",
	"byte_cons_id",
	{ (void *)mercury_data_bytecode_backend__bytecode__du_name_ordered_byte_cons_id_0 },
	{ (void *)mercury_data_bytecode_backend__bytecode__du_ptag_ordered_byte_cons_id_0 },
	10,
	4,
	mercury_data_bytecode_backend__bytecode__functor_number_map_byte_cons_id_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0 = {
	"byte_no_tag",
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

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_tag_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1 = {
	"byte_unshared_tag",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_tag_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_tag_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2 = {
	"byte_shared_remote_tag",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_tag_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_tag_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3 = {
	"byte_shared_local_tag",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_tag_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_cons_tag_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4 = {
	"byte_enum_tag",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_cons_tag_0_4,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_0[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_1[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_2[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_3[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4

};

const MR_DuPtagLayout mercury_data_bytecode_backend__bytecode__du_ptag_ordered_byte_cons_tag_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_name_ordered_byte_cons_tag_0[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2,
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1
};

const MR_Integer mercury_data_bytecode_backend__bytecode__functor_number_map_byte_cons_tag_0[] = {
	1,
	4,
	3,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0)),
	"bytecode_backend.bytecode",
	"byte_cons_tag",
	{ (void *)mercury_data_bytecode_backend__bytecode__du_name_ordered_byte_cons_tag_0 },
	{ (void *)mercury_data_bytecode_backend__bytecode__du_ptag_ordered_byte_cons_tag_0 },
	5,
	4,
	mercury_data_bytecode_backend__bytecode__functor_number_map_byte_cons_tag_0
};

static const MR_EnumFunctorDesc mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0 = {
	"to_arg",
	0
};

static const MR_EnumFunctorDesc mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1 = {
	"to_var",
	1
};

static const MR_EnumFunctorDesc mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2 = {
	"to_none",
	2
};

const MR_EnumFunctorDescPtr mercury_data_bytecode_backend__bytecode__enum_value_ordered_byte_dir_0[] = {
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2
};

const MR_EnumFunctorDescPtr mercury_data_bytecode_backend__bytecode__enum_name_ordered_byte_dir_0[] = {
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1
};

const MR_Integer mercury_data_bytecode_backend__bytecode__functor_number_map_byte_dir_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_dir_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_dir_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_dir_0_0)),
	"bytecode_backend.bytecode",
	"byte_dir",
	{ (void *)mercury_data_bytecode_backend__bytecode__enum_name_ordered_byte_dir_0 },
	{ (void *)mercury_data_bytecode_backend__bytecode__enum_value_ordered_byte_dir_0 },
	3,
	4,
	mercury_data_bytecode_backend__bytecode__functor_number_map_byte_dir_0
};

const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_is_func_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_is_func_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_is_func_0_0)),
	"bytecode_backend.bytecode",
	"byte_is_func",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_label_id_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_label_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_label_id_0_0)),
	"bytecode_backend.bytecode",
	"byte_label_id",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_module_id_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_module_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_module_id_0_0)),
	"bytecode_backend.bytecode",
	"byte_module_id",
	{ 0 },
	{ (void *)&mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_pred_id_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_pred_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_pred_id_0_0)),
	"bytecode_backend.bytecode",
	"byte_pred_id",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_proc_id_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_proc_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_proc_id_0_0)),
	"bytecode_backend.bytecode",
	"byte_proc_id",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0 = {
	"byte_reg_r",
	0
};

const MR_EnumFunctorDescPtr mercury_data_bytecode_backend__bytecode__enum_value_ordered_byte_reg_type_0[] = {
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0
};

const MR_EnumFunctorDescPtr mercury_data_bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0[] = {
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0
};

const MR_Integer mercury_data_bytecode_backend__bytecode__functor_number_map_byte_reg_type_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_reg_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_reg_type_0_0)),
	"bytecode_backend.bytecode",
	"byte_reg_type",
	{ (void *)mercury_data_bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0 },
	{ (void *)mercury_data_bytecode_backend__bytecode__enum_value_ordered_byte_reg_type_0 },
	1,
	4,
	mercury_data_bytecode_backend__bytecode__functor_number_map_byte_reg_type_0
};

const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_temp_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_temp_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_temp_0_0)),
	"bytecode_backend.bytecode",
	"byte_temp",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0 = {
	"int_test",
	0
};

static const MR_EnumFunctorDesc mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1 = {
	"char_test",
	1
};

static const MR_EnumFunctorDesc mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2 = {
	"string_test",
	2
};

static const MR_EnumFunctorDesc mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3 = {
	"float_test",
	3
};

static const MR_EnumFunctorDesc mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4 = {
	"enum_test",
	4
};

static const MR_EnumFunctorDesc mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5 = {
	"dummy_test",
	5
};

const MR_EnumFunctorDescPtr mercury_data_bytecode_backend__bytecode__enum_value_ordered_byte_test_id_0[] = {
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5
};

const MR_EnumFunctorDescPtr mercury_data_bytecode_backend__bytecode__enum_name_ordered_byte_test_id_0[] = {
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0,
	&mercury_data_bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2
};

const MR_Integer mercury_data_bytecode_backend__bytecode__functor_number_map_byte_test_id_0[] = {
	4,
	0,
	5,
	3,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_test_id_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_test_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_test_id_0_0)),
	"bytecode_backend.bytecode",
	"byte_test_id",
	{ (void *)mercury_data_bytecode_backend__bytecode__enum_name_ordered_byte_test_id_0 },
	{ (void *)mercury_data_bytecode_backend__bytecode__enum_value_ordered_byte_test_id_0 },
	6,
	4,
	mercury_data_bytecode_backend__bytecode__functor_number_map_byte_test_id_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_code_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1bytecode_backend__bytecode__type_ctor_info_byte_code_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_code_0
}};

const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_tree_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_tree_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_tree_0_0)),
	"bytecode_backend.bytecode",
	"byte_tree",
	{ 0 },
	{ (void *)&mercury_data_cord__ti_cord_1bytecode_backend__bytecode__type_ctor_info_byte_code_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_var_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_var_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_var_0_0)),
	"bytecode_backend.bytecode",
	"byte_var",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode__field_types_byte_var_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0 = {
	"var_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode__field_types_byte_var_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_var_info_0_0[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0

};

const MR_DuPtagLayout mercury_data_bytecode_backend__bytecode__du_ptag_ordered_byte_var_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode__du_stag_ordered_byte_var_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode__du_name_ordered_byte_var_info_0[] = {
	&mercury_data_bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0
};

const MR_Integer mercury_data_bytecode_backend__bytecode__functor_number_map_byte_var_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_var_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode__byte_var_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode__byte_var_info_0_0)),
	"bytecode_backend.bytecode",
	"byte_var_info",
	{ (void *)mercury_data_bytecode_backend__bytecode__du_name_ordered_byte_var_info_0 },
	{ (void *)mercury_data_bytecode_backend__bytecode__du_ptag_ordered_byte_var_info_0 },
	1,
	4,
	mercury_data_bytecode_backend__bytecode__functor_number_map_byte_var_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__bytecode_backend__bytecode__debug_args_3_0_1 = {
{
MR_PREDICATE,
"bytecode_backend.bytecode",
"bytecode_backend.bytecode",
"debug_cons_id",
3,
0
},
"bytecode_backend.bytecode",
"bytecode.m",
398,
"72"
};

static const MR_UserClosureId
mercury_data__closure_layout__bytecode_backend__bytecode__output_args_3_0_1 = {
{
MR_PREDICATE,
"bytecode_backend.bytecode",
"bytecode_backend.bytecode",
"lambda_bytecode_m_266",
2,
0
},
"bytecode_backend.bytecode",
"bytecode.m",
266,
"72"
};


MR_decl_entry(backend_libs__bytecode_data__output_string_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module0)
	MR_init_entry1(bytecode_backend__bytecode__output_var_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_var_infos_3_0);
	MR_init_label3(bytecode_backend__bytecode__output_var_infos_3_0,10,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_var_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_var_infos_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(bytecode_backend__bytecode__output_var_infos_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_var_infos_3_0_i12);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_string_3_0,
		bytecode_backend__bytecode__output_var_infos_3_0_i4);
MR_def_label(bytecode_backend__bytecode__output_var_infos_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(bytecode_backend__bytecode__output_var_infos_3_0_i10);
MR_def_label(bytecode_backend__bytecode__output_var_infos_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__bytecode_data__output_byte_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module1)
	MR_init_entry1(bytecode_backend__bytecode__output_determinism_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_determinism_3_0);
	MR_init_label7(bytecode_backend__bytecode__output_determinism_3_0,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_determinism'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_determinism_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_determinism_3_0_i3);
	}
	MR_r1 = (MR_Integer) 4;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_determinism_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_determinism_3_0_i4);
	}
	MR_r1 = (MR_Integer) 5;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_determinism_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_determinism_3_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_determinism_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_determinism_3_0_i6);
	}
	MR_r1 = (MR_Integer) 6;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_determinism_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_determinism_3_0_i7);
	}
	MR_r1 = (MR_Integer) 7;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_determinism_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_determinism_3_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_determinism_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_determinism_3_0_i9);
	}
	MR_r1 = (MR_Integer) 3;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_determinism_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module2)
	MR_init_entry1(bytecode_backend__bytecode__output_is_func_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_is_func_3_0);
	MR_init_label2(bytecode_backend__bytecode__output_is_func_3_0,17,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_is_func'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_is_func_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_is_func_3_0_i17);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_is_func_3_0_i2);
	}
MR_def_label(bytecode_backend__bytecode__output_is_func_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_is_func_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_backend.bytecode", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140bytecode_backend.bytecode.output_is_func\'/3", 54);
	MR_r3 = (MR_Word) MR_string_const("invalid predicate or function specified in bytecode", 51);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__bytecode_data__output_short_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module3)
	MR_init_entry1(bytecode_backend__bytecode__output_length_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_length_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_length'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_length_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_short_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module4)
	MR_init_entry1(bytecode_backend__bytecode__output_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_var_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_short_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__bytecode_data__output_float_3_0);
MR_decl_entry(backend_libs__bytecode_data__output_int_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module5)
	MR_init_entry1(bytecode_backend__bytecode__output_arg_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_arg_3_0);
	MR_init_label5(bytecode_backend__bytecode__output_arg_3_0,4,3,7,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_arg'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_arg_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_arg_3_0_i3);
	}
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_arg_3_0_i4);
MR_def_label(bytecode_backend__bytecode__output_arg_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_float_3_0);
MR_def_label(bytecode_backend__bytecode__output_arg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_arg_3_0_i6);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_arg_3_0_i7);
MR_def_label(bytecode_backend__bytecode__output_arg_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_int_3_0);
MR_def_label(bytecode_backend__bytecode__output_arg_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_arg_3_0_i9);
MR_def_label(bytecode_backend__bytecode__output_arg_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_short_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module6)
	MR_init_entry1(bytecode_backend__bytecode__output_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_vars_3_0);
	MR_init_label3(bytecode_backend__bytecode__output_vars_3_0,10,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(bytecode_backend__bytecode__output_vars_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_vars_3_0_i12);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_short_3_0,
		bytecode_backend__bytecode__output_vars_3_0_i4);
MR_def_label(bytecode_backend__bytecode__output_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(bytecode_backend__bytecode__output_vars_3_0_i10);
MR_def_label(bytecode_backend__bytecode__output_vars_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module7)
	MR_init_entry1(bytecode_backend__bytecode__output_temp_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_temp_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_temp'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_temp_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_short_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module8)
	MR_init_entry1(bytecode_backend__bytecode__output_var_dirs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_var_dirs_3_0);
	MR_init_label6(bytecode_backend__bytecode__output_var_dirs_3_0,28,4,6,8,10,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_var_dirs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_var_dirs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(bytecode_backend__bytecode__output_var_dirs_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_var_dirs_3_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_short_3_0,
		bytecode_backend__bytecode__output_var_dirs_3_0_i4);
MR_def_label(bytecode_backend__bytecode__output_var_dirs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_var_dirs_3_0_i6);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_var_dirs_3_0_i10);
MR_def_label(bytecode_backend__bytecode__output_var_dirs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_var_dirs_3_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_var_dirs_3_0_i10);
MR_def_label(bytecode_backend__bytecode__output_var_dirs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_var_dirs_3_0_i10);
MR_def_label(bytecode_backend__bytecode__output_var_dirs_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(bytecode_backend__bytecode__output_var_dirs_3_0_i28);
MR_def_label(bytecode_backend__bytecode__output_var_dirs_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module9)
	MR_init_entry1(bytecode_backend__bytecode__output_test_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_test_id_3_0);
	MR_init_label5(bytecode_backend__bytecode__output_test_id_3_0,3,5,7,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_test_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_test_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_test_id_3_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_test_id_3_0_i5);
	}
	MR_r1 = (MR_Integer) 5;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_test_id_3_0_i7);
	}
	MR_r1 = (MR_Integer) 4;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_test_id_3_0_i9);
	}
	MR_r1 = (MR_Integer) 3;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_test_id_3_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module10)
	MR_init_entry1(bytecode_backend__bytecode__output_module_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_module_id_3_0);
	MR_init_label1(bytecode_backend__bytecode__output_module_id_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_module_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_module_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		bytecode_backend__bytecode__output_module_id_3_0_i2);
MR_def_label(bytecode_backend__bytecode__output_module_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module11)
	MR_init_entry1(bytecode_backend__bytecode__output_pred_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_pred_id_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_pred_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_pred_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module12)
	MR_init_entry1(bytecode_backend__bytecode__output_proc_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_proc_id_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_proc_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_proc_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module13)
	MR_init_entry1(bytecode_backend__bytecode__output_label_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_label_id_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_label_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_label_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_short_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module14)
	MR_init_entry1(bytecode_backend__bytecode__output_tag_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_tag_3_0);
	MR_init_label8(bytecode_backend__bytecode__output_tag_3_0,43,6,5,9,13,12,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_tag'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_tag_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_tag_3_0_i43);
	}
	MR_r1 = (MR_Integer) 4;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_tag_3_0_i5);
	}
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i6);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i16);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_tag_3_0_i9);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i13);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_tag_3_0_i12);
	}
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i13);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i15);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i16);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__to_int_2_0);
MR_decl_entry(require__sorry_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module15)
	MR_init_entry1(bytecode_backend__bytecode__output_cons_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_cons_id_3_0);
	MR_init_label10(bytecode_backend__bytecode__output_cons_id_3_0,4,77,3,8,9,10,11,7,14,13)
	MR_init_label10(bytecode_backend__bytecode__output_cons_id_3_0,17,16,20,21,22,23,24,19,27,26)
	MR_init_label6(bytecode_backend__bytecode__output_cons_id_3_0,30,31,32,29,34,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_cons_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_cons_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_cons_id_3_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 7;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i4);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(char__to_int_2_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i77);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_cons_id_3_0_i7);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 2);
	MR_sv(1) = MR_tfield(1, MR_r1, 3);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i8);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_module_id_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i9);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_string_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i10);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_short_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i11);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_tag_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_cons_id_3_0_i13);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i14);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_float_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_cons_id_3_0_i16);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i17);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_int_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_cons_id_3_0_i19);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 5);
	MR_r1 = (MR_Integer) 4;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i20);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_module_id_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i21);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_pred_id_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i22);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i23);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_is_func_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i24);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_proc_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_cons_id_3_0_i26);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i27);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_string_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_cons_id_3_0_i29);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_r1 = (MR_Integer) 6;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i30);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_module_id_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i31);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_string_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i32);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_cons_id_3_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const("bytecode_backend.bytecode", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140bytecode_backend.bytecode.output_cons_id\'/3", 54);
	MR_r3 = (MR_Word) MR_string_const("bytecode for typeclass not yet implemented.", 43);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_cons_id_3_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("bytecode_backend.bytecode", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140bytecode_backend.bytecode.output_cons_id\'/3", 54);
	MR_r3 = (MR_Word) MR_string_const("bytecode for type_info_cell_constructor not yet implemented.", 60);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_backend.bytecode", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140bytecode_backend.bytecode.output_cons_id\'/3", 54);
	MR_r3 = (MR_Word) MR_string_const("bytecode for typeclass_info_cell_constructor not yet implemented.", 65);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module16)
	MR_init_entry1(bytecode_backend__bytecode__output_binop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_binop_3_0);
	MR_init_label10(bytecode_backend__bytecode__output_binop_3_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(bytecode_backend__bytecode__output_binop_3_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(bytecode_backend__bytecode__output_binop_3_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(bytecode_backend__bytecode__output_binop_3_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label1(bytecode_backend__bytecode__output_binop_3_0,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_binop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_binop_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i3);
	}
	MR_r1 = (MR_Integer) 7;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i4);
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i5);
	}
	MR_r1 = (MR_Integer) 9;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i6);
	}
	MR_r1 = (MR_Integer) 35;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,39)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i7);
	}
	MR_r1 = (MR_Integer) 37;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,40)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i8);
	}
	MR_r1 = (MR_Integer) 38;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i9);
	}
	MR_r1 = (MR_Integer) 12;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,30)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i10);
	}
	MR_r1 = (MR_Integer) 28;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,31)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i11);
	}
	MR_r1 = (MR_Integer) 29;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,38)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i12);
	}
	MR_r1 = (MR_Integer) 41;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,36)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i13);
	}
	MR_r1 = (MR_Integer) 34;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,34)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i14);
	}
	MR_r1 = (MR_Integer) 32;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,35)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i15);
	}
	MR_r1 = (MR_Integer) 33;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,33)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i16);
	}
	MR_r1 = (MR_Integer) 31;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,28)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i17);
	}
	MR_r1 = (MR_Integer) 26;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,32)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i18);
	}
	MR_r1 = (MR_Integer) 30;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,27)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i19);
	}
	MR_r1 = (MR_Integer) 25;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,29)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i20);
	}
	MR_r1 = (MR_Integer) 27;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,37)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i21);
	}
	MR_r1 = (MR_Integer) 40;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i23);
	}
	MR_r1 = (MR_Integer) 3;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,25)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i24);
	}
	MR_r1 = (MR_Integer) 24;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,23)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i25);
	}
	MR_r1 = (MR_Integer) 22;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,24)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i26);
	}
	MR_r1 = (MR_Integer) 23;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,22)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i27);
	}
	MR_r1 = (MR_Integer) 21;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i28);
	}
	MR_r1 = (MR_Integer) 4;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i31);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i32);
	}
	MR_r1 = (MR_Integer) 11;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i33);
	}
	MR_r1 = (MR_Integer) 13;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,21)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i34);
	}
	MR_r1 = (MR_Integer) 39;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i35);
	}
	MR_r1 = (MR_Integer) 15;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,20)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i36);
	}
	MR_r1 = (MR_Integer) 20;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i37);
	}
	MR_r1 = (MR_Integer) 18;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,19)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i38);
	}
	MR_r1 = (MR_Integer) 19;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i39);
	}
	MR_r1 = (MR_Integer) 17;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i40);
	}
	MR_r1 = (MR_Integer) 16;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i41);
	}
	MR_r1 = (MR_Integer) 5;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i42);
	}
	MR_r1 = (MR_Integer) 6;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,26)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i43);
	}
	MR_r1 = (MR_Integer) 36;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module17)
	MR_init_entry1(bytecode_backend__bytecode__output_unop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_unop_3_0);
	MR_init_label10(bytecode_backend__bytecode__output_unop_3_0,3,4,5,6,7,8,9,10,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_unop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_unop_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_unop_3_0_i3);
	}
	MR_r1 = (MR_Integer) 6;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_unop_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_unop_3_0_i4);
	}
	MR_r1 = (MR_Integer) 8;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_unop_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_unop_3_0_i5);
	}
	MR_r1 = (MR_Integer) 9;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_unop_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_unop_3_0_i6);
	}
	MR_r1 = (MR_Integer) 10;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_unop_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_unop_3_0_i7);
	}
	MR_r1 = (MR_Integer) 7;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_unop_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_unop_3_0_i8);
	}
	MR_r1 = (MR_Integer) 3;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_unop_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_unop_3_0_i9);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_unop_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_unop_3_0_i10);
	}
	MR_r1 = (MR_Integer) 5;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_unop_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_unop_3_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_unop_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_unop_3_0_i12);
	}
	MR_r1 = (MR_Integer) 4;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_unop_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(require__expect_4_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module18)
	MR_init_entry1(bytecode_backend__bytecode__output_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_args_3_0);
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,14,15,16,13,19,20,21,22,23,24)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,25,18,27,31,32,33,30,36,37,35)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,40,41,39,44,43,47,48,49,50,46)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,53,54,56,52,60,61,63,64,59,67)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,68,69,66,72,75,76,77,78,74,80)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,82,84,86,88,90,92,94,96,99,100)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,98,102,106,105,109,111,108,113,116,117)
	MR_init_label9(bytecode_backend__bytecode__output_args_3_0,118,115,436,122,126,125,128,129,407)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i407);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i13);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 2);
	MR_sv(2) = MR_tfield(1, MR_r1, 3);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_pred_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i14);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i15);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_is_func_3_0,
		bytecode_backend__bytecode__output_args_3_0_i16);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_length_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i18);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(2, MR_r1, 1);
	MR_sv(1) = MR_tfield(2, MR_r1, 2);
	MR_sv(2) = MR_tfield(2, MR_r1, 3);
	MR_sv(3) = MR_tfield(2, MR_r1, 4);
	MR_sv(4) = MR_tfield(2, MR_r1, 5);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_proc_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i19);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_determinism_3_0,
		bytecode_backend__bytecode__output_args_3_0_i20);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i21);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_label_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i22);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i23);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_var_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__output_args_3_0_i24);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i25);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_var_infos_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i27);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i126);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i30);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_binop_3_0,
		bytecode_backend__bytecode__output_args_3_0_i31);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_arg_3_0,
		bytecode_backend__bytecode__output_args_3_0_i32);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_arg_3_0,
		bytecode_backend__bytecode__output_args_3_0_i33);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_var_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i35);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_binop_3_0,
		bytecode_backend__bytecode__output_args_3_0_i36);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_arg_3_0,
		bytecode_backend__bytecode__output_args_3_0_i37);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_arg_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i39);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_unop_3_0,
		bytecode_backend__bytecode__output_args_3_0_i40);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_arg_3_0,
		bytecode_backend__bytecode__output_args_3_0_i41);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_var_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i43);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_unop_3_0,
		bytecode_backend__bytecode__output_args_3_0_i44);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_arg_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i46);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(3) = MR_tfield(3, MR_r1, 5);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_module_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i47);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_pred_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i48);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i49);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_is_func_3_0,
		bytecode_backend__bytecode__output_args_3_0_i50);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_proc_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,19)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i52);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i53);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_cons_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i54);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__output_args_3_0_i56);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i64);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i59);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i60);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_cons_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i61);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__output_args_3_0_i63);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i64);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_var_dirs_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i66);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i67);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_cons_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i68);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__output_args_3_0_i69);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i78);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i72);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_short_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i74);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i75);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_cons_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i76);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__output_args_3_0_i77);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i78);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_vars_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i80);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_temp_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i82);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i84);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_temp_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i86);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i88);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i90);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_temp_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i92);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i94);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i96);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_temp_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i98);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_label_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i99);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_label_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i100);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_temp_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i102);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_temp_3_0,
		bytecode_backend__bytecode__output_args_3_0_i106);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i105);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i106);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i108);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_cons_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i109);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(bytecode_backend__bytecode__IntroducedFrom__pred__output_args__266__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("bytecode_backend.bytecode", 25);
	MR_r3 = (MR_Word) MR_string_const("predicate \140bytecode_backend.bytecode.output_args\'/3", 51);
	MR_r4 = (MR_Word) MR_string_const("OtherConsIds", 12);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		bytecode_backend__bytecode__output_args_3_0_i111);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i113);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_temp_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i115);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i116);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i117);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i118);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_determinism_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i436);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,436)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i122);
	}
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_0,
		bytecode_backend__bytecode__output_args_3_0_i126);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_args_3_0_i125);
	}
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_0,
		bytecode_backend__bytecode__output_args_3_0_i126);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_var_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i128);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i129);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_test_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,407)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_byte_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module19)
	MR_init_entry1(bytecode_backend__bytecode__output_bytecode_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_bytecode_list_3_0);
	MR_init_label10(bytecode_backend__bytecode__output_bytecode_list_3_0,176,5,6,7,8,9,10,11,12,13)
	MR_init_label10(bytecode_backend__bytecode__output_bytecode_list_3_0,14,15,16,17,18,19,20,21,22,23)
	MR_init_label10(bytecode_backend__bytecode__output_bytecode_list_3_0,24,25,26,27,28,29,30,31,32,33)
	MR_init_label10(bytecode_backend__bytecode__output_bytecode_list_3_0,34,35,36,37,38,39,40,41,42,43)
	MR_init_label5(bytecode_backend__bytecode__output_bytecode_list_3_0,44,45,46,47,178)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_bytecode_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_bytecode_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i178);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i5);
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 18;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i8);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i9);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i11);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 37;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i12);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 39;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i13);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i14);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 36;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i15);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i16);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,15)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i17);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 21;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,25)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i18);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 31;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,27)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i19);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 33;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,26)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i20);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,28)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i21);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,23)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i22);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 29;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,19)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i23);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 25;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,20)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i24);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 26;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,17)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i25);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 23;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,29)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i26);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 38;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,18)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i27);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 24;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,14)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i28);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 20;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i29);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,12)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i30);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i31);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 12;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i32);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 15;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,13)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i33);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 19;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i34);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 7;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i35);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 5;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,10)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i36);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i37);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 13;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,11)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i38);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 17;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i39);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i40);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 11;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i41);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 14;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,24)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i42);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 30;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i43);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 4;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,22)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i44);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 28;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,21)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i45);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 27;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 22;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_args_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i47);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i176);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_binary_output_4_0);
MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__set_exit_status_3_0);
MR_decl_entry(io__set_binary_output_stream_4_0);
MR_decl_entry(io__close_binary_output_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module20)
	MR_init_entry1(bytecode_backend__bytecode__output_bytecode_file_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_bytecode_file_4_0);
	MR_init_label10(bytecode_backend__bytecode__output_bytecode_file_4_0,2,5,6,7,8,9,10,4,12,13)
	MR_init_label2(bytecode_backend__bytecode__output_bytecode_file_4_0,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_bytecode_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bytecode_backend__bytecode__output_bytecode_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(io__open_binary_output_4_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i2);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_file_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("byte.m", 6);
	MR_np_call_localret_ent(io__progname_base_4_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i5);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i6);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i7);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": can\'t open \140", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i8);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i9);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\' for output\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i10);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_binary_output_stream_4_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i12);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_short_3_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i13);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_bytecode_list_3_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i14);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__set_binary_output_stream_4_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i15);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__close_binary_output_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module21)
	MR_init_entry1(bytecode_backend__bytecode__debug_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_string_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_string_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_string_3_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module22)
	MR_init_entry1(bytecode_backend__bytecode__debug_var_infos_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_var_infos_3_0);
	MR_init_label4(bytecode_backend__bytecode__debug_var_infos_3_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_var_infos'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_var_infos_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(bytecode_backend__bytecode__debug_var_infos_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_var_infos_3_0_i13);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_var_infos_3_0_i4);
MR_def_label(bytecode_backend__bytecode__debug_var_infos_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_var_infos_3_0_i5);
MR_def_label(bytecode_backend__bytecode__debug_var_infos_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(bytecode_backend__bytecode__debug_var_infos_3_0_i11);
MR_def_label(bytecode_backend__bytecode__debug_var_infos_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module23)
	MR_init_entry1(bytecode_backend__bytecode__debug_determinism_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_determinism_3_0);
	MR_init_label8(bytecode_backend__bytecode__debug_determinism_3_0,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_determinism'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_determinism_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_determinism_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("cc_multidet", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_determinism_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_determinism_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_determinism_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("cc_nondet", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_determinism_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_determinism_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_determinism_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("det", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_determinism_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_determinism_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_determinism_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("erroneous", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_determinism_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_determinism_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_determinism_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("failure", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_determinism_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_determinism_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_determinism_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("multidet", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_determinism_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_determinism_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_determinism_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("nondet", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_determinism_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_determinism_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("semidet", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_determinism_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_determinism_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module24)
	MR_init_entry1(bytecode_backend__bytecode__debug_int_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_int_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_int_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_int'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_int_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_int_3_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_int_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module25)
	MR_init_entry1(bytecode_backend__bytecode__debug_is_func_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_is_func_3_0);
	MR_init_label3(bytecode_backend__bytecode__debug_is_func_3_0,2,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_is_func'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_is_func_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_is_func_3_0_i2);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("func", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_is_func_3_0_i8);
MR_def_label(bytecode_backend__bytecode__debug_is_func_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_is_func_3_0_i6);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("pred", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_is_func_3_0_i8);
MR_def_label(bytecode_backend__bytecode__debug_is_func_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
MR_def_label(bytecode_backend__bytecode__debug_is_func_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_backend.bytecode", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140bytecode_backend.bytecode.debug_is_func\'/3", 53);
	MR_r3 = (MR_Word) MR_string_const("invalid predicate or function specifier in bytecode.", 52);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module26)
	MR_init_entry1(bytecode_backend__bytecode__debug_length_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_length_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_length_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_length'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_length_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_length_3_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_length_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module27)
	MR_init_entry1(bytecode_backend__bytecode__debug_var_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_var_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_var_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_var_3_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_float_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module28)
	MR_init_entry1(bytecode_backend__bytecode__debug_float_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_float_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_float_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_float'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_float_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_float_3_0,
		bytecode_backend__bytecode__debug_float_3_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_float_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module29)
	MR_init_entry1(bytecode_backend__bytecode__debug_arg_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_arg_3_0);
	MR_init_label7(bytecode_backend__bytecode__debug_arg_3_0,4,5,3,8,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_arg'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_arg_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_arg_3_0_i3);
	}
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("float", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i4);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i5);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_float_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i15);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_arg_3_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("var", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i14);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i15);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module30)
	MR_init_entry1(bytecode_backend__bytecode__debug_vars_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_vars_3_0);
	MR_init_label4(bytecode_backend__bytecode__debug_vars_3_0,11,4,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(bytecode_backend__bytecode__debug_vars_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_vars_3_0_i13);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_vars_3_0_i4);
MR_def_label(bytecode_backend__bytecode__debug_vars_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_vars_3_0_i5);
MR_def_label(bytecode_backend__bytecode__debug_vars_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(bytecode_backend__bytecode__debug_vars_3_0_i11);
MR_def_label(bytecode_backend__bytecode__debug_vars_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module31)
	MR_init_entry1(bytecode_backend__bytecode__debug_temp_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_temp_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_temp_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_temp'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_temp_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_temp_3_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_temp_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module32)
	MR_init_entry1(bytecode_backend__bytecode__debug_var_dirs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_var_dirs_3_0);
	MR_init_label8(bytecode_backend__bytecode__debug_var_dirs_3_0,35,4,5,7,10,13,14,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_var_dirs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_var_dirs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(bytecode_backend__bytecode__debug_var_dirs_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_var_dirs_3_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_var_dirs_3_0_i4);
MR_def_label(bytecode_backend__bytecode__debug_var_dirs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_var_dirs_3_0_i5);
MR_def_label(bytecode_backend__bytecode__debug_var_dirs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_var_dirs_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("to_arg", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_var_dirs_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_var_dirs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_var_dirs_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("to_none", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_var_dirs_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_var_dirs_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("to_var", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_var_dirs_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_var_dirs_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_var_dirs_3_0_i14);
MR_def_label(bytecode_backend__bytecode__debug_var_dirs_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(bytecode_backend__bytecode__debug_var_dirs_3_0_i35);
MR_def_label(bytecode_backend__bytecode__debug_var_dirs_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module33)
	MR_init_entry1(bytecode_backend__bytecode__debug_test_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_test_id_3_0);
	MR_init_label6(bytecode_backend__bytecode__debug_test_id_3_0,3,6,9,12,15,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_test_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_test_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_test_id_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i18);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_test_id_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("dummy", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i18);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_test_id_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("enum", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i18);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_test_id_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("float", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i18);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_test_id_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i18);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("string", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i18);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module34)
	MR_init_entry1(bytecode_backend__bytecode__debug_sym_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_sym_name_3_0);
	MR_init_label4(bytecode_backend__bytecode__debug_sym_name_3_0,3,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_sym_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_sym_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_sym_name_3_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_sym_name_3_0_i8);
MR_def_label(bytecode_backend__bytecode__debug_sym_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(bytecode_backend__bytecode__debug_sym_name_3_0,
		bytecode_backend__bytecode__debug_sym_name_3_0_i6);
MR_def_label(bytecode_backend__bytecode__debug_sym_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 58;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_sym_name_3_0_i7);
MR_def_label(bytecode_backend__bytecode__debug_sym_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_sym_name_3_0_i8);
MR_def_label(bytecode_backend__bytecode__debug_sym_name_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module35)
	MR_init_entry1(bytecode_backend__bytecode__debug_module_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_module_id_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_module_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_module_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_sym_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module36)
	MR_init_entry1(bytecode_backend__bytecode__debug_pred_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_pred_id_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_pred_id_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_pred_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_pred_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_pred_id_3_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_pred_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module37)
	MR_init_entry1(bytecode_backend__bytecode__debug_proc_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_proc_id_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_proc_id_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_proc_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_proc_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_proc_id_3_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_proc_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module38)
	MR_init_entry1(bytecode_backend__bytecode__debug_label_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_label_id_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_label_id_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_label_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_label_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_label_id_3_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_label_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module39)
	MR_init_entry1(bytecode_backend__bytecode__debug_tag_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_tag_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_tag_3_0,3,7,8,9,10,6,13,12,16,17)
	MR_init_label6(bytecode_backend__bytecode__debug_tag_3_0,15,20,21,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_tag'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_tag_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_tag_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("no_tag", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i24);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_tag_3_0_i6);
	}
	MR_sv(2) = MR_tfield(2, MR_r1, 0);
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("shared_remote_tag", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i7);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i8);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i9);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_int_3_0);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_tag_3_0_i12);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("unshared_tag", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_int_3_0);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_tag_3_0_i15);
	}
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enum_tag", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i16);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i17);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i24);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = (MR_Word) MR_string_const("shared_local_tag", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i20);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i21);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i22);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i23);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i24);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__output_quoted_string_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module40)
	MR_init_entry1(bytecode_backend__bytecode__debug_cstring_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_cstring_3_0);
	MR_init_label3(bytecode_backend__bytecode__debug_cstring_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_cstring'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_cstring_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_cstring_3_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_cstring_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		bytecode_backend__bytecode__debug_cstring_3_0_i3);
MR_def_label(bytecode_backend__bytecode__debug_cstring_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_cstring_3_0_i4);
MR_def_label(bytecode_backend__bytecode__debug_cstring_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__from_char_list_2_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module41)
	MR_init_entry1(bytecode_backend__bytecode__debug_cons_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_cons_id_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_cons_id_3_0,3,113,8,9,10,11,7,14,13,17)
	MR_init_label10(bytecode_backend__bytecode__debug_cons_id_3_0,18,19,20,21,22,16,25,107,24,30)
	MR_init_label10(bytecode_backend__bytecode__debug_cons_id_3_0,29,33,34,35,36,37,32,40,39,42)
	MR_init_label2(bytecode_backend__bytecode__debug_cons_id_3_0,43,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_cons_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_cons_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_cons_id_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("type_info_cell_constructor", 26);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_string_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_cons_id_3_0_i113);
	}
	MR_r1 = (MR_Word) MR_string_const("typeclass_info_cell_constructor", 31);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_string_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_cons_id_3_0_i7);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 2);
	MR_sv(1) = MR_tfield(1, MR_r1, 3);
	MR_r1 = (MR_Word) MR_string_const("functor", 7);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i8);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_sym_name_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i9);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_int_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i11);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_tag_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_cons_id_3_0_i13);
	}
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("int_const", 9);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i14);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_int_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_cons_id_3_0_i16);
	}
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = (MR_Word) MR_string_const("base_typeclass_info_const", 25);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i17);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_module_id_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i18);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("class_id", 8);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i19);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_sym_name_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i20);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i21);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_int_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i22);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_string_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_cons_id_3_0_i24);
	}
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("char_const", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i25);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_char_list_2_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i107);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_string_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_cons_id_3_0_i29);
	}
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("float_const", 11);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i30);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_float_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_cons_id_3_0_i32);
	}
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 5);
	MR_r1 = (MR_Word) MR_string_const("pred_const", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i33);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_module_id_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i34);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_pred_id_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i35);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i36);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_is_func_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i37);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_proc_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_cons_id_3_0_i39);
	}
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("string_const", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i40);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_cstring_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_r1 = (MR_Word) MR_string_const("type_ctor_info_const", 20);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i42);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_module_id_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module42)
	MR_init_entry1(bytecode_backend__bytecode__debug_binop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_binop_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_binop_3_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(bytecode_backend__bytecode__debug_binop_3_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(bytecode_backend__bytecode__debug_binop_3_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(bytecode_backend__bytecode__debug_binop_3_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label2(bytecode_backend__bytecode__debug_binop_3_0,43,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_binop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_binop_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("|", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("^", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("body", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,39)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("compound_eq", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,40)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("compound_lt", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("eq", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,30)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("float_divide", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,31)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("float_eq", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,38)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("float_from_dword", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,36)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("float_ge", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,34)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("float_gt", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,35)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("float_le", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,33)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("float_lt", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,28)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("float_minus", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,32)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("float_ne", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,27)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("float_plus", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,29)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("float_times", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,37)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const("float_word_bits", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("+", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,25)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const(">=", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,23)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,24)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const("<=", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,22)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("<", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i28);
	}
	MR_r1 = (MR_Word) MR_string_const("mod", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("*", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("and", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i32);
	}
	MR_r1 = (MR_Word) MR_string_const("or", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("ne", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,21)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const("strcmp", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i35);
	}
	MR_r1 = (MR_Word) MR_string_const("str_eq", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,20)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("str_ge", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("str_gt", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,19)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("str_le", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i39);
	}
	MR_r1 = (MR_Word) MR_string_const("str_lt", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i40);
	}
	MR_r1 = (MR_Word) MR_string_const("str_ne", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i41);
	}
	MR_r1 = (MR_Word) MR_string_const("<<", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i42);
	}
	MR_r1 = (MR_Word) MR_string_const(">>", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,26)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i43);
	}
	MR_r1 = (MR_Word) MR_string_const("unsigned_le", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("array_index", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module43)
	MR_init_entry1(bytecode_backend__bytecode__debug_unop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_unop_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_unop_3_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label1(bytecode_backend__bytecode__debug_unop_3_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_unop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_unop_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_unop_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("bitwise_complement", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_unop_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("hash_string", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_unop_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("hash_string2", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_unop_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("hash_string3", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_unop_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("not", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_unop_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("mkbody", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_unop_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("mktag", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_unop_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("strip_tag", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_unop_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("tag", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_unop_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("unmkbody", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unmktag", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module44)
	MR_init_entry1(bytecode_backend__bytecode__debug_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_args_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,14,15,16,13,19,20,21,22,23,24)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,25,18,27,31,32,33,30,36,37,35)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,40,41,39,44,43,47,48,49,50,46)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,53,54,56,52,60,61,63,64,59,67)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,68,69,66,72,75,76,77,78,74,80)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,82,84,86,88,90,92,94,96,99,100)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,98,102,106,105,109,111,108,113,116,117)
	MR_init_label9(bytecode_backend__bytecode__debug_args_3_0,118,115,436,122,126,125,128,129,407)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i407);
	}
	if (MR_LTAGS_TEST(MR_r1,0,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i407);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i13);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 2);
	MR_sv(2) = MR_tfield(1, MR_r1, 3);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_pred_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i14);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i15);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_is_func_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i16);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_length_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i18);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(2, MR_r1, 1);
	MR_sv(1) = MR_tfield(2, MR_r1, 2);
	MR_sv(2) = MR_tfield(2, MR_r1, 3);
	MR_sv(3) = MR_tfield(2, MR_r1, 4);
	MR_sv(4) = MR_tfield(2, MR_r1, 5);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_proc_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i19);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_determinism_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i20);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i21);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_label_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i22);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i23);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_var_info);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__debug_args_3_0_i24);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i25);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_var_infos_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i27);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i126);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i30);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_binop_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i31);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_arg_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i32);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_arg_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i33);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_var_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i35);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_binop_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i36);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_arg_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i37);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_arg_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i39);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_unop_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i40);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_arg_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i41);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_var_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i43);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_unop_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_arg_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i46);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(3) = MR_tfield(3, MR_r1, 5);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_module_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i47);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_pred_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i48);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i49);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_is_func_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i50);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_proc_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,19)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i52);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i53);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_cons_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i54);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__debug_args_3_0_i56);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i64);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i59);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i60);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_cons_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i61);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__debug_args_3_0_i63);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i64);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_var_dirs_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i66);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i67);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_cons_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i68);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__debug_args_3_0_i69);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i78);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i72);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_int_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i74);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i75);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_cons_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i76);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__debug_args_3_0_i77);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i78);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_vars_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i80);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_temp_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i82);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i84);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_temp_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i86);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i88);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i90);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_temp_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i92);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i94);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i96);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_temp_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i98);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_label_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i99);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_label_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i100);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_temp_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i102);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_temp_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i106);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i105);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i106);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i108);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_cons_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i109);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(list__foldl_4_2,
		bytecode_backend__bytecode__debug_args_3_0_i111);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i113);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_temp_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i115);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i116);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i117);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i118);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_determinism_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i436);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,436)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i122);
	}
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0,
		bytecode_backend__bytecode__debug_args_3_0_i126);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_args_3_0_i125);
	}
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0,
		bytecode_backend__bytecode__debug_args_3_0_i126);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_var_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i128);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i129);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_test_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,407)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module45)
	MR_init_entry1(bytecode_backend__bytecode__debug_bytecode_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_bytecode_list_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0,177,5,6,7,8,9,10,11,12,13)
	MR_init_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0,14,15,16,17,18,19,20,21,22,23)
	MR_init_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0,24,25,26,27,28,29,30,31,32,33)
	MR_init_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0,34,35,36,37,38,39,40,41,42,43)
	MR_init_label6(bytecode_backend__bytecode__debug_bytecode_list_3_0,44,45,46,47,48,179)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_bytecode_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_bytecode_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i179);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i5);
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_disjunction", 17);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_if", 8);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_negation", 14);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i8);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_pred", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i9);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_proc", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i10);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_switch", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i11);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("fail", 4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i12);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("not_supported", 13);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i13);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("semidet_succeed", 15);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i14);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("semidet_success_check", 21);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i15);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_pred", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i16);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_proc", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,15)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i17);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("assign", 6);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,25)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i18);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("builtin_binop", 13);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,27)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i19);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("builtin_bintest", 15);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,26)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i20);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("builtin_unop", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,28)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i21);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("builtin_untest", 14);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,23)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i22);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("call", 4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,19)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i23);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("complex_construct", 17);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,20)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i24);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("complex_deconstruct", 19);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,17)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i25);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("construct", 9);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,29)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i26);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("context", 7);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,18)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i27);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("deconstruct", 11);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,14)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i28);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_commit", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i29);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_disjunct", 14);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,12)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i30);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_negation_goal", 19);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i31);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_switch_arm", 16);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,9)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i32);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_then", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,13)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i33);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_commit", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i34);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_disjunct", 14);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i35);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_disjunction", 17);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,10)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i36);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_else", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i37);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_if", 8);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,11)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i38);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_negation", 14);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i39);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_switch", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i40);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_switch_arm", 16);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,8)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i41);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_then", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,24)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i42);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("higher_order_call", 17);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i43);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("label", 5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,22)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i44);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("pickup_arg", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,21)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i45);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("place_arg", 9);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("test", 4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i46);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_args_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i47);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i48);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i177);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(io__close_output_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module46)
	MR_init_entry1(bytecode_backend__bytecode__debug_bytecode_file_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_bytecode_file_4_0);
	MR_init_label10(bytecode_backend__bytecode__debug_bytecode_file_4_0,2,5,6,7,8,9,10,4,12,13)
	MR_init_label4(bytecode_backend__bytecode__debug_bytecode_file_4_0,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_bytecode_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bytecode_backend__bytecode__debug_bytecode_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(io__open_output_4_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i2);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_file_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("byte.m", 6);
	MR_np_call_localret_ent(io__progname_base_4_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i5);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i6);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i7);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": can\'t open \140", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i8);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i9);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\' for output\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i12);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("bytecode_version ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i14);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i15);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_bytecode_list_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i16);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i17);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__close_output_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module47)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_arg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_arg_0_0);
	MR_init_label4(__Unify___bytecode_backend__bytecode__byte_arg_0_0,5,17,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_arg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_arg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_arg_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_arg_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_arg_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module48)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_arg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_arg_0_0);
	MR_init_label8(__Compare___bytecode_backend__bytecode__byte_arg_0_0,3,2,32,5,12,35,10,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_arg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i2);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i32);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i32);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___backend_libs__builtin_ops__binary_op_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module49)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_code_0_0);
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0,15,17,21,25,27,29,23,33,35,31)
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0,41,39,43,49,47,53,51,60,58,67)
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0,65,71,75,73,79,81,83,85,87,89)
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0,91,93,95,97,99,101,105,107,103,109)
	MR_init_label6(__Unify___bytecode_backend__bytecode__byte_code_0_0,111,113,115,274,117,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i274);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(9);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i12);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i13);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i14);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 3);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i17);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 4);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 4);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_var_info);
	MR_r2 = MR_tfield(2, MR_tempr3, 5);
	MR_r3 = MR_tfield(2, MR_tempr4, 5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,15)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,25)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i23);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__builtin_ops__binary_op_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i25);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_arg_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i27);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_arg_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i29);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,27)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__builtin_ops__binary_op_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i33);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_arg_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i35);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___bytecode_backend__bytecode__byte_arg_0_0);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,26)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i39);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_arg_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i41);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,28)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i43);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___bytecode_backend__bytecode__byte_arg_0_0);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,23)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i47);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i49);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(7)) != 0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(6));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,19)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i51);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i53);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,20)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i58);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i60);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,17)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i65);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i67);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,29)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i71);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,18)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i73);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i75);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,14)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i79);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i81);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i83);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i85);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i87);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,13)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i89);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i91);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i93);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i95);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i97);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 3);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i99);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i101);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i103);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i105);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i107);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i109);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,24)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i111);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 4);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 4);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i113);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,22)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i115);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 3);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,21)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i117);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 3);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 3);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module50)
	MR_init_entry1(__Index___bytecode_backend__bytecode__byte_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___bytecode_backend__bytecode__byte_code_0_0);
	MR_init_label10(__Index___bytecode_backend__bytecode__byte_code_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(__Index___bytecode_backend__bytecode__byte_code_0_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(__Index___bytecode_backend__bytecode__byte_code_0_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(__Index___bytecode_backend__bytecode__byte_code_0_0,33,34,35,36,37,38,39,40,41,42)
	MR_init_label1(__Index___bytecode_backend__bytecode__byte_code_0_0,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___bytecode_backend__bytecode__byte_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i3);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i4);
	}
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i5);
	}
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i7);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i9);
	}
	MR_r1 = (MR_Integer) 39;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i10);
	}
	MR_r1 = (MR_Integer) 41;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i11);
	}
	MR_r1 = (MR_Integer) 37;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i12);
	}
	MR_r1 = (MR_Integer) 38;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i15);
	}
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,25)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i16);
	}
	MR_r1 = (MR_Integer) 33;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,27)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i17);
	}
	MR_r1 = (MR_Integer) 35;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,26)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i18);
	}
	MR_r1 = (MR_Integer) 34;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i19);
	}
	MR_r1 = (MR_Integer) 36;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i20);
	}
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,19)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i21);
	}
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i22);
	}
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i23);
	}
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,29)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i24);
	}
	MR_r1 = (MR_Integer) 40;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i25);
	}
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i26);
	}
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i27);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i28);
	}
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i29);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i30);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i31);
	}
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i32);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i33);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i34);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i35);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i36);
	}
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i37);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i38);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i39);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,24)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i40);
	}
	MR_r1 = (MR_Integer) 32;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i41);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i42);
	}
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(__Index___bytecode_backend__bytecode__byte_code_0_0_i43);
	}
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___backend_libs__builtin_ops__binary_op_0_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module51)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_code_0_0);
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,4,5,6,7,10,11,12,13,14,15)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,16,17,18,462,19,23,27,31,20,41)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,45,49,53,57,38,69,66,77,81,85)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,74,95,99,92,108,112,105,121,118,129)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,133,137,141,126,152,156,149,166,170,163)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,180,184,177,190,196,200,193,206,209,212)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,215,218,221,224,227,230,236,240,233,249)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,246,257,254,265,269,262,275,281,285,289)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,278,296,302,299,310,307,317,321,8,331)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i462);
	}
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(__Index___bytecode_backend__bytecode__byte_code_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i4);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(__Index___bytecode_backend__bytecode__byte_code_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i5);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(10) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(10) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,4)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,8)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,9)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,6)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,7)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i19);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,462)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i20);
	}
	if (MR_PTAG_TESTR(MR_sv(9),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(2) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(1) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(8);
	MR_sv(10) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i23);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i27);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i31);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(8),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i38);
	}
	if (MR_PTAG_TESTR(MR_sv(9),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(7) = MR_tfield(2, MR_tempr5, 5);
	MR_sv(6) = MR_tfield(2, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(2, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(8);
	MR_sv(2) = MR_tfield(2, MR_tempr6, 5);
	MR_sv(1) = MR_tfield(2, MR_tempr6, 4);
	MR_sv(10) = MR_tfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i41);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i45);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i49);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i53);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i57);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_var_info);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,15)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i66);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,15)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i69);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,25)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i74);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,25)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(2) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_sv(10) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__builtin_ops__binary_op_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i77);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i81);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i85);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,27)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i92);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,27)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__builtin_ops__binary_op_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i95);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i99);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,26)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i105);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,26)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i108);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i112);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,28)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i118);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,28)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i121);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,23)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i126);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,23)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(2) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_sv(1) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(10) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i129);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i133);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i137);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i141);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,19)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i149);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,19)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i152);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i156);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,20)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i163);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,20)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i166);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i170);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,17)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i177);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,17)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i180);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i184);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,29)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i190);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,29)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,18)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i193);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,18)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i196);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i200);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,14)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i206);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,14)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i209);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,12)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i212);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,12)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,6)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i215);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,6)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,9)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i218);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,9)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,13)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i221);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,13)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i224);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i227);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,10)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i230);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,10)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,7)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i233);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,7)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i236);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i240);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,11)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i246);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,11)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i249);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,4)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i254);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,4)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i257);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i262);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i265);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i269);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,8)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i275);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,8)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,24)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i278);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,24)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(2) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_sv(10) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i281);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i285);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i289);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,289)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i296);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(8), 1);
	MR_r2 = MR_tfield(3, MR_sv(9), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,22)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i299);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,22)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(8);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i302);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,21)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i307);
	}
	if (MR_RTAGS_TESTR(MR_sv(9),3,21)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(8);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i310);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,16)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(9);
	MR_sv(1) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(10) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(8);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(8) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i317);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i321);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__class_id_0_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module52)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,5,6,9,7,13,17,19,15,21,23)
	MR_init_label6(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,27,25,69,29,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i69);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i5);
	}
	MR_r1 = (MR_sv(6) == MR_tempr1);
	MR_decr_sp(9);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i6);
	}
	MR_r1 = (MR_sv(6) == MR_sv(5));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 3);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(5), (char *) (MR_Word *) MR_sv(8)) != 0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(1))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(5), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(6), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,5)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i15);
	}
	if (MR_RTAGS_TESTR(MR_sv(6),3,5)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i17);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__class_id_0_0,
		__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i19);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(6), (char *) (MR_Word *) MR_sv(8)) == 0);
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(6),3,2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(5), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(6), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i23);
	}
	if (MR_RTAGS_TESTR(MR_sv(6),3,1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(5), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(6), 1);
	MR_r1 = (MR_word_to_float(MR_tempr1) == MR_word_to_float(MR_tempr2));
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,3)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_sv(6),3,3)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i27);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(5), (char *) (MR_Word *) MR_sv(1)) != 0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(2))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	MR_r1 = (MR_sv(8) == MR_sv(4));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i29);
	}
	if (MR_RTAGS_TESTR(MR_sv(6),3,0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(5), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(6), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(6),3,4)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i32);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(5), (char *) (MR_Word *) MR_sv(7)) != 0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	MR_r1 = (MR_sv(6) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__class_id_0_0);
MR_decl_entry(private_builtin__builtin_compare_character_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module53)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,7,8,9,10,11,12,13,14,5,18)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,302,19,20,21,22,23,24,25,16,29)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,30,33,37,41,31,48,49,50,51,52)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,27,56,57,58,59,61,62,63,64,54)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,68,69,70,71,74,78,72,84,85,86)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,66,90,91,92,93,94,95,97,98,88)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,102,103,104,105,106,107,108,110,100,114)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,115,116,117,118,119,120,123,127,131,135)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,121,112,146,147,148,149,150,151,152,153)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,144,157,158,159,160,282,161,162,163,164)
	MR_init_label5(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,286,165,167,171,177)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i302);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(9);
	MR_proceed();
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i286);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i16);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i19);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i24);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i25);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i286);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i27);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i29);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i31);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i33);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i37);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i41);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i49);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i50);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i51);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i282);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i54);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i56);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i58);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i59);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i61);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i62);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i63);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i64);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i282);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i66);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i68);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i70);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i71);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i72);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i74);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__class_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i78);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i84);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i85);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i86);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i286);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i88);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i90);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i91);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i92);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i93);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i94);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i95);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_character_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i97);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i98);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i282);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i100);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i102);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i103);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i104);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i105);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i106);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i107);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i108);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i110);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i282);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i112);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i114);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i115);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i116);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i117);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i118);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i119);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i120);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i121);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 5);
	MR_tempr6 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i123);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i127);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i131);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i135);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i282);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i144);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i146);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i147);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i148);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i149);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i150);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i151);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i152);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i153);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i282);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i157);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i158);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i159);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i160);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i161);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i162);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i163);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i164);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i165);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i167);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i171);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i177);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module54)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_init_label6(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,5,6,8,26,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i10);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module55)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,78,7,8,9,5,13,16,14,21,11)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,25,26,27,23,32,33,34,30,38,39)
	MR_init_label6(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,73,40,74,41,43,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i78);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i7);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i74);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i14);
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
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i16);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i48);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i74);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i23);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i25);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i27);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i74);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i30);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i32);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i33);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i73);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i38);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i40);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i41);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i43);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i48);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module56)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_dir_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_dir_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_dir_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module57)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_dir_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_dir_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_dir_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module58)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_is_func_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_is_func_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_is_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module59)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_is_func_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_is_func_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_is_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module60)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_label_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_label_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_label_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module61)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_label_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_label_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_label_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module62)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_module_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_module_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_module_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module63)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_module_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_module_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_module_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module64)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_pred_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_pred_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_pred_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module65)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_pred_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_pred_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_pred_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module66)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_proc_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_proc_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module67)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_proc_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_proc_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_proc_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module68)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_reg_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_reg_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_reg_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module69)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_reg_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_reg_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_reg_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module70)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_temp_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_temp_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_temp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module71)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_temp_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_temp_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_temp_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module72)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_test_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_test_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_test_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module73)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_test_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_test_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_test_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___cord__cord_1_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module74)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_tree_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_tree_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_tree_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___cord__cord_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___cord__cord_1_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module75)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_tree_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_tree_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_tree_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___cord__cord_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module76)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_var_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module77)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_var_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_var_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_var_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module78)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_var_info_0_0);
	MR_init_label2(__Unify___bytecode_backend__bytecode__byte_var_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___bytecode_backend__bytecode__byte_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_var_info_0_0_i6);
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
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_var_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_var_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_var_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module79)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_var_info_0_0);
	MR_init_label4(__Compare___bytecode_backend__bytecode__byte_var_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___bytecode_backend__bytecode__byte_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_var_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_var_info_0_0_i2);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_var_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bytecode_backend__bytecode__byte_var_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_var_info_0_0_i5);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_var_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_var_info_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_var_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module80)
	MR_init_entry1(bytecode_backend__bytecode__IntroducedFrom__pred__output_args__266__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__IntroducedFrom__pred__output_args__266__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_args__266__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__IntroducedFrom__pred__output_args__266__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id);
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module81)
	MR_init_entry1(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__output_reg__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module82)
	MR_init_entry1(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0);
	MR_init_label1(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__debug_reg__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__write_int_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0_i2);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module83)
	MR_init_entry1(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___bytecode_backend__bytecode__byte_reg_type_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module84)
	MR_init_entry1(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___bytecode_backend__bytecode__byte_reg_type_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__bytecode_backend__bytecode_maybe_bunch_0(void)
{
	bytecode_backend__bytecode_module0();
	bytecode_backend__bytecode_module1();
	bytecode_backend__bytecode_module2();
	bytecode_backend__bytecode_module3();
	bytecode_backend__bytecode_module4();
	bytecode_backend__bytecode_module5();
	bytecode_backend__bytecode_module6();
	bytecode_backend__bytecode_module7();
	bytecode_backend__bytecode_module8();
	bytecode_backend__bytecode_module9();
	bytecode_backend__bytecode_module10();
	bytecode_backend__bytecode_module11();
	bytecode_backend__bytecode_module12();
	bytecode_backend__bytecode_module13();
	bytecode_backend__bytecode_module14();
	bytecode_backend__bytecode_module15();
	bytecode_backend__bytecode_module16();
	bytecode_backend__bytecode_module17();
	bytecode_backend__bytecode_module18();
	bytecode_backend__bytecode_module19();
	bytecode_backend__bytecode_module20();
	bytecode_backend__bytecode_module21();
	bytecode_backend__bytecode_module22();
	bytecode_backend__bytecode_module23();
	bytecode_backend__bytecode_module24();
	bytecode_backend__bytecode_module25();
	bytecode_backend__bytecode_module26();
	bytecode_backend__bytecode_module27();
	bytecode_backend__bytecode_module28();
	bytecode_backend__bytecode_module29();
	bytecode_backend__bytecode_module30();
	bytecode_backend__bytecode_module31();
	bytecode_backend__bytecode_module32();
	bytecode_backend__bytecode_module33();
	bytecode_backend__bytecode_module34();
	bytecode_backend__bytecode_module35();
	bytecode_backend__bytecode_module36();
	bytecode_backend__bytecode_module37();
	bytecode_backend__bytecode_module38();
	bytecode_backend__bytecode_module39();
}

static void mercury__bytecode_backend__bytecode_maybe_bunch_1(void)
{
	bytecode_backend__bytecode_module40();
	bytecode_backend__bytecode_module41();
	bytecode_backend__bytecode_module42();
	bytecode_backend__bytecode_module43();
	bytecode_backend__bytecode_module44();
	bytecode_backend__bytecode_module45();
	bytecode_backend__bytecode_module46();
	bytecode_backend__bytecode_module47();
	bytecode_backend__bytecode_module48();
	bytecode_backend__bytecode_module49();
	bytecode_backend__bytecode_module50();
	bytecode_backend__bytecode_module51();
	bytecode_backend__bytecode_module52();
	bytecode_backend__bytecode_module53();
	bytecode_backend__bytecode_module54();
	bytecode_backend__bytecode_module55();
	bytecode_backend__bytecode_module56();
	bytecode_backend__bytecode_module57();
	bytecode_backend__bytecode_module58();
	bytecode_backend__bytecode_module59();
	bytecode_backend__bytecode_module60();
	bytecode_backend__bytecode_module61();
	bytecode_backend__bytecode_module62();
	bytecode_backend__bytecode_module63();
	bytecode_backend__bytecode_module64();
	bytecode_backend__bytecode_module65();
	bytecode_backend__bytecode_module66();
	bytecode_backend__bytecode_module67();
	bytecode_backend__bytecode_module68();
	bytecode_backend__bytecode_module69();
	bytecode_backend__bytecode_module70();
	bytecode_backend__bytecode_module71();
	bytecode_backend__bytecode_module72();
	bytecode_backend__bytecode_module73();
	bytecode_backend__bytecode_module74();
	bytecode_backend__bytecode_module75();
	bytecode_backend__bytecode_module76();
	bytecode_backend__bytecode_module77();
	bytecode_backend__bytecode_module78();
	bytecode_backend__bytecode_module79();
}

static void mercury__bytecode_backend__bytecode_maybe_bunch_2(void)
{
	bytecode_backend__bytecode_module80();
	bytecode_backend__bytecode_module81();
	bytecode_backend__bytecode_module82();
	bytecode_backend__bytecode_module83();
	bytecode_backend__bytecode_module84();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__bytecode_backend__bytecode__init(void);
void mercury__bytecode_backend__bytecode__init_type_tables(void);
void mercury__bytecode_backend__bytecode__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__bytecode_backend__bytecode__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__bytecode_backend__bytecode__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__bytecode_backend__bytecode__init_threadscope_string_table(void);
#endif

void mercury__bytecode_backend__bytecode__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__bytecode_backend__bytecode_maybe_bunch_0();
	mercury__bytecode_backend__bytecode_maybe_bunch_1();
	mercury__bytecode_backend__bytecode_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0,
		bytecode_backend__bytecode__byte_arg_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_code_0,
		bytecode_backend__bytecode__byte_code_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
		bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0,
		bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_dir_0,
		bytecode_backend__bytecode__byte_dir_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_is_func_0,
		bytecode_backend__bytecode__byte_is_func_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_label_id_0,
		bytecode_backend__bytecode__byte_label_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_module_id_0,
		bytecode_backend__bytecode__byte_module_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_pred_id_0,
		bytecode_backend__bytecode__byte_pred_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_proc_id_0,
		bytecode_backend__bytecode__byte_proc_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0,
		bytecode_backend__bytecode__byte_reg_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_temp_0,
		bytecode_backend__bytecode__byte_temp_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_test_id_0,
		bytecode_backend__bytecode__byte_test_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_tree_0,
		bytecode_backend__bytecode__byte_tree_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_var_0,
		bytecode_backend__bytecode__byte_var_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_var_info_0,
		bytecode_backend__bytecode__byte_var_info_0_0);
	mercury__bytecode_backend__bytecode__init_debugger();
}

void mercury__bytecode_backend__bytecode__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_arg_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_code_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_dir_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_is_func_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_label_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_module_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_pred_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_proc_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_temp_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_test_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_tree_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_var_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_var_info_0);
	}
}


void mercury__bytecode_backend__bytecode__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__bytecode_backend__bytecode__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__bytecode_backend__bytecode);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__bytecode_backend__bytecode__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__bytecode_backend__bytecode__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
