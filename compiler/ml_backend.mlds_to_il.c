/*
** Automatically generated from `mlds_to_il.m'
** by the Mercury compiler,
** version rotd-2011-08-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__mlds_to_il__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.mlds_to_il.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.mlds_to_il.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ml_backend.mlds_to_il.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ml_backend.mlds_to_il.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ml_backend.mlds_to_il.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ml_backend.mlds_to_il.c"
#line 49 "ml_backend.mlds_to_il.c"
#include "ml_backend.mlds_to_il.mh"

#line 52 "ml_backend.mlds_to_il.c"
#line 53 "ml_backend.mlds_to_il.c"
#ifndef ML_BACKEND__MLDS_TO_IL_DECL_GUARD
#define ML_BACKEND__MLDS_TO_IL_DECL_GUARD

#line 57 "ml_backend.mlds_to_il.c"
#line 58 "ml_backend.mlds_to_il.c"

#endif
#line 61 "ml_backend.mlds_to_il.c"

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
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
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
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Integer f1;
	MR_String f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_Word * f1;
	MR_Word * f2;
	MR_String f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];

struct mercury_type_19 {
	MR_Integer f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_19 mercury_common_19[];

struct mercury_type_20 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_20 mercury_common_20[];

struct mercury_type_21 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_21 mercury_common_21[];

struct mercury_type_22 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_22 mercury_common_22[];

struct mercury_type_23 {
	MR_Word * f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_23 mercury_common_23[];

struct mercury_type_24 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_24 mercury_common_24[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__mlds_to_il__type_ctor_info_arguments_map_0,
	mercury_data_ml_backend__mlds_to_il__type_ctor_info_field_names_set_0,
	mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0,
	mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_info_0,
	mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_mangle_name_0,
	mercury_data_ml_backend__mlds_to_il__type_ctor_info_instr_tree_0,
	mercury_data_ml_backend__mlds_to_il__type_ctor_info_locals_map_0,
	mercury_data_ml_backend__mlds_to_il__type_ctor_info_mlds_vartypes_0;
MR_decl_label10(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0, 2,5,6,7,10,9,15,16,18,19)
MR_decl_label2(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0, 20,21)
MR_decl_label9(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0, 4,2,6,11,13,14,15,16,17)
MR_decl_label10(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0, 4,5,7,6,3,13,14,15,17,25)
MR_decl_label3(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0, 24,23,1)
MR_decl_label1(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__321__1_3_0, 2)
MR_decl_label2(ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0, 3,1)
MR_decl_label1(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__385__1_1_0, 2)
MR_decl_label3(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0, 2,3,5)
MR_decl_label1(ml_backend__mlds_to_il__IntroducedFrom__pred__statement_to_il__1640__1_3_0, 2)
MR_decl_label1(ml_backend__mlds_to_il__already_boxed_1_0, 2)
MR_decl_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0, 4,5,6,7,8,3,10,13,15,20)
MR_decl_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0, 22,24,26,28,18,31,36,35,41,46)
MR_decl_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0, 42,40,50,52,55,57,59,62,63,68)
MR_decl_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0, 69,70,71,73,75,64,65,77,79,80)
MR_decl_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0, 81,82,83,84,85,86,39,92,93,94)
MR_decl_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0, 96,95,98,99,100,102,103,104,105,106)
MR_decl_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0, 34,110,115,117,118,121,122,127,120,131)
MR_decl_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0, 130,119,133,135,136,137,138,140,141,142)
MR_decl_label6(ml_backend__mlds_to_il__atomic_statement_to_il_4_0, 143,112,109,148,146,149)
MR_decl_label10(ml_backend__mlds_to_il__binaryop_to_il_4_0, 4,5,3,8,10,12,14,16,19,21)
MR_decl_label10(ml_backend__mlds_to_il__binaryop_to_il_4_0, 29,32,40,43,46,48,51,54,57,60)
MR_decl_label10(ml_backend__mlds_to_il__binaryop_to_il_4_0, 68,71,79,82,85,88,91,93,95,98)
MR_decl_label10(ml_backend__mlds_to_il__binaryop_to_il_4_0, 97,108,102,118,112,128,122,138,132,147)
MR_decl_label8(ml_backend__mlds_to_il__binaryop_to_il_4_0, 142,151,153,163,156,164,166,168)
MR_decl_label5(ml_backend__mlds_to_il__common_prefix_5_0, 3,38,8,10,6)
MR_decl_label5(ml_backend__mlds_to_il__const_rval_to_function_2_0, 7,5,11,12,2)
MR_decl_label8(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0, 2,4,9,12,14,3,17,18)
MR_decl_label10(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0, 56,4,5,3,9,7,10,11,12,18)
MR_decl_label7(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0, 20,24,6,26,27,25,28)
MR_decl_label3(ml_backend__mlds_to_il__defn_to_local_3_0, 5,8,2)
MR_decl_label8(ml_backend__mlds_to_il__generate_class_body_10_0, 2,3,5,6,8,9,12,13)
MR_decl_label10(ml_backend__mlds_to_il__generate_condition_5_0, 2,6,7,10,11,3,16,17,20,21)
MR_decl_label4(ml_backend__mlds_to_il__generate_condition_5_0, 13,23,26,27)
MR_decl_label10(ml_backend__mlds_to_il__generate_defn_initializer_5_0, 5,11,13,14,15,16,7,17,18,20)
MR_decl_label10(ml_backend__mlds_to_il__generate_defn_initializer_5_0, 21,22,23,24,26,27,28,29,30,31)
MR_decl_label3(ml_backend__mlds_to_il__generate_defn_initializer_5_0, 32,33,2)
MR_decl_label4(ml_backend__mlds_to_il__generate_extern_assembly_6_0, 4,5,6,20)
MR_decl_label3(ml_backend__mlds_to_il__generate_il_4_0, 2,5,4)
MR_decl_label10(ml_backend__mlds_to_il__generate_il_5_0, 2,3,5,7,8,9,10,11,12,13)
MR_decl_label10(ml_backend__mlds_to_il__generate_il_5_0, 14,15,16,17,18,19,20,22,25,26)
MR_decl_label10(ml_backend__mlds_to_il__generate_il_5_0, 27,28,29,31,30,33,40,41,42,43)
MR_decl_label3(ml_backend__mlds_to_il__generate_il_5_0, 45,48,49)
MR_decl_label10(ml_backend__mlds_to_il__generate_method_6_0, 4,5,3,8,9,10,11,12,14,16)
MR_decl_label10(ml_backend__mlds_to_il__generate_method_6_0, 18,13,21,22,24,26,27,28,29,30)
MR_decl_label10(ml_backend__mlds_to_il__generate_method_6_0, 31,32,33,34,35,36,37,38,39,40)
MR_decl_label10(ml_backend__mlds_to_il__generate_method_6_0, 41,42,7,45,46,49,50,54,57,58)
MR_decl_label10(ml_backend__mlds_to_il__generate_method_6_0, 56,52,62,51,69,70,71,74,76,77)
MR_decl_label10(ml_backend__mlds_to_il__generate_method_6_0, 78,80,81,82,83,85,86,87,73,89)
MR_decl_label10(ml_backend__mlds_to_il__generate_method_6_0, 91,93,94,95,96,97,100,102,103,104)
MR_decl_label10(ml_backend__mlds_to_il__generate_method_6_0, 105,106,107,108,121,122,123,124,125,131)
MR_decl_label10(ml_backend__mlds_to_il__generate_method_6_0, 133,135,136,139,140,147,151,156,165,178)
MR_decl_label10(ml_backend__mlds_to_il__generate_method_6_0, 182,192,197,198,202,206,210,211,212,213)
MR_decl_label7(ml_backend__mlds_to_il__generate_method_6_0, 214,215,216,109,218,219,223)
MR_decl_label6(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0, 4,3,6,7,8,9)
MR_decl_label10(ml_backend__mlds_to_il__get_fieldref_6_0, 2,4,5,8,11,12,14,18,13,21)
MR_decl_label10(ml_backend__mlds_to_il__get_fieldref_6_0, 24,26,23,32,10,37,41,42,38,44)
MR_decl_label1(ml_backend__mlds_to_il__get_fieldref_6_0, 45)
MR_decl_label5(ml_backend__mlds_to_il__get_il_data_rep_2_0, 2,3,4,5,14)
MR_decl_label10(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0, 4,5,2,10,15,16,17,18,14,11)
MR_decl_label7(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0, 22,23,24,26,8,28,29)
MR_decl_label3(ml_backend__mlds_to_il__has_foreign_code_defined_2_0, 2,4,1)
MR_decl_label2(ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0, 2,3)
MR_decl_label2(ml_backend__mlds_to_il__il_info_add_init_instructions_3_0, 2,3)
MR_decl_label1(ml_backend__mlds_to_il__il_info_add_locals_3_0, 2)
MR_decl_label1(ml_backend__mlds_to_il__il_info_get_locals_list_2_0, 3)
MR_decl_label1(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0, 2)
MR_decl_label3(ml_backend__mlds_to_il__il_info_make_next_label_3_0, 2,4,5)
MR_decl_label5(ml_backend__mlds_to_il__il_info_new_class_3_0, 3,4,6,8,10)
MR_decl_label7(ml_backend__mlds_to_il__il_info_new_method_6_0, 3,4,6,8,10,12,14)
MR_decl_label2(ml_backend__mlds_to_il__il_info_remove_locals_3_0, 2,3)
MR_decl_label10(ml_backend__mlds_to_il__il_transform_mlds_2_0, 2,5,6,8,9,11,13,14,15,16)
MR_decl_label5(ml_backend__mlds_to_il__il_transform_mlds_2_0, 18,20,21,23,25)
MR_decl_label3(ml_backend__mlds_to_il__is_argument_2_0, 5,6,2)
MR_decl_label5(ml_backend__mlds_to_il__is_local_field_4_0, 2,3,5,6,1)
MR_decl_label10(ml_backend__mlds_to_il__load_4_0, 6,9,10,11,7,13,15,16,17,18)
MR_decl_label10(ml_backend__mlds_to_il__load_4_0, 19,5,21,24,25,27,23,29,32,30)
MR_decl_label10(ml_backend__mlds_to_il__load_4_0, 39,38,46,45,50,3,56,58,61,62)
MR_decl_label10(ml_backend__mlds_to_il__load_4_0, 63,64,60,68,73,72,77,76,80,84)
MR_decl_label10(ml_backend__mlds_to_il__load_4_0, 88,92,96,98,100,102,105,366,113,114)
MR_decl_label10(ml_backend__mlds_to_il__load_4_0, 116,117,112,119,121,123,126,124,133,132)
MR_decl_label10(ml_backend__mlds_to_il__load_4_0, 140,139,144,110,150,155,156,157,154,158)
MR_decl_label5(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0, 13,14,15,17,27)
MR_decl_label9(ml_backend__mlds_to_il__mangle_dataname_2_0, 58,6,7,3,9,11,13,15,17)
MR_decl_label6(ml_backend__mlds_to_il__mangle_dataname_module_3_0, 57,6,11,14,16,5)
MR_decl_label10(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0, 2,3,6,7,8,5,10,11,12,14)
MR_decl_label10(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0, 18,21,22,23,20,25,26,27,15,16)
MR_decl_label8(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0, 33,34,35,32,39,40,41,43)
MR_decl_label2(ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0, 2,3)
MR_decl_label3(ml_backend__mlds_to_il__mangle_mlds_var_2_0, 14,4,5)
MR_decl_label3(ml_backend__mlds_to_il__maybe_box_initializer_2_0, 3,6,33)
MR_decl_label1(ml_backend__mlds_to_il__maybe_map_fold__ho1_6_0, 3)
MR_decl_label10(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0, 4,5,7,8,9,10,11,6,14,15)
MR_decl_label4(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0, 19,20,3,22)
MR_decl_label10(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0, 3,6,8,10,11,12,14,17,16,28)
MR_decl_label2(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0, 38,40)
MR_decl_label10(ml_backend__mlds_to_il__predlabel_to_id_5_0, 4,6,7,8,5,10,11,12,13,14)
MR_decl_label10(ml_backend__mlds_to_il__predlabel_to_id_5_0, 15,16,17,18,19,20,21,22,23,3)
MR_decl_label10(ml_backend__mlds_to_il__predlabel_to_id_5_0, 26,27,28,25,30,31,34,35,37,38)
MR_decl_label10(ml_backend__mlds_to_il__predlabel_to_id_5_0, 39,41,42,43,44,45,46,47,48,49)
MR_decl_label1(ml_backend__mlds_to_il__predlabel_to_id_5_0, 50)
MR_decl_label10(ml_backend__mlds_to_il__rval_to_type_2_0, 3,7,8,9,5,11,12,15,16,137)
MR_decl_label6(ml_backend__mlds_to_il__rval_to_type_2_0, 18,19,13,21,22,24)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 4,5,3,8,9,12,13,14,17,18)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 21,23,25,26,28,29,30,31,32,33)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 34,7,36,37,41,40,48,50,51,52)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 49,46,53,44,60,55,56,67,62,63)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 69,75,76,38,39,79,83,84,87,88)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 85,93,95,100,101,102,103,104,105,106)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 107,108,109,110,111,35,114,116,117,118)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 120,121,122,113,125,126,127,128,129,130)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 131,132,124,137,139,136,146,134,150,151)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 152,153,154,155,156,157,160,162,163,164)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 166,167,168,169,170,171,172,173,174,175)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 149,178,180,177,191,192,193,194,190,188)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 186,199,200,201,202,203,204,205,206,208)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 211,213,215,216,217,218,220,222,223,224)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 225,226,227,228,229,230,231,232,233,198)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 236,237,238,241,242,244,247,249,250,251)
MR_decl_label10(ml_backend__mlds_to_il__statement_to_il_4_0, 252,253,254,240,256,257,259,262,264,265)
MR_decl_label6(ml_backend__mlds_to_il__statement_to_il_4_0, 266,267,268,269,270,235)
MR_decl_label4(ml_backend__mlds_to_il__statements_to_il_4_0, 3,5,6,7)
MR_decl_label10(ml_backend__mlds_to_il__store_4_0, 4,5,7,8,9,3,11,14,12,21)
MR_decl_label5(ml_backend__mlds_to_il__store_4_0, 20,26,28,10,31)
MR_decl_label1(ml_backend__mlds_to_il__sym_name_to_class_name_2_0, 2)
MR_decl_label3(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0, 6,7,2)
MR_decl_label1(ml_backend__mlds_to_il__sym_name_to_string_2_0, 2)
MR_decl_label3(ml_backend__mlds_to_il__sym_name_to_string_2_4_0, 7,8,2)
MR_decl_label3(ml_backend__mlds_to_il__test_rtti_initialization_field_4_0, 2,4,5)
MR_decl_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0, 4,7,5,3,13,14,15,18,16,31)
MR_decl_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0, 32,34,35,38,28,29,47,46,45,53)
MR_decl_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0, 57,61,60,56,67,69,51,74,82,79)
MR_decl_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0, 84,87,88,90,91,92,93,94,95,77)
MR_decl_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0, 97,98,73,101,103,12,112,115,114,118)
MR_decl_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0, 125,127,129,131,135,137,139,359,142,143)
MR_decl_label5(ml_backend__mlds_to_il__unaryop_to_il_5_0, 146,150,149,144,156)
MR_decl_label2(fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0, 2,6)
MR_decl_label4(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0, 4,5,6,1)
MR_decl_label1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1_2_0, 2)
MR_decl_label1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1_2_0, 2)
MR_decl_label6(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0, 4,3,5,7,2,10)
MR_decl_label2(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0, 3,2)
MR_decl_label1(fn__ml_backend__mlds_to_il__attribute_to_custom_attribute_2_0, 2)
MR_decl_label1(fn__ml_backend__mlds_to_il__class_name_2_0, 2)
MR_decl_label10(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0, 5,6,8,10,17,16,3,24,25,26)
MR_decl_label1(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0, 28)
MR_decl_label3(fn__ml_backend__mlds_to_il__context_instr_1_0, 2,3,4)
MR_decl_label3(fn__ml_backend__mlds_to_il__context_node_1_0, 2,3,4)
MR_decl_label1(fn__ml_backend__mlds_to_il__convert_to_object_1_0, 2)
MR_decl_label10(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0, 2,4,3,6,8,14,16,18,21,24)
MR_decl_label2(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0, 27,17)
MR_decl_label10(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0, 2,4,6,8,10,3,13,15,17,19)
MR_decl_label10(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0, 2,4,6,8,10,3,13,15,14,17)
MR_decl_label6(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0, 19,18,21,23,25,27)
MR_decl_label10(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0, 2,4,3,6,8,14,16,18,21,24)
MR_decl_label2(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0, 27,17)
MR_decl_label5(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0, 3,5,31,8,9)
MR_decl_label3(fn__ml_backend__mlds_to_il__flatten_init_1_0, 2,12,8)
MR_decl_label1(fn__ml_backend__mlds_to_il__flatten_inits_1_0, 4)
MR_decl_label5(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0, 5,12,3,26,25)
MR_decl_label9(fn__ml_backend__mlds_to_il__il_info_init_9_0, 2,3,4,5,6,7,8,9,10)
MR_decl_label2(fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0, 11,14)
MR_decl_label3(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0, 5,6,2)
MR_decl_label10(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0, 114,8,6,12,14,16,18,23,22,27)
MR_decl_label10(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0, 30,31,32,33,35,37,38,21,20,5)
MR_decl_label1(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0, 42)
MR_decl_label4(fn__ml_backend__mlds_to_il__make_method_defn_3_0, 3,4,5,8)
MR_decl_label9(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0, 2,4,9,12,14,3,17,18,19)
MR_decl_label3(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0, 6,4,23)
MR_decl_label3(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0, 7,10,30)
MR_decl_label2(fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0, 4,6)
MR_decl_label4(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0, 4,3,6,8)
MR_decl_label4(fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0, 2,3,4,5)
MR_decl_label4(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0, 3,10,4,6)
MR_decl_label10(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0, 3,7,9,11,5,18,24,35,37,38)
MR_decl_label7(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0, 39,40,41,42,43,119,111)
MR_decl_label10(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0, 2,3,4,5,6,15,17,13,19,11)
MR_decl_label4(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0, 24,25,28,27)
MR_decl_label10(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0, 2,3,4,5,6,7,8,9,19,21)
MR_decl_label8(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0, 17,23,26,15,29,30,33,32)
MR_decl_label3(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0, 3,6,5)
MR_decl_label3(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0, 2,5,3)
MR_decl_label1(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0, 2)
MR_decl_label10(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0, 3,6,5,10,11,9,13,15,20,22)
MR_decl_label10(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0, 19,30,32,34,17,37,39,40,278,47)
MR_decl_label10(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0, 42,51,53,55,57,59,62,61,65,67)
MR_decl_label2(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0, 69,71)
MR_decl_label4(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0, 3,5,10,9)
MR_decl_label10(fn__ml_backend__mlds_to_il__rename_atomic_1_0, 3,5,4,10,11,9,14,13,18,17)
MR_decl_label5(fn__ml_backend__mlds_to_il__rename_atomic_1_0, 21,23,20,27,99)
MR_decl_label4(fn__ml_backend__mlds_to_il__rename_cond_1_0, 4,5,3,7)
MR_decl_label8(fn__ml_backend__mlds_to_il__rename_defn_1_0, 5,7,3,11,12,10,48,19)
MR_decl_label2(fn__ml_backend__mlds_to_il__rename_field_id_1_0, 4,12)
MR_decl_label4(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0, 24,5,4,6)
MR_decl_label6(fn__ml_backend__mlds_to_il__rename_initializer_1_0, 38,6,4,9,8,12)
MR_decl_label7(fn__ml_backend__mlds_to_il__rename_lval_1_0, 4,5,3,9,8,11,29)
MR_decl_label2(fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0, 16,4)
MR_decl_label10(fn__ml_backend__mlds_to_il__rename_rval_1_0, 4,3,7,6,11,12,10,16,18,21)
MR_decl_label10(fn__ml_backend__mlds_to_il__rename_rval_1_0, 20,29,28,34,26,14,46,45,50,49)
MR_decl_label2(fn__ml_backend__mlds_to_il__rename_rval_1_0, 52,196)
MR_decl_label10(fn__ml_backend__mlds_to_il__rename_statement_1_0, 5,7,3,11,12,13,10,17,18,16)
MR_decl_label10(fn__ml_backend__mlds_to_il__rename_statement_1_0, 22,21,26,28,30,32,35,25,40,39)
MR_decl_label10(fn__ml_backend__mlds_to_il__rename_statement_1_0, 44,43,51,53,55,58,61,50,64,65)
MR_decl_label2(fn__ml_backend__mlds_to_il__rename_statement_1_0, 66,174)
MR_decl_label3(fn__ml_backend__mlds_to_il__rename_switch_case_1_0, 2,4,5)
MR_decl_label1(fn__ml_backend__mlds_to_il__runtime_initialization_instrs_0_0, 2)
MR_decl_label10(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0, 3,5,7,9,10,14,11,16,18,20)
MR_decl_label3(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0, 21,23,24)
MR_decl_label10(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0, 3,8,13,18,23,28,33,38,45,43)
MR_decl_label10(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0, 48,53,60,58,63,65,67,69,71,73)
MR_decl_label5(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0, 75,77,79,81,83)
MR_decl_label2(fn__ml_backend__mlds_to_il__sym_name_prefix_1_0, 4,2)
MR_decl_label4(fn__ml_backend__mlds_to_il__wrapper_class_1_0, 2,4,5,6)
MR_decl_label2(__Unify___ml_backend__mlds_to_il__il_data_rep_0_0, 6,1)
MR_decl_label10(__Unify___ml_backend__mlds_to_il__il_info_0_0, 4,6,8,10,12,14,16,18,20,22)
MR_decl_label9(__Unify___ml_backend__mlds_to_il__il_info_0_0, 24,26,28,30,33,35,37,41,1)
MR_decl_label4(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0, 3,2,5,21)
MR_decl_label10(__Compare___ml_backend__mlds_to_il__il_info_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label10(__Compare___ml_backend__mlds_to_il__il_info_0_0, 37,41,45,49,53,57,61,65,69,73)
MR_decl_label7(__Compare___ml_backend__mlds_to_il__il_info_0_0, 77,81,85,90,94,98,281)
MR_decl_static(fn__ml_backend__mlds_to_il__mercury_runtime_name_1_0)
MR_def_extern_entry(ml_backend__mlds_to_il__get_il_data_rep_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__wrapper_class_1_0)
MR_decl_static(ml_backend__mlds_to_il__il_transform_mlds_2_0)
MR_decl_static(ml_backend__mlds_to_il__sym_name_to_string_2_4_0)
MR_decl_static(ml_backend__mlds_to_il__sym_name_to_string_2_0)
MR_decl_static(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0)
MR_decl_static(ml_backend__mlds_to_il__sym_name_to_class_name_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__sym_name_prefix_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__dotnet_system_assembly_decls_1_0)
MR_decl_static(ml_backend__mlds_to_il__generate_extern_assembly_6_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_info_init_9_0)
MR_decl_static(ml_backend__mlds_to_il__generate_il_5_0)
MR_def_extern_entry(ml_backend__mlds_to_il__generate_il_4_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_system_assembly_name_0_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_system_name_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_string_type_0_0)
MR_def_extern_entry(fn__ml_backend__mlds_to_il__il_generic_class_name_0_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_generic_simple_type_0_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_generic_type_0_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_object_array_type_0_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_generic_array_type_0_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_commit_class_name_0_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_commit_type_0_0)
MR_def_extern_entry(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0)
MR_def_extern_entry(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0)
MR_decl_static(ml_backend__mlds_to_il__predlabel_to_id_5_0)
MR_def_extern_entry(ml_backend__mlds_to_il__predlabel_to_csharp_id_4_0)
MR_def_extern_entry(ml_backend__mlds_to_il__mangle_mlds_var_2_0)
MR_def_extern_entry(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0)
MR_decl_static(ml_backend__mlds_to_il__predlabel_to_ilds_id_4_0)
MR_def_extern_entry(ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0)
MR_def_extern_entry(fn__ml_backend__mlds_to_il__class_name_2_0)
MR_decl_static(ml_backend__mlds_to_il__has_foreign_code_defined_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__project_foreign_code_export_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_rval_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_lval_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_field_id_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_atomic_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_statement_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_initializer_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_defn_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_cond_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rename_switch_case_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0)
MR_decl_static(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0)
MR_decl_static(ml_backend__mlds_to_il__mangle_dataname_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0)
MR_decl_static(ml_backend__mlds_to_il__generate_class_body_10_0)
MR_decl_static(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0)
MR_decl_static(ml_backend__mlds_to_il__il_info_make_next_label_3_0)
MR_decl_static(ml_backend__mlds_to_il__test_rtti_initialization_field_4_0)
MR_decl_static(ml_backend__mlds_to_il__set_rtti_initialization_field_4_0)
MR_decl_static(fn__ml_backend__mlds_to_il__runtime_initialization_instrs_0_0)
MR_decl_static(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0)
MR_decl_static(fn__ml_backend__mlds_to_il__make_fieldref_3_0)
MR_decl_static(ml_backend__mlds_to_il__generate_rtti_initialization_field_3_0)
MR_decl_static(ml_backend__mlds_to_il__il_info_new_class_3_0)
MR_decl_static(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0)
MR_decl_static(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__interface_id_to_class_name_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__attributes_to_custom_attributes_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__flatten_inits_1_0)
MR_decl_static(ml_backend__mlds_to_il__already_boxed_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0)
MR_decl_static(ml_backend__mlds_to_il__rval_to_type_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__convert_to_object_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__convert_from_object_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0)
MR_decl_static(fn__ml_backend__mlds_to_il__comment_node_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_string_equals_0_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_string_compare_0_0)
MR_decl_static(ml_backend__mlds_to_il__binaryop_to_il_4_0)
MR_decl_static(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0)
MR_decl_static(ml_backend__mlds_to_il__mangle_dataname_module_3_0)
MR_decl_static(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0)
MR_decl_static(ml_backend__mlds_to_il__is_argument_2_0)
MR_decl_static(ml_backend__mlds_to_il__is_local_2_0)
MR_decl_static(ml_backend__mlds_to_il__is_local_field_4_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mlds_signature_to_ilds_type_params_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0)
MR_decl_static(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0)
MR_decl_static(ml_backend__mlds_to_il__common_prefix_5_0)
MR_decl_static(ml_backend__mlds_to_il__get_fieldref_6_0)
MR_decl_static(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0)
MR_decl_static(ml_backend__mlds_to_il__load_4_0)
MR_decl_static(ml_backend__mlds_to_il__unaryop_to_il_5_0)
MR_decl_static(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0)
MR_decl_static(fn__ml_backend__mlds_to_il__context_instr_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__context_node_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0)
MR_decl_static(ml_backend__mlds_to_il__store_4_0)
MR_decl_static(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0)
MR_decl_static(fn__ml_backend__mlds_to_il__newobj_constructor_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__get_static_methodref_4_0)
MR_decl_static(ml_backend__mlds_to_il__il_info_get_module_name_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0)
MR_decl_static(ml_backend__mlds_to_il__atomic_statement_to_il_4_0)
MR_decl_static(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0)
MR_decl_static(ml_backend__mlds_to_il__generate_condition_5_0)
MR_decl_static(ml_backend__mlds_to_il__const_rval_to_function_2_0)
MR_decl_static(ml_backend__mlds_to_il__il_info_add_locals_3_0)
MR_decl_static(ml_backend__mlds_to_il__il_info_remove_locals_3_0)
MR_decl_static(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0)
MR_decl_static(ml_backend__mlds_to_il__statements_to_il_4_0)
MR_decl_static(ml_backend__mlds_to_il__statement_to_il_4_0)
MR_decl_static(fn__ml_backend__mlds_to_il__il_set_exit_code_0_0)
MR_decl_static(fn__ml_backend__mlds_to_il__make_method_defn_3_0)
MR_decl_static(fn__ml_backend__mlds_to_il__load_this_0_0)
MR_decl_static(ml_backend__mlds_to_il__il_info_new_method_6_0)
MR_decl_static(ml_backend__mlds_to_il__il_info_add_init_instructions_3_0)
MR_decl_static(ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0)
MR_decl_static(ml_backend__mlds_to_il__il_info_get_locals_list_2_0)
MR_decl_static(ml_backend__mlds_to_il__generate_method_6_0)
MR_decl_static(fn__ml_backend__mlds_to_il__attribute_to_custom_attribute_2_0)
MR_decl_static(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0)
MR_decl_static(ml_backend__mlds_to_il__generate_defn_initializer_5_0)
MR_decl_static(ml_backend__mlds_to_il__maybe_box_initializer_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__flatten_init_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__input_param_to_ilds_type_3_0)
MR_decl_static(ml_backend__mlds_to_il__defn_to_local_3_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__mercury_strong_name_assembly_decls_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_il__arguments_map_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_il__arguments_map_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_il__field_names_set_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_il__field_names_set_0_0)
MR_def_extern_entry(__Unify___ml_backend__mlds_to_il__il_data_rep_0_0)
MR_def_extern_entry(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_il__il_info_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_il__il_info_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_il__il_mangle_name_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_il__il_mangle_name_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_il__instr_tree_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_il__instr_tree_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_il__locals_map_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_il__locals_map_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_il__mlds_vartypes_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_il__mlds_vartypes_0_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__262__1_1_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__264__1_1_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__321__1_3_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__377__1_1_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__379__1_1_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__385__1_1_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_method__1068__1_1_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_method__1151__1_4_0)
MR_decl_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1381__1_2_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0)
MR_decl_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1_2_0)
MR_decl_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1412__1_1_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__statement_to_il__1640__1_3_0)
MR_decl_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__statement_to_il__1729__1_1_0)
MR_decl_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__statement_to_il__1911__1_1_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__1963__1_4_0)
MR_decl_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0)
MR_decl_static(ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0)
MR_decl_static(ml_backend__mlds_to_il__maybe_map_fold__ho1_6_0)
MR_decl_static(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_116_104_111_100_95_95_49_49_53_49_95_95_49_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_116_111_109_105_99_95_115_116_97_116_101_109_101_110_116_95_116_111_95_105_108_95_95_49_57_54_51_95_95_49_95_95_91_49_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[17] =
{
{
MR_string_const("mercury", 7)
},
{
MR_string_const("", 0)
},
{
MR_string_const("mscorlib", 8)
},
{
MR_string_const(".ctor", 5)
},
{
MR_string_const("init_runtime", 12)
},
{
MR_string_const("responsible_for_initialising_runtime", 36)
},
{
MR_string_const("rtti_initialized", 16)
},
{
MR_string_const("hash_2", 6)
},
{
MR_string_const("string", 6)
},
{
MR_string_const("Equals", 6)
},
{
MR_string_const("Compare", 7)
},
{
MR_string_const("SUCCESS_INDICATOR", 17)
},
{
MR_string_const("set_ExitCode", 12)
},
{
MR_string_const("univ", 4)
},
{
MR_string_const("Write", 5)
},
{
MR_string_const("ML_report_uncaught_exception", 28)
},
{
MR_string_const("XXX", 3)
},
};

static const struct mercury_type_1 mercury_common_1[40] =
{
{
MR_string_const("Environment", 11),
MR_tbmkword(0, 0)
},
{
MR_string_const("runtime", 7),
MR_TAG_COMMON(1,1,0)
},
{
MR_string_const("mercury", 7),
MR_TAG_COMMON(1,1,1)
},
{
MR_string_const("String", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("System", 6),
MR_TAG_COMMON(1,1,3)
},
{
MR_string_const("Object", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("System", 6),
MR_TAG_COMMON(1,1,5)
},
{
MR_string_const("Array", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("System", 6),
MR_TAG_COMMON(1,1,7)
},
{
MR_string_const("Commit", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("runtime", 7),
MR_TAG_COMMON(1,1,9)
},
{
MR_string_const("mercury", 7),
MR_TAG_COMMON(1,1,10)
},
{
MR_string_const("Enum", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("System", 6),
MR_TAG_COMMON(1,1,12)
},
{
MR_string_const("ValueType", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("System", 6),
MR_TAG_COMMON(1,1,14)
},
{
MR_string_const("Init", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("runtime", 7),
MR_TAG_COMMON(1,1,16)
},
{
MR_string_const("mercury", 7),
MR_TAG_COMMON(1,1,17)
},
{
MR_string_const("Boolean", 7),
MR_tbmkword(0, 0)
},
{
MR_string_const("Char", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("Single", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("Double", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("Int16", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("Int32", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("Int64", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("SByte", 5),
MR_tbmkword(0, 0)
},
{
MR_string_const("UInt16", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("UInt32", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("UInt64", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("Byte", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("string", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("Exception", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const("runtime", 7),
MR_TAG_COMMON(1,1,32)
},
{
MR_string_const("mercury", 7),
MR_TAG_COMMON(1,1,33)
},
{
MR_string_const("System", 6),
MR_TAG_COMMON(1,1,0)
},
{
MR_string_const("System", 6),
MR_TAG_COMMON(1,1,32)
},
{
MR_string_const("Console", 7),
MR_tbmkword(0, 0)
},
{
MR_string_const("System", 6),
MR_TAG_COMMON(1,1,37)
},
{
MR_string_const("exception", 9),
MR_tbmkword(0, 0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
static const struct mercury_type_2 mercury_common_2[26] =
{
{
{
MR_TAG_COMMON(1,0,0),
MR_TAG_COMMON(1,1,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ml_backend__mlds, ml_scalar_common_type_num),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_scalar_cell_group)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ml_backend__mlds, ml_vector_common_type_num),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_vector_cell_group)
}
},
{
{
MR_TAG_COMMON(0,12,0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(1,0,2),
MR_TAG_COMMON(1,1,4),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,2),
MR_TAG_COMMON(1,1,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,2),
MR_TAG_COMMON(1,1,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,0),
MR_TAG_COMMON(1,1,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,2),
MR_TAG_COMMON(1,1,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,2),
MR_TAG_COMMON(1,1,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,0),
MR_TAG_COMMON(1,1,18),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
{
{
MR_TAG_COMMON(1,0,0),
MR_TAG_COMMON(1,1,34),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(3,45)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,3,46)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
{
{
MR_TAG_COMMON(1,0,2),
MR_TAG_COMMON(1,1,35),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,23,0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval)
}
},
{
{
MR_TAG_COMMON(1,0,16),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pragma_export_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pragma_export_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_instr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_cord__type_ctor_info_cord_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_instr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1;
static const struct mercury_type_3 mercury_common_3[54] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 17)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 9)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export)
}
},
{
{
MR_TAG_COMMON(3,8,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilasm, il_decl)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilasm, il_decl)
}
},
{
{
MR_TAG_COMMON(3,8,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,10,0),
MR_TAG_COMMON(1,3,7)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 2)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 14)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 11)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 13)
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
MR_TAG_COMMON(0,2,9),
MR_TAG_COMMON(1,8,2)
}
},
{
{
MR_TAG_COMMON(0,2,10),
MR_TAG_COMMON(1,8,3)
}
},
{
{
MR_TAG_COMMON(0,2,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(ml_backend__ilds, structured_name)
}
},
{
{
MR_TAG_COMMON(1,7,18),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,2,11),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(0,2,11),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_TAG_COMMON(3,7,23),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 17),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,3,22),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,7,34),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
}
},
{
{
MR_TAG_COMMON(0,2,5),
MR_TAG_COMMON(1,0,9)
}
},
{
{
MR_TAG_COMMON(0,2,5),
MR_TAG_COMMON(1,0,10)
}
},
{
{
MR_tbmkword(0, 3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,16,1),
MR_TAG_COMMON(1,3,29)
}
},
{
{
MR_TAG_COMMON(3,12,2),
MR_TAG_COMMON(1,3,30)
}
},
{
{
MR_TAG_COMMON(3,12,3),
MR_TAG_COMMON(1,3,30)
}
},
{
{
MR_tbmkword(0, 3),
MR_TAG_COMMON(1,3,30)
}
},
{
{
MR_TAG_COMMON(3,12,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,16,2),
MR_TAG_COMMON(1,3,34)
}
},
{
{
MR_TAG_COMMON(3,16,1),
MR_TAG_COMMON(1,3,34)
}
},
{
{
MR_TAG_COMMON(3,12,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,16,0),
MR_TAG_COMMON(1,3,37)
}
},
{
{
MR_TAG_COMMON(3,16,1),
MR_TAG_COMMON(1,3,37)
}
},
{
{
MR_TAG_COMMON(3,12,6),
MR_TAG_COMMON(1,3,30)
}
},
{
{
MR_TAG_COMMON(0,2,13),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 25),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,12,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,16,0),
MR_TAG_COMMON(1,3,43)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(ml_backend__ilds, instr)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(ml_backend__ilds, instr)
}
},
{
{
MR_CTOR1_ADDR(cord, cord),
MR_CTOR0_ADDR(ml_backend__ilds, instr)
}
},
{
{
MR_tbmkword(0, 19),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,9),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,2,21),
MR_TAG_COMMON(1,0,12)
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
MR_CTOR1_ADDR(ml_backend__mlds, mlds_fully_qualified_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name)
}
},
{
{
MR_CTOR1_ADDR(ml_backend__mlds, mlds_fully_qualified_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pragma_export_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_atomic_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_initializer_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_initializer_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_defn_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_defn_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_switch_case_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_class_body_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__make_class_constructor_class_member_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_instr_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_info_new_class_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__flatten_inits_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_6;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_method_param_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_7;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_target_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__flatten_init_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__flatten_init_1_0_2;
static const struct mercury_type_4 mercury_common_4[27] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code),
MR_COMMON(3,3)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,4),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_atomic_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(ml_backend__mlds, statement)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_initializer_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_initializer_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_defn_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_defn_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_switch_case_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_class_body_10_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__ilds, structured_name)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__make_class_constructor_class_member_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_import),
MR_CTOR0_ADDR(ml_backend__ilds, instr)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__il_info_new_class_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__flatten_inits_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_COMMON(3,26)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__ilds, il_type),
MR_CTOR0_ADDR(ml_backend__ilds, il_method_param)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_7,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, target)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_COMMON(2,18)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__flatten_init_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_COMMON(3,26)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__flatten_init_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_COMMON(3,26)
},
};

static const struct mercury_type_5 mercury_common_5[33] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__project_foreign_code_export_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__385__1_1_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_defn_1_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_defn_1_0),
0
},
{
MR_COMMON(13,0),
MR_ENTRY_AP(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_rval_1_0),
0
},
{
MR_COMMON(4,6),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_defn_1_0),
0
},
{
MR_COMMON(4,7),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_statement_1_0),
0
},
{
MR_COMMON(4,8),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_rval_1_0),
0
},
{
MR_COMMON(4,9),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_lval_1_0),
0
},
{
MR_COMMON(4,10),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_switch_case_1_0),
0
},
{
MR_COMMON(4,11),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_initializer_1_0),
0
},
{
MR_COMMON(4,12),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_initializer_1_0),
0
},
{
MR_COMMON(4,13),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_defn_1_0),
0
},
{
MR_COMMON(4,14),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_defn_1_0),
0
},
{
MR_COMMON(4,15),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__rename_cond_1_0),
0
},
{
MR_COMMON(4,16),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__interface_id_to_class_name_1_0),
0
},
{
MR_COMMON(4,17),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0),
0
},
{
MR_COMMON(4,18),
MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0),
0
},
{
MR_COMMON(4,19),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__flatten_init_1_0),
0
},
{
MR_COMMON(13,2),
MR_ENTRY_AP(ml_backend__mlds_to_il__load_4_0),
0
},
{
MR_COMMON(13,3),
MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__1963__1_4_0),
0
},
{
MR_COMMON(22,1),
MR_ENTRY_AP(ml_backend__mlds_to_il__generate_defn_initializer_5_0),
0
},
{
MR_COMMON(13,4),
MR_ENTRY_AP(ml_backend__mlds_to_il__load_4_0),
0
},
{
MR_COMMON(13,5),
MR_ENTRY_AP(ml_backend__mlds_to_il__load_4_0),
0
},
{
MR_COMMON(4,20),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__IntroducedFrom__func__statement_to_il__1729__1_1_0),
0
},
{
MR_COMMON(4,21),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__IntroducedFrom__func__statement_to_il__1911__1_1_0),
0
},
{
MR_COMMON(4,22),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0),
0
},
{
MR_COMMON(13,6),
MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_method__1151__1_4_0),
0
},
{
MR_COMMON(4,24),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1412__1_1_0),
0
},
{
MR_COMMON(4,25),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__flatten_init_1_0),
0
},
{
MR_COMMON(4,26),
MR_ENTRY_AP(fn__ml_backend__mlds_to_il__flatten_init_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_1;
static const struct mercury_type_6 mercury_common_6[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_3,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_4,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(2,2)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_5,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(2,2)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(3,51)
},
};

static const struct mercury_type_7 mercury_common_7[39] =
{
{
137,
MR_tbmkword(0, 0)
},
{
224,
MR_TAG_COMMON(1,7,0)
},
{
52,
MR_TAG_COMMON(1,7,1)
},
{
25,
MR_TAG_COMMON(1,7,2)
},
{
86,
MR_TAG_COMMON(1,7,3)
},
{
92,
MR_TAG_COMMON(1,7,4)
},
{
122,
MR_TAG_COMMON(1,7,5)
},
{
183,
MR_TAG_COMMON(1,7,6)
},
{
11,
MR_tbmkword(0, 0)
},
{
11,
MR_TAG_COMMON(1,7,8)
},
{
170,
MR_TAG_COMMON(1,7,9)
},
{
18,
MR_TAG_COMMON(1,7,10)
},
{
125,
MR_TAG_COMMON(1,7,11)
},
{
22,
MR_TAG_COMMON(1,7,12)
},
{
140,
MR_TAG_COMMON(1,7,13)
},
{
34,
MR_TAG_COMMON(1,7,14)
},
{
1,
MR_tbmkword(0, 0)
},
{
0,
MR_tbmkword(0, 1)
},
{
0,
MR_tbmkword(0, 0)
},
{
16,
MR_tbmkword(0, 0)
},
{
13,
MR_tbmkword(0, 0)
},
{
14,
MR_tbmkword(0, 0)
},
{
10,
MR_TAG_COMMON(1,7,20)
},
{
35,
MR_TAG_COMMON(0,17,1)
},
{
10,
MR_TAG_COMMON(1,7,8)
},
{
7,
MR_tbmkword(0, 0)
},
{
9,
MR_tbmkword(0, 0)
},
{
12,
MR_tbmkword(0, 0)
},
{
8,
MR_tbmkword(0, 0)
},
{
3,
MR_tbmkword(0, 0)
},
{
10,
MR_tbmkword(0, 0)
},
{
15,
MR_tbmkword(0, 0)
},
{
5,
MR_tbmkword(0, 0)
},
{
2,
MR_tbmkword(0, 0)
},
{
4,
MR_tbmkword(0, 0)
},
{
4,
MR_tbmkword(0, 5)
},
{
41,
MR_TAG_COMMON(1,15,1)
},
{
0,
MR_TAG_COMMON(2,15,1)
},
{
54,
MR_TAG_COMMON(0,0,11)
},
};

static const struct mercury_type_8 mercury_common_8[6] =
{
{
MR_TAG_COMMON(1,7,7)
},
{
MR_TAG_COMMON(1,7,15)
},
{
MR_TAG_COMMON(0,2,9)
},
{
MR_TAG_COMMON(0,2,10)
},
{
MR_tbmkword(0, 13)
},
{
MR_tbmkword(0, 2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_extern_assembly_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_assembly_decl_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_class_body_10_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_class_body_10_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_9 mercury_common_9[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_extern_assembly_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilasm, assembly_decl),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_import),
MR_COMMON(3,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_class_body_10_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__ilds, structured_name),
MR_COMMON(3,17),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__ilasm, class_member),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_class_body_10_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__ilds, structured_name),
MR_COMMON(3,17),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__ilasm, class_member),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_COMMON(2,23),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
0,
0,
0,
0
}
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
4,
MR_string_const("mercury", 7),
MR_TAG_COMMON(1,3,8)
},
};

static const struct mercury_type_12 mercury_common_12[10] =
{
{
{
0,
0
}
},
{
{
39,
0
}
},
{
{
37,
0
}
},
{
{
36,
0
}
},
{
{
50,
0
}
},
{
{
51,
0
}
},
{
{
36,
1
}
},
{
{
1,
0
}
},
{
{
37,
1
}
},
{
{
1,
2
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__params_to_il_signature_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_3;
static const struct mercury_type_13 mercury_common_13[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__ilasm, il_decl),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__params_to_il_signature_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_CTOR0_ADDR(ml_backend__ilds, il_method_param)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_COMMON(3,47),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__ilds, il_type),
MR_CTOR0_ADDR(ml_backend__ilds, instr),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_COMMON(3,47),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_COMMON(3,47),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__ilds, il_type),
MR_CTOR0_ADDR(ml_backend__ilds, instr),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__attributes_to_custom_attributes_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_attribute_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__mlds_signature_to_ilds_type_params_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_info_get_locals_list_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_4;
static const struct mercury_type_14 mercury_common_14[14] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_import)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_import)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__attributes_to_custom_attributes_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_attribute),
MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__mlds_signature_to_ilds_type_params_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_COMMON(2,18)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_COMMON(2,18),
MR_COMMON(2,19)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__il_info_get_locals_list_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, instr),
MR_CTOR0_ADDR(ml_backend__ilds, instr)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name),
MR_COMMON(3,52)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(24,0),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
};

static const struct mercury_type_15 mercury_common_15[3] =
{
{
1
},
{
0
},
{
-1
},
};

static const struct mercury_type_16 mercury_common_16[5] =
{
{
43,
MR_tbmkword(0, 2),
MR_TAG_COMMON(0,15,0)
},
{
43,
MR_tbmkword(0, 2),
MR_TAG_COMMON(0,15,1)
},
{
43,
MR_tbmkword(0, 2),
MR_TAG_COMMON(0,15,2)
},
{
43,
MR_tbmkword(0, 13),
MR_TAG_COMMON(0,15,1)
},
{
43,
MR_tbmkword(0, 13),
MR_TAG_COMMON(0,15,0)
},
};

static const struct mercury_type_17 mercury_common_17[3] =
{
{
{
MR_TAG_COMMON(1,7,22),
MR_tbmkword(0, 1),
MR_TAG_COMMON(0,2,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,12,0),
MR_TAG_COMMON(1,8,4),
MR_TAG_COMMON(0,3,20),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,12,0),
MR_tbmkword(0, 0),
MR_TAG_COMMON(0,3,50),
MR_TAG_COMMON(1,3,49)
}
},
};

static const struct mercury_type_18 mercury_common_18[1] =
{
{
MR_TAG_COMMON(1,7,24),
MR_TAG_COMMON(0,3,12),
MR_string_const("rtti_initialized", 16),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_19 mercury_common_19[3] =
{
{
{
55,
1,
0
}
},
{
{
25,
1,
0
}
},
{
{
49,
1,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0;
static const struct mercury_type_20 mercury_common_20[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__ilds, simple_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_COMMON(2,14),
MR_COMMON(2,14),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info)
}
},
};

static const struct mercury_type_21 mercury_common_21[4] =
{
{
19,
MR_string_const("gc check -- not relevant for this backend", 41)
},
{
19,
MR_string_const("mark hp -- not relevant for this backend", 40)
},
{
19,
MR_string_const("restore hp -- not relevant for this backend", 43)
},
{
60,
MR_string_const("\nUncaught system exception: \n", 29)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_2;
static const struct mercury_type_22 mercury_common_22[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_COMMON(3,47),
MR_COMMON(2,16),
MR_COMMON(2,16)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_COMMON(3,47),
MR_COMMON(3,47),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info)
}
},
};

static const struct mercury_type_23 mercury_common_23[1] =
{
{
MR_TAG_COMMON(0,0,13),
MR_string_const("univ", 4)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;
static const struct mercury_type_24 mercury_common_24[1] =
{
{
MR_CTOR0_ADDR(builtin, func),
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name),
MR_COMMON(3,53)
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0ml_backend__mlds__type_ctor_info_mlds_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_arguments_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_il__arguments_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_il__arguments_map_0_0)),
	"ml_backend.mlds_to_il",
	"arguments_map",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0ml_backend__mlds__type_ctor_info_mlds_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_field_names_set_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_il__field_names_set_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_il__field_names_set_0_0)),
	"ml_backend.mlds_to_il",
	"field_names_set",
	{ 0 },
	{ (void *)&mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_il__field_types_il_data_rep_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

const MR_ConstString mercury_data_ml_backend__mlds_to_il__field_names_il_data_rep_0_0[] = {
	"highlevel_data",
	"il_envptr_type"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_il__du_functor_desc_il_data_rep_0_0 = {
	"il_data_rep",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_il__field_types_il_data_rep_0_0,
	mercury_data_ml_backend__mlds_to_il__field_names_il_data_rep_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_il__du_stag_ordered_il_data_rep_0_0[] = {
	&mercury_data_ml_backend__mlds_to_il__du_functor_desc_il_data_rep_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_il__du_ptag_ordered_il_data_rep_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_il__du_stag_ordered_il_data_rep_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_il__du_name_ordered_il_data_rep_0[] = {
	&mercury_data_ml_backend__mlds_to_il__du_functor_desc_il_data_rep_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_il__functor_number_map_il_data_rep_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_il__il_data_rep_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0)),
	"ml_backend.mlds_to_il",
	"il_data_rep",
	{ (void *)mercury_data_ml_backend__mlds_to_il__du_name_ordered_il_data_rep_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_il__du_ptag_ordered_il_data_rep_0 },
	1,
	4,
	mercury_data_ml_backend__mlds_to_il__functor_number_map_il_data_rep_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_import_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_cord__ti_cord_1ml_backend__ilds__type_ctor_info_instr_0 = {
	&mercury_data_cord__type_ctor_info_cord_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_instr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_class_member_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_has_main_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0ml_backend__mlds__type_ctor_info_mlds_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1libs__globals__type_ctor_info_foreign_language_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_member_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_signature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_has_main_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_member_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_signature_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_il__field_types_il_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_import_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ml_backend__ilds__type_ctor_info_instr_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ml_backend__ilds__type_ctor_info_instr_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_class_member_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_has_main_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0ml_backend__mlds__type_ctor_info_mlds_type_0,
	(MR_PseudoTypeInfo) &mercury_data_cord__ti_cord_1ml_backend__ilds__type_ctor_info_instr_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0ml_backend__mlds__type_ctor_info_mlds_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_member_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_member_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signature_0
};

const MR_ConstString mercury_data_ml_backend__mlds_to_il__field_names_il_info_0_0[] = {
	"module_name",
	"assembly_name",
	"imports",
	"file_foreign_langs",
	"il_data_rep",
	"debug_il_asm",
	"verifiable_code",
	"il_byref_tailcalls",
	"support_ms_clr",
	"support_rotor_clr",
	"alloc_instrs",
	"init_instrs",
	"class_members",
	"has_main",
	"class_foreign_langs",
	"field_names",
	"locals",
	"instr_tree",
	"label_counter",
	"block_counter",
	"method_foreign_lang",
	"arguments",
	"method_name",
	"csharp_method_name",
	"signature"
};

const MR_DuArgLocn mercury_data_ml_backend__mlds_to_il__field_locns_il_info_0_0[] = {
	{ 0, 0, 0 },
	{ 1, 0, 0 },
	{ 2, 0, 0 },
	{ 3, 0, 0 },
	{ 4, 0, 0 },
	{ 5, 0, 1 },
	{ 5, 1, 1 },
	{ 5, 2, 1 },
	{ 5, 3, 1 },
	{ 5, 4, 1 },
	{ 6, 0, 0 },
	{ 7, 0, 0 },
	{ 8, 0, 0 },
	{ 9, 0, 0 },
	{ 10, 0, 0 },
	{ 11, 0, 0 },
	{ 12, 0, 0 },
	{ 13, 0, 0 },
	{ 14, 0, 0 },
	{ 15, 0, 0 },
	{ 16, 0, 0 },
	{ 17, 0, 0 },
	{ 18, 0, 0 },
	{ 19, 0, 0 },
	{ 20, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_il__du_functor_desc_il_info_0_0 = {
	"il_info",
	25,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_il__field_types_il_info_0_0,
	mercury_data_ml_backend__mlds_to_il__field_names_il_info_0_0,
	mercury_data_ml_backend__mlds_to_il__field_locns_il_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_il__du_stag_ordered_il_info_0_0[] = {
	&mercury_data_ml_backend__mlds_to_il__du_functor_desc_il_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_il__du_ptag_ordered_il_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_il__du_stag_ordered_il_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_il__du_name_ordered_il_info_0[] = {
	&mercury_data_ml_backend__mlds_to_il__du_functor_desc_il_info_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_il__functor_number_map_il_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_il__il_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_il__il_info_0_0)),
	"ml_backend.mlds_to_il",
	"il_info",
	{ (void *)mercury_data_ml_backend__mlds_to_il__du_name_ordered_il_info_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_il__du_ptag_ordered_il_info_0 },
	1,
	4,
	mercury_data_ml_backend__mlds_to_il__functor_number_map_il_info_0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_il__enum_functor_desc_il_mangle_name_0_0 = {
	"mangle_for_il",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_il__enum_functor_desc_il_mangle_name_0_1 = {
	"mangle_for_csharp",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__mlds_to_il__enum_value_ordered_il_mangle_name_0[] = {
	&mercury_data_ml_backend__mlds_to_il__enum_functor_desc_il_mangle_name_0_0,
	&mercury_data_ml_backend__mlds_to_il__enum_functor_desc_il_mangle_name_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__mlds_to_il__enum_name_ordered_il_mangle_name_0[] = {
	&mercury_data_ml_backend__mlds_to_il__enum_functor_desc_il_mangle_name_0_1,
	&mercury_data_ml_backend__mlds_to_il__enum_functor_desc_il_mangle_name_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_il__functor_number_map_il_mangle_name_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_mangle_name_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_il__il_mangle_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_il__il_mangle_name_0_0)),
	"ml_backend.mlds_to_il",
	"il_mangle_name",
	{ (void *)mercury_data_ml_backend__mlds_to_il__enum_name_ordered_il_mangle_name_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_il__enum_value_ordered_il_mangle_name_0 },
	2,
	4,
	mercury_data_ml_backend__mlds_to_il__functor_number_map_il_mangle_name_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_instr_tree_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_il__instr_tree_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_il__instr_tree_0_0)),
	"ml_backend.mlds_to_il",
	"instr_tree",
	{ 0 },
	{ (void *)&mercury_data_cord__ti_cord_1ml_backend__ilds__type_ctor_info_instr_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_locals_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_il__locals_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_il__locals_map_0_0)),
	"ml_backend.mlds_to_il",
	"locals_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0ml_backend__mlds__type_ctor_info_mlds_type_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_mlds_vartypes_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_il__mlds_vartypes_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_il__mlds_vartypes_0_0)),
	"ml_backend.mlds_to_il",
	"mlds_vartypes",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0ml_backend__mlds__type_ctor_info_mlds_type_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__flatten_init_1_0_2 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"flatten_init",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1601,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__flatten_init_1_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"flatten_init",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1601,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_5 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1412",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1412,
"64"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_4 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1405",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1405,
"54"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_3 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1399",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1396,
"35"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1384",
6,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1384,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1381",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1381,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_4 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1194",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1194,
"198"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1151",
4,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1151,
"136"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_2 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"mlds_arg_to_il_arg",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1081,
"67"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_method_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1068",
1,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1068,
"59"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_info_get_locals_list_2_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"mlds_type_to_ilds_type",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
4605,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_7 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1911",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1911,
"200"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_6 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1729",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1729,
"158"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_5 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"load",
4,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1720,
"134"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"load",
4,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1720,
"134"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1640",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1640,
"40"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"generate_defn_initializer",
5,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1636,
"30"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__statement_to_il_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"defn_to_local",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1634,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_5 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1963",
4,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1963,
"72"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_2135",
5,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
2135,
"289"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"load",
4,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
2080,
"256"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_2 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"mlds_type_to_ilds_type",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
2079,
"255"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__atomic_statement_to_il_4_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"mlds_type_to_ilds_type",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
2079,
"255"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_1562",
7,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1562,
"45"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_2 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"mlds_type_to_ilds_type",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
3046,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"mlds_type_to_ilds_type",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
3046,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__mlds_signature_to_ilds_type_params_2_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"mlds_type_to_ilds_type",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
3046,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__flatten_inits_1_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"flatten_init",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1601,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__attributes_to_custom_attributes_2_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"attribute_to_custom_attribute",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
1348,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_info_new_class_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_4475",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
4475,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__make_class_constructor_class_member_7_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_2973",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
2973,
"29"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_class_body_10_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"generate_method",
6,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
723,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_class_body_10_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"generate_method",
6,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
720,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_class_body_10_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"interface_id_to_class_name",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
718,
"19"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_switch_case_1_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_cond",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
534,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_defn_1_0_2 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_defn",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
451,
"28"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_defn_1_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_defn",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
450,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_initializer_1_0_2 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_initializer",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
620,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_initializer_1_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_initializer",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
622,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_5 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_switch_case",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
487,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_4 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_lval",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
510,
"69"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_3 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_rval",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
509,
"67"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_2 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_statement",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
475,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_statement_1_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_defn",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
474,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__rename_atomic_1_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_rval",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
553,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__mlds_to_il__params_to_il_signature_3_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"input_param_to_ilds_type",
4,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
3067,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_6 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_321",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
321,
"70"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_5 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_321",
3,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
321,
"70"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"has_foreign_code_defined",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
287,
"42"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"mlds_defn_to_ilasm_decl",
4,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
285,
"40"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_264",
1,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
264,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_il_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_262",
1,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
262,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__generate_extern_assembly_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_4251",
6,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
4251,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_7 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_defn",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
396,
"43"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_6 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"rename_defn",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
393,
"41"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_5 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_385",
1,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
385,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_379",
1,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
379,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"lambda_mlds_to_il_m_377",
1,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
377,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"mlds_export_to_mlds_defn",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
372,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_il__il_transform_mlds_2_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_il",
"ml_backend.mlds_to_il",
"project_foreign_code_export",
2,
0
},
"ml_backend.mlds_to_il",
"mlds_to_il.m",
367,
"7"
};



MR_BEGIN_MODULE(ml_backend__mlds_to_il_module0)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mercury_runtime_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mercury_runtime_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_runtime_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mercury_runtime_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("runtime", 7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("mercury", 7);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module1)
	MR_init_entry1(ml_backend__mlds_to_il__get_il_data_rep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__get_il_data_rep_2_0);
	MR_init_label5(ml_backend__mlds_to_il__get_il_data_rep_2_0,2,3,4,5,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_il_data_rep'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_il__get_il_data_rep_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 236;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_il__get_il_data_rep_2_0_i2);
MR_def_label(ml_backend__mlds_to_il__get_il_data_rep_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 241;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_il__get_il_data_rep_2_0_i3);
MR_def_label(ml_backend__mlds_to_il__get_il_data_rep_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 242;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_il__get_il_data_rep_2_0_i4);
MR_def_label(ml_backend__mlds_to_il__get_il_data_rep_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_il_data_rep_2_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,0));
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__mlds_to_il__get_il_data_rep_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_il_data_rep_2_0_i14);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__mlds_to_il__get_il_data_rep_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__wrapper_class_name_0_0);
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(fn__ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module2)
	MR_init_entry1(fn__ml_backend__mlds_to_il__wrapper_class_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__wrapper_class_1_0);
	MR_init_label4(fn__ml_backend__mlds_to_il__wrapper_class_1_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'wrapper_class'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__wrapper_class_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		fn__ml_backend__mlds_to_il__wrapper_class_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__wrapper_class_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(2), 3, (MR_Integer) 1);
	MR_tfield(3, MR_sv(2), 0) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__ml_backend__mlds_to_il__wrapper_class_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__wrapper_class_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		fn__ml_backend__mlds_to_il__wrapper_class_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__wrapper_class_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_0,
		fn__ml_backend__mlds_to_il__wrapper_class_1_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__wrapper_class_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 6) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
MR_decl_entry(map__values_2_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__condense_1_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(ml_backend__ml_global_data__ml_global_data_get_all_global_defns_5_0);
MR_decl_entry(require__expect_4_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__ml_backend__ml_global_data__ml_global_data_init_2_0);
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module3)
	MR_init_entry1(ml_backend__mlds_to_il__il_transform_mlds_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_transform_mlds_2_0);
	MR_init_label10(ml_backend__mlds_to_il__il_transform_mlds_2_0,2,5,6,8,9,11,13,14,15,16)
	MR_init_label5(ml_backend__mlds_to_il__il_transform_mlds_2_0,18,20,21,23,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_transform_mlds'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_transform_mlds_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(9) = MR_tfield(0, MR_r1, 3);
	MR_sv(10) = MR_tfield(0, MR_r1, 4);
	MR_sv(4) = MR_tfield(0, MR_r1, 5);
	MR_sv(5) = MR_tfield(0, MR_r1, 6);
	MR_sv(6) = MR_tfield(0, MR_r1, 7);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__values_2_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i2);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i5);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i6);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(11);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i8);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_global_data_get_all_global_defns_5_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i9);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__377__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.il_transform_mlds\'/2", 53);
	MR_r4 = (MR_Word) MR_string_const("nonempty ScalarCellGroupMap", 27);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i11);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__379__1_1_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r1, 3) = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.il_transform_mlds\'/2", 53);
	MR_r4 = (MR_Word) MR_string_const("nonempty VectorCellGroupMap", 27);
	MR_np_call_localret_ent(require__expect_4_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i13);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i14);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i15);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__ml_backend__ml_global_data__ml_global_data_init_2_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i16);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i18);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i20);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__wrapper_class_1_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i21);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i23);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_il__il_transform_mlds_2_0_i25);
MR_def_label(ml_backend__mlds_to_il__il_transform_mlds_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(9);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_sv(4);
	MR_tfield(0, MR_r2, 6) = MR_sv(5);
	MR_tfield(0, MR_r2, 7) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module4)
	MR_init_entry1(ml_backend__mlds_to_il__sym_name_to_string_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__sym_name_to_string_2_4_0);
	MR_init_label3(ml_backend__mlds_to_il__sym_name_to_string_2_4_0,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_to_string_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__sym_name_to_string_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__sym_name_to_string_2_4_0_i2);
	}
	MR_r5 = (MR_Word) MR_sp;
MR_def_label(ml_backend__mlds_to_il__sym_name_to_string_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(2);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r1,0))
		continue;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	break;
	} /* end while */
MR_def_label(ml_backend__mlds_to_il__sym_name_to_string_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r5))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(ml_backend__mlds_to_il__sym_name_to_string_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module5)
	MR_init_entry1(ml_backend__mlds_to_il__sym_name_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__sym_name_to_string_2_0);
	MR_init_label1(ml_backend__mlds_to_il__sym_name_to_string_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__sym_name_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_string_2_4_0,
		ml_backend__mlds_to_il__sym_name_to_string_2_0_i2);
MR_def_label(ml_backend__mlds_to_il__sym_name_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module6)
	MR_init_entry1(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0);
	MR_init_label3(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0,6,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_to_class_name_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r1,0))
		continue;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	break;
	} /* end while */
MR_def_label(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module7)
	MR_init_entry1(ml_backend__mlds_to_il__sym_name_to_class_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__sym_name_to_class_name_2_0);
	MR_init_label1(ml_backend__mlds_to_il__sym_name_to_class_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_to_class_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__sym_name_to_class_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0,
		ml_backend__mlds_to_il__sym_name_to_class_name_2_0_i2);
MR_def_label(ml_backend__mlds_to_il__sym_name_to_class_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(list__reverse_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0);
MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(fn__mdbcomp__prim_data__outermost_qualifier_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module8)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,2,3,4,5,6,15,17,13,19,11)
	MR_init_label4(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,24,25,28,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_module_name_to_assembly_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i6);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("mercury", 7)) != 0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i11);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 1);
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("__csharp_code", 13);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i15);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("__cpp_code", 10);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i17);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i11);
	}
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_string_2_4_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i19);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i27);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_string_2_4_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i24);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i25);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i27);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__outermost_qualifier_1_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0_i28);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module9)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,2,3,4,5,6,7,8,9,19,21)
	MR_init_label8(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,17,23,26,15,29,30,33,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_module_name_to_class_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_class_name_2_2_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i7);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i8);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i9);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("mercury", 7)) != 0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i9);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i15);
	}
	MR_r1 = MR_tfield(1, MR_sv(3), 1);
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("__csharp_code", 13);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i19);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("__cpp_code", 10);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i21);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i15);
	}
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_string_2_4_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i23);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const(".", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i26);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_string_2_4_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i29);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i30);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i32);
	}
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__outermost_qualifier_1_0,
		fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0_i33);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module10)
	MR_init_entry1(fn__ml_backend__mlds_to_il__sym_name_prefix_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__sym_name_prefix_1_0);
	MR_init_label2(fn__ml_backend__mlds_to_il__sym_name_prefix_1_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_prefix'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__sym_name_prefix_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__sym_name_prefix_1_0_i2);
	}
MR_def_label(fn__ml_backend__mlds_to_il__sym_name_prefix_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r1,0))
		continue;
	break;
	} /* end while */
MR_def_label(fn__ml_backend__mlds_to_il__sym_name_prefix_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module11)
	MR_init_entry1(fn__ml_backend__mlds_to_il__dotnet_system_assembly_decls_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__dotnet_system_assembly_decls_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dotnet_system_assembly_decls'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__dotnet_system_assembly_decls_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(list__sort_and_remove_dups_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module12)
	MR_init_entry1(ml_backend__mlds_to_il__generate_extern_assembly_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__generate_extern_assembly_6_0);
	MR_init_label4(ml_backend__mlds_to_il__generate_extern_assembly_6_0,4,5,6,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_extern_assembly'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__generate_extern_assembly_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, il_decl);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r5;
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		ml_backend__mlds_to_il__generate_extern_assembly_6_0_i4);
MR_def_label(ml_backend__mlds_to_il__generate_extern_assembly_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__mlds_to_il__generate_extern_assembly_6_0_i5);
MR_def_label(ml_backend__mlds_to_il__generate_extern_assembly_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		ml_backend__mlds_to_il__generate_extern_assembly_6_0_i6);
MR_def_label(ml_backend__mlds_to_il__generate_extern_assembly_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(3,11,0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__dotnet_system_assembly_decls_1_0,
		ml_backend__mlds_to_il__generate_extern_assembly_6_0_i20);
MR_def_label(ml_backend__mlds_to_il__generate_extern_assembly_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_string_const("mscorlib", 8);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__counter__init_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module13)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_info_init_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_info_init_9_0);
	MR_init_label9(fn__ml_backend__mlds_to_il__il_info_init_9_0,2,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_init'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_info_init_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__ml_backend__mlds_to_il__il_info_init_9_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__il_info_init_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		fn__ml_backend__mlds_to_il__il_info_init_9_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__il_info_init_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		fn__ml_backend__mlds_to_il__il_info_init_9_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__il_info_init_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__ml_backend__mlds_to_il__il_info_init_9_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__il_info_init_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(17) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__ml_backend__mlds_to_il__il_info_init_9_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__il_info_init_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__ml_backend__mlds_to_il__il_info_init_9_0_i7);
MR_def_label(fn__ml_backend__mlds_to_il__il_info_init_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		fn__ml_backend__mlds_to_il__il_info_init_9_0_i8);
MR_def_label(fn__ml_backend__mlds_to_il__il_info_init_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		fn__ml_backend__mlds_to_il__il_info_init_9_0_i9);
MR_def_label(fn__ml_backend__mlds_to_il__il_info_init_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		fn__ml_backend__mlds_to_il__il_info_init_9_0_i10);
MR_def_label(fn__ml_backend__mlds_to_il__il_info_init_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 21);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(10);
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	MR_tfield(0, MR_r2, 5) = ((MR_Integer) MR_sv(5) | (((MR_Integer) MR_sv(6) << (MR_Integer) 1) | (((MR_Integer) MR_sv(7) << (MR_Integer) 2) | (((MR_Integer) MR_sv(8) << (MR_Integer) 3) | ((MR_Integer) MR_sv(9) << (MR_Integer) 4)))));
	MR_tfield(0, MR_r2, 6) = MR_sv(11);
	MR_tfield(0, MR_r2, 7) = MR_sv(15);
	MR_tfield(0, MR_r2, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 9) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 10) = MR_sv(12);
	MR_tfield(0, MR_r2, 11) = MR_sv(17);
	MR_tfield(0, MR_r2, 12) = MR_sv(16);
	MR_tfield(0, MR_r2, 13) = MR_sv(13);
	MR_tfield(0, MR_r2, 14) = MR_sv(14);
	MR_tfield(0, MR_r2, 15) = MR_r1;
	MR_tfield(0, MR_r2, 16) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 17) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 18) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tfield(0, MR_r2, 19) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tfield(0, MR_r2, 20) = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(fn__set__union_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(fn__list__append_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module14)
	MR_init_entry1(ml_backend__mlds_to_il__generate_il_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__generate_il_5_0);
	MR_init_label10(ml_backend__mlds_to_il__generate_il_5_0,2,3,5,7,8,9,10,11,12,13)
	MR_init_label10(ml_backend__mlds_to_il__generate_il_5_0,14,15,16,17,18,19,20,22,25,26)
	MR_init_label10(ml_backend__mlds_to_il__generate_il_5_0,27,28,29,31,30,33,40,41,42,43)
	MR_init_label3(ml_backend__mlds_to_il__generate_il_5_0,45,48,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_il'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__generate_il_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_transform_mlds_2_0,
		ml_backend__mlds_to_il__generate_il_5_0_i2);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_tfield(0, MR_r1, 0);
	MR_sv(11) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(13) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_global_data_get_all_global_defns_5_0,
		ml_backend__mlds_to_il__generate_il_5_0_i3);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__262__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(12) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.generate_il\'/5", 47);
	MR_r4 = (MR_Word) MR_string_const("nonempty ScalarCellGroupMap", 27);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ml_backend__mlds_to_il__generate_il_5_0_i5);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,4);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__264__1_1_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r1, 3) = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.generate_il\'/5", 47);
	MR_r4 = (MR_Word) MR_string_const("nonempty VectorCellGroupMap", 27);
	MR_np_call_localret_ent(require__expect_4_0,
		ml_backend__mlds_to_il__generate_il_5_0_i7);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_il_5_0_i8);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_il__generate_il_5_0_i9);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_il__generate_il_5_0_i10);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ml_backend__mlds_to_il__generate_il_5_0_i11);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_il_data_rep_2_0,
		ml_backend__mlds_to_il__generate_il_5_0_i12);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 68;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_il__generate_il_5_0_i13);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 242;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_il__generate_il_5_0_i14);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 245;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_il__generate_il_5_0_i15);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 146;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_il__generate_il_5_0_i16);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 147;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_il__generate_il_5_0_i17);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 503;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_il__generate_il_5_0_i18);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 504;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_il__generate_il_5_0_i19);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_info_init_9_0,
		ml_backend__mlds_to_il__generate_il_5_0_i20);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, il_decl);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_il__generate_il_5_0_i22);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__has_foreign_code_defined_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(11);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,7,16);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_il__generate_il_5_0_i25);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_tfield(0, MR_sv(10), 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		ml_backend__mlds_to_il__generate_il_5_0_i26);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__union_2_0,
		ml_backend__mlds_to_il__generate_il_5_0_i27);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		ml_backend__mlds_to_il__generate_il_5_0_i28);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		ml_backend__mlds_to_il__generate_il_5_0_i29);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__sym_name_prefix_1_0,
		ml_backend__mlds_to_il__generate_il_5_0_i31);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mercury", 7)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_il_5_0_i30);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__generate_extern_assembly_6_0,
		ml_backend__mlds_to_il__generate_il_5_0_i45);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(12),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_il_5_0_i33);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_il_5_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__321__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_sv(13) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ml_backend__mlds_to_il__generate_il_5_0_i40);
	}
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_sv(12) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(14,1);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__321__1_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_sv(13);
	MR_r2 = MR_sv(10);
	MR_sv(13) = MR_tempr2;
	MR_r1 = MR_sv(5);
	}
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ml_backend__mlds_to_il__generate_il_5_0_i41);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_il__generate_il_5_0_i42);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__mlds_to_il__generate_il_5_0_i43);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__generate_extern_assembly_6_0,
		ml_backend__mlds_to_il__generate_il_5_0_i45);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_il_5_0_i48);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_il_5_0_i49);
MR_def_label(ml_backend__mlds_to_il__generate_il_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_maybe_il_version_number_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module15)
	MR_init_entry1(ml_backend__mlds_to_il__generate_il_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__generate_il_4_0);
	MR_init_label3(ml_backend__mlds_to_il__generate_il_4_0,2,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_il'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_il__generate_il_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(libs__globals__get_maybe_il_version_number_2_0,
		ml_backend__mlds_to_il__generate_il_4_0_i2);
MR_def_label(ml_backend__mlds_to_il__generate_il_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_il_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__mlds_to_il__generate_il_4_0_i5);
MR_def_label(ml_backend__mlds_to_il__generate_il_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__mlds_to_il__generate_il_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(1, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_il__generate_il_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__ml_backend__ilds__append_toplevel_class_name_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module16)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0);
	MR_init_label4(fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_class_name_to_ilds_class_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ml_backend__ilds__append_toplevel_class_name_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module17)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_system_assembly_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_system_assembly_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_system_assembly_name'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_system_assembly_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module18)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_system_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_system_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_system_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_system_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("System", 6);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module19)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_string_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_string_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_string_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_string_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,5));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module20)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_generic_class_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_generic_class_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_generic_class_name'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__mlds_to_il__il_generic_class_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module21)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_generic_simple_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_generic_simple_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_generic_simple_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_generic_simple_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,6));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module22)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_generic_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_generic_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_generic_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_generic_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,6));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module23)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_object_array_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_object_array_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_object_array_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_object_array_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,6));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_util__type_needs_lowlevel_rep_2_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_det_3_0);
MR_decl_entry(ml_backend__ml_type_gen__ml_gen_type_name_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module24)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,3,7,9,11,5,18,24,35,37,38)
	MR_init_label7(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,39,40,41,42,43,119,111)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_mercury_type_to_ilds_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r3, 0);
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,5));
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 2)) || ((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 3))))) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i18);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,6));
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_tag(MR_r3) == MR_mktag((MR_Integer) 2)) || ((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 0))) || ((MR_Integer) MR_r3 == (MR_Integer) MR_tbmkword(0, 1))))) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i24);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,6));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i119);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ml_backend__ml_util__type_needs_lowlevel_rep_2_0,
		fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i35);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i111);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_det_3_0,
		fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i37);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_type_name_3_0,
		fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i38);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i39);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i40);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i41);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i42);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ilds__append_toplevel_class_name_2_0,
		fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0_i43);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__il_object_array_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__il_object_array_type_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module25)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0);
	MR_init_label4(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0,3,10,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_class_to_ilds_simple_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0_i4);
	}
MR_def_label(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0_i10);
	}
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module26)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_generic_array_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_generic_array_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_generic_array_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_generic_array_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,7));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module27)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_commit_class_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_commit_class_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_commit_class_name'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_commit_class_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module28)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_commit_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_commit_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_commit_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_commit_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,8));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(require__sorry_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module29)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,3,6,5,10,11,9,13,15,20,22)
	MR_init_label10(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,19,30,32,34,17,37,39,40,278,47)
	MR_init_label10(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,42,51,53,55,57,59,62,61,65,67)
	MR_init_label2(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,69,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_type_to_ilds_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__mlds_mercury_type_to_ilds_type_3_0);
	}
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 3);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_class_name_to_ilds_class_name_2_0,
		fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i10);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_class_to_ilds_simple_type_2_0,
		fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i11);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i13);
	}
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__il_commit_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i17);
	}
	MR_r4 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_body((MR_Integer) MR_r4, (MR_Integer) 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_class_name_2_0,
		fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i20);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i30);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.mlds_type_to_ilds_type\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("c foreign type", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i32);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.mlds_type_to_ilds_type\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("csharp foreign type", 19);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.mlds_type_to_ilds_type\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("erlang foreign type", 19);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.mlds_type_to_ilds_type\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("java foreign type", 17);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i37);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,6)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i39);
	}
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i40);
	}
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__il_generic_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i278);
	}
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i278);
	}
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__il_generic_array_type_0_0);
	}
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i47);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i51);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i55);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,11);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i57);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,8)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i59);
	}
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__il_generic_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i61);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i62);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i65);
	}
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__il_object_array_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i67);
	}
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__il_object_array_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,7)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i69);
	}
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__il_generic_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0_i71);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.mlds_type_to_ilds_type\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("mlds_mostly_generic_array_type", 30);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.mlds_type_to_ilds_type\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("unknown_type", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module30)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0);
	MR_init_label1(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_type_to_ilds_simple_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_method_param_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module31)
	MR_init_entry1(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__params_to_il_signature_3_0);
	MR_init_label4(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0,3,5,10,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'params_to_il_signature'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__mlds_to_il__params_to_il_signature_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__input_param_to_ilds_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_method_param);
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__params_to_il_signature_3_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0_i9);
	}
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__ml_backend__mlds_to_il__params_to_il_signature_3_0_i10);
MR_def_label(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.params_to_il_signature\'/3", 57);
	MR_r3 = (MR_Word) MR_string_const("multiple return values", 22);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__is_all_alnum_or_underscore_1_0);
MR_decl_entry(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module32)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mangle_pred_name_2_0);
	MR_init_label3(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0,6,4,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mangle_pred_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0_i23);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__is_all_alnum_or_underscore_1_0,
		fn__ml_backend__mlds_to_il__mangle_pred_name_2_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0);
MR_def_label(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module33)
	MR_init_entry1(ml_backend__mlds_to_il__predlabel_to_id_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__predlabel_to_id_5_0);
	MR_init_label10(ml_backend__mlds_to_il__predlabel_to_id_5_0,4,6,7,8,5,10,11,12,13,14)
	MR_init_label10(ml_backend__mlds_to_il__predlabel_to_id_5_0,15,16,17,18,19,20,21,22,23,3)
	MR_init_label10(ml_backend__mlds_to_il__predlabel_to_id_5_0,26,27,28,25,30,31,34,35,37,38)
	MR_init_label10(ml_backend__mlds_to_il__predlabel_to_id_5_0,39,41,42,43,44,45,46,47,48,49)
	MR_init_label1(ml_backend__mlds_to_il__predlabel_to_id_5_0,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predlabel_to_id'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__predlabel_to_id_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i3);
	}
	MR_sv(7) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tfield(1, MR_r1, 2);
	MR_sv(5) = MR_tfield(1, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i4);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i6);
	}
	MR_r2 = MR_sv(2);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i5);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_string_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i7);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i8);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i10);
	}
	MR_sv(7) = MR_r3;
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i13);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i11);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i12);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i13);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i14);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i15);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i16);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i17);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i18);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i19);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i20);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i21);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i22);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i23);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("special_", 8);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r5 = MR_tempr1;
	MR_r1 = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i25);
	}
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(5) = MR_tfield(0, MR_r1, 3);
	MR_sv(1) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__sym_name_to_string_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i27);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i28);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i30);
	}
	MR_sv(6) = (MR_Word) MR_string_const("_f", 2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i34);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i31);
	}
	MR_sv(6) = (MR_Word) MR_string_const("_p", 2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i34);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i34);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i35);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i39);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i37);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_m", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i38);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__predlabel_to_id_5_0_i41);
	}
	MR_sv(7) = MR_r3;
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i44);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i42);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_i", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i43);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mangle_pred_name_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i44);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i45);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i46);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i47);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i48);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i49);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__predlabel_to_id_5_0_i50);
MR_def_label(ml_backend__mlds_to_il__predlabel_to_id_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module34)
	MR_init_entry1(ml_backend__mlds_to_il__predlabel_to_csharp_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__predlabel_to_csharp_id_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predlabel_to_csharp_id'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_il__predlabel_to_csharp_id_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 1;
	MR_np_tailcall_ent(ml_backend__mlds_to_il__predlabel_to_id_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module35)
	MR_init_entry1(ml_backend__mlds_to_il__mangle_mlds_var_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__mangle_mlds_var_2_0);
	MR_init_label3(ml_backend__mlds_to_il__mangle_mlds_var_2_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mangle_mlds_var'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_il__mangle_mlds_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_mlds_var_2_0_i14);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_il__mangle_mlds_var_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r3, 0);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__mangle_mlds_var_2_0_i4);
MR_def_label(ml_backend__mlds_to_il__mangle_mlds_var_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_mlds_var_2_0_i5);
MR_def_label(ml_backend__mlds_to_il__mangle_mlds_var_2_0,5)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module36)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0);
	MR_init_label3(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0,2,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_type_to_ilds_class_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0_i5);
	}
	MR_r1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0_i3);
	}
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.get_ilds_type_class_name\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("type not a class", 16);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module37)
	MR_init_entry1(ml_backend__mlds_to_il__predlabel_to_ilds_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__predlabel_to_ilds_id_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'predlabel_to_ilds_id'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__predlabel_to_ilds_id_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Integer) 0;
	MR_np_tailcall_ent(ml_backend__mlds_to_il__predlabel_to_id_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module38)
	MR_init_entry1(ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0);
	MR_init_label2(ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mangle_mlds_proc_label'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0_i2);
MR_def_label(ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__predlabel_to_id_5_0,
		ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0_i3);
MR_def_label(ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module39)
	MR_init_entry1(fn__ml_backend__mlds_to_il__class_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__class_name_2_0);
	MR_init_label1(fn__ml_backend__mlds_to_il__class_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'class_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__mlds_to_il__class_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		fn__ml_backend__mlds_to_il__class_name_2_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__class_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__ml_backend__ilds__append_toplevel_class_name_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__search_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module40)
	MR_init_entry1(ml_backend__mlds_to_il__has_foreign_code_defined_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__has_foreign_code_defined_2_0);
	MR_init_label3(ml_backend__mlds_to_il__has_foreign_code_defined_2_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'has_foreign_code_defined'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__has_foreign_code_defined_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__map__search_2_0,
		ml_backend__mlds_to_il__has_foreign_code_defined_2_0_i2);
MR_def_label(ml_backend__mlds_to_il__has_foreign_code_defined_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__has_foreign_code_defined_2_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_r2, 3);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	MR_tempr2 = MR_tfield(0, MR_r2, 1);
	MR_tempr3 = MR_tfield(0, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__has_foreign_code_defined_2_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__has_foreign_code_defined_2_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__has_foreign_code_defined_2_0_i4);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__has_foreign_code_defined_2_0_i1);
	}
	}
MR_def_label(ml_backend__mlds_to_il__has_foreign_code_defined_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__has_foreign_code_defined_2_0,1)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module41)
	MR_init_entry1(fn__ml_backend__mlds_to_il__project_foreign_code_export_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__project_foreign_code_export_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_foreign_code_export'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__project_foreign_code_export_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_append_wrapper_class_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module42)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_rval_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_rval_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__rename_rval_1_0,4,3,7,6,11,12,10,16,18,21)
	MR_init_label10(fn__ml_backend__mlds_to_il__rename_rval_1_0,20,29,28,34,26,14,46,45,50,49)
	MR_init_label2(fn__ml_backend__mlds_to_il__rename_rval_1_0,52,196)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_rval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_rval_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_lval_1_0,
		fn__ml_backend__mlds_to_il__rename_rval_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_rval_1_0_i7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_sv(3);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i196);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i10);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_rval_1_0_i11);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_rval_1_0_i12);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i14);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i16);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,7,17);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i18);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,7,18);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i20);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_append_wrapper_class_1_0,
		fn__ml_backend__mlds_to_il__rename_rval_1_0_i21);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_decr_sp_and_return(4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i196);
	}
	if (MR_RTAGS_TEST(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i196);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i26);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i28);
	}
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_append_wrapper_class_1_0,
		fn__ml_backend__mlds_to_il__rename_rval_1_0_i29);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_append_wrapper_class_1_0,
		fn__ml_backend__mlds_to_il__rename_rval_1_0_i34);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i196);
	}
	if (MR_RTAGS_TEST(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i196);
	}
	if (MR_RTAGS_TEST(MR_r2,3,5)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i196);
	}
	if (MR_RTAGS_TEST(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i196);
	}
	if (MR_RTAGS_TEST(MR_r2,3,6)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i196);
	}
	if (MR_RTAGS_TEST(MR_r2,3,8)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i196);
	}
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i45);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_lval_1_0,
		fn__ml_backend__mlds_to_il__rename_rval_1_0_i46);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i196);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_rval_1_0_i49);
	}
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_rval_1_0_i50);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_rval_1_0_i52);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_rval_1_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module43)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_lval_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_lval_1_0);
	MR_init_label7(fn__ml_backend__mlds_to_il__rename_lval_1_0,4,5,3,9,8,11,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_lval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_lval_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_lval_1_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_r1, 3);
	MR_sv(2) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_lval_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_lval_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_field_id_1_0,
		fn__ml_backend__mlds_to_il__rename_lval_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__rename_lval_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(4);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__mlds_to_il__rename_lval_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_lval_1_0_i29);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_lval_1_0_i8);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_lval_1_0_i9);
MR_def_label(fn__ml_backend__mlds_to_il__rename_lval_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__mlds_to_il__rename_lval_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_append_wrapper_class_1_0,
		fn__ml_backend__mlds_to_il__rename_lval_1_0_i11);
MR_def_label(fn__ml_backend__mlds_to_il__rename_lval_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = MR_r2;
	MR_tfield(3, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(fn__ml_backend__mlds_to_il__rename_lval_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module44)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_field_id_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_field_id_1_0);
	MR_init_label2(fn__ml_backend__mlds_to_il__rename_field_id_1_0,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_field_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_field_id_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_field_id_1_0_i12);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_field_id_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_field_id_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__mlds_to_il__rename_field_id_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module45)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_atomic_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_atomic_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__rename_atomic_1_0,3,5,4,10,11,9,14,13,18,17)
	MR_init_label5(fn__ml_backend__mlds_to_il__rename_atomic_1_0,21,23,20,27,99)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_atomic'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_atomic_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_atomic_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_atomic_1_0_i4);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_lval_1_0,
		fn__ml_backend__mlds_to_il__rename_atomic_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_atomic_1_0_i11);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_atomic_1_0_i99);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_atomic_1_0_i9);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_lval_1_0,
		fn__ml_backend__mlds_to_il__rename_atomic_1_0_i10);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_atomic_1_0_i11);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_atomic_1_0_i13);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_atomic_1_0_i14);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_atomic_1_0_i99);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_atomic_1_0_i17);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_lval_1_0,
		fn__ml_backend__mlds_to_il__rename_atomic_1_0_i18);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_atomic_1_0_i20);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(4) = MR_tfield(3, MR_r1, 5);
	MR_sv(5) = MR_tfield(3, MR_r1, 6);
	MR_sv(9) = MR_tfield(3, MR_r1, 7);
	MR_sv(6) = MR_tfield(3, MR_r1, 8);
	MR_sv(7) = MR_tfield(3, MR_r1, 9);
	MR_sv(8) = MR_tfield(3, MR_r1, 10);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_lval_1_0,
		fn__ml_backend__mlds_to_il__rename_atomic_1_0_i21);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_atomic_1_0_i23);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 11);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(9);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tfield(3, MR_r2, 3) = MR_sv(2);
	MR_tfield(3, MR_r2, 4) = MR_sv(3);
	MR_tfield(3, MR_r2, 5) = MR_sv(4);
	MR_tfield(3, MR_r2, 6) = MR_sv(5);
	MR_tfield(3, MR_r2, 7) = MR_r1;
	MR_tfield(3, MR_r2, 8) = MR_sv(6);
	MR_tfield(3, MR_r2, 9) = MR_sv(7);
	MR_tfield(3, MR_r2, 10) = MR_sv(8);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_atomic_1_0_i99);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_atomic_1_0_i99);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_atomic_1_0_i27);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(fn__ml_backend__mlds_to_il__rename_atomic_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module46)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0);
	MR_init_label2(fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_maybe_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module47)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_statement_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_statement_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__rename_statement_1_0,5,7,3,11,12,13,10,17,18,16)
	MR_init_label10(fn__ml_backend__mlds_to_il__rename_statement_1_0,22,21,26,28,30,32,35,25,40,39)
	MR_init_label10(fn__ml_backend__mlds_to_il__rename_statement_1_0,44,43,51,53,55,58,61,50,64,65)
	MR_init_label2(fn__ml_backend__mlds_to_il__rename_statement_1_0,66,174)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_statement_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,7);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,8);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 1);
	MR_sv(2) = MR_tfield(2, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i11);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__rename_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i12);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_maybe_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i13);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i16);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i17);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__rename_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i18);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tfield(1, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i21);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_atomic_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i22);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i25);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 5);
	MR_sv(5) = MR_tfield(3, MR_r2, 6);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i26);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i28);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i30);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i35);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr2, 5) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 6) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i39);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i40);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i43);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i44);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r2,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i174);
	}
	if (MR_RTAGS_TEST(MR_r2,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i174);
	}
	if (MR_RTAGS_TEST(MR_r2,3,5)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i174);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i50);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r2, 4);
	MR_sv(4) = MR_tfield(3, MR_r2, 5);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i51);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i53);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i55);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_tfield(3, MR_r2, 3) = MR_sv(2);
	MR_tfield(3, MR_r2, 4) = MR_r1;
	MR_tfield(3, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_statement_1_0_i58);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_tfield(3, MR_r2, 3) = MR_sv(2);
	MR_tfield(3, MR_r2, 4) = MR_r1;
	MR_tfield(3, MR_r2, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__rename_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i61);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_tfield(3, MR_r2, 3) = MR_sv(2);
	MR_tfield(3, MR_r2, 4) = MR_sv(4);
	MR_tfield(3, MR_r2, 5) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_lval_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i64);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__rename_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i65);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__rename_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_statement_1_0_i66);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_statement_1_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module48)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_gc_statement_1_0);
	MR_init_label4(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0,24,5,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_gc_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0_i24);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0_i4);
	}
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 2);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_gc_statement_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(2, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_gc_statement_1_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module49)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_initializer_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_initializer_1_0);
	MR_init_label6(fn__ml_backend__mlds_to_il__rename_initializer_1_0,38,6,4,9,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_initializer'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_initializer_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_initializer_1_0_i38);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rename_initializer_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_initializer_1_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,12);
	MR_r4 = MR_tfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_initializer_1_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__rename_initializer_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ml_backend__mlds_to_il__rename_initializer_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_initializer_1_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_initializer_1_0_i9);
MR_def_label(fn__ml_backend__mlds_to_il__rename_initializer_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__ml_backend__mlds_to_il__rename_initializer_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,13);
	MR_r4 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_initializer_1_0_i12);
MR_def_label(fn__ml_backend__mlds_to_il__rename_initializer_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module50)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_defn_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_defn_1_0);
	MR_init_label8(fn__ml_backend__mlds_to_il__rename_defn_1_0,5,7,3,11,12,10,48,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_defn'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_defn_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_defn_1_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_body((MR_Integer) MR_r5, (MR_Integer) 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,14);
	MR_r4 = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_defn_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__rename_defn_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_defn_1_0_i7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_defn_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_tfield(0, MR_r2, 2) = MR_sv(5);
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_tfield(0, MR_r2, 4) = MR_sv(7);
	MR_tfield(0, MR_r2, 5) = MR_sv(8);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r2);
	MR_decr_sp_and_return(11);
MR_def_label(fn__ml_backend__mlds_to_il__rename_defn_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_defn_1_0_i10);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_initializer_1_0,
		fn__ml_backend__mlds_to_il__rename_defn_1_0_i11);
MR_def_label(fn__ml_backend__mlds_to_il__rename_defn_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_gc_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_defn_1_0_i12);
MR_def_label(fn__ml_backend__mlds_to_il__rename_defn_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(fn__ml_backend__mlds_to_il__rename_defn_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_r2 = MR_tfield(2, MR_tempr2, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_defn_1_0_i48);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_tfield(2, MR_tempr2, 0);
	MR_tfield(2, MR_r2, 1) = MR_tfield(2, MR_tempr2, 1);
	MR_tfield(2, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_r2, 3) = MR_tfield(2, MR_tempr2, 3);
	MR_tfield(2, MR_r2, 4) = MR_tfield(2, MR_tempr2, 4);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__mlds_to_il__rename_defn_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 4);
	MR_r1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_defn_1_0_i19);
MR_def_label(fn__ml_backend__mlds_to_il__rename_defn_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_r2, 0) = MR_sv(4);
	MR_tfield(2, MR_r2, 1) = MR_sv(9);
	MR_tfield(2, MR_r2, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_tfield(2, MR_r2, 3) = MR_sv(5);
	MR_tfield(2, MR_r2, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module51)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_cond_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_cond_1_0);
	MR_init_label4(fn__ml_backend__mlds_to_il__rename_cond_1_0,4,5,3,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_cond'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_cond_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rename_cond_1_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_cond_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_cond_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_cond_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__rename_cond_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ml_backend__mlds_to_il__rename_cond_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_rval_1_0,
		fn__ml_backend__mlds_to_il__rename_cond_1_0_i7);
MR_def_label(fn__ml_backend__mlds_to_il__rename_cond_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module52)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rename_switch_case_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rename_switch_case_1_0);
	MR_init_label3(fn__ml_backend__mlds_to_il__rename_switch_case_1_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_switch_case'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rename_switch_case_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_cond_1_0,
		fn__ml_backend__mlds_to_il__rename_switch_case_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__rename_switch_case_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,16);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__rename_switch_case_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__rename_switch_case_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__rename_statement_1_0,
		fn__ml_backend__mlds_to_il__rename_switch_case_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__rename_switch_case_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__init_decl_flags_6_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module53)
	MR_init_entry1(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0);
	MR_init_label3(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0,7,10,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_add_empty_ctor'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0_i30);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0_i30);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,3,13);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0_i7);
MR_def_label(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,3,13);
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(2));
	MR_tfield(2, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0_i10);
MR_def_label(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,0,3);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module54)
	MR_init_entry1(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0);
	MR_init_label5(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0,5,12,3,26,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_parent_and_extends'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0_i3);
	}
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,14);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,15);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,16);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0_i25);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0,
		fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0_i26);
MR_def_label(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.generate_parent_and_extends\'/3", 62);
	MR_r3 = (MR_Word) MR_string_const("multiple inheritance not supported", 34);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__rtti__id_to_c_identifier_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module55)
	MR_init_entry1(ml_backend__mlds_to_il__mangle_dataname_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__mangle_dataname_2_0);
	MR_init_label9(ml_backend__mlds_to_il__mangle_dataname_2_0,58,6,7,3,9,11,13,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mangle_dataname'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__mangle_dataname_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_2_0_i58);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_2_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r3, 0);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__mangle_dataname_2_0_i6);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_dataname_2_0_i7);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_2_0,7)
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
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_2_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(backend_libs__rtti__id_to_c_identifier_2_0);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_2_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_dataname\'/2", 51);
	MR_r3 = (MR_Word) MR_string_const("unimplemented: mangling mlds_internal_layout", 44);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_dataname\'/2", 51);
	MR_r3 = (MR_Word) MR_string_const("unimplemented: mangling mlds_module_layout", 42);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_dataname\'/2", 51);
	MR_r3 = (MR_Word) MR_string_const("unimplemented: mangling mlds_proc_layout", 40);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_dataname\'/2", 51);
	MR_r3 = (MR_Word) MR_string_const("unimplemented: mangling mlds_scalar_common_ref", 46);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_dataname\'/2", 51);
	MR_r3 = (MR_Word) MR_string_const("unimplemented: mangling mlds_tabling_ref", 40);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module56)
	MR_init_entry1(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0);
	MR_init_label5(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0,3,5,31,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'entity_name_to_ilds_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_il__mangle_dataname_2_0);
MR_def_label(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0_i5);
	}
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_r3 = MR_tfield(2, MR_tempr1, 2);
	MR_r4 = (MR_Integer) 0;
	MR_np_tailcall_ent(ml_backend__mlds_to_il__predlabel_to_id_5_0);
	}
MR_def_label(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0_i8);
MR_def_label(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0_i9);
MR_def_label(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0,9)
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

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module57)
	MR_init_entry1(ml_backend__mlds_to_il__generate_class_body_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__generate_class_body_10_0);
	MR_init_label8(ml_backend__mlds_to_il__generate_class_body_10_0,2,3,5,6,8,9,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_class_body'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__generate_class_body_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0,
		ml_backend__mlds_to_il__generate_class_body_10_0_i2);
MR_def_label(ml_backend__mlds_to_il__generate_class_body_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_r1 = MR_tfield(0, MR_sv(8), 4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__generate_parent_and_extends_3_0,
		ml_backend__mlds_to_il__generate_class_body_10_0_i3);
MR_def_label(ml_backend__mlds_to_il__generate_class_body_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, structured_name);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,17);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__generate_class_body_10_0_i5);
MR_def_label(ml_backend__mlds_to_il__generate_class_body_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(8), 0);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__class_name_2_0,
		ml_backend__mlds_to_il__generate_class_body_10_0_i6);
MR_def_label(ml_backend__mlds_to_il__generate_class_body_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__generate_method_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_tempr3 = MR_sv(8);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(11);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_il__generate_class_body_10_0_i8);
MR_def_label(ml_backend__mlds_to_il__generate_class_body_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_tempr2 = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__maybe_add_empty_ctor_3_0,
		ml_backend__mlds_to_il__generate_class_body_10_0_i9);
MR_def_label(ml_backend__mlds_to_il__generate_class_body_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__generate_method_6_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 4) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(11);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_il__generate_class_body_10_0_i12);
MR_def_label(ml_backend__mlds_to_il__generate_class_body_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_class_body_10_0_i13);
MR_def_label(ml_backend__mlds_to_il__generate_class_body_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(9);
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__overridability_1_0);
MR_decl_entry(fn__ml_backend__mlds__abstractness_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_classattr_0;
MR_decl_entry(fn__ml_backend__mlds__access_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module58)
	MR_init_entry1(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,2,4,3,6,8,14,16,18,21,24)
	MR_init_label2(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,27,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decl_flags_to_classattrs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__overridability_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,7,19);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,3,18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i14);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,3,13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i14);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i16);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,7,20);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i21);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,7,20);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i24);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,7,21);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.decl_flags_to_classattrs\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("local access flag", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i17);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.decl_flags_to_classattrs\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("protected access flag", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0_i17);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module59)
	MR_init_entry1(ml_backend__mlds_to_il__il_info_make_next_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_info_make_next_label_3_0);
	MR_init_label3(ml_backend__mlds_to_il__il_info_make_next_label_3_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_make_next_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_info_make_next_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 14);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__mlds_to_il__il_info_make_next_label_3_0_i2);
MR_def_label(ml_backend__mlds_to_il__il_info_make_next_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr7, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_tempr6, 3) = MR_tfield(0, MR_tempr7, 3);
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_tempr6, 5) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | (((MR_Integer) MR_tempr2 << (MR_Integer) 3) | ((MR_Integer) MR_tempr1 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr6, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_tempr6, 7) = MR_tfield(0, MR_tempr7, 7);
	MR_tfield(0, MR_tempr6, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_tempr6, 9) = MR_tfield(0, MR_tempr7, 9);
	MR_tfield(0, MR_tempr6, 10) = MR_tfield(0, MR_tempr7, 10);
	MR_tfield(0, MR_tempr6, 11) = MR_tfield(0, MR_tempr7, 11);
	MR_tfield(0, MR_tempr6, 12) = MR_tfield(0, MR_tempr7, 12);
	MR_tfield(0, MR_tempr6, 13) = MR_tfield(0, MR_tempr7, 13);
	MR_tfield(0, MR_tempr6, 14) = MR_r2;
	MR_tfield(0, MR_tempr6, 15) = MR_tfield(0, MR_tempr7, 15);
	MR_tfield(0, MR_tempr6, 16) = MR_tfield(0, MR_tempr7, 16);
	MR_tfield(0, MR_tempr6, 17) = MR_tfield(0, MR_tempr7, 17);
	MR_tfield(0, MR_tempr6, 18) = MR_tfield(0, MR_tempr7, 18);
	MR_tfield(0, MR_tempr6, 19) = MR_tfield(0, MR_tempr7, 19);
	MR_tfield(0, MR_tempr6, 20) = MR_tfield(0, MR_tempr7, 20);
	MR_sv(1) = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__il_info_make_next_label_3_0_i4);
MR_def_label(ml_backend__mlds_to_il__il_info_make_next_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("l", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__il_info_make_next_label_3_0_i5);
MR_def_label(ml_backend__mlds_to_il__il_info_make_next_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module60)
	MR_init_entry1(ml_backend__mlds_to_il__test_rtti_initialization_field_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__test_rtti_initialization_field_4_0);
	MR_init_label3(ml_backend__mlds_to_il__test_rtti_initialization_field_4_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'test_rtti_initialization_field'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__test_rtti_initialization_field_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 14);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__mlds_to_il__test_rtti_initialization_field_4_0_i2);
MR_def_label(ml_backend__mlds_to_il__test_rtti_initialization_field_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(2);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr7, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_tempr6, 3) = MR_tfield(0, MR_tempr7, 3);
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_tempr6, 5) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | (((MR_Integer) MR_tempr2 << (MR_Integer) 3) | ((MR_Integer) MR_tempr1 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr6, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_tempr6, 7) = MR_tfield(0, MR_tempr7, 7);
	MR_tfield(0, MR_tempr6, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_tempr6, 9) = MR_tfield(0, MR_tempr7, 9);
	MR_tfield(0, MR_tempr6, 10) = MR_tfield(0, MR_tempr7, 10);
	MR_tfield(0, MR_tempr6, 11) = MR_tfield(0, MR_tempr7, 11);
	MR_tfield(0, MR_tempr6, 12) = MR_tfield(0, MR_tempr7, 12);
	MR_tfield(0, MR_tempr6, 13) = MR_tfield(0, MR_tempr7, 13);
	MR_tfield(0, MR_tempr6, 14) = MR_r2;
	MR_tfield(0, MR_tempr6, 15) = MR_tfield(0, MR_tempr7, 15);
	MR_tfield(0, MR_tempr6, 16) = MR_tfield(0, MR_tempr7, 16);
	MR_tfield(0, MR_tempr6, 17) = MR_tfield(0, MR_tempr7, 17);
	MR_tfield(0, MR_tempr6, 18) = MR_tfield(0, MR_tempr7, 18);
	MR_tfield(0, MR_tempr6, 19) = MR_tfield(0, MR_tempr7, 19);
	MR_tfield(0, MR_tempr6, 20) = MR_tfield(0, MR_tempr7, 20);
	MR_sv(2) = MR_tempr6;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__test_rtti_initialization_field_4_0_i4);
MR_def_label(ml_backend__mlds_to_il__test_rtti_initialization_field_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("l", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__test_rtti_initialization_field_4_0_i5);
MR_def_label(ml_backend__mlds_to_il__test_rtti_initialization_field_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 33;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_tbmkword(0, 17);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr4;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module61)
	MR_init_entry1(ml_backend__mlds_to_il__set_rtti_initialization_field_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__set_rtti_initialization_field_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_rtti_initialization_field'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__set_rtti_initialization_field_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(3,16,0);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module62)
	MR_init_entry1(fn__ml_backend__mlds_to_il__runtime_initialization_instrs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__runtime_initialization_instrs_0_0);
	MR_init_label1(fn__ml_backend__mlds_to_il__runtime_initialization_instrs_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'runtime_initialization_instrs'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__runtime_initialization_instrs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_tbmkword(0, 13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,
		fn__ml_backend__mlds_to_il__runtime_initialization_instrs_0_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__runtime_initialization_instrs_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,3,19);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_map_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module63)
	MR_init_entry1(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__make_class_constructor_class_member_7_0);
	MR_init_label5(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0,13,14,15,17,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_class_constructor_class_member'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,3,21);
	MR_sv(6) = MR_r5;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,17,0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__runtime_initialization_instrs_0_0,
		ml_backend__mlds_to_il__make_class_constructor_class_member_7_0_i13);
MR_def_label(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__test_rtti_initialization_field_4_0,
		ml_backend__mlds_to_il__make_class_constructor_class_member_7_0_i14);
MR_def_label(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__set_rtti_initialization_field_4_0,
		ml_backend__mlds_to_il__make_class_constructor_class_member_7_0_i15);
MR_def_label(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,18);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		ml_backend__mlds_to_il__make_class_constructor_class_member_7_0_i17);
MR_def_label(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,23);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__mlds_to_il__make_class_constructor_class_member_7_0_i27);
MR_def_label(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module64)
	MR_init_entry1(fn__ml_backend__mlds_to_il__make_fieldref_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__make_fieldref_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_fieldref'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__make_fieldref_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module65)
	MR_init_entry1(ml_backend__mlds_to_il__generate_rtti_initialization_field_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__generate_rtti_initialization_field_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_rtti_initialization_field'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__generate_rtti_initialization_field_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,6);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,18,0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module66)
	MR_init_entry1(ml_backend__mlds_to_il__il_info_new_class_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_info_new_class_3_0);
	MR_init_label5(ml_backend__mlds_to_il__il_info_new_class_3_0,3,4,6,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_new_class'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_info_new_class_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,19);
	MR_r4 = MR_tfield(0, MR_tempr1, 6);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		ml_backend__mlds_to_il__il_info_new_class_3_0_i3);
MR_def_label(ml_backend__mlds_to_il__il_info_new_class_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__il_info_new_class_3_0_i4);
MR_def_label(ml_backend__mlds_to_il__il_info_new_class_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_r1;
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr6, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_tfield(0, MR_tempr6, 12);
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr6, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr6, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr6, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr6, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr6, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr6, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr6, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr6, 20);
	MR_sv(1) = MR_tempr5;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__il_info_new_class_3_0_i6);
MR_def_label(ml_backend__mlds_to_il__il_info_new_class_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_r1;
	MR_tfield(0, MR_tempr5, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 9) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr6, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_tfield(0, MR_tempr6, 12);
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr6, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr6, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr6, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr6, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr6, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr6, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr6, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr6, 20);
	MR_sv(1) = MR_tempr5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__mlds_to_il__il_info_new_class_3_0_i8);
MR_def_label(ml_backend__mlds_to_il__il_info_new_class_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr7, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_tempr6, 3) = MR_tfield(0, MR_tempr7, 3);
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_tempr6, 5) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | (((MR_Integer) MR_tempr2 << (MR_Integer) 3) | ((MR_Integer) MR_tempr1 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr6, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_tempr6, 7) = MR_tfield(0, MR_tempr7, 7);
	MR_tfield(0, MR_tempr6, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_tempr6, 9) = MR_tfield(0, MR_tempr7, 9);
	MR_tfield(0, MR_tempr6, 10) = MR_r1;
	MR_tfield(0, MR_tempr6, 11) = MR_tfield(0, MR_tempr7, 11);
	MR_tfield(0, MR_tempr6, 12) = MR_tfield(0, MR_tempr7, 12);
	MR_tfield(0, MR_tempr6, 13) = MR_tfield(0, MR_tempr7, 13);
	MR_tfield(0, MR_tempr6, 14) = MR_tfield(0, MR_tempr7, 14);
	MR_tfield(0, MR_tempr6, 15) = MR_tfield(0, MR_tempr7, 15);
	MR_tfield(0, MR_tempr6, 16) = MR_tfield(0, MR_tempr7, 16);
	MR_tfield(0, MR_tempr6, 17) = MR_tfield(0, MR_tempr7, 17);
	MR_tfield(0, MR_tempr6, 18) = MR_tfield(0, MR_tempr7, 18);
	MR_tfield(0, MR_tempr6, 19) = MR_tfield(0, MR_tempr7, 19);
	MR_tfield(0, MR_tempr6, 20) = MR_tfield(0, MR_tempr7, 20);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr6;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		ml_backend__mlds_to_il__il_info_new_class_3_0_i10);
MR_def_label(ml_backend__mlds_to_il__il_info_new_class_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(2);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_r1;
	MR_tfield(0, MR_tempr5, 12) = MR_tfield(0, MR_tempr6, 12);
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr6, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr6, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr6, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr6, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr6, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr6, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr6, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr6, 20);
	MR_r1 = MR_tempr5;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(fn__ml_backend__mlds__set_access_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module67)
	MR_init_entry1(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0);
	MR_init_label10(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,4,5,7,8,9,10,11,6,14,15)
	MR_init_label4(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,19,20,3,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_defn_to_ilasm_decl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(9) = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = MR_body((MR_Integer) MR_r3, (MR_Integer) 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_new_class_3_0,
		ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i4);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__generate_class_body_10_0,
		ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i5);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i7);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i8);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tfield(0, MR_sv(10), 6);
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i9);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__generate_rtti_initialization_field_3_0,
		ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i10);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__make_class_constructor_class_member_7_0,
		ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i11);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_sv(9) = MR_r3;
	MR_GOTO_LAB(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i14);
	}
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_sv(9) = MR_sv(10);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(8), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i15);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("mercury", 7)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i15);
	}
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__set_access_2_0,
		ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i19);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__decl_flags_to_classattrs_1_0,
		ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i20);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mlds_defn_to_ilasm_decl\'/4", 59);
	MR_r3 = (MR_Word) MR_string_const("top level data definition!", 26);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__mlds_defn_to_ilasm_decl_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mlds_defn_to_ilasm_decl\'/4", 59);
	MR_r3 = (MR_Word) MR_string_const("top level function definition!", 30);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module68)
	MR_init_entry1(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,2,4,3,6,8,14,16,18,21,24)
	MR_init_label2(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,27,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decl_flags_to_nestedclassattrs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__overridability_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,7,19);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,3,18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i14);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,3,13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_np_call_localret_ent(fn__list__condense_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i14);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i16);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,7,25);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i21);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,7,8);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i24);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,7,26);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i27);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,7,27);
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.decl_flags_to_nestedclassattrs\'/1", 65);
	MR_r3 = (MR_Word) MR_string_const("local access flag", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0_i17);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__per_instance_1_0);
MR_decl_entry(fn__ml_backend__mlds__virtuality_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_methattr_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module69)
	MR_init_entry1(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,2,4,6,8,10,3,13,15,14,17)
	MR_init_label6(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,19,18,21,23,25,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decl_flags_to_methattrs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,16);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,28);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,29);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i10);
	}
	MR_r1 = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,30);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.decl_flags_to_methattrs\'/1", 58);
	MR_r3 = (MR_Word) MR_string_const("local access flag", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i13);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i15);
	}
	MR_r1 = MR_sv(4);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,7,20);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i14);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__virtuality_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i17);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i19);
	}
	MR_r1 = MR_sv(4);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i18);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,7,31);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__overridability_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i21);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i23);
	}
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i25);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,7,32);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i25);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,18);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, methattr);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__list__condense_1_0);
	}
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,13);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, methattr);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__list__condense_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__constness_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_fieldattr_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module70)
	MR_init_entry1(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,2,4,6,8,10,3,13,15,17,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decl_flags_to_fieldattrs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,18);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,28);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,33);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i10);
	}
	MR_r1 = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,7,30);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.decl_flags_to_fieldattrs\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("local access flag", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i13);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i15);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,7,8);
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i17);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i17);
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,24);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, fieldattr);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
	}
MR_def_label(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,3,13);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, fieldattr);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__condense_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module71)
	MR_init_entry1(fn__ml_backend__mlds_to_il__interface_id_to_class_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__interface_id_to_class_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'interface_id_to_class_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__interface_id_to_class_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_attribute_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module72)
	MR_init_entry1(fn__ml_backend__mlds_to_il__attributes_to_custom_attributes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__attributes_to_custom_attributes_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'attributes_to_custom_attributes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__attributes_to_custom_attributes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__attribute_to_custom_attribute_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_attribute);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module73)
	MR_init_entry1(fn__ml_backend__mlds_to_il__flatten_inits_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__flatten_inits_1_0);
	MR_init_label1(fn__ml_backend__mlds_to_il__flatten_inits_1_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flatten_inits'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__flatten_inits_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,25);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,20);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__flatten_inits_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__flatten_inits_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__list__condense_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module74)
	MR_init_entry1(ml_backend__mlds_to_il__already_boxed_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__already_boxed_1_0);
	MR_init_label1(ml_backend__mlds_to_il__already_boxed_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'already_boxed'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__already_boxed_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,15)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__already_boxed_1_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,17)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__already_boxed_1_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,16)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__already_boxed_1_0_i2);
	}
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__already_boxed_1_0_i2);
	}
	if (MR_RTAGS_TEST(MR_r2,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__already_boxed_1_0_i2);
	}
	if (MR_RTAGS_TEST(MR_r2,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__already_boxed_1_0_i2);
	}
	if (MR_RTAGS_TEST(MR_r2,3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__already_boxed_1_0_i2);
	}
	MR_r1 = ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 0));
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__already_boxed_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__ml_char_type_0_0);
MR_decl_entry(fn__backend_libs__foreign__non_foreign_type_1_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_int_type_0_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_string_type_0_0);
MR_decl_entry(fn__require__sorry_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module75)
	MR_init_entry1(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__rval_const_to_type_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,3,5,7,9,10,14,11,16,18,20)
	MR_init_label3(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,21,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rval_const_to_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i3);
	}
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_char_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,3,13));
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,7,35);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i10);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i11);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(2,15,0);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,15,0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__foreign__non_foreign_type_1_0,
		fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i14);
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(1);
	MR_tfield(2, MR_r2, 1) = MR_sv(2);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i16);
	}
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_int_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i18);
	}
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_string_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i20);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i21);
	}
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_string_type_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i23);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0_i24);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.rval_const_to_type\'/1", 53);
	MR_r4 = (MR_Word) MR_string_const("IL backend and foreign tag", 26);
	MR_np_tailcall_ent(fn__require__sorry_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r3 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.rval_const_to_type\'/1", 53);
	MR_r4 = (MR_Word) MR_string_const("IL backend and named const", 26);
	MR_np_tailcall_ent(fn__require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0;
MR_decl_entry(deconstruct__functor_4_1);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module76)
	MR_init_entry1(ml_backend__mlds_to_il__rval_to_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__rval_to_type_2_0);
	MR_init_label10(ml_backend__mlds_to_il__rval_to_type_2_0,3,7,8,9,5,11,12,15,16,137)
	MR_init_label6(ml_backend__mlds_to_il__rval_to_type_2_0,18,19,13,21,22,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rval_to_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__rval_to_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i3);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_il__rval_const_to_type_1_0);
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_r2, 3);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i9);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.rval_to_type\'/2", 48);
	MR_r3 = (MR_Word) MR_string_const("global_var_ref", 14);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i11);
	}
	MR_r1 = MR_tfield(0, MR_body((MR_Integer) MR_r1, (MR_Integer) 0), 1);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i12);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i13);
	}
	MR_r4 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 5);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i16);
	}
	MR_r1 = MR_tfield(2, MR_r4, 0);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i137);
	}
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__builtin_ops, unary_op);
	MR_r2 = MR_tfield(3, MR_r4, 0);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__functor_4_1,
		ml_backend__mlds_to_il__rval_to_type_2_0_i18);
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unop: ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__rval_to_type_2_0_i19);
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.rval_to_type\'/2", 48);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__sorry_3_0);
	}
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i21);
	}
	MR_r1 = MR_tfield(0, MR_tfield(3, MR_r1, 1), 1);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.rval_to_type\'/2", 48);
	MR_r3 = (MR_Word) MR_string_const("binop", 5);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__rval_to_type_2_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.rval_to_type\'/2", 48);
	MR_r3 = (MR_Word) MR_string_const("mem_addr", 8);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__rval_to_type_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.rval_to_type\'/2", 48);
	MR_r3 = (MR_Word) MR_string_const("mkword", 6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module77)
	MR_init_entry1(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,3,8,13,18,23,28,33,38,45,43)
	MR_init_label10(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,48,53,60,58,63,65,67,69,71,73)
	MR_init_label5(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,75,77,79,81,83)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simple_type_to_valuetype'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,19);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i45);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i8);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,20);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i60);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i13);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,21);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i45);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i18);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,22);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i60);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i23);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,23);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i60);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i28);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,24);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i60);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i33);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,25);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i60);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i38);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,26);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i60);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i43);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,27);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i45);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i48);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,28);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i60);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i53);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,29);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i60);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i58);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,30);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_name_1_0,
		fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i60);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i63);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i65);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for \'&\'", 22);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i67);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for \'*\'", 22);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i69);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for array", 24);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i71);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for class", 24);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i73);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for interface", 28);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i75);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for native float", 31);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i77);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for native int", 29);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i79);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for native uint", 30);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i81);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for System.Object", 32);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0_i83);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for refany", 25);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.simple_type_to_valuetype\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("no value class for System.String", 32);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__singleton_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module78)
	MR_init_entry1(fn__ml_backend__mlds_to_il__convert_to_object_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__convert_to_object_1_0);
	MR_init_label1(fn__ml_backend__mlds_to_il__convert_to_object_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_to_object'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__convert_to_object_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__simple_type_to_valuetype_1_0,
		fn__ml_backend__mlds_to_il__convert_to_object_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__convert_to_object_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__from_list_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module79)
	MR_init_entry1(fn__ml_backend__mlds_to_il__convert_from_object_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__convert_from_object_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_from_object'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__convert_from_object_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_tailcall_ent(fn__cord__from_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module80)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0);
	MR_init_label2(fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0,11,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_mercury_string_hash'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,5));
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,7);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,8,5);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,8);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0_i11);
MR_def_label(fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,31);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__reverse_2_0,
		fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0_i14);
MR_def_label(fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("mercury", 7);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_tfield(0, MR_r1, 3) = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module81)
	MR_init_entry1(fn__ml_backend__mlds_to_il__comment_node_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__comment_node_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'comment_node'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__comment_node_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module82)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_string_equals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_string_equals_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_string_equals'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_string_equals_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,5));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,8,4);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_TAG_COMMON(0,3,27);
	MR_tfield(0, MR_r1, 3) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module83)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_string_compare_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_string_compare_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_string_compare'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_string_compare_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,5));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_TAG_COMMON(1,8,5);
	MR_tfield(0, MR_r1, 2) = (MR_Word) MR_TAG_COMMON(0,3,28);
	MR_tfield(0, MR_r1, 3) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module84)
	MR_init_entry1(ml_backend__mlds_to_il__binaryop_to_il_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__binaryop_to_il_4_0);
	MR_init_label10(ml_backend__mlds_to_il__binaryop_to_il_4_0,4,5,3,8,10,12,14,16,19,21)
	MR_init_label10(ml_backend__mlds_to_il__binaryop_to_il_4_0,29,32,40,43,46,48,51,54,57,60)
	MR_init_label10(ml_backend__mlds_to_il__binaryop_to_il_4_0,68,71,79,82,85,88,91,93,95,98)
	MR_init_label10(ml_backend__mlds_to_il__binaryop_to_il_4_0,97,108,102,118,112,128,122,138,132,147)
	MR_init_label8(ml_backend__mlds_to_il__binaryop_to_il_4_0,142,151,153,163,156,164,166,168)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'binaryop_to_il'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__binaryop_to_il_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r2, 4);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_array_elem_type_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i4);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i5);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 59;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i10);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 15);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 21);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,30)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,12,1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,31)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,36)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,31);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,34)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i29);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,12,3);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,35)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i32);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,32);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,33)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i40);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,12,2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,28)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i43);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,19,0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,32)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i46);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,33);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,27)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i48);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,19,1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,29)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i51);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,19,2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i54);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,19,1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i57);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,12,1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,25)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i60);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,31);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,23)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i68);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,12,3);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,24)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i71);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,32);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,22)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i79);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,12,2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i82);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,12,4);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i85);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,19,2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i88);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,19,0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i91);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i93);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 15);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i95);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,33);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i97);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_string_equals_0_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i98);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,20)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i102);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,3,35);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_string_compare_0_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i108);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i112);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,3,36);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_string_compare_0_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i118);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,19)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i122);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,3,38);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_string_compare_0_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i128);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i132);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,3,39);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_string_compare_0_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i138);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i142);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,3,30);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_string_equals_0_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i147);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i151);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 18);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i153);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,12,5);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,26)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i156);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,40);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__binaryop_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i164);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.binaryop_to_il\'/4", 50);
	MR_r3 = (MR_Word) MR_string_const("body", 4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,37)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i166);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.binaryop_to_il\'/4", 50);
	MR_r3 = (MR_Word) MR_string_const("compound_eq", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,38)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__binaryop_to_il_4_0_i168);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.binaryop_to_il\'/4", 50);
	MR_r3 = (MR_Word) MR_string_const("compound_lt", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__binaryop_to_il_4_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.binaryop_to_il\'/4", 50);
	MR_r3 = (MR_Word) MR_string_const("str_cmp", 7);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__globals__simple_foreign_language_string_1_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_and_package_name_to_mlds_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module85)
	MR_init_entry1(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__mangle_foreign_code_module_3_0);
	MR_init_label10(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,2,3,6,7,8,5,10,11,12,14)
	MR_init_label10(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,18,21,22,23,20,25,26,27,15,16)
	MR_init_label8(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,33,34,35,32,39,40,41,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mangle_foreign_code_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__simple_foreign_language_string_1_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i2);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i3);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i5);
	}
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("_code", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i6);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i7);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i8);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i14);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("_code", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i10);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i11);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i12);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i14);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i16);
	}
	MR_sv(5) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i18);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_tempr2 = MR_sv(2);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("_code", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i21);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i22);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i23);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i43);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("_code", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i25);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i26);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i27);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(4), 0) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i43);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("_code", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i33);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i34);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i35);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i43);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("_code", 5);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i39);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i40);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i41);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(4), 0) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_il__mangle_foreign_code_module_3_0_i43);
MR_def_label(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__ml_backend__mlds__mercury_module_and_package_name_to_mlds_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module86)
	MR_init_entry1(ml_backend__mlds_to_il__mangle_dataname_module_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__mangle_dataname_module_3_0);
	MR_init_label6(ml_backend__mlds_to_il__mangle_dataname_module_3_0,57,6,11,14,16,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mangle_dataname_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__mangle_dataname_module_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_module_3_0_i57);
	}
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_module_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_il__mangle_dataname_module_3_0_i6);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_module_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_module_3_0_i5);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_module_3_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_module_3_0_i5);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("mercury", 7)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_module_3_0_i5);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_il__mangle_dataname_module_3_0_i11);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_module_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_module_3_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_module_3_0_i5);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("private_builtin", 15)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mangle_dataname_module_3_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("__csharp_code", 13);
	MR_np_call_localret_ent(string__append_3_2,
		ml_backend__mlds_to_il__mangle_dataname_module_3_0_i14);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_module_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_il__mangle_dataname_module_3_0_i16);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_module_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
MR_def_label(ml_backend__mlds_to_il__mangle_dataname_module_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module87)
	MR_init_entry1(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__make_static_fieldref_3_0);
	MR_init_label9(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,2,4,9,12,14,3,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_static_fieldref'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_mlds_var_2_0,
		fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i3);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("mercury", 7)) != 0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i3);
	}
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(6) = MR_tfield(1, MR_r1, 1);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i9);
MR_def_label(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(6), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i3);
	}
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i3);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(5), MR_string_const("private_builtin", 15)) != 0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i3);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const("__csharp_code", 13);
	MR_np_call_localret_ent(string__append_3_2,
		fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i12);
MR_def_label(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i14);
MR_def_label(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i17);
MR_def_label(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i18);
MR_def_label(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__ml_backend__mlds_to_il__make_static_fieldref_3_0_i19);
MR_def_label(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_decl_entry(builtin__unify_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module88)
	MR_init_entry1(ml_backend__mlds_to_il__is_argument_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__is_argument_2_0);
	MR_init_label3(ml_backend__mlds_to_il__is_argument_2_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_argument'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__is_argument_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_il__is_argument_2_0_i2);
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 2);
	MR_tfield(0, MR_sv(1), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r2 = MR_tfield(0, MR_r2, 17);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__mlds_to_il__is_argument_2_0_i5);
MR_def_label(ml_backend__mlds_to_il__is_argument_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		ml_backend__mlds_to_il__is_argument_2_0_i6);
MR_def_label(ml_backend__mlds_to_il__is_argument_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__is_argument_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__contains_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module89)
	MR_init_entry1(ml_backend__mlds_to_il__is_local_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__is_local_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_local'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__is_local_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r3 = MR_tfield(0, MR_tempr2, 12);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(map__contains_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module90)
	MR_init_entry1(ml_backend__mlds_to_il__is_local_field_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__is_local_field_4_0);
	MR_init_label5(ml_backend__mlds_to_il__is_local_field_4_0,2,3,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_local_field'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__is_local_field_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_mlds_var_2_0,
		ml_backend__mlds_to_il__is_local_field_4_0_i2);
MR_def_label(ml_backend__mlds_to_il__is_local_field_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_sv(2), 11);
	MR_np_call_localret_ent(set__member_2_0,
		ml_backend__mlds_to_il__is_local_field_4_0_i3);
MR_def_label(ml_backend__mlds_to_il__is_local_field_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__is_local_field_4_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		ml_backend__mlds_to_il__is_local_field_4_0_i5);
MR_def_label(ml_backend__mlds_to_il__is_local_field_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(2), 4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__is_local_field_4_0_i6);
MR_def_label(ml_backend__mlds_to_il__is_local_field_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_il__is_local_field_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module91)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_signature_to_ilds_type_params_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_signature_to_ilds_type_params_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_signature_to_ilds_type_params'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mlds_signature_to_ilds_type_params_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module92)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0);
	MR_init_label3(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0,3,6,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_signature_to_il_return_param'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0_i5);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.mlds_signature_to_il_return_param\'/2", 68);
	MR_r3 = (MR_Word) MR_string_const("multiple return values", 22);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module93)
	MR_init_entry1(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,5,6,8,10,17,16,3,24,25,26)
	MR_init_label1(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'code_addr_constant_to_methodref'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i3);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__predlabel_to_id_5_0,
		fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r4 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i8);
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i16);
	}
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i17);
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_tfield(0, MR_r1, 3) = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.mlds_signature_to_il_return_param\'/2", 68);
	MR_r3 = (MR_Word) MR_string_const("multiple return values", 22);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i24);
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__predlabel_to_id_5_0,
		fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i25);
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0,
		fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i26);
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r4 = MR_tfield(0, MR_sv(1), 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0_i28);
MR_def_label(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module94)
	MR_init_entry1(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0);
	MR_init_label8(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0,2,4,9,12,14,3,17,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'data_addr_constant_to_fieldref'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_dataname_2_0,
		ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i2);
MR_def_label(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i4);
MR_def_label(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i3);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i3);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("mercury", 7)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i3);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i9);
MR_def_label(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i3);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i3);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("private_builtin", 15)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("__csharp_code", 13);
	MR_np_call_localret_ent(string__append_3_2,
		ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i12);
MR_def_label(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i14);
MR_def_label(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i17);
MR_def_label(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0_i18);
MR_def_label(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,6));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module95)
	MR_init_entry1(ml_backend__mlds_to_il__common_prefix_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__common_prefix_5_0);
	MR_init_label5(ml_backend__mlds_to_il__common_prefix_5_0,3,38,8,10,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'common_prefix'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__common_prefix_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__common_prefix_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__common_prefix_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__common_prefix_5_0_i38);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__common_prefix_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		ml_backend__mlds_to_il__common_prefix_5_0_i8);
MR_def_label(ml_backend__mlds_to_il__common_prefix_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__common_prefix_5_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(ml_backend__mlds_to_il__common_prefix_5_0,
		ml_backend__mlds_to_il__common_prefix_5_0_i10);
MR_def_label(ml_backend__mlds_to_il__common_prefix_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__mlds_to_il__common_prefix_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__ilds__assembly_name_0_0);
MR_decl_entry(__Unify___ml_backend__ilds__structured_name_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module96)
	MR_init_entry1(ml_backend__mlds_to_il__get_fieldref_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__get_fieldref_6_0);
	MR_init_label10(ml_backend__mlds_to_il__get_fieldref_6_0,2,4,5,8,11,12,14,18,13,21)
	MR_init_label10(ml_backend__mlds_to_il__get_fieldref_6_0,24,26,23,32,10,37,41,42,38,44)
	MR_init_label1(ml_backend__mlds_to_il__get_fieldref_6_0,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_fieldref'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__get_fieldref_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_fieldref_6_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_r4, 1);
	MR_GOTO_LAB(ml_backend__mlds_to_il__get_fieldref_6_0_i4);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(4) = MR_r4;
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i5);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_fieldref_6_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_r2, 1);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_fieldref_6_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i11);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i12);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__assembly_name_0_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i14);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_fieldref_6_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_fieldref_6_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_fieldref_6_0_i13);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__common_prefix_5_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i18);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__structured_name_0_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i24);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.fixup_class_qualifiers\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("condition failed", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i21);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__structured_name_0_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i24);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_fieldref_6_0_i23);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i26);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(3));
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i32);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i37);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_fieldref_6_0_i38);
	}
	MR_r2 = MR_tfield(3, MR_sv(3), 1);
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_fieldref_6_0_i38);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i41);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i42);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i45);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.get_fieldref\'/6", 48);
	MR_r3 = (MR_Word) MR_string_const("offsets for non-mlconst_int rvals", 33);
	MR_np_call_localret_ent(require__sorry_3_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i44);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__get_fieldref_6_0_i45);
MR_def_label(ml_backend__mlds_to_il__get_fieldref_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module97)
	MR_init_entry1(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__throw_unimplemented_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'throw_unimplemented'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 60;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,2,5));
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,12,7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_TAG_COMMON(0,3,41);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 62;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,3,42);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_tailcall_ent(fn__cord__from_list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module98)
	MR_init_entry1(ml_backend__mlds_to_il__load_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__load_4_0);
	MR_init_label10(ml_backend__mlds_to_il__load_4_0,6,9,10,11,7,13,15,16,17,18)
	MR_init_label10(ml_backend__mlds_to_il__load_4_0,19,5,21,24,25,27,23,29,32,30)
	MR_init_label10(ml_backend__mlds_to_il__load_4_0,39,38,46,45,50,3,56,58,61,62)
	MR_init_label10(ml_backend__mlds_to_il__load_4_0,63,64,60,68,73,72,77,76,80,84)
	MR_init_label10(ml_backend__mlds_to_il__load_4_0,88,92,96,98,100,102,105,366,113,114)
	MR_init_label10(ml_backend__mlds_to_il__load_4_0,116,117,112,119,121,123,126,124,133,132)
	MR_init_label10(ml_backend__mlds_to_il__load_4_0,140,139,144,110,150,155,156,157,154,158)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'load'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__load_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i5);
	}
	MR_sv(3) = MR_tfield(0, MR_r2, 4);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__load_4_0_i6);
MR_def_label(ml_backend__mlds_to_il__load_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_sv(2), 0);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0,
		ml_backend__mlds_to_il__load_4_0_i9);
MR_def_label(ml_backend__mlds_to_il__load_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__load_4_0_i10);
MR_def_label(ml_backend__mlds_to_il__load_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__load_4_0_i11);
MR_def_label(ml_backend__mlds_to_il__load_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 59;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i16);
MR_def_label(ml_backend__mlds_to_il__load_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_fieldref_6_0,
		ml_backend__mlds_to_il__load_4_0_i13);
MR_def_label(ml_backend__mlds_to_il__load_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__load_4_0_i15);
MR_def_label(ml_backend__mlds_to_il__load_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
MR_def_label(ml_backend__mlds_to_il__load_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i17);
MR_def_label(ml_backend__mlds_to_il__load_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__load_4_0_i18);
MR_def_label(ml_backend__mlds_to_il__load_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__load_4_0_i19);
MR_def_label(ml_backend__mlds_to_il__load_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__load_4_0_i157);
MR_def_label(ml_backend__mlds_to_il__load_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i21);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("load lval mem_ref", 17);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i23);
	}
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_simple_type_2_0,
		ml_backend__mlds_to_il__load_4_0_i24);
MR_def_label(ml_backend__mlds_to_il__load_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__load_4_0_i25);
MR_def_label(ml_backend__mlds_to_il__load_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 45;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i27);
MR_def_label(ml_backend__mlds_to_il__load_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__load_4_0_i157);
MR_def_label(ml_backend__mlds_to_il__load_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r2, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_mlds_var_2_0,
		ml_backend__mlds_to_il__load_4_0_i29);
MR_def_label(ml_backend__mlds_to_il__load_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__is_local_2_0,
		ml_backend__mlds_to_il__load_4_0_i32);
MR_def_label(ml_backend__mlds_to_il__load_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 46;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__is_argument_2_0,
		ml_backend__mlds_to_il__load_4_0_i39);
MR_def_label(ml_backend__mlds_to_il__load_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 41;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__is_local_field_4_0,
		ml_backend__mlds_to_il__load_4_0_i46);
MR_def_label(ml_backend__mlds_to_il__load_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,
		ml_backend__mlds_to_il__load_4_0_i50);
MR_def_label(ml_backend__mlds_to_il__load_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i56);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("unimplemented load rval mkword", 30);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i58);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("load scalar_common", 18);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i60);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__load_4_0_i61);
MR_def_label(ml_backend__mlds_to_il__load_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__load_4_0_i62);
MR_def_label(ml_backend__mlds_to_il__load_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__binaryop_to_il_4_0,
		ml_backend__mlds_to_il__load_4_0_i63);
MR_def_label(ml_backend__mlds_to_il__load_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__load_4_0_i64);
MR_def_label(ml_backend__mlds_to_il__load_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__load_4_0_i157);
MR_def_label(ml_backend__mlds_to_il__load_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i366);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i68);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(3, MR_r3, 1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 43;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i72);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__code_addr_constant_to_methodref_2_0,
		ml_backend__mlds_to_il__load_4_0_i73);
MR_def_label(ml_backend__mlds_to_il__load_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 44;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i76);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_body((MR_Integer) MR_r3, (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__data_addr_constant_to_fieldref_2_0,
		ml_backend__mlds_to_il__load_4_0_i77);
MR_def_label(ml_backend__mlds_to_il__load_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i80);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(3, MR_r3, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 43;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i84);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,16,3);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i88);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r3, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 43;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 11);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i92);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 43;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i96);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("load multi_string_const", 23);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i98);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("load named_const", 16);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,8)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i100);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 10);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i102);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 60;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r3, 1);
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i105);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,16,4);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.load\'/4", 40);
	MR_r3 = (MR_Word) MR_string_const("NYI IL backend and foreign tags.", 32);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__load_4_0,366)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i110);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i112);
	}
	MR_sv(4) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_fieldref_6_0,
		ml_backend__mlds_to_il__load_4_0_i113);
MR_def_label(ml_backend__mlds_to_il__load_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__load_4_0_i114);
MR_def_label(ml_backend__mlds_to_il__load_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i116);
MR_def_label(ml_backend__mlds_to_il__load_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__load_4_0_i117);
MR_def_label(ml_backend__mlds_to_il__load_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__load_4_0_i157);
MR_def_label(ml_backend__mlds_to_il__load_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i119);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("load mem_addr lval global_var_ref", 33);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i121);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("load mem_addr lval mem_ref", 26);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tfield(3, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 4);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_mlds_var_2_0,
		ml_backend__mlds_to_il__load_4_0_i123);
MR_def_label(ml_backend__mlds_to_il__load_4_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__is_local_2_0,
		ml_backend__mlds_to_il__load_4_0_i126);
MR_def_label(ml_backend__mlds_to_il__load_4_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i124);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 47;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__is_argument_2_0,
		ml_backend__mlds_to_il__load_4_0_i133);
MR_def_label(ml_backend__mlds_to_il__load_4_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i132);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 42;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__is_local_field_4_0,
		ml_backend__mlds_to_il__load_4_0_i140);
MR_def_label(ml_backend__mlds_to_il__load_4_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i139);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,
		ml_backend__mlds_to_il__load_4_0_i144);
MR_def_label(ml_backend__mlds_to_il__load_4_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i150);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,7,36);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__load_4_0_i154);
	}
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_sv(2);
	MR_np_localcall_lab(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__load_4_0_i155);
MR_def_label(ml_backend__mlds_to_il__load_4_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__unaryop_to_il_5_0,
		ml_backend__mlds_to_il__load_4_0_i156);
MR_def_label(ml_backend__mlds_to_il__load_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__load_4_0_i157);
MR_def_label(ml_backend__mlds_to_il__load_4_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__mlds_to_il__load_4_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("load vector_common_row", 22);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0,
		ml_backend__mlds_to_il__load_4_0_i158);
MR_def_label(ml_backend__mlds_to_il__load_4_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_type_0_0);
MR_decl_entry(__Unify___ml_backend__ilds__il_type_0_0);
MR_decl_entry(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module99)
	MR_init_entry1(ml_backend__mlds_to_il__unaryop_to_il_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__unaryop_to_il_5_0);
	MR_init_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0,4,7,5,3,13,14,15,18,16,31)
	MR_init_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0,32,34,35,38,28,29,47,46,45,53)
	MR_init_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0,57,61,60,56,67,69,51,74,82,79)
	MR_init_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0,84,87,88,90,91,92,93,94,95,77)
	MR_init_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0,97,98,73,101,103,12,112,115,114,118)
	MR_init_label10(ml_backend__mlds_to_il__unaryop_to_il_5_0,125,127,129,131,135,137,139,359,142,143)
	MR_init_label5(ml_backend__mlds_to_il__unaryop_to_il_5_0,146,150,149,144,156)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unaryop_to_il'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__unaryop_to_il_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr2, 4);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i4);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__already_boxed_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i7);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__convert_to_object_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i13);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__rval_to_type_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i14);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i15);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(5), 1);
	if (MR_LTAGS_TESTR(MR_r2,0,17)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i16);
	}
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,17)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i18);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i38);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_r2, 1) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i29);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__rval_to_type_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i31);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_type_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i32);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i28);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i34);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__il_type_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i35);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,17)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i28);
	}
	MR_tempr1 = MR_tfield(0, MR_sv(5), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i38);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_r2, 1) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.unaryop_to_il\'/5", 49);
	MR_r3 = (MR_Word) MR_string_const("cast from non-ref type to refany", 32);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(5), 1);
	if (MR_LTAGS_TESTR(MR_r2,0,9)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i47);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i46);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,9)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i45);
	}
	MR_sv(1) = MR_r1;
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__already_boxed_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i53);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i51);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__already_boxed_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i57);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i56);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_type_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i61);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i60);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__convert_to_object_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i67);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i69);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__already_boxed_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i74);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i73);
	}
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i77);
	}
	MR_r2 = MR_tfield(2, MR_sv(6), 1);
	if (MR_RTAGS_TEST(MR_r2,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i79);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i82);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i77);
	}
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("loading out of an MR_Word", 25);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i84);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,16,1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i87);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_generic_simple_type_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i88);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 59;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i90);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("turning a cast into an unbox", 28);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i91);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__convert_from_object_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i92);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i93);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i94);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i95);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("turning a cast into an unbox", 28);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i97);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__convert_from_object_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i98);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_sv(5), 1);
	MR_r1 = (MR_Word) MR_string_const("cast between value types", 24);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i101);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 38;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i103);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i359);
	}
	MR_r4 = MR_tfield(3, MR_r1, 0);
	if (MR_INT_NE(MR_r4,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i112);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 14);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,8)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i114);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_mercury_string_hash_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i115);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,7)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i118);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,44);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i125);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("mkbody (a no-op)", 16);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i127);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("mktag (a no-op)", 15);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i129);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("strip_tag (a no-op)", 19);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i131);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,7,37);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(ml_backend__mlds_to_il__load_4_0);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i135);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("unmkbody (a no-op)", 18);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i137);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("unmktag (a no-op)", 17);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,9)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i139);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.unaryop_to_il\'/5", 49);
	MR_r3 = (MR_Word) MR_string_const("hash_string2", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.unaryop_to_il\'/5", 49);
	MR_r3 = (MR_Word) MR_string_const("hash_string3", 12);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__rval_to_type_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i142);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i143);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__already_boxed_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i146);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i144);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_type_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i150);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__unaryop_to_il_5_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__convert_from_object_1_0,
		ml_backend__mlds_to_il__unaryop_to_il_5_0_i156);
MR_def_label(ml_backend__mlds_to_il__unaryop_to_il_5_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(list__foldl2_6_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module100)
	MR_init_entry1(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__data_initializer_to_instrs_6_0);
	MR_init_label10(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,56,4,5,3,9,7,10,11,12,18)
	MR_init_label7(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,20,24,6,26,27,25,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'data_initializer_to_instrs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i4);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i5);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i6);
	}
	MR_sv(2) = MR_tfield(3, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i9);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_GOTO_LAB(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i11);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_generic_type_0_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i10);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 5);
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i12);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 43;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i18);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(20,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i20);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,15);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_r7 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i24);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i25);
	}
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i26);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i27);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__flatten_inits_1_0,
		ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i28);
MR_def_label(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0_i56);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_get_prog_context_1_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module101)
	MR_init_entry1(fn__ml_backend__mlds_to_il__context_instr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__context_instr_1_0);
	MR_init_label3(fn__ml_backend__mlds_to_il__context_instr_1_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'context_instr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__context_instr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		fn__ml_backend__mlds_to_il__context_instr_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__context_instr_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		fn__ml_backend__mlds_to_il__context_instr_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__context_instr_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		fn__ml_backend__mlds_to_il__context_instr_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__context_instr_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module102)
	MR_init_entry1(fn__ml_backend__mlds_to_il__context_node_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__context_node_1_0);
	MR_init_label3(fn__ml_backend__mlds_to_il__context_node_1_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'context_node'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__context_node_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		fn__ml_backend__mlds_to_il__context_node_1_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__context_node_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		fn__ml_backend__mlds_to_il__context_node_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_il__context_node_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		fn__ml_backend__mlds_to_il__context_node_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__context_node_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module103)
	MR_init_entry1(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0);
	MR_init_label10(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,114,8,6,12,14,16,18,23,22,27)
	MR_init_label10(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,30,31,32,33,35,37,38,21,20,5)
	MR_init_label1(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inline_code_to_il_asm'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i114);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_tailcall_ent(fn__cord__empty_0_0);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i6);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i8);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 24;
	MR_tfield(3, MR_r2, 1) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(3, MR_r2, 2) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i38);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.inline_code_to_il_asm\'/1", 56);
	MR_r3 = (MR_Word) MR_string_const("max_stack_size not set", 22);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i12);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i38);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i14);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i38);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i16);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i38);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i18);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i38);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i20);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i23);
	}
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i22);
	}
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tempr1;
	}
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i21);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i27);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i35);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i30);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i31);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i32);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i33);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i35);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 24;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i37);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i38);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i42);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.inline_code_to_il_asm\'/1", 56);
	MR_r3 = (MR_Word) MR_string_const("max_stack_size not set", 22);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.inline_code_to_il_asm\'/1", 56);
	MR_r3 = (MR_Word) MR_string_const("target_code_alloc_id not implemented", 36);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,
		fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0_i42);
MR_def_label(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module104)
	MR_init_entry1(ml_backend__mlds_to_il__store_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__store_4_0);
	MR_init_label10(ml_backend__mlds_to_il__store_4_0,4,5,7,8,9,3,11,14,12,21)
	MR_init_label5(ml_backend__mlds_to_il__store_4_0,20,26,28,10,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'store'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__store_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__store_4_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 4);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_fieldref_6_0,
		ml_backend__mlds_to_il__store_4_0_i4);
MR_def_label(ml_backend__mlds_to_il__store_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__store_4_0_i5);
MR_def_label(ml_backend__mlds_to_il__store_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__store_4_0_i7);
MR_def_label(ml_backend__mlds_to_il__store_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__store_4_0_i8);
MR_def_label(ml_backend__mlds_to_il__store_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__store_4_0_i9);
MR_def_label(ml_backend__mlds_to_il__store_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__mlds_to_il__store_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__store_4_0_i10);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 0);
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_tfield(0, MR_r2, 4);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_mlds_var_2_0,
		ml_backend__mlds_to_il__store_4_0_i11);
MR_def_label(ml_backend__mlds_to_il__store_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__is_local_2_0,
		ml_backend__mlds_to_il__store_4_0_i14);
MR_def_label(ml_backend__mlds_to_il__store_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__store_4_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 54;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__store_4_0_i28);
MR_def_label(ml_backend__mlds_to_il__store_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__is_argument_2_0,
		ml_backend__mlds_to_il__store_4_0_i21);
MR_def_label(ml_backend__mlds_to_il__store_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__store_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 52;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__store_4_0_i28);
MR_def_label(ml_backend__mlds_to_il__store_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__make_static_fieldref_3_0,
		ml_backend__mlds_to_il__store_4_0_i26);
MR_def_label(ml_backend__mlds_to_il__store_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__store_4_0_i28);
MR_def_label(ml_backend__mlds_to_il__store_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__mlds_to_il__store_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__store_4_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.store\'/4", 41);
	MR_r3 = (MR_Word) MR_string_const("store into global_var_ref", 25);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__store_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.store\'/4", 41);
	MR_r3 = (MR_Word) MR_string_const("store into mem_ref", 18);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module105)
	MR_init_entry1(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0);
	MR_init_label10(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,4,5,2,10,15,16,17,18,14,11)
	MR_init_label7(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,22,23,24,26,8,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_load_store_lval_instrs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r2, 4);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i2);
	}
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i4);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i5);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 53;
	MR_tfield(3, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i26);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i8);
	}
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_r1, 3);
	MR_sv(2) = MR_tfield(0, MR_r1, 4);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i10);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i14);
	}
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_sv(6), 0);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i15);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i16);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i17);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i18);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 63;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i26);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.get_load_store_lval_instrs\'/5", 62);
	MR_r3 = (MR_Word) MR_string_const("ml_field_named for a type with an array representation.", 55);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_fieldref_6_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i22);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i23);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i24);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i26);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i28);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__store_4_0,
		ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0_i29);
MR_def_label(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module106)
	MR_init_entry1(fn__ml_backend__mlds_to_il__newobj_constructor_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__newobj_constructor_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'newobj_constructor'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__newobj_constructor_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,12,7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 3) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 62;
	MR_tfield(3, MR_r1, 1) = MR_tempr2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module107)
	MR_init_entry1(fn__ml_backend__mlds_to_il__get_static_methodref_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__get_static_methodref_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_static_methodref'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__get_static_methodref_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_tfield(0, MR_r1, 3) = MR_r4;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module108)
	MR_init_entry1(ml_backend__mlds_to_il__il_info_get_module_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_info_get_module_name_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_get_module_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_info_get_module_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module109)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0);
	MR_init_label3(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_method_params_to_il_types'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ilds__append_nested_class_name_2_0);
MR_decl_entry(fn__cord__cord_list_to_cord_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_module_name_0_0);
MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module110)
	MR_init_entry1(ml_backend__mlds_to_il__atomic_statement_to_il_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__atomic_statement_to_il_4_0);
	MR_init_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,4,5,6,7,8,3,10,13,15,20)
	MR_init_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,22,24,26,28,18,31,36,35,41,46)
	MR_init_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,42,40,50,52,55,57,59,62,63,68)
	MR_init_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,69,70,71,73,75,64,65,77,79,80)
	MR_init_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,81,82,83,84,85,86,39,92,93,94)
	MR_init_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,96,95,98,99,100,102,103,104,105,106)
	MR_init_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,34,110,115,117,118,121,122,127,120,131)
	MR_init_label10(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,130,119,133,135,136,137,138,140,141,142)
	MR_init_label6(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,143,112,109,148,146,149)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'atomic_statement_to_il'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__atomic_statement_to_il_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i4);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i5);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("assign", 6);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i6);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i7);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i8);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i10);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i13);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i15);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,21,0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i18);
	}
	MR_r4 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r4,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i20);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__inline_code_to_il_asm_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.atomic_statement_to_il\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("ml_target_asm", 13);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i24);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.atomic_statement_to_il\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("ml_target_c", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.atomic_statement_to_il\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("ml_target_csharp", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i28);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.atomic_statement_to_il\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("ml_target_gnu_c", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.atomic_statement_to_il\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("ml_target_java", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i31);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,21,1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i34);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r1, 3);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i36);
	}
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(7) = MR_tfield(3, MR_r1, 5);
	MR_sv(8) = MR_tfield(3, MR_r1, 6);
	MR_sv(4) = MR_tfield(3, MR_r1, 7);
	MR_sv(5) = MR_tfield(3, MR_r1, 8);
	MR_sv(6) = MR_tfield(0, MR_r2, 4);
	MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i35);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_sv(3) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.atomic_statement_to_il\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("new_object has explicit secondary tag", 37);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i35);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i41);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i40);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i42);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(6), 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i39);
	}
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr2, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__type_needs_lowlevel_rep_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i46);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i39);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i40);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i39);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i39);
	}
	MR_r2 = MR_tempr2;
	MR_r1 = MR_sv(6);
	}
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i50);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(8),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i52);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i59);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_sv(8), 0), 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i55);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ilds__append_nested_class_name_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i57);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i59);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,46);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,21);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i62);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i63);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i65);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 2), 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("dummy_var", 9)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i65);
	}
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i68);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i69);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_append_wrapper_class_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i70);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i71);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i64);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_generic_type_0_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i73);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i75);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i79);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i77);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i79);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__newobj_constructor_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i80);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("new object (call constructor)", 29);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i81);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i82);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i83);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i84);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i85);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i86);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(22,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,46);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,17);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i92);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i93);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i94);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i96);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(7), 0);
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i98);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.atomic_statement_to_il\'/4", 58);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("unknown size in MLDS new_object", 31);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i95);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i98);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("new object", 10);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i99);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_generic_type_0_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i100);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i102);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i103);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i104);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i105);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i106);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i109);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_module_name_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i110);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tempr8 = MR_sv(3);
	MR_tempr1 = MR_tfield(0, MR_tempr8, 16);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i112);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr9 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr9;
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr8, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr8, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr8, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr5 = (((MR_Integer) MR_tfield(0, MR_tempr8, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr6 = ((MR_Integer) MR_tfield(0, MR_tempr8, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 21);
	MR_sv(7) = MR_tempr7;
	MR_tfield(0, MR_tempr7, 0) = MR_tfield(0, MR_tempr8, 0);
	MR_tfield(0, MR_tempr7, 1) = MR_tfield(0, MR_tempr8, 1);
	MR_tfield(0, MR_tempr7, 2) = MR_tfield(0, MR_tempr8, 2);
	MR_tfield(0, MR_tempr7, 3) = MR_tfield(0, MR_tempr8, 3);
	MR_tfield(0, MR_tempr7, 4) = MR_tfield(0, MR_tempr8, 4);
	MR_tfield(0, MR_tempr7, 5) = ((MR_Integer) MR_tempr6 | (((MR_Integer) MR_tempr5 << (MR_Integer) 1) | (((MR_Integer) MR_tempr4 << (MR_Integer) 2) | (((MR_Integer) MR_tempr3 << (MR_Integer) 3) | ((MR_Integer) MR_tempr2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr7, 6) = MR_tfield(0, MR_tempr8, 6);
	MR_tfield(0, MR_tempr7, 7) = MR_tfield(0, MR_tempr8, 7);
	MR_tfield(0, MR_tempr7, 8) = MR_tfield(0, MR_tempr8, 8);
	MR_tfield(0, MR_tempr7, 9) = MR_tfield(0, MR_tempr8, 9);
	MR_tfield(0, MR_tempr7, 10) = MR_tfield(0, MR_tempr8, 10);
	MR_tfield(0, MR_tempr7, 11) = MR_tfield(0, MR_tempr8, 11);
	MR_tfield(0, MR_tempr7, 12) = MR_tfield(0, MR_tempr8, 12);
	MR_tfield(0, MR_tempr7, 13) = MR_tfield(0, MR_tempr8, 13);
	MR_tfield(0, MR_tempr7, 14) = MR_tfield(0, MR_tempr8, 14);
	MR_tfield(0, MR_tempr7, 15) = MR_tfield(0, MR_tempr8, 15);
	MR_tfield(0, MR_tempr7, 16) = MR_tempr1;
	MR_tfield(0, MR_tempr7, 17) = MR_tfield(0, MR_tempr8, 17);
	MR_tfield(0, MR_tempr7, 18) = MR_tfield(0, MR_tempr8, 18);
	MR_tfield(0, MR_tempr7, 19) = MR_tfield(0, MR_tempr8, 19);
	MR_tfield(0, MR_tempr7, 20) = MR_tfield(0, MR_tempr8, 20);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(0, MR_tempr7, 3);
	MR_r3 = MR_tempr9;
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i115);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(7);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr7, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 21);
	MR_sv(8) = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_tempr6, 3) = MR_r1;
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_tempr6, 5) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | (((MR_Integer) MR_tempr2 << (MR_Integer) 3) | ((MR_Integer) MR_tempr1 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr6, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_tempr6, 7) = MR_tfield(0, MR_tempr7, 7);
	MR_tfield(0, MR_tempr6, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_tempr6, 9) = MR_tfield(0, MR_tempr7, 9);
	MR_tfield(0, MR_tempr6, 10) = MR_tfield(0, MR_tempr7, 10);
	MR_tfield(0, MR_tempr6, 11) = MR_tfield(0, MR_tempr7, 11);
	MR_tfield(0, MR_tempr6, 12) = MR_tfield(0, MR_tempr7, 12);
	MR_tfield(0, MR_tempr6, 13) = MR_tfield(0, MR_tempr7, 13);
	MR_tfield(0, MR_tempr6, 14) = MR_tfield(0, MR_tempr7, 14);
	MR_tfield(0, MR_tempr6, 15) = MR_tfield(0, MR_tempr7, 15);
	MR_tfield(0, MR_tempr6, 16) = MR_tfield(0, MR_tempr7, 16);
	MR_tfield(0, MR_tempr6, 17) = MR_tfield(0, MR_tempr7, 17);
	MR_tfield(0, MR_tempr6, 18) = MR_tfield(0, MR_tempr7, 18);
	MR_tfield(0, MR_tempr6, 19) = MR_tfield(0, MR_tempr7, 19);
	MR_tfield(0, MR_tempr6, 20) = MR_tfield(0, MR_tempr7, 20);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i117);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i118);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i120);
	}
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tfield(0, MR_sv(8), 20);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i121);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i122);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i127);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,7,38);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i127);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(8) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_sv(3), 19);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i133);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i130);
	}
	MR_sv(1) = MR_r1;
	MR_tempr1 = MR_tempr3;
	MR_tempr4 = MR_sv(8);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 20);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tempr4;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i131);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_sv(8) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 19);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i133);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.atomic_statement_to_il\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("multiple return values", 22);
	MR_np_call_localret_ent(require__sorry_3_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i119);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i133);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r2 = MR_sv(9);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,22);
	MR_r5 = MR_sv(5);
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i135);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("outline foreign proc -- call handwritten version", 48);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i136);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i137);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__get_static_methodref_4_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i138);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i140);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i141);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i142);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i143);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("outline foreign proc -- already called", 38);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i146);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,21,2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i148);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(10);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__atomic_statement_to_il_4_0_i149);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.atomic_statement_to_il\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("assign_if_in_heap", 17);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.atomic_statement_to_il\'/4", 58);
	MR_r3 = (MR_Word) MR_string_const("trail ops", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module111)
	MR_init_entry1(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0);
	MR_init_label6(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0,4,3,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_all_load_store_lval_instrs'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0_i4);
MR_def_label(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0_i9);
MR_def_label(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,
		ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0_i6);
MR_def_label(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	}
	MR_np_localcall_lab(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0,
		ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0_i7);
MR_def_label(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0_i8);
MR_def_label(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0_i9);
MR_def_label(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module112)
	MR_init_entry1(ml_backend__mlds_to_il__generate_condition_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__generate_condition_5_0);
	MR_init_label10(ml_backend__mlds_to_il__generate_condition_5_0,2,6,7,10,11,3,16,17,20,21)
	MR_init_label4(ml_backend__mlds_to_il__generate_condition_5_0,13,23,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_condition'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__generate_condition_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_make_next_label_3_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i2);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_condition_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,12)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_condition_5_0_i3);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i6);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i7);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 31;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i10);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i11);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i27);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_condition_5_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,13)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_condition_5_0_i13);
	}
	MR_tempr1 = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i16);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i17);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 26;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i20);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i21);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i27);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i23);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 33;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i26);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_condition_5_0_i27);
MR_def_label(ml_backend__mlds_to_il__generate_condition_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module113)
	MR_init_entry1(ml_backend__mlds_to_il__const_rval_to_function_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__const_rval_to_function_2_0);
	MR_init_label5(ml_backend__mlds_to_il__const_rval_to_function_2_0,7,5,11,12,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'const_rval_to_function'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__const_rval_to_function_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__const_rval_to_function_2_0_i2);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__const_rval_to_function_2_0_i5);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		ml_backend__mlds_to_il__const_rval_to_function_2_0_i7);
MR_def_label(ml_backend__mlds_to_il__const_rval_to_function_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__predlabel_to_id_5_0,
		ml_backend__mlds_to_il__const_rval_to_function_2_0_i12);
MR_def_label(ml_backend__mlds_to_il__const_rval_to_function_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		ml_backend__mlds_to_il__const_rval_to_function_2_0_i11);
MR_def_label(ml_backend__mlds_to_il__const_rval_to_function_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__predlabel_to_id_5_0,
		ml_backend__mlds_to_il__const_rval_to_function_2_0_i12);
MR_def_label(ml_backend__mlds_to_il__const_rval_to_function_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__mlds_to_il__const_rval_to_function_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.const_rval_to_function\'/2", 58);
	MR_r3 = (MR_Word) MR_string_const("const is not a code address", 27);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__det_insert_from_assoc_list_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module114)
	MR_init_entry1(ml_backend__mlds_to_il__il_info_add_locals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_info_add_locals_3_0);
	MR_init_label1(ml_backend__mlds_to_il__il_info_add_locals_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_add_locals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_info_add_locals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r3 = MR_tfield(0, MR_sv(1), 12);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__det_insert_from_assoc_list_2_0,
		ml_backend__mlds_to_il__il_info_add_locals_3_0_i2);
MR_def_label(ml_backend__mlds_to_il__il_info_add_locals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr6, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_r1;
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr6, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr6, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr6, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr6, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr6, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr6, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr6, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr6, 20);
	MR_r1 = MR_tempr5;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(map__delete_list_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module115)
	MR_init_entry1(ml_backend__mlds_to_il__il_info_remove_locals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_info_remove_locals_3_0);
	MR_init_label2(ml_backend__mlds_to_il__il_info_remove_locals_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_remove_locals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_info_remove_locals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		ml_backend__mlds_to_il__il_info_remove_locals_3_0_i2);
MR_def_label(ml_backend__mlds_to_il__il_info_remove_locals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(1), 12);
	}
	MR_np_call_localret_ent(map__delete_list_3_0,
		ml_backend__mlds_to_il__il_info_remove_locals_3_0_i3);
MR_def_label(ml_backend__mlds_to_il__il_info_remove_locals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr6, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_r1;
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr6, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr6, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr6, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr6, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr6, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr6, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr6, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr6, 20);
	MR_r1 = MR_tempr5;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module116)
	MR_init_entry1(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_info_get_next_block_id_3_0);
	MR_init_label1(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_get_next_block_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 15);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__mlds_to_il__il_info_get_next_block_id_3_0_i2);
MR_def_label(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr7, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_tempr6, 3) = MR_tfield(0, MR_tempr7, 3);
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_tempr6, 5) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | (((MR_Integer) MR_tempr2 << (MR_Integer) 3) | ((MR_Integer) MR_tempr1 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr6, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_tempr6, 7) = MR_tfield(0, MR_tempr7, 7);
	MR_tfield(0, MR_tempr6, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_tempr6, 9) = MR_tfield(0, MR_tempr7, 9);
	MR_tfield(0, MR_tempr6, 10) = MR_tfield(0, MR_tempr7, 10);
	MR_tfield(0, MR_tempr6, 11) = MR_tfield(0, MR_tempr7, 11);
	MR_tfield(0, MR_tempr6, 12) = MR_tfield(0, MR_tempr7, 12);
	MR_tfield(0, MR_tempr6, 13) = MR_tfield(0, MR_tempr7, 13);
	MR_tfield(0, MR_tempr6, 14) = MR_tfield(0, MR_tempr7, 14);
	MR_tfield(0, MR_tempr6, 15) = MR_r2;
	MR_tfield(0, MR_tempr6, 16) = MR_tfield(0, MR_tempr7, 16);
	MR_tfield(0, MR_tempr6, 17) = MR_tfield(0, MR_tempr7, 17);
	MR_tfield(0, MR_tempr6, 18) = MR_tfield(0, MR_tempr7, 18);
	MR_tfield(0, MR_tempr6, 19) = MR_tfield(0, MR_tempr7, 19);
	MR_tfield(0, MR_tempr6, 20) = MR_tfield(0, MR_tempr7, 20);
	MR_r2 = MR_tempr6;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module117)
	MR_init_entry1(ml_backend__mlds_to_il__statements_to_il_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__statements_to_il_4_0);
	MR_init_label4(ml_backend__mlds_to_il__statements_to_il_4_0,3,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'statements_to_il'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__statements_to_il_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statements_to_il_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__statements_to_il_4_0_i7);
MR_def_label(ml_backend__mlds_to_il__statements_to_il_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__statement_to_il_4_0,
		ml_backend__mlds_to_il__statements_to_il_4_0_i5);
MR_def_label(ml_backend__mlds_to_il__statements_to_il_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__mlds_to_il__statements_to_il_4_0,
		ml_backend__mlds_to_il__statements_to_il_4_0_i6);
MR_def_label(ml_backend__mlds_to_il__statements_to_il_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statements_to_il_4_0_i7);
MR_def_label(ml_backend__mlds_to_il__statements_to_il_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__ilds__ret_type_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_target_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module118)
	MR_init_entry1(ml_backend__mlds_to_il__statement_to_il_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__statement_to_il_4_0);
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,4,5,3,8,9,12,13,14,17,18)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,21,23,25,26,28,29,30,31,32,33)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,34,7,36,37,41,40,48,50,51,52)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,49,46,53,44,60,55,56,67,62,63)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,69,75,76,38,39,79,83,84,87,88)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,85,93,95,100,101,102,103,104,105,106)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,107,108,109,110,111,35,114,116,117,118)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,120,121,122,113,125,126,127,128,129,130)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,131,132,124,137,139,136,146,134,150,151)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,152,153,154,155,156,157,160,162,163,164)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,166,167,168,169,170,171,172,173,174,175)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,149,178,180,177,191,192,193,194,190,188)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,186,199,200,201,202,203,204,205,206,208)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,211,213,215,216,217,218,220,222,223,224)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,225,226,227,228,229,230,231,232,233,198)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,236,237,238,241,242,244,247,249,250,251)
	MR_init_label10(ml_backend__mlds_to_il__statement_to_il_4_0,252,253,254,240,256,257,259,262,264,265)
	MR_init_label6(ml_backend__mlds_to_il__statement_to_il_4_0,266,267,268,269,270,235)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'statement_to_il'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__statement_to_il_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i3);
	}
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__atomic_statement_to_il_4_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i4);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i5);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i7);
	}
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_module_name_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i8);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i9);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__defn_to_local_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(6) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i12);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_add_locals_3_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i13);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i14);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,46);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,23);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i17);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__statements_to_il_4_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i18);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__statement_to_il__1640__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 4);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,20);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i21);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(4), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(4), 0) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i23);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = MR_sv(8);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i25);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("block body", 10);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i26);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tfield(3, MR_r2, 2) = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i28);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i29);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i30);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i31);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i32);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i33);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_remove_locals_3_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i34);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i35);
	}
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(6) = (((MR_Integer) MR_tfield(0, MR_r2, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(0, MR_r2, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(10) = (((MR_Integer) MR_tfield(0, MR_r2, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(11) = (((MR_Integer) MR_tfield(0, MR_r2, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(9) = MR_tfield(0, MR_r2, 4);
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_signature_to_ilds_type_params_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i36);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_signature_to_il_return_param_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i37);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i41);
	}
	MR_r2 = MR_sv(1);
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_tfield(0, MR_tfield(0, MR_sv(8), 20), 1);
	MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i40);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i39);
	}
	MR_r2 = MR_sv(1);
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_tfield(0, MR_tfield(0, MR_sv(8), 20), 1);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i44);
	}
	MR_sv(15) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(16) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(17));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_il__statement_to_il_4_0_i46);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__mlds_to_il__statement_to_il_4_0_i48);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,17)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i50);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i49);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i51);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i49);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i52);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i49);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_GOTO(MR_ENTRY(MR_do_redo));
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_restore_maxfr(MR_sv(17));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i53);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(15);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(16);
	MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i44);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i39);
	}
	MR_sv(5) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r2 = MR_sv(1);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i56);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__ret_type_0_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i60);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i55);
	}
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i38);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i63);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__ret_type_0_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i67);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i62);
	}
	MR_r2 = MR_sv(1);
	MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i38);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i69);
	}
	if (MR_RTAGS_TEST(MR_sv(2),3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i69);
	}
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i38);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(1,3,48);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,3,22);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i75);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i76);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r6 = MR_sv(8);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,46);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,24);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_il__statement_to_il_4_0_i83);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_all_load_store_lval_instrs_5_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i79);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r6 = MR_r3;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,46);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,25);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_il__statement_to_il_4_0_i83);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__cord_list_to_cord_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i84);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i85);
	}
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(8) = MR_tfield(3, MR_r2, 1);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i87);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__const_rval_to_function_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i88);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_sv(11);
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i100);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i93);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_method_param);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,26);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i95);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i100);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("call", 4);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i101);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i102);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i103);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i104);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i105);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i106);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i107);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i108);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i109);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i110);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i111);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i113);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i114);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, target);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,27);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i116);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i117);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("computed goto", 13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i118);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 56;
	MR_tfield(3, MR_r2, 1) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i120);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i121);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i122);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,7)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i124);
	}
	MR_sv(8) = MR_r2;
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_commit_class_name_0_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i125);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__newobj_constructor_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i126);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i127);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("do_commit/1", 11);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i128);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i129);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 25);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i130);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i131);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i132);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i134);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i136);
	}
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("goto ", 5);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i137);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_instr_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i139);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 32;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i146);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.statement_to_il\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("break", 5);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.statement_to_il\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("continue", 8);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i149);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__generate_condition_5_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i150);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_make_next_label_3_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i151);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_localcall_lab(ml_backend__mlds_to_il__statement_to_il_4_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i152);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i153);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__maybe_map_fold__ho1_6_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i154);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i155);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("if then else", 12);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i156);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("then case", 9);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i157);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 32;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i160);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i162);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("else case", 9);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i163);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("end if then else", 16);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i164);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i166);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i167);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i168);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i169);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i170);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i171);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i172);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i173);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i174);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i175);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i177);
	}
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r3, 1);
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("label ", 6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i178);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_instr_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i180);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i186);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i188);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i190);
	}
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i191);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i192);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 17);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i193);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i194);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.statement_to_il\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("multiple return values", 22);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.statement_to_il\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("empty list of return values", 27);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r3,3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i198);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i199);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_localcall_lab(ml_backend__mlds_to_il__statement_to_il_4_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i200);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i201);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__mlds_to_il__statement_to_il_4_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i202);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_make_next_label_3_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i203);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_commit_class_name_0_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i204);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i205);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("try_commit/3", 12);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i206);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i208);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 48;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_sv(11) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i211);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i213);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(6));
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_sv(6) = MR_r1;
	MR_sv(13) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i215);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("discard the exception object", 28);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i216);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 16);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i217);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i218);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_r2, 1) = MR_sv(13);
	MR_tfield(3, MR_r2, 2) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i220);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_r2, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i222);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i223);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i224);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i225);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i226);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i227);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i228);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i229);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i230);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i231);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i232);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i233);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i235);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(13) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__generate_condition_5_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i236);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,236)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_make_next_label_3_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i237);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__mlds_to_il__statement_to_il_4_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i238);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__statement_to_il_4_0_i240);
	}
	MR_sv(8) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i241);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("while (actually do ... while)", 29);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i242);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i244);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 32;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i247);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i249);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i250);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i251);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,251)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i252);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i253);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i254);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i256);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("while", 5);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i257);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i259);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 32;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i262);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i264);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i265);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,265)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i266);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i267);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i268);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i269);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__statement_to_il_4_0_i270);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(18);
MR_def_label(ml_backend__mlds_to_il__statement_to_il_4_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.statement_to_il\'/4", 51);
	MR_r3 = (MR_Word) MR_string_const("\140switch\' not supported", 22);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module119)
	MR_init_entry1(fn__ml_backend__mlds_to_il__il_set_exit_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__il_set_exit_code_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_set_exit_code'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__il_set_exit_code_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,17,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ilds__calculate_max_stack_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module120)
	MR_init_entry1(fn__ml_backend__mlds_to_il__make_method_defn_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__make_method_defn_3_0);
	MR_init_label4(fn__ml_backend__mlds_to_il__make_method_defn_3_0,3,4,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_method_defn'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__make_method_defn_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__make_method_defn_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__list_1_0,
		fn__ml_backend__mlds_to_il__make_method_defn_3_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__make_method_defn_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_sv(2) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__list_1_0,
		fn__ml_backend__mlds_to_il__make_method_defn_3_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__make_method_defn_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__ilds__calculate_max_stack_1_0,
		fn__ml_backend__mlds_to_il__make_method_defn_3_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__make_method_defn_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = ((MR_Integer) MR_r1 + (MR_Integer) MR_sv(2));
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__make_method_defn_3_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__ml_backend__mlds_to_il__make_method_defn_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module121)
	MR_init_entry1(fn__ml_backend__mlds_to_il__load_this_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__load_this_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'load_this'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__load_this_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,7,36);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module122)
	MR_init_entry1(ml_backend__mlds_to_il__il_info_new_method_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_info_new_method_6_0);
	MR_init_label7(ml_backend__mlds_to_il__il_info_new_method_6_0,3,4,6,8,10,12,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_new_method'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_info_new_method_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r6 = MR_tfield(0, MR_tempr1, 16);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__il_info_new_method_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ml_backend__mlds_to_il__il_info_new_method_6_0_i8);
MR_def_label(ml_backend__mlds_to_il__il_info_new_method_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_tfield(1, MR_r6, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		ml_backend__mlds_to_il__il_info_new_method_6_0_i4);
MR_def_label(ml_backend__mlds_to_il__il_info_new_method_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(5);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr7, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_tempr6, 3) = MR_r1;
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_tempr6, 5) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | (((MR_Integer) MR_tempr2 << (MR_Integer) 3) | ((MR_Integer) MR_tempr1 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr6, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_tempr6, 7) = MR_tfield(0, MR_tempr7, 7);
	MR_tfield(0, MR_tempr6, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_tempr6, 9) = MR_tfield(0, MR_tempr7, 9);
	MR_tfield(0, MR_tempr6, 10) = MR_tfield(0, MR_tempr7, 10);
	MR_tfield(0, MR_tempr6, 11) = MR_tfield(0, MR_tempr7, 11);
	MR_tfield(0, MR_tempr6, 12) = MR_tfield(0, MR_tempr7, 12);
	MR_tfield(0, MR_tempr6, 13) = MR_tfield(0, MR_tempr7, 13);
	MR_tfield(0, MR_tempr6, 14) = MR_tfield(0, MR_tempr7, 14);
	MR_tfield(0, MR_tempr6, 15) = MR_tfield(0, MR_tempr7, 15);
	MR_tfield(0, MR_tempr6, 16) = MR_tfield(0, MR_tempr7, 16);
	MR_tfield(0, MR_tempr6, 17) = MR_tfield(0, MR_tempr7, 17);
	MR_tfield(0, MR_tempr6, 18) = MR_tfield(0, MR_tempr7, 18);
	MR_tfield(0, MR_tempr6, 19) = MR_tfield(0, MR_tempr7, 19);
	MR_tfield(0, MR_tempr6, 20) = MR_tfield(0, MR_tempr7, 20);
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tempr6;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr6, 10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		ml_backend__mlds_to_il__il_info_new_method_6_0_i6);
MR_def_label(ml_backend__mlds_to_il__il_info_new_method_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(6);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr7, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_tempr6, 3) = MR_tfield(0, MR_tempr7, 3);
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_tempr6, 5) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | (((MR_Integer) MR_tempr2 << (MR_Integer) 3) | ((MR_Integer) MR_tempr1 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr6, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_tempr6, 7) = MR_tfield(0, MR_tempr7, 7);
	MR_tfield(0, MR_tempr6, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_tempr6, 9) = MR_tfield(0, MR_tempr7, 9);
	MR_tfield(0, MR_tempr6, 10) = MR_r1;
	MR_tfield(0, MR_tempr6, 11) = MR_tfield(0, MR_tempr7, 11);
	MR_tfield(0, MR_tempr6, 12) = MR_tfield(0, MR_tempr7, 12);
	MR_tfield(0, MR_tempr6, 13) = MR_tfield(0, MR_tempr7, 13);
	MR_tfield(0, MR_tempr6, 14) = MR_tfield(0, MR_tempr7, 14);
	MR_tfield(0, MR_tempr6, 15) = MR_tfield(0, MR_tempr7, 15);
	MR_tfield(0, MR_tempr6, 16) = MR_tfield(0, MR_tempr7, 16);
	MR_tfield(0, MR_tempr6, 17) = MR_tfield(0, MR_tempr7, 17);
	MR_tfield(0, MR_tempr6, 18) = MR_tfield(0, MR_tempr7, 18);
	MR_tfield(0, MR_tempr6, 19) = MR_tfield(0, MR_tempr7, 19);
	MR_tfield(0, MR_tempr6, 20) = MR_tfield(0, MR_tempr7, 20);
	MR_sv(6) = MR_tempr6;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ml_backend__mlds_to_il__il_info_new_method_6_0_i8);
MR_def_label(ml_backend__mlds_to_il__il_info_new_method_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(6);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr6, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_r1;
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr6, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr6, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr6, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr6, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr6, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr6, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr6, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr6, 20);
	MR_sv(6) = MR_tempr5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__il_info_new_method_6_0_i10);
MR_def_label(ml_backend__mlds_to_il__il_info_new_method_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(6);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr6, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_tfield(0, MR_tempr6, 12);
	MR_tfield(0, MR_tempr5, 13) = MR_r1;
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr6, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr6, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr6, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr6, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr6, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr6, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr6, 20);
	MR_sv(6) = MR_tempr5;
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ml_backend__mlds_to_il__il_info_new_method_6_0_i12);
MR_def_label(ml_backend__mlds_to_il__il_info_new_method_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(6);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr6, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_tfield(0, MR_tempr6, 12);
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr6, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_r1;
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr6, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr6, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr6, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr6, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr6, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr6, 20);
	MR_sv(6) = MR_tempr5;
	MR_r1 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ml_backend__mlds_to_il__il_info_new_method_6_0_i14);
MR_def_label(ml_backend__mlds_to_il__il_info_new_method_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(6);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr6, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_tfield(0, MR_tempr6, 12);
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr6, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr6, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_r1;
	MR_tfield(0, MR_tempr5, 16) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 17) = MR_sv(1);
	MR_tfield(0, MR_tempr5, 18) = MR_sv(3);
	MR_tfield(0, MR_tempr5, 19) = MR_sv(4);
	MR_tfield(0, MR_tempr5, 20) = MR_sv(2);
	MR_r1 = MR_tempr5;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module123)
	MR_init_entry1(ml_backend__mlds_to_il__il_info_add_init_instructions_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_info_add_init_instructions_3_0);
	MR_init_label2(ml_backend__mlds_to_il__il_info_add_init_instructions_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_add_init_instructions'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_info_add_init_instructions_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r2, 7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__il_info_add_init_instructions_3_0_i2);
MR_def_label(ml_backend__mlds_to_il__il_info_add_init_instructions_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__il_info_add_init_instructions_3_0_i3);
MR_def_label(ml_backend__mlds_to_il__il_info_add_init_instructions_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr6, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_r1;
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr6, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_tfield(0, MR_tempr6, 12);
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr6, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr6, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr6, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr6, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr6, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr6, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr6, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr6, 20);
	MR_r1 = MR_tempr5;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module124)
	MR_init_entry1(ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0);
	MR_init_label2(ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_add_alloc_instructions'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r2, 6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0_i2);
MR_def_label(ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0_i3);
MR_def_label(ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr6, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr6, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_r1;
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr6, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr6, 8);
	MR_tfield(0, MR_tempr5, 9) = MR_tfield(0, MR_tempr6, 9);
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr6, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr6, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_tfield(0, MR_tempr6, 12);
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr6, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr6, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr6, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr6, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr6, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr6, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr6, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr6, 20);
	MR_r1 = MR_tempr5;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_values_only_3_0);
MR_decl_entry(map__to_assoc_list_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module125)
	MR_init_entry1(ml_backend__mlds_to_il__il_info_get_locals_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__il_info_get_locals_list_2_0);
	MR_init_label1(ml_backend__mlds_to_il__il_info_get_locals_list_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'il_info_get_locals_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__il_info_get_locals_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 4);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_tfield(0, MR_tempr2, 12);
	}
	MR_np_call_localret_ent(map__map_values_only_3_0,
		ml_backend__mlds_to_il__il_info_get_locals_list_2_0_i3);
MR_def_label(ml_backend__mlds_to_il__il_info_get_locals_list_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(map__to_assoc_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(cord__is_empty_1_0);
MR_decl_entry(fn__string__append_2_0);
MR_decl_entry(fn__cord__map_2_0);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module126)
	MR_init_entry1(ml_backend__mlds_to_il__generate_method_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__generate_method_6_0);
	MR_init_label10(ml_backend__mlds_to_il__generate_method_6_0,4,5,3,8,9,10,11,12,14,16)
	MR_init_label10(ml_backend__mlds_to_il__generate_method_6_0,18,13,21,22,24,26,27,28,29,30)
	MR_init_label10(ml_backend__mlds_to_il__generate_method_6_0,31,32,33,34,35,36,37,38,39,40)
	MR_init_label10(ml_backend__mlds_to_il__generate_method_6_0,41,42,7,45,46,49,50,54,57,58)
	MR_init_label10(ml_backend__mlds_to_il__generate_method_6_0,56,52,62,51,69,70,71,74,76,77)
	MR_init_label10(ml_backend__mlds_to_il__generate_method_6_0,78,80,81,82,83,85,86,87,73,89)
	MR_init_label10(ml_backend__mlds_to_il__generate_method_6_0,91,93,94,95,96,97,100,102,103,104)
	MR_init_label10(ml_backend__mlds_to_il__generate_method_6_0,105,106,107,108,121,122,123,124,125,131)
	MR_init_label10(ml_backend__mlds_to_il__generate_method_6_0,133,135,136,139,140,147,151,156,165,178)
	MR_init_label10(ml_backend__mlds_to_il__generate_method_6_0,182,192,197,198,202,206,210,211,212,213)
	MR_init_label7(ml_backend__mlds_to_il__generate_method_6_0,214,215,216,109,218,219,223)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_method'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__generate_method_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(24);
	MR_sv(24) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i3);
	}
	MR_sv(13) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__generate_class_body_10_0,
		ml_backend__mlds_to_il__generate_method_6_0_i4);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r6;
	MR_sv(2) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__decl_flags_to_nestedclassattrs_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i5);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(24);
	}
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i7);
	}
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(10) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(13) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i8);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__decl_flags_to_fieldattrs_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i9);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,
		ml_backend__mlds_to_il__generate_method_6_0_i10);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr2, 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i11);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__make_fieldref_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i12);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(cord__is_empty_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i14);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i13);
	}
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__generate_method_6_0_i16);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i18);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__generate_method_6_0_i24);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i21);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 16);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i22);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i24);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i26);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("allocation for ", 15);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__append_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i27);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i28);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i29);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i30);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i31);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i32);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i33);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("initializer for ", 16);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__append_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i34);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i35);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i36);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i37);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i38);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i39);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i40);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_add_alloc_instructions_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i41);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_add_init_instructions_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i42);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(24);
	}
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_COMMON(6,5);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_method__1068__1_1_0);
	MR_tfield(0, MR_r1, 2) = (MR_Integer) 1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_tfield(0, MR_r1, 3) = MR_tfield(2, MR_tempr1, 4);
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(8) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(13) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.generate_method\'/6", 51);
	MR_r4 = (MR_Word) MR_string_const("EnvVarNames", 11);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ml_backend__mlds_to_il__generate_method_6_0_i45);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_module_name_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i46);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,28);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i49);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(2), 4);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__params_to_il_signature_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i50);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i52);
	}
	if (MR_PTAG_TESTR(MR_sv(17),3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i54);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_sv(7) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_sv(17), 0);
	MR_sv(6) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i69);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(17),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i56);
	}
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(12) = MR_tfield(2, MR_tempr1, 2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__predlabel_to_ilds_id_4_0,
		ml_backend__mlds_to_il__generate_method_6_0_i57);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(12);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__predlabel_to_csharp_id_4_0,
		ml_backend__mlds_to_il__generate_method_6_0_i58);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r1;
	MR_sv(12) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i69);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.generate_method\'/6", 51);
	MR_r3 = (MR_Word) MR_string_const("IL procedure is not a function", 30);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i51);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__load_this_0_0,
		ml_backend__mlds_to_il__generate_method_6_0_i62);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,12,7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(12) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(13);
	}
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__decl_flags_to_methattrs_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i69);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_new_method_6_0,
		ml_backend__mlds_to_il__generate_method_6_0_i70);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i71);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(10),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i73);
	}
	MR_sv(8) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_tfield(0, MR_r2, 3);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__set__insert_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i74);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(10);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr4 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr5 = ((MR_Integer) MR_tfield(0, MR_tempr7, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 21);
	MR_sv(14) = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr6, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_tempr6, 3) = MR_r1;
	MR_tfield(0, MR_tempr6, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_tempr6, 5) = ((MR_Integer) MR_tempr5 | (((MR_Integer) MR_tempr4 << (MR_Integer) 1) | (((MR_Integer) MR_tempr3 << (MR_Integer) 2) | (((MR_Integer) MR_tempr2 << (MR_Integer) 3) | ((MR_Integer) MR_tempr1 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr6, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_tempr6, 7) = MR_tfield(0, MR_tempr7, 7);
	MR_tfield(0, MR_tempr6, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_tempr6, 9) = MR_tfield(0, MR_tempr7, 9);
	MR_tfield(0, MR_tempr6, 10) = MR_tfield(0, MR_tempr7, 10);
	MR_tfield(0, MR_tempr6, 11) = MR_tfield(0, MR_tempr7, 11);
	MR_tfield(0, MR_tempr6, 12) = MR_tfield(0, MR_tempr7, 12);
	MR_tfield(0, MR_tempr6, 13) = MR_tfield(0, MR_tempr7, 13);
	MR_tfield(0, MR_tempr6, 14) = MR_tfield(0, MR_tempr7, 14);
	MR_tfield(0, MR_tempr6, 15) = MR_tfield(0, MR_tempr7, 15);
	MR_tfield(0, MR_tempr6, 16) = MR_tfield(0, MR_tempr7, 16);
	MR_tfield(0, MR_tempr6, 17) = MR_tfield(0, MR_tempr7, 17);
	MR_tfield(0, MR_tempr6, 18) = MR_tfield(0, MR_tempr7, 18);
	MR_tfield(0, MR_tempr6, 19) = MR_tfield(0, MR_tempr7, 19);
	MR_tfield(0, MR_tempr6, 20) = MR_tfield(0, MR_tempr7, 20);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_dataname_module_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i76);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i77);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_method_params_to_il_types_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i78);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r2 = MR_sv(15);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,29);
	MR_r5 = MR_sv(9);
	MR_r6 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_il__generate_method_6_0_i80);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("external -- call handwritten version", 36);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i81);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i82);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__get_static_methodref_4_0,
		ml_backend__mlds_to_il__generate_method_6_0_i83);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i85);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i86);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i87);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = (MR_Word) MR_tbmkword(0, 17);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i93);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_body((MR_Integer) MR_sv(10), (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__statement_to_il_4_0,
		ml_backend__mlds_to_il__generate_method_6_0_i89);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i91);
	}
	MR_sv(3) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = (MR_Word) MR_tbmkword(0, 17);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i93);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__generate_method_6_0_i93);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_locals_list_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i94);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i95);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i96);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__context_node_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i97);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_sv(13) = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tfield(3, MR_r2, 2) = MR_sv(8);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i100);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_r2, 1) = MR_sv(13);
	MR_tfield(3, MR_r2, 2) = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i102);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i103);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i104);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i105);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i106);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i107);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i108);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(17),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i109);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr6 = MR_sv(17);
	MR_r2 = MR_tfield(2, MR_tempr6, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i109);
	}
	MR_r2 = MR_tfield(2, MR_tempr6, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i109);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i109);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i109);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i109);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i109);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i109);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 5);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_method_6_0_i109);
	}
	MR_tempr7 = MR_sv(14);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_tempr3 = (((MR_Integer) MR_tfield(0, MR_tempr7, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_tempr4 = ((MR_Integer) MR_tfield(0, MR_tempr7, 5) & (MR_Integer) 1);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 21);
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(0, MR_tempr7, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tfield(0, MR_tempr7, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tfield(0, MR_tempr7, 2);
	MR_tfield(0, MR_tempr5, 3) = MR_tfield(0, MR_tempr7, 3);
	MR_tfield(0, MR_tempr5, 4) = MR_tfield(0, MR_tempr7, 4);
	MR_tfield(0, MR_tempr5, 5) = ((MR_Integer) MR_tempr4 | (((MR_Integer) MR_tempr3 << (MR_Integer) 1) | (((MR_Integer) MR_tempr2 << (MR_Integer) 2) | (((MR_Integer) MR_tempr1 << (MR_Integer) 3) | ((MR_Integer) MR_r2 << (MR_Integer) 4)))));
	MR_tfield(0, MR_tempr5, 6) = MR_tfield(0, MR_tempr7, 6);
	MR_tfield(0, MR_tempr5, 7) = MR_tfield(0, MR_tempr7, 7);
	MR_tfield(0, MR_tempr5, 8) = MR_tfield(0, MR_tempr7, 8);
	MR_tfield(0, MR_tempr5, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr5, 10) = MR_tfield(0, MR_tempr7, 10);
	MR_tfield(0, MR_tempr5, 11) = MR_tfield(0, MR_tempr7, 11);
	MR_tfield(0, MR_tempr5, 12) = MR_tfield(0, MR_tempr7, 12);
	MR_tfield(0, MR_tempr5, 13) = MR_tfield(0, MR_tempr7, 13);
	MR_tfield(0, MR_tempr5, 14) = MR_tfield(0, MR_tempr7, 14);
	MR_tfield(0, MR_tempr5, 15) = MR_tfield(0, MR_tempr7, 15);
	MR_tfield(0, MR_tempr5, 16) = MR_tfield(0, MR_tempr7, 16);
	MR_tfield(0, MR_tempr5, 17) = MR_tfield(0, MR_tempr7, 17);
	MR_tfield(0, MR_tempr5, 18) = MR_tfield(0, MR_tempr7, 18);
	MR_tfield(0, MR_tempr5, 19) = MR_tfield(0, MR_tempr7, 19);
	MR_tfield(0, MR_tempr5, 20) = MR_tfield(0, MR_tempr7, 20);
	MR_sv(8) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(1,3,13);
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i121);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i122);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i123);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_get_next_block_id_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i124);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__il_info_make_next_label_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i125);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(15) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(14) = MR_r1;
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(1,2,22);
	MR_sv(17) = (MR_Word) MR_TAG_COMMON(3,12,9);
	MR_r1 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__backend_libs__foreign__non_foreign_type_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i131);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(16);
	MR_tfield(2, MR_r2, 1) = MR_sv(17);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i133);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(1,1,32);
	MR_r1 = MR_sv(18);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mercury_runtime_name_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i135);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_assembly_name_0_0,
		ml_backend__mlds_to_il__generate_method_6_0_i136);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(18) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,36);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = (MR_Word) MR_string_const("mercury_exception", 17);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__make_fieldref_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i139);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_system_assembly_name_0_0,
		ml_backend__mlds_to_il__generate_method_6_0_i140);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,38);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(19) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,14);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,39);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i147);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(20) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,12,0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_string_type_0_0,
		ml_backend__mlds_to_il__generate_method_6_0_i151);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(21);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_sv(19);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(16);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(20);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(16) = MR_r1;
	MR_sv(20) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_generic_type_0_0,
		ml_backend__mlds_to_il__generate_method_6_0_i156);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(21);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_sv(19);
	MR_tfield(0, MR_r1, 3) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(18));
	MR_tfield(3, MR_r2, 2) = MR_sv(13);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(21) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(16);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(22) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_sv(18) = MR_tfield(3, MR_r2, 1);
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(3,21,3);
	MR_sv(23) = (MR_Word) MR_TAG_COMMON(3,16,0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_set_exit_code_0_0,
		ml_backend__mlds_to_il__generate_method_6_0_i165);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(14);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 48;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr4, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr4, 2) = MR_sv(13);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(23);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(22);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_sv(21);
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(16);
	MR_tfield(1, MR_r2, 1) = MR_tempr5;
	MR_sv(16) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i178);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(17));
	MR_tfield(3, MR_r2, 2) = MR_sv(12);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(19) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(20);
	MR_sv(13) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_tfield(3, MR_r2, 1);
	MR_sv(11) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_set_exit_code_0_0,
		ml_backend__mlds_to_il__generate_method_6_0_i182);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(18);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(16);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(23);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(19);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(17);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i192);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i197);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(15);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__map_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i198);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(16);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i202);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(16);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i206);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(14);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,3,22);
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__generate_method_6_0_i210);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i211);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i212);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i213);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i214);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i215);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i216);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tempr1, 5) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__make_method_defn_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i218);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(3) = MR_tempr1;
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r1;
	MR_r1 = ((MR_Integer) MR_tfield(0, MR_tempr1, 5) & (MR_Integer) 1);
	MR_r2 = (((MR_Integer) MR_tfield(0, MR_tempr1, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__make_method_defn_3_0,
		ml_backend__mlds_to_il__generate_method_6_0_i218);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__attributes_to_custom_attributes_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i219);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		ml_backend__mlds_to_il__generate_method_6_0_i223);
MR_def_label(ml_backend__mlds_to_il__generate_method_6_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(24);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module127)
	MR_init_entry1(fn__ml_backend__mlds_to_il__attribute_to_custom_attribute_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__attribute_to_custom_attribute_2_0);
	MR_init_label1(fn__ml_backend__mlds_to_il__attribute_to_custom_attribute_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'attribute_to_custom_attribute'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__attribute_to_custom_attribute_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_class_name_2_0,
		fn__ml_backend__mlds_to_il__attribute_to_custom_attribute_2_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__attribute_to_custom_attribute_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,12,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_get_arg_types_1_0);
MR_decl_entry(fn__assoc_list__keys_1_0);
MR_decl_entry(fn__assoc_list__values_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module128)
	MR_init_entry1(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0);
	MR_init_label10(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,3,6,8,10,11,12,14,17,16,28)
	MR_init_label2(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,38,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_export_to_mlds_defn'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,23);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1381__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 3;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(10) = MR_tfield(0, MR_r1, 3);
	MR_sv(2) = MR_tfield(0, MR_r1, 5);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mlds_export_to_mlds_defn\'/2", 60);
	MR_r4 = (MR_Word) MR_string_const("export for language other than IL.", 34);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i3);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_tempr2 = MR_sv(10);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,24);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i6);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_arg_types_1_0,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i8);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i10);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__assoc_list__keys_1_0,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i11);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__assoc_list__values_1_0,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i12);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,30);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i14);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i17);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tempr11 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(2, MR_tempr11, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(2, MR_tempr11, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r7 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 7);
	MR_r6 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr7, 2) = MR_tempr6;
	MR_tfield(3, MR_tempr7, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr7, 4) = MR_sv(6);
	MR_tfield(3, MR_tempr7, 5) = MR_sv(8);
	MR_tfield(3, MR_tempr7, 6) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr8;
	MR_tfield(0, MR_tempr8, 0) = MR_tempr7;
	MR_tempr12 = MR_sv(2);
	MR_tfield(0, MR_tempr8, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr9, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr9;
	MR_tfield(3, MR_tempr9, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr9, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr10, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr10;
	MR_tfield(0, MR_tempr10, 0) = MR_tempr9;
	MR_tfield(0, MR_tempr10, 1) = MR_tempr12;
	MR_r2 = MR_tempr8;
	MR_r3 = MR_tempr10;
	MR_GOTO_LAB(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i16);
	}
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mlds_export_to_mlds_defn\'/2", 60);
	MR_r3 = (MR_Word) MR_string_const("exported entity is not a function", 33);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i16);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i38);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_sv(9) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_r2;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i38);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(9));
	MR_tfield(2, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 4) = MR_r1;
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0_i40);
MR_def_label(ml_backend__mlds_to_il__mlds_export_to_mlds_defn_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module129)
	MR_init_entry1(ml_backend__mlds_to_il__generate_defn_initializer_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__generate_defn_initializer_5_0);
	MR_init_label10(ml_backend__mlds_to_il__generate_defn_initializer_5_0,5,11,13,14,15,16,7,17,18,20)
	MR_init_label10(ml_backend__mlds_to_il__generate_defn_initializer_5_0,21,22,23,24,26,27,28,29,30,31)
	MR_init_label3(ml_backend__mlds_to_il__generate_defn_initializer_5_0,32,33,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_defn_initializer'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__generate_defn_initializer_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_defn_initializer_5_0_i2);
	}
	MR_r5 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_defn_initializer_5_0_i2);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_defn_initializer_5_0_i5);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp(9);
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_defn_initializer_5_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_body((MR_Integer) MR_r5, (MR_Integer) 1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_tfield(3, MR_r1, 1) = MR_sv(2);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_load_store_lval_instrs_5_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i11);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__generate_defn_initializer_5_0_i13);
	}
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(2);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i20);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i14);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i15);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i16);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(2) = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i20);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("initializer_for_non_var_data_name", 33);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__throw_unimplemented_1_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i17);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i18);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(2) = (MR_Word) MR_string_const("unknown", 7);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i20);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("initializer for ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i21);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i22);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i23);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i24);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_r2, 1) = MR_sv(8);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i26);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__comment_node_1_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i27);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i28);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i29);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i30);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i31);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i32);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__generate_defn_initializer_5_0_i33);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__mlds_to_il__generate_defn_initializer_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.generate_defn_initializer\'/5", 61);
	MR_r3 = (MR_Word) MR_string_const("defn not data(...) in block", 27);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module130)
	MR_init_entry1(ml_backend__mlds_to_il__maybe_box_initializer_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__maybe_box_initializer_2_0);
	MR_init_label3(ml_backend__mlds_to_il__maybe_box_initializer_2_0,3,6,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_box_initializer'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__maybe_box_initializer_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__maybe_box_initializer_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__maybe_box_initializer_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__maybe_box_initializer_2_0_i33);
	}
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__maybe_box_initializer_2_0_i33);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__rval_to_type_2_0,
		ml_backend__mlds_to_il__maybe_box_initializer_2_0_i6);
MR_def_label(ml_backend__mlds_to_il__maybe_box_initializer_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__mlds_to_il__maybe_box_initializer_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module131)
	MR_init_entry1(fn__ml_backend__mlds_to_il__flatten_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__flatten_init_1_0);
	MR_init_label3(fn__ml_backend__mlds_to_il__flatten_init_1_0,2,12,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flatten_init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__flatten_init_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__flatten_init_1_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,25);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,31);
	MR_r4 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__flatten_init_1_0_i12);
MR_def_label(fn__ml_backend__mlds_to_il__flatten_init_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__flatten_init_1_0_i8);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,25);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,32);
	MR_r4 = MR_tfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__ml_backend__mlds_to_il__flatten_init_1_0_i12);
MR_def_label(fn__ml_backend__mlds_to_il__flatten_init_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__list__condense_1_0);
	}
MR_def_label(fn__ml_backend__mlds_to_il__flatten_init_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module132)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0);
	MR_init_label4(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0,4,3,6,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_arg_to_il_arg'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_dataname_2_0,
		fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_entity_name\'/2", 54);
	MR_r3 = (MR_Word) MR_string_const("can\'t mangle export names", 25);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_entity_name\'/2", 54);
	MR_r3 = (MR_Word) MR_string_const("can\'t mangle function names", 27);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ml_backend__mlds_to_il__mlds_arg_to_il_arg_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_entity_name\'/2", 54);
	MR_r3 = (MR_Word) MR_string_const("can\'t mangle type names", 23);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module133)
	MR_init_entry1(fn__ml_backend__mlds_to_il__input_param_to_ilds_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__input_param_to_ilds_type_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'input_param_to_ilds_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__input_param_to_ilds_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module134)
	MR_init_entry1(ml_backend__mlds_to_il__defn_to_local_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__defn_to_local_3_0);
	MR_init_label3(ml_backend__mlds_to_il__defn_to_local_3_0,5,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_to_local'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__defn_to_local_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__defn_to_local_3_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_r2, 3);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__defn_to_local_3_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_dataname_2_0,
		ml_backend__mlds_to_il__defn_to_local_3_0_i5);
MR_def_label(ml_backend__mlds_to_il__defn_to_local_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_mlds_var_2_0,
		ml_backend__mlds_to_il__defn_to_local_3_0_i8);
MR_def_label(ml_backend__mlds_to_il__defn_to_local_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__mlds_to_il__defn_to_local_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.defn_to_local\'/3", 49);
	MR_r3 = (MR_Word) MR_string_const("definition name was not data/1", 30);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module135)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0);
	MR_init_label2(fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_library_wrapper_class_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("mercury", 7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__mercury_library_wrapper_class_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module136)
	MR_init_entry1(fn__ml_backend__mlds_to_il__mercury_strong_name_assembly_decls_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__mercury_strong_name_assembly_decls_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_strong_name_assembly_decls'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__mercury_strong_name_assembly_decls_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module137)
	MR_init_entry1(__Unify___ml_backend__mlds_to_il__arguments_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_il__arguments_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_il__arguments_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
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

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module138)
	MR_init_entry1(__Compare___ml_backend__mlds_to_il__arguments_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_il__arguments_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_il__arguments_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
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

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module139)
	MR_init_entry1(__Unify___ml_backend__mlds_to_il__field_names_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_il__field_names_set_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_il__field_names_set_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module140)
	MR_init_entry1(__Compare___ml_backend__mlds_to_il__field_names_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_il__field_names_set_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_il__field_names_set_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module141)
	MR_init_entry1(__Unify___ml_backend__mlds_to_il__il_data_rep_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_il__il_data_rep_0_0);
	MR_init_label2(__Unify___ml_backend__mlds_to_il__il_data_rep_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__mlds_to_il__il_data_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_data_rep_0_0_i6);
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
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_data_rep_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
	}
MR_def_label(__Unify___ml_backend__mlds_to_il__il_data_rep_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_il__il_data_rep_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___ml_backend__ilds__il_type_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module142)
	MR_init_entry1(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_il__il_data_rep_0_0);
	MR_init_label4(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__mlds_to_il__il_data_rep_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0_i2);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_il__il_data_rep_0_0_i5);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___cord__cord_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___counter__counter_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___ml_backend__ilds__member_name_0_0);
MR_decl_entry(__Unify___ml_backend__ilds__signature_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module143)
	MR_init_entry1(__Unify___ml_backend__mlds_to_il__il_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_il__il_info_0_0);
	MR_init_label10(__Unify___ml_backend__mlds_to_il__il_info_0_0,4,6,8,10,12,14,16,18,20,22)
	MR_init_label9(__Unify___ml_backend__mlds_to_il__il_info_0_0,24,26,28,30,33,35,37,41,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_il__il_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i41);
	}
	MR_incr_sp(49);
	MR_sv(49) = (MR_Word) MR_succip;
	MR_sv(47) = MR_r1;
	MR_sv(48) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(47);
	MR_sv(47) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(48);
	MR_sv(48) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr1, 5) & (MR_Integer) 1);
	MR_sv(4) = (((MR_Integer) MR_tfield(0, MR_tempr1, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(5) = (((MR_Integer) MR_tfield(0, MR_tempr1, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(6) = (((MR_Integer) MR_tfield(0, MR_tempr1, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(0, MR_tempr1, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 13);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 14);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 15);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 16);
	MR_sv(19) = MR_tfield(0, MR_tempr1, 17);
	MR_sv(20) = MR_tfield(0, MR_tempr1, 18);
	MR_sv(21) = MR_tfield(0, MR_tempr1, 19);
	MR_sv(22) = MR_tfield(0, MR_tempr1, 20);
	MR_sv(23) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(24) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(25) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(26) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(27) = ((MR_Integer) MR_tfield(0, MR_tempr2, 5) & (MR_Integer) 1);
	MR_sv(28) = (((MR_Integer) MR_tfield(0, MR_tempr2, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(29) = (((MR_Integer) MR_tfield(0, MR_tempr2, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(30) = (((MR_Integer) MR_tfield(0, MR_tempr2, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(31) = (((MR_Integer) MR_tfield(0, MR_tempr2, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(32) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(33) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(34) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(35) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(36) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(37) = MR_tfield(0, MR_tempr2, 11);
	MR_sv(38) = MR_tfield(0, MR_tempr2, 12);
	MR_sv(39) = MR_tfield(0, MR_tempr2, 13);
	MR_sv(40) = MR_tfield(0, MR_tempr2, 14);
	MR_sv(41) = MR_tfield(0, MR_tempr2, 15);
	MR_sv(42) = MR_tfield(0, MR_tempr2, 16);
	MR_sv(43) = MR_tfield(0, MR_tempr2, 17);
	MR_sv(44) = MR_tfield(0, MR_tempr2, 18);
	MR_sv(45) = MR_tfield(0, MR_tempr2, 19);
	MR_sv(46) = MR_tfield(0, MR_tempr2, 20);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i4);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(47), (char *) (MR_Word *) MR_sv(23)) != 0)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_r2 = MR_sv(48);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i6);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_sv(47) = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r1 = MR_sv(47);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(25);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i8);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds_to_il__il_data_rep_0_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i10);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(27))) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(28))) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(29))) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(30))) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(31))) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_sv(48) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(48);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(32);
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i12);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = MR_sv(48);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(33);
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i14);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(34);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i16);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	if ((MR_sv(11) != MR_sv(35))) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = MR_sv(47);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(36);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i18);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(37);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i20);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(38);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i22);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = MR_sv(48);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(39);
	MR_np_call_localret_ent(__Unify___cord__cord_1_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i24);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(40);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i26);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(41);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i28);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(42);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i30);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(43);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i33);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(44);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__member_name_0_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i35);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(45);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__member_name_0_0,
		__Unify___ml_backend__mlds_to_il__il_info_0_0_i37);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_il__il_info_0_0_i1);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(46);
	MR_succip_word = MR_sv(49);
	MR_decr_sp(49);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__signature_0_0);
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_il__il_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(49);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_module_name_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___cord__cord_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___counter__counter_0_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(__Compare___ml_backend__ilds__member_name_0_0);
MR_decl_entry(__Compare___ml_backend__ilds__signature_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module144)
	MR_init_entry1(__Compare___ml_backend__mlds_to_il__il_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_il__il_info_0_0);
	MR_init_label10(__Compare___ml_backend__mlds_to_il__il_info_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label10(__Compare___ml_backend__mlds_to_il__il_info_0_0,37,41,45,49,53,57,61,65,69,73)
	MR_init_label7(__Compare___ml_backend__mlds_to_il__il_info_0_0,77,81,85,90,94,98,281)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_il__il_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i3);
	}
	MR_incr_sp(49);
	MR_sv(49) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i2);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(48) = MR_tfield(0, MR_tempr5, 20);
	MR_sv(47) = MR_tfield(0, MR_tempr5, 19);
	MR_sv(46) = MR_tfield(0, MR_tempr5, 18);
	MR_sv(45) = MR_tfield(0, MR_tempr5, 17);
	MR_sv(44) = MR_tfield(0, MR_tempr5, 16);
	MR_sv(43) = MR_tfield(0, MR_tempr5, 15);
	MR_sv(42) = MR_tfield(0, MR_tempr5, 14);
	MR_sv(41) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(40) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(39) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(38) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(37) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(36) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(35) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(34) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(33) = (((MR_Integer) MR_tfield(0, MR_tempr5, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(32) = (((MR_Integer) MR_tfield(0, MR_tempr5, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(31) = (((MR_Integer) MR_tfield(0, MR_tempr5, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(30) = (((MR_Integer) MR_tfield(0, MR_tempr5, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(29) = ((MR_Integer) MR_tfield(0, MR_tempr5, 5) & (MR_Integer) 1);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(24) = MR_tfield(0, MR_tempr6, 20);
	MR_sv(23) = MR_tfield(0, MR_tempr6, 19);
	MR_sv(22) = MR_tfield(0, MR_tempr6, 18);
	MR_sv(21) = MR_tfield(0, MR_tempr6, 17);
	MR_sv(20) = MR_tfield(0, MR_tempr6, 16);
	MR_sv(19) = MR_tfield(0, MR_tempr6, 15);
	MR_sv(18) = MR_tfield(0, MR_tempr6, 14);
	MR_sv(17) = MR_tfield(0, MR_tempr6, 13);
	MR_sv(16) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(15) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(14) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(9) = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(6) = (((MR_Integer) MR_tfield(0, MR_tempr6, 5) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(5) = ((MR_Integer) MR_tfield(0, MR_tempr6, 5) & (MR_Integer) 1);
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
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_module_name_0_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i5);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i9);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(26);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i13);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i17);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds_to_il__il_data_rep_0_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i21);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i25);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i29);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(31);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i33);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(32);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i37);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i41);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(34);
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i45);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(35);
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i49);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(36);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i53);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(37);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i57);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(38);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i61);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(39);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i65);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(40);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i69);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(41);
	MR_np_call_localret_ent(__Compare___cord__cord_1_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i73);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(42);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i77);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(43);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i81);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(44);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i85);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(45);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i90);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(46);
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__member_name_0_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i94);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(47);
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__member_name_0_0,
		__Compare___ml_backend__mlds_to_il__il_info_0_0_i98);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_il__il_info_0_0_i281);
	}
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(48);
	MR_succip_word = MR_sv(49);
	MR_decr_sp(49);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__signature_0_0);
MR_def_label(__Compare___ml_backend__mlds_to_il__il_info_0_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(49);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module145)
	MR_init_entry1(__Unify___ml_backend__mlds_to_il__il_mangle_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_il__il_mangle_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_il__il_mangle_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module146)
	MR_init_entry1(__Compare___ml_backend__mlds_to_il__il_mangle_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_il__il_mangle_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_il__il_mangle_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module147)
	MR_init_entry1(__Unify___ml_backend__mlds_to_il__instr_tree_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_il__instr_tree_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_il__instr_tree_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module148)
	MR_init_entry1(__Compare___ml_backend__mlds_to_il__instr_tree_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_il__instr_tree_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_il__instr_tree_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
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


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module149)
	MR_init_entry1(__Unify___ml_backend__mlds_to_il__locals_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_il__locals_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_il__locals_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module150)
	MR_init_entry1(__Compare___ml_backend__mlds_to_il__locals_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_il__locals_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_il__locals_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module151)
	MR_init_entry1(__Unify___ml_backend__mlds_to_il__mlds_vartypes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_il__mlds_vartypes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_il__mlds_vartypes_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module152)
	MR_init_entry1(__Compare___ml_backend__mlds_to_il__mlds_vartypes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_il__mlds_vartypes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_il__mlds_vartypes_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;
MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module153)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__262__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__262__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_il__262__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__262__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, ml_scalar_common_type_num);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_scalar_cell_group);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(map__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module154)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__264__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__264__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_il__264__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__264__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, ml_vector_common_type_num);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_vector_cell_group);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(map__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module155)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__321__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__321__1_3_0);
	MR_init_label1(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__321__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_il__321__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__321__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_foreign_code_module_3_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__321__1_3_0_i2);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_il__321__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module156)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__377__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__377__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__il_transform_mlds__377__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__377__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, ml_scalar_common_type_num);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_scalar_cell_group);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(map__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module157)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__379__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__379__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__il_transform_mlds__379__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__379__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, ml_vector_common_type_num);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_vector_cell_group);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(map__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module158)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__385__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__385__1_1_0);
	MR_init_label1(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__385__1_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__il_transform_mlds__385__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__385__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__385__1_1_0_i2);
	}
	MR_r1 = (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2));
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__il_transform_mlds__385__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module159)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_method__1068__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__generate_method__1068__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_method__1068__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_method__1068__1_1_0)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module160)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_method__1151__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__generate_method__1151__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_method__1151__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_method__1151__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_116_104_111_100_95_95_49_49_53_49_95_95_49_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module161)
	MR_init_entry1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0);
	MR_init_label2(fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__generate_method__1194__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,17)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 48;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,19)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 13);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_il__IntroducedFrom__func__generate_method__1194__1_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module162)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1381__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1381__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__mlds_export_to_mlds_defn__1381__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1381__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module163)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0);
	MR_init_label3(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0_i2);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("returnval", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0_i3);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0_i5);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__mlds_export_to_mlds_defn__1384__1_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r2 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module164)
	MR_init_entry1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1_2_0);
	MR_init_label1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 1);
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1399__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mlds_export_to_mlds_defn\'/2", 60);
	MR_r3 = (MR_Word) MR_string_const("exported method has argument without var name", 45);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module165)
	MR_init_entry1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1_2_0);
	MR_init_label1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1_2_0_i2);
MR_def_label(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1405__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = MR_r1;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module166)
	MR_init_entry1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1412__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1412__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__mlds_export_to_mlds_defn__1412__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__mlds_export_to_mlds_defn__1412__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module167)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0);
	MR_init_label9(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0,4,2,6,11,13,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__data_initializer_to_instrs__1562__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__maybe_box_initializer_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0_i4);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0_i6);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_r3;
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__data_initializer_to_instrs_6_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0_i6);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 43;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0_i11);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 63;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0_i13);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0_i14);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0_i15);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0_i16);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0_i17);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__data_initializer_to_instrs__1562__1_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module168)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__statement_to_il__1640__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__statement_to_il__1640__1_3_0);
	MR_init_label1(ml_backend__mlds_to_il__IntroducedFrom__pred__statement_to_il__1640__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__statement_to_il__1640__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__statement_to_il__1640__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__statement_to_il__1640__1_3_0_i2);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__statement_to_il__1640__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module169)
	MR_init_entry1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__statement_to_il__1729__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__IntroducedFrom__func__statement_to_il__1729__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__statement_to_il__1729__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__statement_to_il__1729__1_1_0)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module170)
	MR_init_entry1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__statement_to_il__1911__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__IntroducedFrom__func__statement_to_il__1911__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__statement_to_il__1911__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__statement_to_il__1911__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module171)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0);
	MR_init_label10(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,2,5,6,7,10,9,15,16,18,19)
	MR_init_label2(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__atomic_statement_to_il__2135__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_r2;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_tbmkword(0, 6);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i2);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i5);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__rval_to_type_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i6);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i7);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_il__already_boxed_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i10);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i9);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i15);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_tfield(3, MR_r1, 2) = MR_sv(6);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__load_4_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i15);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__il_generic_simple_type_0_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i16);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 63;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i18);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i19);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i20);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0_i21);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__2135__1_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module172)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__1963__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__1963__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__atomic_statement_to_il__1963__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__atomic_statement_to_il__1963__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_116_111_109_105_99_95_115_116_97_116_101_109_101_110_116_95_116_111_95_105_108_95_95_49_57_54_51_95_95_49_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module173)
	MR_init_entry1(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0);
	MR_init_label4(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0,4,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__make_class_constructor_class_member__2973__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0_i4);
MR_def_label(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_class_name_1_0,
		fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0_i5);
MR_def_label(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ilds__append_toplevel_class_name_2_0,
		fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0_i6);
MR_def_label(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(0,12,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 35;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__ml_backend__mlds_to_il__IntroducedFrom__func__make_class_constructor_class_member__2973__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__prefix_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module174)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0);
	MR_init_label10(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,4,5,7,6,3,13,14,15,17,25)
	MR_init_label3(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,24,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_extern_assembly__4251__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r5, 0);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i4);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i5);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("System", 6);
	MR_np_call_localret_ent(string__prefix_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i7);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__dotnet_system_assembly_decls_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i14);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i15);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i1);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i15);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_r5, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mercury_strong_name_assembly_decls_0_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i14);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_module_name_to_assembly_name_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i15);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("mercury", 7)) == 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i1);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i23);
	}
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if ((strcmp((char *) (MR_Word *) MR_r3, (char *) (MR_Word *) MR_sv(1)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i24);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const(".dll", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i25);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr3;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("mercury", 7)) == 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r3;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(0, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__generate_extern_assembly__4251__1_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module175)
	MR_init_entry1(ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0);
	MR_init_label2(ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__il_info_new_class__4475__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0_i1);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__entity_name_to_ilds_id_1_0,
		ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0_i3);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(ml_backend__mlds_to_il__IntroducedFrom__pred__il_info_new_class__4475__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module176)
	MR_init_entry1(ml_backend__mlds_to_il__maybe_map_fold__ho1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_il__maybe_map_fold__ho1_6_0);
	MR_init_label1(ml_backend__mlds_to_il__maybe_map_fold__ho1_6_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_map_fold__ho1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_il__maybe_map_fold__ho1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_il__maybe_map_fold__ho1_6_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_il__maybe_map_fold__ho1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(ml_backend__mlds_to_il__statement_to_il_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__semidet_succeed_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_il_module177)
	MR_init_entry1(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0);
	MR_init_label2(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__interface_id_to_class_name__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(builtin__semidet_succeed_0_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0_i3);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140ml_backend.mlds_to_il.interface_id_to_class_name\'/1", 61);
	MR_r3 = (MR_Word) MR_string_const("NYI", 3);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_116_101_114_102_97_99_101_95_105_100_95_116_111_95_99_108_97_115_115_95_110_97_109_101_95_95_91_49_93_95_48_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,25);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module178)
	MR_init_entry1(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0);
	MR_init_label6(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0,4,3,5,7,2,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__input_param_to_ilds_type__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0_i3);
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_dataname_2_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0_i4);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0_i10);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0_i5);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_entity_name\'/2", 54);
	MR_r3 = (MR_Word) MR_string_const("can\'t mangle export names", 25);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0_i7);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_entity_name\'/2", 54);
	MR_r3 = (MR_Word) MR_string_const("can\'t mangle function names", 27);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.mlds_to_il", 21);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.mlds_to_il.mangle_entity_name\'/2", 54);
	MR_r3 = (MR_Word) MR_string_const("can\'t mangle type names", 23);
	}
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0_i2);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0_i10);
MR_def_label(fn__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_110_112_117_116_95_112_97_114_97_109_95_116_111_95_105_108_100_115_95_116_121_112_101_95_95_91_50_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module179)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_116_104_111_100_95_95_49_49_53_49_95_95_49_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_116_104_111_100_95_95_49_49_53_49_95_95_49_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__generate_method__1151__1__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_116_104_111_100_95_95_49_49_53_49_95_95_49_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 41;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = ((MR_Integer) MR_tfield(1, MR_tempr1, 0) + (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_il_module180)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_116_111_109_105_99_95_115_116_97_116_101_109_101_110_116_95_116_111_95_105_108_95_95_49_57_54_51_95_95_49_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_116_111_109_105_99_95_115_116_97_116_101_109_101_110_116_95_116_111_95_105_108_95_95_49_57_54_51_95_95_49_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__atomic_statement_to_il__1963__1__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_116_111_109_105_99_95_115_116_97_116_101_109_101_110_116_95_116_111_95_105_108_95_95_49_57_54_51_95_95_49_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 41;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = ((MR_Integer) MR_tfield(1, MR_tempr1, 0) + (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__mlds_to_il_maybe_bunch_0(void)
{
	ml_backend__mlds_to_il_module0();
	ml_backend__mlds_to_il_module1();
	ml_backend__mlds_to_il_module2();
	ml_backend__mlds_to_il_module3();
	ml_backend__mlds_to_il_module4();
	ml_backend__mlds_to_il_module5();
	ml_backend__mlds_to_il_module6();
	ml_backend__mlds_to_il_module7();
	ml_backend__mlds_to_il_module8();
	ml_backend__mlds_to_il_module9();
	ml_backend__mlds_to_il_module10();
	ml_backend__mlds_to_il_module11();
	ml_backend__mlds_to_il_module12();
	ml_backend__mlds_to_il_module13();
	ml_backend__mlds_to_il_module14();
	ml_backend__mlds_to_il_module15();
	ml_backend__mlds_to_il_module16();
	ml_backend__mlds_to_il_module17();
	ml_backend__mlds_to_il_module18();
	ml_backend__mlds_to_il_module19();
	ml_backend__mlds_to_il_module20();
	ml_backend__mlds_to_il_module21();
	ml_backend__mlds_to_il_module22();
	ml_backend__mlds_to_il_module23();
	ml_backend__mlds_to_il_module24();
	ml_backend__mlds_to_il_module25();
	ml_backend__mlds_to_il_module26();
	ml_backend__mlds_to_il_module27();
	ml_backend__mlds_to_il_module28();
	ml_backend__mlds_to_il_module29();
	ml_backend__mlds_to_il_module30();
	ml_backend__mlds_to_il_module31();
	ml_backend__mlds_to_il_module32();
	ml_backend__mlds_to_il_module33();
	ml_backend__mlds_to_il_module34();
	ml_backend__mlds_to_il_module35();
	ml_backend__mlds_to_il_module36();
	ml_backend__mlds_to_il_module37();
	ml_backend__mlds_to_il_module38();
	ml_backend__mlds_to_il_module39();
}

static void mercury__ml_backend__mlds_to_il_maybe_bunch_1(void)
{
	ml_backend__mlds_to_il_module40();
	ml_backend__mlds_to_il_module41();
	ml_backend__mlds_to_il_module42();
	ml_backend__mlds_to_il_module43();
	ml_backend__mlds_to_il_module44();
	ml_backend__mlds_to_il_module45();
	ml_backend__mlds_to_il_module46();
	ml_backend__mlds_to_il_module47();
	ml_backend__mlds_to_il_module48();
	ml_backend__mlds_to_il_module49();
	ml_backend__mlds_to_il_module50();
	ml_backend__mlds_to_il_module51();
	ml_backend__mlds_to_il_module52();
	ml_backend__mlds_to_il_module53();
	ml_backend__mlds_to_il_module54();
	ml_backend__mlds_to_il_module55();
	ml_backend__mlds_to_il_module56();
	ml_backend__mlds_to_il_module57();
	ml_backend__mlds_to_il_module58();
	ml_backend__mlds_to_il_module59();
	ml_backend__mlds_to_il_module60();
	ml_backend__mlds_to_il_module61();
	ml_backend__mlds_to_il_module62();
	ml_backend__mlds_to_il_module63();
	ml_backend__mlds_to_il_module64();
	ml_backend__mlds_to_il_module65();
	ml_backend__mlds_to_il_module66();
	ml_backend__mlds_to_il_module67();
	ml_backend__mlds_to_il_module68();
	ml_backend__mlds_to_il_module69();
	ml_backend__mlds_to_il_module70();
	ml_backend__mlds_to_il_module71();
	ml_backend__mlds_to_il_module72();
	ml_backend__mlds_to_il_module73();
	ml_backend__mlds_to_il_module74();
	ml_backend__mlds_to_il_module75();
	ml_backend__mlds_to_il_module76();
	ml_backend__mlds_to_il_module77();
	ml_backend__mlds_to_il_module78();
	ml_backend__mlds_to_il_module79();
}

static void mercury__ml_backend__mlds_to_il_maybe_bunch_2(void)
{
	ml_backend__mlds_to_il_module80();
	ml_backend__mlds_to_il_module81();
	ml_backend__mlds_to_il_module82();
	ml_backend__mlds_to_il_module83();
	ml_backend__mlds_to_il_module84();
	ml_backend__mlds_to_il_module85();
	ml_backend__mlds_to_il_module86();
	ml_backend__mlds_to_il_module87();
	ml_backend__mlds_to_il_module88();
	ml_backend__mlds_to_il_module89();
	ml_backend__mlds_to_il_module90();
	ml_backend__mlds_to_il_module91();
	ml_backend__mlds_to_il_module92();
	ml_backend__mlds_to_il_module93();
	ml_backend__mlds_to_il_module94();
	ml_backend__mlds_to_il_module95();
	ml_backend__mlds_to_il_module96();
	ml_backend__mlds_to_il_module97();
	ml_backend__mlds_to_il_module98();
	ml_backend__mlds_to_il_module99();
	ml_backend__mlds_to_il_module100();
	ml_backend__mlds_to_il_module101();
	ml_backend__mlds_to_il_module102();
	ml_backend__mlds_to_il_module103();
	ml_backend__mlds_to_il_module104();
	ml_backend__mlds_to_il_module105();
	ml_backend__mlds_to_il_module106();
	ml_backend__mlds_to_il_module107();
	ml_backend__mlds_to_il_module108();
	ml_backend__mlds_to_il_module109();
	ml_backend__mlds_to_il_module110();
	ml_backend__mlds_to_il_module111();
	ml_backend__mlds_to_il_module112();
	ml_backend__mlds_to_il_module113();
	ml_backend__mlds_to_il_module114();
	ml_backend__mlds_to_il_module115();
	ml_backend__mlds_to_il_module116();
	ml_backend__mlds_to_il_module117();
	ml_backend__mlds_to_il_module118();
	ml_backend__mlds_to_il_module119();
}

static void mercury__ml_backend__mlds_to_il_maybe_bunch_3(void)
{
	ml_backend__mlds_to_il_module120();
	ml_backend__mlds_to_il_module121();
	ml_backend__mlds_to_il_module122();
	ml_backend__mlds_to_il_module123();
	ml_backend__mlds_to_il_module124();
	ml_backend__mlds_to_il_module125();
	ml_backend__mlds_to_il_module126();
	ml_backend__mlds_to_il_module127();
	ml_backend__mlds_to_il_module128();
	ml_backend__mlds_to_il_module129();
	ml_backend__mlds_to_il_module130();
	ml_backend__mlds_to_il_module131();
	ml_backend__mlds_to_il_module132();
	ml_backend__mlds_to_il_module133();
	ml_backend__mlds_to_il_module134();
	ml_backend__mlds_to_il_module135();
	ml_backend__mlds_to_il_module136();
	ml_backend__mlds_to_il_module137();
	ml_backend__mlds_to_il_module138();
	ml_backend__mlds_to_il_module139();
	ml_backend__mlds_to_il_module140();
	ml_backend__mlds_to_il_module141();
	ml_backend__mlds_to_il_module142();
	ml_backend__mlds_to_il_module143();
	ml_backend__mlds_to_il_module144();
	ml_backend__mlds_to_il_module145();
	ml_backend__mlds_to_il_module146();
	ml_backend__mlds_to_il_module147();
	ml_backend__mlds_to_il_module148();
	ml_backend__mlds_to_il_module149();
	ml_backend__mlds_to_il_module150();
	ml_backend__mlds_to_il_module151();
	ml_backend__mlds_to_il_module152();
	ml_backend__mlds_to_il_module153();
	ml_backend__mlds_to_il_module154();
	ml_backend__mlds_to_il_module155();
	ml_backend__mlds_to_il_module156();
	ml_backend__mlds_to_il_module157();
	ml_backend__mlds_to_il_module158();
	ml_backend__mlds_to_il_module159();
}

static void mercury__ml_backend__mlds_to_il_maybe_bunch_4(void)
{
	ml_backend__mlds_to_il_module160();
	ml_backend__mlds_to_il_module161();
	ml_backend__mlds_to_il_module162();
	ml_backend__mlds_to_il_module163();
	ml_backend__mlds_to_il_module164();
	ml_backend__mlds_to_il_module165();
	ml_backend__mlds_to_il_module166();
	ml_backend__mlds_to_il_module167();
	ml_backend__mlds_to_il_module168();
	ml_backend__mlds_to_il_module169();
	ml_backend__mlds_to_il_module170();
	ml_backend__mlds_to_il_module171();
	ml_backend__mlds_to_il_module172();
	ml_backend__mlds_to_il_module173();
	ml_backend__mlds_to_il_module174();
	ml_backend__mlds_to_il_module175();
	ml_backend__mlds_to_il_module176();
	ml_backend__mlds_to_il_module177();
	ml_backend__mlds_to_il_module178();
	ml_backend__mlds_to_il_module179();
	ml_backend__mlds_to_il_module180();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__mlds_to_il__init(void);
void mercury__ml_backend__mlds_to_il__init_type_tables(void);
void mercury__ml_backend__mlds_to_il__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__mlds_to_il__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__mlds_to_il__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__mlds_to_il__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__mlds_to_il__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__mlds_to_il_maybe_bunch_0();
	mercury__ml_backend__mlds_to_il_maybe_bunch_1();
	mercury__ml_backend__mlds_to_il_maybe_bunch_2();
	mercury__ml_backend__mlds_to_il_maybe_bunch_3();
	mercury__ml_backend__mlds_to_il_maybe_bunch_4();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_il__type_ctor_info_arguments_map_0,
		ml_backend__mlds_to_il__arguments_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_il__type_ctor_info_field_names_set_0,
		ml_backend__mlds_to_il__field_names_set_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0,
		ml_backend__mlds_to_il__il_data_rep_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_info_0,
		ml_backend__mlds_to_il__il_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_mangle_name_0,
		ml_backend__mlds_to_il__il_mangle_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_il__type_ctor_info_instr_tree_0,
		ml_backend__mlds_to_il__instr_tree_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_il__type_ctor_info_locals_map_0,
		ml_backend__mlds_to_il__locals_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_il__type_ctor_info_mlds_vartypes_0,
		ml_backend__mlds_to_il__mlds_vartypes_0_0);
	mercury__ml_backend__mlds_to_il__init_debugger();
}

void mercury__ml_backend__mlds_to_il__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_il__type_ctor_info_arguments_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_il__type_ctor_info_field_names_set_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_mangle_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_il__type_ctor_info_instr_tree_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_il__type_ctor_info_locals_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_il__type_ctor_info_mlds_vartypes_0);
	}
}


void mercury__ml_backend__mlds_to_il__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__mlds_to_il__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__mlds_to_il);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__mlds_to_il__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__mlds_to_il__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
