/*
** Automatically generated from `bytecode.m'
** by the Mercury compiler,
** version rotd-2009-11-10, configured for i686-pc-linux-gnu.
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
INIT mercury__bytecode_backend__bytecode__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "bytecode_backend.bytecode.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "bytecode_backend.bytecode.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "bytecode_backend.bytecode.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "bytecode_backend.bytecode.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "bytecode_backend.bytecode.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "bytecode_backend.bytecode.c"
#line 48 "bytecode_backend.bytecode.c"
#include "bytecode_backend.bytecode.mh"

#line 51 "bytecode_backend.bytecode.c"
#line 52 "bytecode_backend.bytecode.c"
#ifndef BYTECODE_BACKEND__BYTECODE_DECL_GUARD
#define BYTECODE_BACKEND__BYTECODE_DECL_GUARD

#line 56 "bytecode_backend.bytecode.c"
#line 57 "bytecode_backend.bytecode.c"

#endif
#line 60 "bytecode_backend.bytecode.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_1 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
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

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_0[];

MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_1[];

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
MR_decl_label7(bytecode_backend__bytecode__debug_arg_3_0, 4,5,13,8,9,10,11)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 158,88,89,90,159,93,94,95,96,97)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 98,99,135,164,174,7,8,9,176,12)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 13,175,16,17,177,20,172,23,24,25)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 26,168,29,30,32,169,36,37,39,40)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 166,43,44,45,48,167,51,52,53,54)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 162,81,82,163,160,102,161,105,107,109)
MR_decl_label10(bytecode_backend__bytecode__debug_args_3_0, 173,113,114,115,117,171,170,124,165,129)
MR_decl_label2(bytecode_backend__bytecode__debug_args_3_0, 130,157)
MR_decl_label10(bytecode_backend__bytecode__debug_binop_3_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(bytecode_backend__bytecode__debug_binop_3_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(bytecode_backend__bytecode__debug_binop_3_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label10(bytecode_backend__bytecode__debug_binop_3_0, 33,34,35,36,37,38,39,40,41,43)
MR_decl_label10(bytecode_backend__bytecode__debug_bytecode_file_4_0, 2,5,6,7,8,9,10,4,12,13)
MR_decl_label4(bytecode_backend__bytecode__debug_bytecode_file_4_0, 14,15,16,17)
MR_decl_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0, 59,47,33,34,50,5,6,7,8,9)
MR_decl_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0, 10,11,12,13,14,15,16,17,18,19)
MR_decl_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0, 20,21,22,23,24,25,26,27,28,29)
MR_decl_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0, 30,31,32,35,36,37,38,39,40,41)
MR_decl_label9(bytecode_backend__bytecode__debug_bytecode_list_3_0, 42,43,44,45,46,51,52,53,61)
MR_decl_label10(bytecode_backend__bytecode__debug_cons_id_3_0, 47,45,68,17,18,19,20,69,26,70)
MR_decl_label10(bytecode_backend__bytecode__debug_cons_id_3_0, 3,4,5,6,7,8,9,11,12,63)
MR_decl_label10(bytecode_backend__bytecode__debug_cons_id_3_0, 22,23,28,29,30,31,32,33,35,36)
MR_decl_label4(bytecode_backend__bytecode__debug_cons_id_3_0, 38,39,40,41)
MR_decl_label3(bytecode_backend__bytecode__debug_cstring_3_0, 2,3,4)
MR_decl_label1(bytecode_backend__bytecode__debug_determinism_3_0, 3)
MR_decl_label1(bytecode_backend__bytecode__debug_float_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode__debug_int_3_0, 2)
MR_decl_label3(bytecode_backend__bytecode__debug_is_func_3_0, 2,8,6)
MR_decl_label1(bytecode_backend__bytecode__debug_label_id_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode__debug_length_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode__debug_pred_id_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode__debug_proc_id_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode__debug_string_3_0, 2)
MR_decl_label4(bytecode_backend__bytecode__debug_sym_name_3_0, 3,6,7,8)
MR_decl_label10(bytecode_backend__bytecode__debug_tag_3_0, 8,22,23,18,19,20,28,12,13,14)
MR_decl_label5(bytecode_backend__bytecode__debug_tag_3_0, 15,3,4,5,6)
MR_decl_label1(bytecode_backend__bytecode__debug_temp_3_0, 2)
MR_decl_label7(bytecode_backend__bytecode__debug_test_id_3_0, 3,6,9,12,15,18,19)
MR_decl_label1(bytecode_backend__bytecode__debug_unop_3_0, 3)
MR_decl_label1(bytecode_backend__bytecode__debug_var_3_0, 2)
MR_decl_label8(bytecode_backend__bytecode__debug_var_dirs_3_0, 35,4,5,7,10,13,14,37)
MR_decl_label4(bytecode_backend__bytecode__debug_var_infos_3_0, 11,4,5,13)
MR_decl_label4(bytecode_backend__bytecode__debug_vars_3_0, 11,4,5,13)
MR_decl_label5(bytecode_backend__bytecode__output_arg_3_0, 4,9,10,6,7)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 159,88,89,90,160,93,94,95,96,97)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 98,99,136,165,175,7,8,9,177,12)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 13,176,16,17,178,20,173,23,24,25)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 26,169,29,30,32,170,36,37,39,40)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 167,43,44,45,48,168,51,52,53,54)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 163,81,82,164,161,102,162,105,107,108)
MR_decl_label10(bytecode_backend__bytecode__output_args_3_0, 110,174,114,115,116,118,172,171,125,166)
MR_decl_label3(bytecode_backend__bytecode__output_args_3_0, 130,131,158)
MR_decl_label10(bytecode_backend__bytecode__output_binop_3_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(bytecode_backend__bytecode__output_binop_3_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(bytecode_backend__bytecode__output_binop_3_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label9(bytecode_backend__bytecode__output_binop_3_0, 33,34,35,36,37,38,39,40,41)
MR_decl_label10(bytecode_backend__bytecode__output_bytecode_file_4_0, 2,5,6,7,8,9,10,4,12,13)
MR_decl_label2(bytecode_backend__bytecode__output_bytecode_file_4_0, 14,15)
MR_decl_label10(bytecode_backend__bytecode__output_bytecode_list_3_0, 58,47,33,34,50,5,6,7,8,9)
MR_decl_label10(bytecode_backend__bytecode__output_bytecode_list_3_0, 10,11,12,13,14,15,16,17,18,19)
MR_decl_label10(bytecode_backend__bytecode__output_bytecode_list_3_0, 20,21,22,23,24,25,26,27,28,29)
MR_decl_label10(bytecode_backend__bytecode__output_bytecode_list_3_0, 30,31,32,35,36,37,38,39,40,41)
MR_decl_label8(bytecode_backend__bytecode__output_bytecode_list_3_0, 42,43,44,45,46,51,52,60)
MR_decl_label10(bytecode_backend__bytecode__output_cons_id_3_0, 43,38,40,41,10,11,12,13,14,19)
MR_decl_label10(bytecode_backend__bytecode__output_cons_id_3_0, 20,47,3,4,6,7,8,16,17,22)
MR_decl_label10(bytecode_backend__bytecode__output_cons_id_3_0, 23,24,25,26,27,29,30,32,33,34)
MR_decl_label1(bytecode_backend__bytecode__output_cons_id_3_0, 35)
MR_decl_label2(bytecode_backend__bytecode__output_is_func_3_0, 17,2)
MR_decl_label1(bytecode_backend__bytecode__output_module_id_3_0, 2)
MR_decl_label9(bytecode_backend__bytecode__output_tag_3_0, 6,34,35,13,36,9,10,3,4)
MR_decl_label6(bytecode_backend__bytecode__output_test_id_3_0, 3,5,7,9,11,13)
MR_decl_label6(bytecode_backend__bytecode__output_var_dirs_3_0, 28,4,6,8,10,30)
MR_decl_label3(bytecode_backend__bytecode__output_var_infos_3_0, 10,4,12)
MR_decl_label3(bytecode_backend__bytecode__output_vars_3_0, 10,4,12)
MR_decl_label4(__Unify___bytecode_backend__bytecode__byte_arg_0_0, 9,7,13,1)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0, 91,93,124,5,7,9,11,13,15,17)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0, 19,23,25,27,31,33,35,37,42,44)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0, 49,51,55,57,59,63,65,70,75,77)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0, 79,81,83,85,87,89,97,99,101,103)
MR_decl_label9(__Unify___bytecode_backend__bytecode__byte_code_0_0, 105,108,110,113,115,118,119,125,1)
MR_decl_label10(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0, 35,13,15,21,39,5,7,9,11,19)
MR_decl_label7(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0, 23,25,27,29,31,40,1)
MR_decl_label7(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0, 7,12,10,17,5,19,1)
MR_decl_label2(__Unify___bytecode_backend__bytecode__byte_var_info_0_0, 6,1)
MR_decl_label10(__Index___bytecode_backend__bytecode__byte_code_0_0, 45,31,32,48,3,4,5,6,7,8)
MR_decl_label10(__Index___bytecode_backend__bytecode__byte_code_0_0, 9,10,11,12,13,14,15,16,17,18)
MR_decl_label10(__Index___bytecode_backend__bytecode__byte_code_0_0, 19,20,21,22,23,24,25,26,27,28)
MR_decl_label10(__Index___bytecode_backend__bytecode__byte_code_0_0, 29,30,33,34,35,36,37,38,39,40)
MR_decl_label4(__Index___bytecode_backend__bytecode__byte_code_0_0, 41,42,43,44)
MR_decl_label7(__Compare___bytecode_backend__bytecode__byte_arg_0_0, 3,2,21,13,49,18,16)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 4,5,6,7,204,207,211,215,222,225)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 229,233,237,241,331,10,13,18,21,25)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 29,36,39,43,49,52,56,62,65,70)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 73,77,81,85,93,96,100,107,110,114)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 121,124,128,134,137,140,144,150,153,159)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 165,168,171,174,177,180,183,186,190,196)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 199,250,253,258,261,265,271,275,278,282)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0, 286,293,297,300,305,308,314,315,318,322)
MR_decl_label2(__Compare___bytecode_backend__bytecode__byte_code_0_0, 8,336)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 238,216,246,220,221,233,247,237,51,79)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 55,57,61,65,83,102,115,108,119,242)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 5,28,32,9,13,33,46,50,36,84)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 97,101,89,120,153,359,157,127,129,133)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0, 137,141,158,175,176,203,185,187,191,243)
MR_decl_label10(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0, 18,21,28,66,72,77,114,48,53,55)
MR_decl_label6(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0, 82,36,5,93,7,84)
MR_decl_label4(__Compare___bytecode_backend__bytecode__byte_var_info_0_0, 3,2,5,21)
MR_decl_static(bytecode_backend__bytecode__output_var_infos_3_0)
MR_decl_static(bytecode_backend__bytecode__output_determinism_3_0)
MR_decl_static(fn__bytecode_backend__bytecode__this_file_0_0)
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
MR_decl_static(bytecode_backend__bytecode__IntroducedFrom__pred__output_args__267__1_2_0)
MR_decl_static(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0)
MR_def_extern_entry(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_1 mercury_common_1[1] =
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
static const struct mercury_type_2 mercury_common_2[1] =
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
static const struct mercury_type_3 mercury_common_3[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__bytecode_backend__bytecode__output_args_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,0),
MR_COMMON(2,0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__bytecode_backend__bytecode__debug_args_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_5 mercury_common_5[1] =
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

static const struct mercury_type_6 mercury_common_6[1] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(bytecode_backend__bytecode__debug_cons_id_3_0),
0
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[8] =
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

static const struct mercury_type_0 mercury_vector_common_0_1[9] =
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
5
},
{
3
},
{
4
},
{
6
},
{
7
},
{
8
},
};

static const struct mercury_type_4 mercury_vector_common_4_0[8] =
{
{
MR_string_const("det", 3)
},
{
MR_string_const("semidet", 7)
},
{
MR_string_const("multidet", 8)
},
{
MR_string_const("nondet", 6)
},
{
MR_string_const("cc_multidet", 11)
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

static const struct mercury_type_4 mercury_vector_common_4_1[9] =
{
{
MR_string_const("mktag", 5)
},
{
MR_string_const("tag", 3)
},
{
MR_string_const("unmktag", 7)
},
{
MR_string_const("strip_tag", 9)
},
{
MR_string_const("mkbody", 6)
},
{
MR_string_const("unmkbody", 8)
},
{
MR_string_const("hash_string", 11)
},
{
MR_string_const("bitwise_complement", 18)
},
{
MR_string_const("not", 3)
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
	13,
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
399,
"d12;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__bytecode_backend__bytecode__output_args_3_0_1 = {
{
MR_PREDICATE,
"bytecode_backend.bytecode",
"bytecode_backend.bytecode",
"lambda_bytecode_m_267",
2,
0
},
"bytecode_backend.bytecode",
"bytecode.m",
267,
"d12;c5;"
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
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_determinism'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_determinism_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module2)
	MR_init_entry1(fn__bytecode_backend__bytecode__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__bytecode_backend__bytecode__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bytecode_backend__bytecode__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode.m", 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module3)
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
	MR_r1 = (MR_Word) MR_string_const("bytecode.m", 10);
	MR_r2 = (MR_Word) MR_string_const("output_is_func: invalid predicate or function specified in bytecode", 67);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__bytecode_data__output_short_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module4)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module5)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module6)
	MR_init_entry1(bytecode_backend__bytecode__output_arg_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_arg_3_0);
	MR_init_label5(bytecode_backend__bytecode__output_arg_3_0,4,9,10,6,7)
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_arg_3_0_i6);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_arg_3_0_i9);
	}
	MR_sv(1) = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_arg_3_0_i4);
MR_def_label(bytecode_backend__bytecode__output_arg_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_float_3_0);
MR_def_label(bytecode_backend__bytecode__output_arg_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_arg_3_0_i10);
MR_def_label(bytecode_backend__bytecode__output_arg_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_short_3_0);
MR_def_label(bytecode_backend__bytecode__output_arg_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module7)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module8)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module9)
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module10)
	MR_init_entry1(bytecode_backend__bytecode__output_test_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_test_id_3_0);
	MR_init_label6(bytecode_backend__bytecode__output_test_id_3_0,3,5,7,9,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_test_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_test_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(bytecode_backend__bytecode__output_test_id_3_0_i11) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_test_id_3_0_i3) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_test_id_3_0_i13) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_test_id_3_0_i9) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_test_id_3_0_i7) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_test_id_3_0_i5));
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_test_id_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module11)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module12)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module13)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module14)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module15)
	MR_init_entry1(bytecode_backend__bytecode__output_tag_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_tag_3_0);
	MR_init_label9(bytecode_backend__bytecode__output_tag_3_0,6,34,35,13,36,9,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_tag'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_tag_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(bytecode_backend__bytecode__output_tag_3_0_i6) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_tag_3_0_i34) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_tag_3_0_i35) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_tag_3_0_i36));
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i4);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i13);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i10);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_tfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_tag_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i9);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i10);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_int_3_0);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_tag_3_0_i4);
MR_def_label(bytecode_backend__bytecode__output_tag_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(char__to_int_2_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module16)
	MR_init_entry1(bytecode_backend__bytecode__output_cons_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_cons_id_3_0);
	MR_init_label10(bytecode_backend__bytecode__output_cons_id_3_0,43,38,40,41,10,11,12,13,14,19)
	MR_init_label10(bytecode_backend__bytecode__output_cons_id_3_0,20,47,3,4,6,7,8,16,17,22)
	MR_init_label10(bytecode_backend__bytecode__output_cons_id_3_0,23,24,25,26,27,29,30,32,33,34)
	MR_init_label1(bytecode_backend__bytecode__output_cons_id_3_0,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_cons_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_cons_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(bytecode_backend__bytecode__output_cons_id_3_0_i43) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_cons_id_3_0_i10) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_cons_id_3_0_i19) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_cons_id_3_0_i47));
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_cons_id_3_0_i40);
	}
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode__this_file_0_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i38);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bytecode for type_info_cell_constructor not yet implemented.", 60);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode__this_file_0_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i41);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bytecode for typeclass_info_cell_constructor not yet implemented.", 65);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i11);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_module_id_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i12);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_string_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i13);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_short_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i14);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_tag_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i20);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_int_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(bytecode_backend__bytecode__output_cons_id_3_0_i29) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_cons_id_3_0_i16) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_cons_id_3_0_i6) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_cons_id_3_0_i22) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_cons_id_3_0_i32) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_cons_id_3_0_i3));
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode__this_file_0_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i4);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bytecode for typeclass not yet implemented.", 43);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 7;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i7);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(char__to_int_2_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i8);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i17);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_float_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_r1 = (MR_Integer) 4;
	}
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i23);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_module_id_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i24);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_pred_id_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i25);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i26);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_is_func_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i27);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_proc_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i30);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_string_3_0);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_byte_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i33);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_module_id_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i34);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_string_3_0,
		bytecode_backend__bytecode__output_cons_id_3_0_i35);
MR_def_label(bytecode_backend__bytecode__output_cons_id_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module17)
	MR_init_entry1(bytecode_backend__bytecode__output_binop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_binop_3_0);
	MR_init_label10(bytecode_backend__bytecode__output_binop_3_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(bytecode_backend__bytecode__output_binop_3_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(bytecode_backend__bytecode__output_binop_3_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label9(bytecode_backend__bytecode__output_binop_3_0,33,34,35,36,37,38,39,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_binop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_binop_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_binop_3_0_i3);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i21) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i29) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i28) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i22) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i27) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i39) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i40) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i4) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i5) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i6) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i30) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i31) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i10) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i32) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i7) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i33) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i38) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i37) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i35) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i36) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i34) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i26) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i24) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i25) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i23) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i41) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i19) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i17) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i20) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i11) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i12) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i18) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i16) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i14) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i15) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i13) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i8) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_binop_3_0_i9));
	}
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 35;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 37;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 38;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 29;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 33;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 31;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 26;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 30;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 25;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 27;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 24;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 23;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
MR_def_label(bytecode_backend__bytecode__output_binop_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 36;
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module18)
	MR_init_entry1(bytecode_backend__bytecode__output_unop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_unop_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_unop'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_unop_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_byte_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(libs__compiler_util__expect_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module19)
	MR_init_entry1(bytecode_backend__bytecode__output_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_args_3_0);
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,159,88,89,90,160,93,94,95,96,97)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,98,99,136,165,175,7,8,9,177,12)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,13,176,16,17,178,20,173,23,24,25)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,26,169,29,30,32,170,36,37,39,40)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,167,43,44,45,48,168,51,52,53,54)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,163,81,82,164,161,102,162,105,107,108)
	MR_init_label10(bytecode_backend__bytecode__output_args_3_0,110,174,114,115,116,118,172,171,125,166)
	MR_init_label3(bytecode_backend__bytecode__output_args_3_0,130,131,158)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__output_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i158) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i159) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i160) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i136));
MR_def_label(bytecode_backend__bytecode__output_args_3_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_pred_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i88);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i89);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_is_func_3_0,
		bytecode_backend__bytecode__output_args_3_0_i90);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_length_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 5);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_proc_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i93);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_determinism_3_0,
		bytecode_backend__bytecode__output_args_3_0_i94);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i95);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_label_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i96);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i97);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_var_info);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__output_args_3_0_i98);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i99);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_var_infos_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i118) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i118) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i118) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i118) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i161) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i162) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i118) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i163) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i110) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i118) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i110) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i164) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i110) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i110) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i110) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i165) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i166) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i167) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i168) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i169) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i170) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i171) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i172) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i173) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i174) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i175) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i176) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i177) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i178) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_args_3_0_i48));
MR_def_label(bytecode_backend__bytecode__output_args_3_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i125);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_binop_3_0,
		bytecode_backend__bytecode__output_args_3_0_i7);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_arg_3_0,
		bytecode_backend__bytecode__output_args_3_0_i8);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_arg_3_0,
		bytecode_backend__bytecode__output_args_3_0_i9);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_var_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_binop_3_0,
		bytecode_backend__bytecode__output_args_3_0_i12);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_arg_3_0,
		bytecode_backend__bytecode__output_args_3_0_i13);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_arg_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_unop_3_0,
		bytecode_backend__bytecode__output_args_3_0_i16);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_arg_3_0,
		bytecode_backend__bytecode__output_args_3_0_i17);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_var_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_unop_3_0,
		bytecode_backend__bytecode__output_args_3_0_i20);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_arg_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_module_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i23);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_pred_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i24);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i25);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_is_func_3_0,
		bytecode_backend__bytecode__output_args_3_0_i26);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_proc_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i29);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_cons_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i30);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__output_args_3_0_i32);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i40);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i36);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_cons_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i37);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__output_args_3_0_i39);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i40);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_var_dirs_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i43);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_cons_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i44);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__output_args_3_0_i45);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i54);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(backend_libs__bytecode_data__output_short_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_cons_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i52);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__output_args_3_0_i53);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i54);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_vars_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_label_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i81);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_label_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i82);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_temp_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_temp_3_0,
		bytecode_backend__bytecode__output_args_3_0_i102);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i102);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_cons_id_3_0,
		bytecode_backend__bytecode__output_args_3_0_i105);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(bytecode_backend__bytecode__IntroducedFrom__pred__output_args__267__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode__this_file_0_0,
		bytecode_backend__bytecode__output_args_3_0_i107);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("output_args: OtherConsIds", 25);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		bytecode_backend__bytecode__output_args_3_0_i108);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_temp_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i114);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i115);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_length_3_0,
		bytecode_backend__bytecode__output_args_3_0_i116);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_determinism_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_0,
		bytecode_backend__bytecode__output_args_3_0_i125);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_0,
		bytecode_backend__bytecode__output_args_3_0_i125);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_var_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i130);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_var_3_0,
		bytecode_backend__bytecode__output_args_3_0_i131);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__output_test_id_3_0);
MR_def_label(bytecode_backend__bytecode__output_args_3_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_byte_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module20)
	MR_init_entry1(bytecode_backend__bytecode__output_bytecode_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__output_bytecode_list_3_0);
	MR_init_label10(bytecode_backend__bytecode__output_bytecode_list_3_0,58,47,33,34,50,5,6,7,8,9)
	MR_init_label10(bytecode_backend__bytecode__output_bytecode_list_3_0,10,11,12,13,14,15,16,17,18,19)
	MR_init_label10(bytecode_backend__bytecode__output_bytecode_list_3_0,20,21,22,23,24,25,26,27,28,29)
	MR_init_label10(bytecode_backend__bytecode__output_bytecode_list_3_0,30,31,32,35,36,37,38,39,40,41)
	MR_init_label8(bytecode_backend__bytecode__output_bytecode_list_3_0,42,43,44,45,46,51,52,60)
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
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i60);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i47) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i33) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i34) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i50));
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i22) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i23) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i18) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i24) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i19) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i20) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i44) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i45) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i38) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i41));
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r3, 0),
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i40) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i29) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i28) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i17) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i35) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i36) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i25) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i31) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i37) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i26) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i30) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i32) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i21) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i27) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i16) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i5) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i46) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i13) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i15) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i11) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i12) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i43) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i42) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i10) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i39) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i6) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i8) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i7) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i9) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__output_bytecode_list_3_0_i14));
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 21;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 31;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 33;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 34;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 29;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 25;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 26;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 23;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 38;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 24;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 20;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 8;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 6;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 16;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 18;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 3;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 12;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 15;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 19;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 7;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 5;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 13;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 17;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 11;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 14;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 37;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 30;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 4;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 39;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 28;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 27;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 35;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 36;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Integer) 22;
	MR_np_call_localret_ent(io__write_byte_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_args_3_0,
		bytecode_backend__bytecode__output_bytecode_list_3_0_i52);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(bytecode_backend__bytecode__output_bytecode_list_3_0_i58);
MR_def_label(bytecode_backend__bytecode__output_bytecode_list_3_0,60)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module21)
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
	MR_sv(2) = MR_r2;
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
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i6);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
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
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(backend_libs__bytecode_data__output_short_3_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i13);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__output_bytecode_list_3_0,
		bytecode_backend__bytecode__output_bytecode_file_4_0_i14);
MR_def_label(bytecode_backend__bytecode__output_bytecode_file_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module22)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module23)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module24)
	MR_init_entry1(bytecode_backend__bytecode__debug_determinism_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_determinism_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_determinism_3_0,3)
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_determinism_3_0_i3);
MR_def_label(bytecode_backend__bytecode__debug_determinism_3_0,3)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module25)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module26)
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
	MR_r1 = (MR_Word) MR_string_const("bytecode.m", 10);
	MR_r2 = (MR_Word) MR_string_const("debug_is_func: invalid predicate or function specifier in bytecode.", 67);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module27)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module28)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module29)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module30)
	MR_init_entry1(bytecode_backend__bytecode__debug_arg_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_arg_3_0);
	MR_init_label7(bytecode_backend__bytecode__debug_arg_3_0,4,5,13,8,9,10,11)
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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_arg_3_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_arg_3_0_i13);
	}
	MR_sv(1) = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_string_const("float", 5);
	}
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
		bytecode_backend__bytecode__debug_arg_3_0_i11);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("var", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i9);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i9);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i10);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_arg_3_0_i11);
MR_def_label(bytecode_backend__bytecode__debug_arg_3_0,11)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module31)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module32)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module33)
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module34)
	MR_init_entry1(bytecode_backend__bytecode__debug_test_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_test_id_3_0);
	MR_init_label7(bytecode_backend__bytecode__debug_test_id_3_0,3,6,9,12,15,18,19)
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(bytecode_backend__bytecode__debug_test_id_3_0_i15) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_test_id_3_0_i3) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_test_id_3_0_i18) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_test_id_3_0_i12) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_test_id_3_0_i9) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_test_id_3_0_i6));
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i19);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dummy", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i19);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("enum", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i19);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i19);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i19);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("string", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_test_id_3_0_i19);
MR_def_label(bytecode_backend__bytecode__debug_test_id_3_0,19)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module35)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module36)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module37)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module38)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module39)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module40)
	MR_init_entry1(bytecode_backend__bytecode__debug_tag_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_tag_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_tag_3_0,8,22,23,18,19,20,28,12,13,14)
	MR_init_label5(bytecode_backend__bytecode__debug_tag_3_0,15,3,4,5,6)
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
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(bytecode_backend__bytecode__debug_tag_3_0_i8) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_tag_3_0_i22) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_tag_3_0_i18) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_tag_3_0_i28));
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("no_tag", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i6);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("unshared_tag", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i23);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_int_3_0);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("shared_remote_tag", 17);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i19);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_int_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i20);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_int_3_0);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_tag_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_string_const("shared_local_tag", 16);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i12);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i14);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i15);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i6);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enum_tag", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i4);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i5);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		bytecode_backend__bytecode__debug_tag_3_0_i6);
MR_def_label(bytecode_backend__bytecode__debug_tag_3_0,6)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module41)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module42)
	MR_init_entry1(bytecode_backend__bytecode__debug_cons_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_cons_id_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_cons_id_3_0,47,45,68,17,18,19,20,69,26,70)
	MR_init_label10(bytecode_backend__bytecode__debug_cons_id_3_0,3,4,5,6,7,8,9,11,12,63)
	MR_init_label10(bytecode_backend__bytecode__debug_cons_id_3_0,22,23,28,29,30,31,32,33,35,36)
	MR_init_label4(bytecode_backend__bytecode__debug_cons_id_3_0,38,39,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_cons_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_cons_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(bytecode_backend__bytecode__debug_cons_id_3_0_i47) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_cons_id_3_0_i68) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_cons_id_3_0_i69) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_cons_id_3_0_i70));
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_cons_id_3_0_i45);
	}
	MR_r1 = (MR_Word) MR_string_const("type_info_cell_constructor", 26);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_string_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typeclass_info_cell_constructor", 31);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_string_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("functor", 7);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i17);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_sym_name_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i18);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i19);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_int_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i20);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_tag_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("int_const", 9);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i26);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_int_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(bytecode_backend__bytecode__debug_cons_id_3_0_i35) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_cons_id_3_0_i22) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_cons_id_3_0_i11) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_cons_id_3_0_i28) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_cons_id_3_0_i38) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_cons_id_3_0_i3));
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_string_const("base_typeclass_info_const", 25);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i4);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_module_id_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i5);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("class_id", 8);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i6);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_sym_name_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i7);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i8);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_int_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i9);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_string_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("char_const", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i12);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__from_char_list_2_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i63);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_string_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("float_const", 11);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i23);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_float_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_r1 = (MR_Word) MR_string_const("pred_const", 10);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i29);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_module_id_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i30);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_pred_id_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i31);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i32);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_is_func_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i33);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_proc_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("string_const", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i36);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_cstring_3_0);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("type_ctor_info_const", 20);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i39);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_module_id_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i40);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_cons_id_3_0_i41);
MR_def_label(bytecode_backend__bytecode__debug_cons_id_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module43)
	MR_init_entry1(bytecode_backend__bytecode__debug_binop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_binop_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_binop_3_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(bytecode_backend__bytecode__debug_binop_3_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(bytecode_backend__bytecode__debug_binop_3_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label10(bytecode_backend__bytecode__debug_binop_3_0,33,34,35,36,37,38,39,40,41,43)
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r3 = MR_tag(MR_tempr1);
	if ((MR_r3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_binop_3_0_i3);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i21) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i29) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i28) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i22) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i27) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i39) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i40) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i4) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i5) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i6) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i30) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i31) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i10) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i32) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i7) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i33) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i38) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i37) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i35) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i36) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i34) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i26) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i24) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i25) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i23) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i41) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i19) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i17) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i20) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i11) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i12) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i18) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i16) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i14) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i15) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i13) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i8) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_binop_3_0_i9));
	}
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("array_index", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("|", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("^", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("body", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("compound_eq", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("compound_lt", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("eq", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float_divide", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float_eq", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float_ge", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float_gt", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float_le", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float_lt", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float_minus", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float_ne", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float_plus", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float_times", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("+", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(">=", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<=", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mod", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("*", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("and", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("or", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ne", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("str_eq", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("str_ge", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("str_gt", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("str_le", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("str_lt", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("str_ne", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<<", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(">>", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unsigned_le", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_binop_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_binop_3_0,43)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module44)
	MR_init_entry1(bytecode_backend__bytecode__debug_unop_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_unop_3_0);
	MR_init_label1(bytecode_backend__bytecode__debug_unop_3_0,3)
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_1, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_unop_3_0_i3);
MR_def_label(bytecode_backend__bytecode__debug_unop_3_0,3)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module45)
	MR_init_entry1(bytecode_backend__bytecode__debug_args_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_args_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,158,88,89,90,159,93,94,95,96,97)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,98,99,135,164,174,7,8,9,176,12)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,13,175,16,17,177,20,172,23,24,25)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,26,168,29,30,32,169,36,37,39,40)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,166,43,44,45,48,167,51,52,53,54)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,162,81,82,163,160,102,161,105,107,109)
	MR_init_label10(bytecode_backend__bytecode__debug_args_3_0,173,113,114,115,117,171,170,124,165,129)
	MR_init_label2(bytecode_backend__bytecode__debug_args_3_0,130,157)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_args'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__debug_args_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i157) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i158) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i159) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i135));
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_pred_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i88);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i89);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_is_func_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i90);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_length_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 5);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_proc_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i93);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_determinism_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i94);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i95);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_label_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i96);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i97);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_var_info);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__debug_args_3_0_i98);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i99);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_var_infos_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i117) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i117) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i117) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i117) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i160) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i161) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i117) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i162) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i109) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i117) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i109) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i163) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i109) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i109) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i109) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i164) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i165) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i166) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i167) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i168) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i169) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i170) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i171) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i172) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i173) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i174) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i175) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i176) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i177) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_args_3_0_i48));
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i124);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_binop_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i7);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_arg_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i8);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_arg_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i9);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_var_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_binop_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i12);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_arg_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i13);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_arg_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_unop_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i16);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_arg_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i17);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_var_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_unop_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i20);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_arg_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_module_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i23);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_pred_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i24);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i25);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_is_func_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i26);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_proc_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i29);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_cons_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i30);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__debug_args_3_0_i32);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i40);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i36);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_cons_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i37);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__debug_args_3_0_i39);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i40);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_var_dirs_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i43);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_cons_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i44);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__debug_args_3_0_i45);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i54);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_int_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_cons_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i52);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode__debug_args_3_0_i53);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i54);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_vars_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_label_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i81);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_label_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i82);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_temp_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_temp_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i102);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i102);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_cons_id_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i105);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_2,
		bytecode_backend__bytecode__debug_args_3_0_i107);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_temp_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i113);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i114);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_length_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i115);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_determinism_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_label_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0,
		bytecode_backend__bytecode__debug_args_3_0_i124);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_0,
		bytecode_backend__bytecode__debug_args_3_0_i124);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_var_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i129);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_var_3_0,
		bytecode_backend__bytecode__debug_args_3_0_i130);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode__debug_test_id_3_0);
MR_def_label(bytecode_backend__bytecode__debug_args_3_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module46)
	MR_init_entry1(bytecode_backend__bytecode__debug_bytecode_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__debug_bytecode_list_3_0);
	MR_init_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0,59,47,33,34,50,5,6,7,8,9)
	MR_init_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0,10,11,12,13,14,15,16,17,18,19)
	MR_init_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0,20,21,22,23,24,25,26,27,28,29)
	MR_init_label10(bytecode_backend__bytecode__debug_bytecode_list_3_0,30,31,32,35,36,37,38,39,40,41)
	MR_init_label9(bytecode_backend__bytecode__debug_bytecode_list_3_0,42,43,44,45,46,51,52,53,61)
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
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i61);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i47) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i33) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i34) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i50));
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i22) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i23) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i18) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i24) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i19) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i20) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i44) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i45) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i38) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i41));
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_pred", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_proc", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r3, 0),
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i40) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i29) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i28) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i17) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i35) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i36) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i25) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i31) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i37) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i26) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i30) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i32) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i21) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i27) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i16) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i5) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i46) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i13) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i15) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i11) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i12) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i43) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i42) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i10) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i39) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i6) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i8) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i7) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i9) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode__debug_bytecode_list_3_0_i14));
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("assign", 6);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("builtin_binop", 13);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("builtin_bintest", 15);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("builtin_unop", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("builtin_untest", 14);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("call", 4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("complex_construct", 17);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("complex_deconstruct", 19);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("construct", 9);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("context", 7);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("deconstruct", 11);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_commit", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_disjunct", 14);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_disjunction", 17);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_if", 8);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_negation", 14);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_negation_goal", 19);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_pred", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_proc", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_switch", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_switch_arm", 16);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("endof_then", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_commit", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_disjunct", 14);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_disjunction", 17);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_else", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_if", 8);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_negation", 14);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_switch", 12);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_switch_arm", 16);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("enter_then", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("fail", 4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("higher_order_call", 17);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("label", 5);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("not_supported", 13);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("pickup_arg", 10);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("place_arg", 9);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("semidet_succeed", 15);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("semidet_success_check", 21);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("test", 4);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i51);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_args_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i52);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		bytecode_backend__bytecode__debug_bytecode_list_3_0_i53);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(bytecode_backend__bytecode__debug_bytecode_list_3_0_i59);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_list_3_0,61)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module47)
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
	MR_sv(2) = MR_r2;
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
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i6);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
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
	MR_sv(3) = MR_r1;
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
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode__debug_bytecode_list_3_0,
		bytecode_backend__bytecode__debug_bytecode_file_4_0_i16);
MR_def_label(bytecode_backend__bytecode__debug_bytecode_file_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module48)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_arg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_arg_0_0);
	MR_init_label4(__Unify___bytecode_backend__bytecode__byte_arg_0_0,9,7,13,1)
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
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	MR_r1 = MR_tempr3;
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i7);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_tempr4));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_arg_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_arg_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_arg_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_arg_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module49)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_arg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_arg_0_0);
	MR_init_label7(__Compare___bytecode_backend__bytecode__byte_arg_0_0,3,2,21,13,49,18,16)
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
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i13);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i21);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i18);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i18);
	}
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i49);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i16);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_arg_0_0_i18);
	}
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_arg_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___backend_libs__builtin_ops__binary_op_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module50)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_code_0_0);
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0,91,93,124,5,7,9,11,13,15,17)
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0,19,23,25,27,31,33,35,37,42,44)
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0,49,51,55,57,59,63,65,70,75,77)
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_code_0_0,79,81,83,85,87,89,97,99,101,103)
	MR_init_label9(__Unify___bytecode_backend__bytecode__byte_code_0_0,105,108,110,113,115,118,119,125,1)
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
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i125);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i118) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i91) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i93) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i124));
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i110) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i83) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i81) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i65) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i97) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i99) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i75) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i87) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i105) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i77) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i85) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i89) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i70) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i79) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i63) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i119) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i49) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i57) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i35) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i42) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i115) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i113) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i31) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i108) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i27) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_code_0_0_i55));
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__builtin_ops__binary_op_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_arg_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i11);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_arg_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i13);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i17);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___bytecode_backend__bytecode__byte_arg_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i19);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___bytecode_backend__bytecode__byte_arg_0_0);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i25);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i33);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(5)) != 0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i37);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i44);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i51);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,51)
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i59);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,59)
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i101);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___bytecode_backend__bytecode__byte_code_0_0_i103);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_code_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,119)
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
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_code_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module51)
	MR_init_entry1(__Index___bytecode_backend__bytecode__byte_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___bytecode_backend__bytecode__byte_code_0_0);
	MR_init_label10(__Index___bytecode_backend__bytecode__byte_code_0_0,45,31,32,48,3,4,5,6,7,8)
	MR_init_label10(__Index___bytecode_backend__bytecode__byte_code_0_0,9,10,11,12,13,14,15,16,17,18)
	MR_init_label10(__Index___bytecode_backend__bytecode__byte_code_0_0,19,20,21,22,23,24,25,26,27,28)
	MR_init_label10(__Index___bytecode_backend__bytecode__byte_code_0_0,29,30,33,34,35,36,37,38,39,40)
	MR_init_label4(__Index___bytecode_backend__bytecode__byte_code_0_0,41,42,43,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___bytecode_backend__bytecode__byte_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i45) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i31) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i32) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i48));
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i42) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i43) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i36) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i39));
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i38) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i27) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i26) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i33) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i34) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i29) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i35) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i28) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i30) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i25) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i44) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i41) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i40) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i37) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___bytecode_backend__bytecode__byte_code_0_0_i12));
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 33;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 35;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 36;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 40;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 39;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 37;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 38;
	MR_proceed();
MR_def_label(__Index___bytecode_backend__bytecode__byte_code_0_0,44)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module52)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_code_0_0);
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,4,5,6,7,204,207,211,215,222,225)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,229,233,237,241,331,10,13,18,21,25)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,29,36,39,43,49,52,56,62,65,70)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,73,77,81,85,93,96,100,107,110,114)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,121,124,128,134,137,140,144,150,153,159)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,165,168,171,174,177,180,183,186,190,196)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,199,250,253,258,261,265,271,275,278,282)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_code_0_0,286,293,297,300,305,308,314,315,318,322)
	MR_init_label2(__Compare___bytecode_backend__bytecode__byte_code_0_0,8,336)
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
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i314);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___bytecode_backend__bytecode__byte_code_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i4);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___bytecode_backend__bytecode__byte_code_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i5);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i314) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i204) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i222) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i331));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i207);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i211);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i215);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(2, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(2, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(2, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(2, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(2, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i225);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i229);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i233);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i237);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i241);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_var_info);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i293) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i177) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i174) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i250) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i258) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i183) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i271) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i168) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i180) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i196) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i159) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i171) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i150) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i315) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i137) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i93) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i107) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i305) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i297) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i70) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i275) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i36) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i62) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_code_0_0_i134));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i13);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__builtin_ops__binary_op_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i21);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i25);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i29);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___backend_libs__builtin_ops__binary_op_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i39);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i43);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i52);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i56);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i65);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___bytecode_backend__bytecode__byte_arg_0_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i73);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i77);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i81);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i85);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i96);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i100);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i110);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i114);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i124);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i128);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i140);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i144);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i186);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i190);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i199);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i253);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i261);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i265);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i278);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i282);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i286);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,286)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i300);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i308);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i318);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_code_0_0_i322);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_code_0_0_i336);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_code_0_0,336)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__class_id_0_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_module53)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_init_label10(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,35,13,15,21,39,5,7,9,11,19)
	MR_init_label7(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,23,25,27,29,31,40,1)
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
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i40);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i35) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i21) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i39));
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 3);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i15);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(4)) != 0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i27) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i29) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i5));
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i7);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__class_id_0_0,
		__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(4)) == 0);
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_word_to_float(MR_tempr1) == MR_word_to_float(MR_tempr2));
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i25);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(5)) != 0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i31);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(3)) != 0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_id_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module54)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_cons_id_0_0);
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,238,216,246,220,221,233,247,237,51,79)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,55,57,61,65,83,102,115,108,119,242)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,5,28,32,9,13,33,46,50,36,84)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,97,101,89,120,153,359,157,127,129,133)
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,137,141,158,175,176,203,185,187,191,243)
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
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i246);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i238) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i51) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i102) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i242));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(1)),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i221);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i216) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i220));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),4)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247);
	}
	MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i233) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i237));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i246);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),4)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247);
	}
	MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i79) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i55) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i83));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i57);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i61);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i65);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),4)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
	}
	MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i115) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i108) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i119));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),4)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
	}
	MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i84) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i33) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i120) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i176) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i5));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i28) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i32));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),5)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247);
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
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__class_id_0_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i13);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i46) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i50));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i36) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i101));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i89) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i153) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i157));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i127) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i129);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i133);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i137);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i141);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i175));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i203));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i359));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,185)
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
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i187);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i191);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0_i243);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_id_0_0,243)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module55)
	MR_init_entry1(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_init_label7(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,7,12,10,17,5,19,1)
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
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i17));
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i5);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___bytecode_backend__bytecode__byte_cons_tag_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module56)
	MR_init_entry1(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___bytecode_backend__bytecode__byte_cons_tag_0_0);
	MR_init_label10(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,18,21,28,66,72,77,114,48,53,55)
	MR_init_label6(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,82,36,5,93,7,84)
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
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i18) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i66) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i48) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i82));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i21) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i114) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i114) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i28));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i114);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i93) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i72) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i114) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i77));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i93) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i93) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i53) MR_AND
		MR_LABEL_AP(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i114));
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i55);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i84);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i5);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i93);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i114);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i36);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i84);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i93);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0_i7);
	}
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___bytecode_backend__bytecode__byte_cons_tag_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_module57)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module58)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module59)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module60)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module61)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module62)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module63)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module64)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module65)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module66)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module67)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module68)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module69)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module70)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module71)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module72)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module73)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module74)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module75)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module76)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module77)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module78)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module79)
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

MR_BEGIN_MODULE(bytecode_backend__bytecode_module80)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module81)
	MR_init_entry1(bytecode_backend__bytecode__IntroducedFrom__pred__output_args__267__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__bytecode_backend__bytecode__IntroducedFrom__pred__output_args__267__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_args__267__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode__IntroducedFrom__pred__output_args__267__1_2_0)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module82)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module83)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module84)
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


MR_BEGIN_MODULE(bytecode_backend__bytecode_module85)
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
	bytecode_backend__bytecode_module85();
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
