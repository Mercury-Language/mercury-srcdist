/*
** Automatically generated from `mlds_to_java.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__ml_backend__mlds_to_java__init
REQUIRED_INIT mercury__ml_backend__mlds_to_java__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "ml_backend.mlds_to_java.c"
#include "ml_backend.mlds_to_java.mh"

#line 28 "ml_backend.mlds_to_java.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 32 "ml_backend.mlds_to_java.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 36 "ml_backend.mlds_to_java.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ml_backend.mlds_to_java.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "ml_backend.mlds_to_java.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ml_backend.mlds_to_java.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 52 "ml_backend.mlds_to_java.c"
#line 53 "ml_backend.mlds_to_java.c"
#ifndef ML_BACKEND__MLDS_TO_JAVA_DECL_GUARD
#define ML_BACKEND__MLDS_TO_JAVA_DECL_GUARD

#line 57 "ml_backend.mlds_to_java.c"
#line 4667 "mlds_to_java.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word ml_backend__mlds_to_java__mutable_variable_last_context;
#else
    extern MR_Word ml_backend__mlds_to_java__mutable_variable_last_context;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock ml_backend__mlds_to_java__mutable_variable_last_context_lock;
#endif

#line 68 "ml_backend.mlds_to_java.c"
#line 69 "ml_backend.mlds_to_java.c"

#endif
#line 72 "ml_backend.mlds_to_java.c"

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
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
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
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
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
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_String f1;
	MR_Word * f2;
	MR_String f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];

struct mercury_type_20 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_20 mercury_common_20[];

MR_STATIC_LINKAGE const struct mercury_type_9 mercury_vector_common_9_0[];

MR_STATIC_LINKAGE const struct mercury_type_9 mercury_vector_common_9_1[];

MR_STATIC_LINKAGE const struct mercury_type_9 mercury_vector_common_9_2[];

MR_STATIC_LINKAGE const struct mercury_type_14 mercury_vector_common_14_0[];

MR_STATIC_LINKAGE const struct mercury_type_14 mercury_vector_common_14_1[];

MR_STATIC_LINKAGE const struct mercury_type_14 mercury_vector_common_14_2[];

struct mercury_type_19 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_19 mercury_vector_common_19_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__mlds_to_java__type_ctor_info_call_method_inputs_0,
	mercury_data_ml_backend__mlds_to_java__type_ctor_info_class_name_renaming_0,
	mercury_data_ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0,
	mercury_data_ml_backend__mlds_to_java__type_ctor_info_exit_method_0,
	mercury_data_ml_backend__mlds_to_java__type_ctor_info_exit_methods_0,
	mercury_data_ml_backend__mlds_to_java__type_ctor_info_func_info_0,
	mercury_data_ml_backend__mlds_to_java__type_ctor_info_indent_0,
	mercury_data_ml_backend__mlds_to_java__type_ctor_info_java_out_info_0,
	mercury_data_ml_backend__mlds_to_java__type_ctor_info_output_aux_0,
	mercury_data_ml_backend__mlds_to_java__type_ctor_info_output_style_0;
MR_decl_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0, 3,2,11,13,14,15,16,17,18,19)
MR_decl_label9(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0, 20,21,22,23,24,25,26,28,29)
MR_decl_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0, 39,7,11,12,13,14,15,16,17,18)
MR_decl_label7(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0, 19,20,21,22,23,24,2)
MR_decl_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0, 2,5,8,7,11,3,14,15)
MR_decl_label4(ml_backend__mlds_to_java__add_to_address_map_4_0, 2,6,11,4)
MR_decl_label3(ml_backend__mlds_to_java__add_to_address_map_2_5_0, 12,3,6)
MR_decl_label10(ml_backend__mlds_to_java__assign_ref_output_7_0, 2,3,4,9,7,5,16,15,19,22)
MR_decl_label3(ml_backend__mlds_to_java__assign_ref_output_7_0, 23,24,25)
MR_decl_label1(ml_backend__mlds_to_java__collect_env_var_names_3_0, 5)
MR_decl_label2(ml_backend__mlds_to_java__create_generic_arg_3_0, 2,3)
MR_decl_label1(ml_backend__mlds_to_java__defn_is_const_1_0, 2)
MR_decl_label1(ml_backend__mlds_to_java__defn_is_rtti_data_1_0, 1)
MR_decl_label10(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0, 45,3,6,8,12,14,10,21,31,23)
MR_decl_label1(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0, 24)
MR_decl_label10(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0, 2,3,7,8,9,13,31,35,5,39)
MR_decl_label10(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0, 4,41,43,44,45,42,47,48,53,55)
MR_decl_label3(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0, 56,57,61)
MR_decl_label10(ml_backend__mlds_to_java__generate_call_method_4_0, 3,4,6,2,17,18,19,20,24,25)
MR_decl_label9(ml_backend__mlds_to_java__generate_call_method_4_0, 26,28,22,36,21,38,39,44,47)
MR_decl_label3(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0, 20,3,14)
MR_decl_label10(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0, 3,2,7,5,11,4,15,20,28,30)
MR_decl_label2(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0, 31,37)
MR_decl_label1(ml_backend__mlds_to_java__hand_defined_type_2_0, 1)
MR_decl_label3(ml_backend__mlds_to_java__indent_line_3_0, 10,3,12)
MR_decl_label1(ml_backend__mlds_to_java__indent_line_5_0, 2)
MR_decl_label1(ml_backend__mlds_to_java__initialise_mutable_last_context_0_0, 2)
MR_decl_label9(ml_backend__mlds_to_java__java_builtin_type_4_0, 17,30,7,31,8,5,34,12,1)
MR_decl_label5(ml_backend__mlds_to_java__make_code_addr_map_3_0, 16,3,5,6,7)
MR_decl_label3(ml_backend__mlds_to_java__maybe_output_comment_4_0, 4,5,14)
MR_decl_label10(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0, 2,12,14,13,15,16,17,24,25,27)
MR_decl_label5(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0, 28,29,33,30,40)
MR_decl_label8(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0, 4,6,10,12,8,19,27,21)
MR_decl_label3(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0, 10,3,4)
MR_decl_label7(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0, 23,3,11,7,9,5,6)
MR_decl_label9(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0, 27,30,6,42,26,41,3,4,36)
MR_decl_label3(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0, 10,3,4)
MR_decl_label3(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0, 10,3,4)
MR_decl_label10(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0, 90,15,91,92,33,34,56,3,6,4)
MR_decl_label10(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0, 10,17,95,20,23,65,100,28,94,39)
MR_decl_label7(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0, 41,93,44,45,96,48,89)
MR_decl_label3(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0, 10,3,4)
MR_decl_label1(ml_backend__mlds_to_java__method_ptrs_in_switch_default_3_0, 3)
MR_decl_label10(ml_backend__mlds_to_java__mlds_output_code_addr_5_0, 4,5,6,7,40,9,3,14,15,16)
MR_decl_label10(ml_backend__mlds_to_java__mlds_output_code_addr_5_0, 17,20,37,19,22,23,25,26,29,30)
MR_decl_label2(ml_backend__mlds_to_java__mlds_output_code_addr_5_0, 31,13)
MR_decl_label10(ml_backend__mlds_to_java__mlds_output_data_addr_3_0, 2,3,4,5,11,7,18,29,21,22)
MR_decl_label6(ml_backend__mlds_to_java__mlds_output_data_addr_3_0, 23,24,9,13,15,16)
MR_decl_label10(ml_backend__mlds_to_java__mlds_output_proc_label_3_0, 4,5,6,7,36,9,10,11,13,14)
MR_decl_label10(ml_backend__mlds_to_java__mlds_output_proc_label_3_0, 15,3,18,19,20,21,22,23,24,25)
MR_decl_label7(ml_backend__mlds_to_java__mlds_output_proc_label_3_0, 38,27,28,29,31,32,33)
MR_decl_label2(ml_backend__mlds_to_java__output_args_as_array_5_0, 2,3)
MR_decl_label3(ml_backend__mlds_to_java__output_array_brackets_3_0, 2,8,4)
MR_decl_label10(ml_backend__mlds_to_java__output_assign_results_8_0, 30,21,3,9,10,11,12,13,14,33)
MR_decl_label10(ml_backend__mlds_to_java__output_atomic_stmt_6_0, 20,21,12,13,14,15,3,4,5,6)
MR_decl_label10(ml_backend__mlds_to_java__output_atomic_stmt_6_0, 7,80,9,10,17,18,23,26,25,29)
MR_decl_label10(ml_backend__mlds_to_java__output_atomic_stmt_6_0, 31,32,34,36,37,35,39,40,41,42)
MR_decl_label10(ml_backend__mlds_to_java__output_atomic_stmt_6_0, 43,50,48,52,53,45,55,57,60,61)
MR_decl_label10(ml_backend__mlds_to_java__output_atomic_stmt_6_0, 59,63,64,65,66,68,69,71,72,74)
MR_decl_label1(ml_backend__mlds_to_java__output_atomic_stmt_6_0, 75)
MR_decl_label6(ml_backend__mlds_to_java__output_binary_op_3_0, 4,2,9,7,13,12)
MR_decl_label10(ml_backend__mlds_to_java__output_binop_6_0, 4,5,6,2,10,12,13,14,15,16)
MR_decl_label10(ml_backend__mlds_to_java__output_binop_6_0, 17,8,22,21,28,29,30,33,32,38)
MR_decl_label10(ml_backend__mlds_to_java__output_binop_6_0, 37,43,45,42,49,50,51,19,53,54)
MR_decl_label4(ml_backend__mlds_to_java__output_binop_6_0, 55,56,57,58)
MR_decl_label10(ml_backend__mlds_to_java__output_boxed_args_5_0, 50,33,3,11,13,14,15,16,9,18)
MR_decl_label4(ml_backend__mlds_to_java__output_boxed_args_5_0, 19,21,24,53)
MR_decl_label8(ml_backend__mlds_to_java__output_boxed_rval_5_0, 4,6,7,8,9,2,11,12)
MR_decl_label4(ml_backend__mlds_to_java__output_bracketed_rval_4_0, 4,34,9,10)
MR_decl_label4(ml_backend__mlds_to_java__output_call_init_data_method_4_0, 2,3,4,5)
MR_decl_label1(ml_backend__mlds_to_java__output_call_rval_4_0, 20)
MR_decl_label5(ml_backend__mlds_to_java__output_case_cond_6_0, 4,5,6,7,3)
MR_decl_label10(ml_backend__mlds_to_java__output_cast_rval_5_0, 7,8,9,6,12,11,14,2,20,19)
MR_decl_label10(ml_backend__mlds_to_java__output_cast_rval_5_0, 54,25,26,27,29,30,18,33,35,32)
MR_decl_label3(ml_backend__mlds_to_java__output_cast_rval_5_0, 37,38,39)
MR_decl_label10(ml_backend__mlds_to_java__output_class_body_7_0, 3,34,8,10,11,12,13,14,15,16)
MR_decl_label6(ml_backend__mlds_to_java__output_class_body_7_0, 17,18,19,21,23,25)
MR_decl_label5(ml_backend__mlds_to_java__output_class_name_and_arity_4_0, 2,3,4,5,6)
MR_decl_label3(ml_backend__mlds_to_java__output_constness_4_0, 6,7,21)
MR_decl_label10(ml_backend__mlds_to_java__output_context_4_0, 4,5,6,11,15,16,17,18,19,20)
MR_decl_label2(ml_backend__mlds_to_java__output_context_4_0, 36,37)
MR_decl_label6(ml_backend__mlds_to_java__output_data_assignments_5_0, 2,5,6,7,9,10)
MR_decl_label10(ml_backend__mlds_to_java__output_data_decls_5_0, 25,6,7,8,9,10,11,12,4,27)
MR_decl_label1(ml_backend__mlds_to_java__output_data_decls_5_0, 28)
MR_decl_label10(ml_backend__mlds_to_java__output_data_defn_7_0, 2,3,4,42,79,88,46,47,72,49)
MR_decl_label10(ml_backend__mlds_to_java__output_data_defn_7_0, 89,67,68,69,70,48,18,19,24,28)
MR_decl_label8(ml_backend__mlds_to_java__output_data_defn_7_0, 30,31,36,40,6,7,12,16)
MR_decl_label10(ml_backend__mlds_to_java__output_data_name_3_0, 7,3,14,25,17,18,19,43,5,9)
MR_decl_label2(ml_backend__mlds_to_java__output_data_name_3_0, 50,46)
MR_decl_label1(ml_backend__mlds_to_java__output_debug_class_init_4_0, 2)
MR_decl_label10(ml_backend__mlds_to_java__output_decl_flags_4_0, 2,4,39,6,7,8,11,13,15,3)
MR_decl_label10(ml_backend__mlds_to_java__output_decl_flags_4_0, 17,19,21,23,42,25,26,27,22,29)
MR_decl_label5(ml_backend__mlds_to_java__output_decl_flags_4_0, 31,33,34,35,36)
MR_decl_label9(ml_backend__mlds_to_java__output_defn_6_0, 2,3,7,8,10,11,12,4,14)
MR_decl_label4(ml_backend__mlds_to_java__output_defn_body_8_0, 5,7,34,10)
MR_decl_label7(ml_backend__mlds_to_java__output_env_var_definition_4_0, 2,3,4,5,6,7,8)
MR_decl_label4(ml_backend__mlds_to_java__output_env_vars_4_0, 2,5,6,7)
MR_decl_label10(ml_backend__mlds_to_java__output_export_5_0, 3,4,5,7,10,12,13,14,19,18)
MR_decl_label4(ml_backend__mlds_to_java__output_export_5_0, 21,23,26,16)
MR_decl_label10(ml_backend__mlds_to_java__output_export_no_ref_out_5_0, 2,19,4,5,8,9,10,11,12,20)
MR_decl_label3(ml_backend__mlds_to_java__output_export_no_ref_out_5_0, 14,16,17)
MR_decl_label10(ml_backend__mlds_to_java__output_export_ref_out_5_0, 3,4,35,6,7,10,11,12,13,14)
MR_decl_label10(ml_backend__mlds_to_java__output_export_ref_out_5_0, 15,16,17,20,27,28,40,30,31,33)
MR_decl_label3(ml_backend__mlds_to_java__output_exported_enum_5_0, 8,10,21)
MR_decl_label7(ml_backend__mlds_to_java__output_exported_enum_constant_6_0, 2,3,4,5,6,7,8)
MR_decl_label5(ml_backend__mlds_to_java__output_extends_list_5_0, 6,7,21,5,24)
MR_decl_label2(ml_backend__mlds_to_java__output_final_pred_call_4_0, 2,3)
MR_decl_label10(ml_backend__mlds_to_java__output_finals_4_0, 4,5,6,7,8,9,10,11,13,14)
MR_decl_label7(ml_backend__mlds_to_java__output_finals_4_0, 15,16,17,18,19,20,29)
MR_decl_label10(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0, 2,3,4,5,8,19,7,10,11,13)
MR_decl_label2(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0, 14,17)
MR_decl_label10(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0, 2,3,4,5,8,21,7,10,11,13)
MR_decl_label4(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0, 14,17,18,19)
MR_decl_label9(ml_backend__mlds_to_java__output_func_9_0, 4,5,6,7,8,9,10,11,20)
MR_decl_label10(ml_backend__mlds_to_java__output_func_decl_8_0, 5,8,10,11,12,13,15,16,20,21)
MR_decl_label4(ml_backend__mlds_to_java__output_func_decl_8_0, 22,43,24,25)
MR_decl_label4(ml_backend__mlds_to_java__output_implements_list_4_0, 4,5,14,16)
MR_decl_label5(ml_backend__mlds_to_java__output_import_3_0, 5,3,2,8,9)
MR_decl_label2(ml_backend__mlds_to_java__output_init_2_4_0, 2,3)
MR_decl_label7(ml_backend__mlds_to_java__output_init_args_5_0, 30,20,3,9,22,11,33)
MR_decl_label8(ml_backend__mlds_to_java__output_init_data_method_7_0, 2,3,4,5,6,7,8,9)
MR_decl_label9(ml_backend__mlds_to_java__output_init_data_statements_5_0, 46,6,7,10,12,26,4,48,49)
MR_decl_label10(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0, 21,15,38,18,19,39,4,5,8,10)
MR_decl_label2(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0, 11,7)
MR_decl_label10(ml_backend__mlds_to_java__output_initializer_body_5_0, 55,12,97,15,16,17,62,19,34,37)
MR_decl_label10(ml_backend__mlds_to_java__output_initializer_body_5_0, 21,41,39,45,46,49,50,51,98,4)
MR_decl_label4(ml_backend__mlds_to_java__output_initializer_body_5_0, 6,8,9,10)
MR_decl_label5(ml_backend__mlds_to_java__output_inits_4_0, 4,5,7,8,17)
MR_decl_label3(ml_backend__mlds_to_java__output_int_const_3_0, 31,5,4)
MR_decl_label10(ml_backend__mlds_to_java__output_interface_3_0, 4,6,7,8,9,10,13,15,11,34)
MR_decl_label2(ml_backend__mlds_to_java__output_interface_3_0, 2,38)
MR_decl_label5(ml_backend__mlds_to_java__output_java_body_code_5_0, 4,5,6,16,3)
MR_decl_label5(ml_backend__mlds_to_java__output_java_decl_5_0, 4,5,6,16,3)
MR_decl_label3(ml_backend__mlds_to_java__output_java_mlds_4_0, 2,3,4)
MR_decl_label10(ml_backend__mlds_to_java__output_java_src_file_5_0, 2,4,5,7,8,9,10,11,12,13)
MR_decl_label10(ml_backend__mlds_to_java__output_java_src_file_5_0, 15,17,20,21,22,23,24,25,26,27)
MR_decl_label10(ml_backend__mlds_to_java__output_java_src_file_5_0, 28,29,31,33,34,35,36,38,39,40)
MR_decl_label10(ml_backend__mlds_to_java__output_java_src_file_5_0, 41,42,43,44,45,46,47,48,49,50)
MR_decl_label3(ml_backend__mlds_to_java__output_java_src_file_5_0, 51,52,53)
MR_decl_label10(ml_backend__mlds_to_java__output_lval_4_0, 85,8,6,12,10,14,15,16,17,18)
MR_decl_label10(ml_backend__mlds_to_java__output_lval_4_0, 21,80,5,26,25,24,30,31,32,33)
MR_decl_label5(ml_backend__mlds_to_java__output_lval_4_0, 34,39,86,37,41)
MR_decl_label10(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0, 4,2,7,8,9,10,13,26,12,15)
MR_decl_label4(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0, 16,18,19,22)
MR_decl_label10(ml_backend__mlds_to_java__output_mercury_type_6_0, 36,3,5,7,9,11,65,39,66,16)
MR_decl_label8(ml_backend__mlds_to_java__output_mercury_type_6_0, 17,67,26,27,46,29,32,34)
MR_decl_label4(ml_backend__mlds_to_java__output_mercury_user_type_6_0, 3,5,6,2)
MR_decl_label6(ml_backend__mlds_to_java__output_mlds_var_name_3_0, 4,3,7,8,9,10)
MR_decl_label10(ml_backend__mlds_to_java__output_name_3_0, 40,19,20,21,3,41,8,9,10,11)
MR_decl_label5(ml_backend__mlds_to_java__output_name_3_0, 12,15,37,5,39)
MR_decl_label4(ml_backend__mlds_to_java__output_param_6_0, 2,3,4,5)
MR_decl_label10(ml_backend__mlds_to_java__output_pred_label_3_0, 4,5,6,7,32,9,10,11,13,14)
MR_decl_label10(ml_backend__mlds_to_java__output_pred_label_3_0, 3,18,19,20,21,22,23,24,25,28)
MR_decl_label2(ml_backend__mlds_to_java__output_pred_label_3_0, 29,2)
MR_decl_label7(ml_backend__mlds_to_java__output_pred_proc_id_4_0, 4,5,6,7,8,16,18)
MR_decl_label7(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0, 2,3,4,5,6,7,8)
MR_decl_label6(ml_backend__mlds_to_java__output_rtti_assignments_5_0, 4,5,6,9,10,19)
MR_decl_label1(ml_backend__mlds_to_java__output_rtti_defn_assignments_5_0, 3)
MR_decl_label10(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0, 6,79,53,9,54,12,27,30,14,34)
MR_decl_label8(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0, 32,37,40,41,42,44,3,78)
MR_decl_label2(ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0, 2,3)
MR_decl_label10(ml_backend__mlds_to_java__output_rval_4_0, 7,11,5,24,3,9,13,15,17,19)
MR_decl_label10(ml_backend__mlds_to_java__output_rval_const_4_0, 51,26,34,90,23,24,55,94,4,5)
MR_decl_label10(ml_backend__mlds_to_java__output_rval_const_4_0, 8,7,14,18,20,28,97,32,96,37)
MR_decl_label6(ml_backend__mlds_to_java__output_rval_const_4_0, 40,98,88,95,46,47)
MR_decl_label4(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0, 2,6,5,13)
MR_decl_label6(ml_backend__mlds_to_java__output_src_end_4_0, 2,13,14,15,16,17)
MR_decl_label10(ml_backend__mlds_to_java__output_src_start_9_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(ml_backend__mlds_to_java__output_src_start_9_0, 12,13,14,15,16,17,18,20,22,23)
MR_decl_label6(ml_backend__mlds_to_java__output_src_start_9_0, 24,25,26,27,30,33)
MR_decl_label1(ml_backend__mlds_to_java__output_statement_7_0, 2)
MR_decl_label8(ml_backend__mlds_to_java__output_statements_7_0, 35,5,7,9,10,12,11,6)
MR_decl_label5(ml_backend__mlds_to_java__output_std_unop_5_0, 19,5,6,7,8)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 6,7,8,232,10,11,9,13,14,204)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 207,208,209,210,211,212,213,206,215,216)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 217,218,222,219,225,125,126,127,128,129)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 137,138,139,140,130,142,145,144,147,148)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 149,231,3,16,17,18,19,240,21,24)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 23,20,32,33,30,34,35,37,27,40)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 45,47,48,43,50,51,42,54,39,56)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 57,58,55,59,61,62,63,64,65,66)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 60,68,69,70,71,73,250,75,80,82)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 83,79,77,89,90,95,96,98,99,101)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 102,103,104,105,106,107,108,110,113,114)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 116,117,118,120,121,152,153,155,158,157)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 162,163,164,161,166,167,168,169,170,173)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 174,175,176,178,179,180,181,182,183,184)
MR_decl_label10(ml_backend__mlds_to_java__output_stmt_8_0, 185,186,187,188,189,190,191,192,193,194)
MR_decl_label8(ml_backend__mlds_to_java__output_stmt_8_0, 195,196,197,198,199,200,201,202)
MR_decl_label10(ml_backend__mlds_to_java__output_switch_case_8_0, 2,4,5,6,8,10,11,12,13,7)
MR_decl_label7(ml_backend__mlds_to_java__output_switch_cases_9_0, 27,5,6,8,10,11,7)
MR_decl_label10(ml_backend__mlds_to_java__output_switch_default_8_0, 12,13,14,15,16,17,9,34,4,5)
MR_decl_label2(ml_backend__mlds_to_java__output_switch_default_8_0, 6,7)
MR_decl_label10(ml_backend__mlds_to_java__output_target_code_component_4_0, 35,53,79,38,39,5,44,45,83,10)
MR_decl_label10(ml_backend__mlds_to_java__output_target_code_component_4_0, 9,13,14,15,16,19,51,18,21,22)
MR_decl_label3(ml_backend__mlds_to_java__output_target_code_component_4_0, 24,25,28)
MR_decl_label10(ml_backend__mlds_to_java__output_type_5_0, 110,3,6,4,9,13,14,12,65,66)
MR_decl_label10(ml_backend__mlds_to_java__output_type_5_0, 72,70,75,76,113,21,24,26,27,28)
MR_decl_label10(ml_backend__mlds_to_java__output_type_5_0, 30,25,32,33,164,37,41,49,50,43)
MR_decl_label10(ml_backend__mlds_to_java__output_type_5_0, 44,52,53,46,47,59,61,63,81,83)
MR_decl_label10(ml_backend__mlds_to_java__output_type_5_0, 85,87,89,91,93,94,95,99,100,101)
MR_decl_label5(ml_backend__mlds_to_java__output_type_5_0, 131,105,107,108,183)
MR_decl_label10(ml_backend__mlds_to_java__output_unboxed_result_5_0, 4,6,7,8,9,10,11,2,15,16)
MR_decl_label4(ml_backend__mlds_to_java__output_unboxed_result_5_0, 17,18,19,20)
MR_decl_label10(ml_backend__mlds_to_java__output_unboxed_rval_5_0, 4,6,7,8,9,10,11,2,13,14)
MR_decl_label2(ml_backend__mlds_to_java__output_unboxed_rval_5_0, 15,16)
MR_decl_label4(ml_backend__mlds_to_java__output_unop_5_0, 3,9,5,7)
MR_decl_label4(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0, 6,4,9,3)
MR_decl_label1(ml_backend__mlds_to_java__rename_class_names_argument_3_0, 2)
MR_decl_label10(ml_backend__mlds_to_java__rename_class_names_atomic_3_0, 40,4,5,32,41,8,9,42,13,43)
MR_decl_label5(ml_backend__mlds_to_java__rename_class_names_atomic_3_0, 19,20,22,24,28)
MR_decl_label10(ml_backend__mlds_to_java__rename_class_names_defn_3_0, 5,6,9,10,11,13,15,17,20,22)
MR_decl_label1(ml_backend__mlds_to_java__rename_class_names_defn_3_0, 2)
MR_decl_label3(ml_backend__mlds_to_java__rename_class_names_field_id_3_0, 4,3,6)
MR_decl_label2(ml_backend__mlds_to_java__rename_class_names_func_params_3_0, 3,5)
MR_decl_label9(ml_backend__mlds_to_java__rename_class_names_initializer_3_0, 21,15,26,8,27,11,13,28,5)
MR_decl_label10(ml_backend__mlds_to_java__rename_class_names_lval_3_0, 27,4,5,6,7,28,11,12,9,29)
MR_decl_label1(ml_backend__mlds_to_java__rename_class_names_lval_3_0, 15)
MR_decl_label10(ml_backend__mlds_to_java__rename_class_names_rval_3_0, 85,34,86,40,7,71,32,88,16,89)
MR_decl_label10(ml_backend__mlds_to_java__rename_class_names_rval_3_0, 23,70,91,4,5,92,37,94,44,90)
MR_decl_label10(ml_backend__mlds_to_java__rename_class_names_rval_3_0, 48,49,55,56,51,52,54,62,93,65)
MR_decl_label1(ml_backend__mlds_to_java__rename_class_names_statement_3_0, 2)
MR_decl_label10(ml_backend__mlds_to_java__rename_class_names_stmt_3_0, 82,8,10,83,57,58,84,31,32,34)
MR_decl_label10(ml_backend__mlds_to_java__rename_class_names_stmt_3_0, 36,63,91,4,87,14,15,17,19,21)
MR_decl_label10(ml_backend__mlds_to_java__rename_class_names_stmt_3_0, 86,24,90,27,39,88,42,85,45,46)
MR_decl_label6(ml_backend__mlds_to_java__rename_class_names_stmt_3_0, 48,49,89,52,53,54)
MR_decl_label1(ml_backend__mlds_to_java__rename_class_names_switch_case_3_0, 2)
MR_decl_label2(ml_backend__mlds_to_java__rename_class_names_switch_default_3_0, 20,4)
MR_decl_label10(ml_backend__mlds_to_java__rename_class_names_type_3_0, 61,70,28,45,73,5,72,9,11,8)
MR_decl_label7(ml_backend__mlds_to_java__rename_class_names_type_3_0, 71,19,75,23,74,36,41)
MR_decl_label4(ml_backend__mlds_to_java__shorten_long_class_names_3_0, 2,5,8,6)
MR_decl_label10(ml_backend__mlds_to_java__write_export_call_4_0, 2,3,4,5,8,23,7,10,11,13)
MR_decl_label5(ml_backend__mlds_to_java__write_export_call_4_0, 14,17,18,19,21)
MR_decl_label2(ml_backend__mlds_to_java__write_indented_line_4_0, 2,3)
MR_decl_label10(ml_backend__mlds_to_java__write_main_driver_4_0, 2,3,4,5,6,7,8,9,10,30)
MR_decl_label1(ml_backend__mlds_to_java__write_main_driver_4_0, 31)
MR_decl_label7(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0, 26,3,30,21,22,23,24)
MR_decl_label5(fn__ml_backend__mlds_to_java__init_java_out_info_2_0, 2,3,4,5,6)
MR_decl_label2(fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0, 3,2)
MR_decl_label2(fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0, 3,2)
MR_decl_label8(fn__ml_backend__mlds_to_java__type_is_array_1_0, 2,37,4,19,22,6,26,24)
MR_decl_label5(fn__ml_backend__mlds_to_java__while_exit_methods_2_0, 7,2,3,10,12)
MR_decl_label3(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0, 16,5,1)
MR_decl_label3(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0, 4,8,1)
MR_decl_label2(__Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0, 6,1)
MR_decl_label1(__Unify___ml_backend__mlds_to_java__func_info_0_0, 6)
MR_decl_label3(__Unify___ml_backend__mlds_to_java__java_out_info_0_0, 4,8,1)
MR_decl_label3(__Unify___ml_backend__mlds_to_java__output_aux_0_0, 6,15,1)
MR_decl_label3(__Unify___ml_backend__mlds_to_java__output_style_0_0, 10,5,1)
MR_decl_label5(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0, 3,2,7,5,10)
MR_decl_label4(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0, 3,2,5,21)
MR_decl_label4(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0, 3,2,5,21)
MR_decl_label2(__Compare___ml_backend__mlds_to_java__func_info_0_0, 3,2)
MR_decl_label6(__Compare___ml_backend__mlds_to_java__java_out_info_0_0, 3,2,5,9,13,37)
MR_decl_label9(__Compare___ml_backend__mlds_to_java__output_aux_0_0, 81,43,12,55,24,31,14,75,17)
MR_decl_label4(__Compare___ml_backend__mlds_to_java__output_style_0_0, 18,7,5,9)
MR_def_extern_entry(ml_backend__mlds_to_java__output_java_mlds_4_0)
MR_decl_static(ml_backend__mlds_to_java__defn_is_rtti_data_1_0)
MR_decl_static(ml_backend__mlds_to_java__defn_is_data_1_0)
MR_decl_static(fn__ml_backend__mlds_to_java__this_file_0_0)
MR_decl_static(ml_backend__mlds_to_java__output_import_3_0)
MR_decl_static(fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0)
MR_decl_static(ml_backend__mlds_to_java__output_exports_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_exported_enums_5_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_lval_3_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_statement_3_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_switch_default_3_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0)
MR_decl_static(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0)
MR_decl_static(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0)
MR_decl_static(ml_backend__mlds_to_java__make_code_addr_map_3_0)
MR_decl_static(ml_backend__mlds_to_java__shorten_long_class_names_3_0)
MR_decl_static(ml_backend__mlds_to_java__indent_line_3_0)
MR_decl_static(ml_backend__mlds_to_java__output_inits_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_finals_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_env_vars_4_0)
MR_decl_static(ml_backend__mlds_to_java__write_main_driver_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_debug_class_init_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_src_start_9_0)
MR_decl_static(ml_backend__mlds_to_java__output_src_end_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_defns_6_0)
MR_decl_static(ml_backend__mlds_to_java__output_class_name_and_arity_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_pred_label_3_0)
MR_decl_static(ml_backend__mlds_to_java__output_mlds_var_name_3_0)
MR_decl_static(ml_backend__mlds_to_java__mlds_output_proc_label_3_0)
MR_decl_static(ml_backend__mlds_to_java__output_data_name_3_0)
MR_decl_static(ml_backend__mlds_to_java__output_name_3_0)
MR_decl_static(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0)
MR_decl_static(ml_backend__mlds_to_java__output_array_brackets_3_0)
MR_decl_static(ml_backend__mlds_to_java__hand_defined_type_2_0)
MR_decl_static(ml_backend__mlds_to_java__maybe_output_comment_4_0)
MR_decl_static(ml_backend__mlds_to_java__java_builtin_type_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_type_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_mercury_type_6_0)
MR_decl_static(ml_backend__mlds_to_java__output_mercury_user_type_6_0)
MR_decl_static(ml_backend__mlds_to_java__output_constness_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_decl_flags_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_data_decls_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_data_assignments_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_rtti_assignments_5_0)
MR_decl_static(fn__ml_backend__mlds_to_java__init_java_out_info_2_0)
MR_decl_static(ml_backend__mlds_to_java__output_java_src_file_5_0)
MR_decl_static(ml_backend__mlds_to_java__lock_last_context_0_0)
MR_decl_static(ml_backend__mlds_to_java__unlock_last_context_0_0)
MR_decl_static(ml_backend__mlds_to_java__unsafe_get_last_context_1_0)
MR_decl_static(ml_backend__mlds_to_java__unsafe_set_last_context_1_0)
MR_decl_static(ml_backend__mlds_to_java__output_context_4_0)
MR_decl_static(ml_backend__mlds_to_java__indent_line_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_java_decl_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_java_body_code_5_0)
MR_decl_static(ml_backend__mlds_to_java__write_export_call_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_export_no_ref_out_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_export_ref_out_5_0)
MR_decl_static(ml_backend__mlds_to_java__has_ptr_type_1_0)
MR_decl_static(ml_backend__mlds_to_java__output_export_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_export_param_ref_out_6_0)
MR_decl_static(ml_backend__mlds_to_java__write_argument_name_3_0)
MR_decl_static(ml_backend__mlds_to_java__assign_ref_output_7_0)
MR_decl_static(ml_backend__mlds_to_java__output_exported_enum_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_initializer_body_list_4_0)
MR_decl_static(fn__ml_backend__mlds_to_java__type_is_array_1_0)
MR_decl_static(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_binary_op_3_0)
MR_decl_static(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0)
MR_decl_static(ml_backend__mlds_to_java__output_int_const_3_0)
MR_decl_static(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0)
MR_decl_static(ml_backend__mlds_to_java__mlds_output_code_addr_5_0)
MR_decl_static(ml_backend__mlds_to_java__mlds_output_data_addr_3_0)
MR_decl_static(ml_backend__mlds_to_java__output_rval_const_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_lval_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_bracketed_rval_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_rval_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_unop_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_cast_rval_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_boxed_rval_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_unboxed_rval_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_std_unop_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_binop_6_0)
MR_decl_static(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_initializer_body_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_exported_enum_constant_6_0)
MR_decl_static(fn__ml_backend__mlds_to_java__max_specialised_method_ptr_arity_0_0)
MR_decl_static(ml_backend__mlds_to_java__generate_call_method_4_0)
MR_decl_static(fn__ml_backend__mlds_to_java__addr_wrapper_decl_flags_0_0)
MR_decl_static(ml_backend__mlds_to_java__add_to_address_map_2_5_0)
MR_decl_static(ml_backend__mlds_to_java__add_to_address_map_4_0)
MR_decl_static(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0)
MR_decl_static(ml_backend__mlds_to_java__create_generic_arg_3_0)
MR_decl_static(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0)
MR_decl_static(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0)
MR_decl_static(ml_backend__mlds_to_java__generate_call_method_nth_arg_4_0)
MR_decl_static(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0)
MR_decl_static(fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_func_params_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_type_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_lval_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_field_id_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_rval_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_initializer_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_atomic_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_statement_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_stmt_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_switch_default_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_defn_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_argument_3_0)
MR_decl_static(ml_backend__mlds_to_java__rename_class_names_switch_case_3_0)
MR_decl_static(ml_backend__mlds_to_java__output_init_2_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_final_pred_call_4_0)
MR_decl_static(ml_backend__mlds_to_java__collect_env_var_names_3_0)
MR_decl_static(ml_backend__mlds_to_java__output_env_var_definition_4_0)
MR_decl_static(ml_backend__mlds_to_java__write_indented_line_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_extends_list_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_implements_list_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_class_body_7_0)
MR_decl_static(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_data_defn_7_0)
MR_decl_static(ml_backend__mlds_to_java__output_func_decl_8_0)
MR_decl_static(fn__ml_backend__mlds_to_java__while_exit_methods_2_0)
MR_decl_static(ml_backend__mlds_to_java__output_boxed_args_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_args_as_array_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_unboxed_result_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_assign_results_8_0)
MR_decl_static(ml_backend__mlds_to_java__output_case_cond_6_0)
MR_decl_static(ml_backend__mlds_to_java__output_init_args_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_atomic_stmt_6_0)
MR_decl_static(ml_backend__mlds_to_java__output_call_rval_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_statements_7_0)
MR_decl_static(ml_backend__mlds_to_java__output_statement_7_0)
MR_decl_static(ml_backend__mlds_to_java__output_stmt_8_0)
MR_decl_static(ml_backend__mlds_to_java__output_switch_cases_9_0)
MR_decl_static(ml_backend__mlds_to_java__output_switch_case_8_0)
MR_decl_static(ml_backend__mlds_to_java__output_switch_default_8_0)
MR_decl_static(ml_backend__mlds_to_java__output_func_9_0)
MR_decl_static(ml_backend__mlds_to_java__output_defn_body_8_0)
MR_decl_static(ml_backend__mlds_to_java__output_defn_6_0)
MR_decl_static(ml_backend__mlds_to_java__output_interface_3_0)
MR_decl_static(ml_backend__mlds_to_java__defn_is_const_1_0)
MR_decl_static(ml_backend__mlds_to_java__output_enum_constant_6_0)
MR_decl_static(ml_backend__mlds_to_java__output_init_data_statements_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_init_data_method_7_0)
MR_decl_static(ml_backend__mlds_to_java__output_call_init_data_method_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0)
MR_decl_static(ml_backend__mlds_to_java__output_rtti_defn_assignments_5_0)
MR_decl_static(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0)
MR_decl_static(ml_backend__mlds_to_java__output_pred_proc_id_4_0)
MR_decl_static(ml_backend__mlds_to_java__output_param_6_0)
MR_decl_static(ml_backend__mlds_to_java__output_target_code_component_4_0)
MR_decl_static(ml_backend__mlds_to_java__pre_initialise_mutable_last_context_0_0)
MR_decl_static(ml_backend__mlds_to_java__initialise_mutable_last_context_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_java__exit_method_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_java__exit_method_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_java__exit_methods_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_java__exit_methods_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_java__func_info_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_java__func_info_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_java__indent_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_java__indent_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_java__java_out_info_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_java__java_out_info_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_java__output_aux_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_java__output_aux_0_0)
MR_decl_static(__Unify___ml_backend__mlds_to_java__output_style_0_0)
MR_decl_static(__Compare___ml_backend__mlds_to_java__output_style_0_0)
MR_decl_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_java_src_file__345__1_1_0)
MR_decl_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_java_src_file__347__1_1_0)
MR_decl_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_export__502__1_2_0)
MR_decl_static(fn__ml_backend__mlds_to_java__IntroducedFrom__func__generate_call_method__1116__1_2_0)
MR_decl_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list__2589__1_4_0)
MR_decl_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_stmt__3733__1_4_0)
MR_decl_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_rval_const__4554__1_2_0)
MR_decl_static(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_mlds_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_exports_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_java_out_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pragma_export_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_exported_enums_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_exported_enum_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_src_start_9_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_assignments_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0_1;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_mlds_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_exports_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_exported_enums_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_exported_enum),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_src_start_9_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_assignments_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_COMMON(7,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_COMMON(3,4),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_COMMON(3,5),
MR_COMMON(3,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[21] =
{
{
MR_string_const(";\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("java.lang.System.exit(jmercury.runtime.JavaInternal.exit_status);", 65),
MR_tbmkword(0, 0)
},
{
MR_string_const("}", 1),
MR_TAG_COMMON(1,1,1)
},
{
MR_string_const("   }", 4),
MR_TAG_COMMON(1,1,2)
},
{
MR_string_const("       jmercury.runtime.JavaInternal.exit_status = 1;", 53),
MR_TAG_COMMON(1,1,3)
},
{
MR_string_const("   if (jmercury.runtime.JavaInternal.exit_status == 0) {", 56),
MR_TAG_COMMON(1,1,4)
},
{
MR_string_const("   }", 4),
MR_TAG_COMMON(1,1,5)
},
{
MR_string_const("       e.printStackTrace(System.err);", 37),
MR_TAG_COMMON(1,1,6)
},
{
MR_string_const("   if (System.getenv(\"MERCURY_SUPPRESS_STACK_TRACE\") == null) {", 63),
MR_TAG_COMMON(1,1,7)
},
{
MR_string_const("       (univ.Univ_0) e.exception);", 34),
MR_TAG_COMMON(1,1,8)
},
{
MR_string_const("   exception.ML_report_uncaught_exception(", 42),
MR_TAG_COMMON(1,1,9)
},
{
MR_string_const("} catch (jmercury.runtime.Exception e) {", 40),
MR_TAG_COMMON(1,1,10)
},
{
MR_string_const("   jmercury.runtime.JavaInternal.run_finalisers();", 50),
MR_TAG_COMMON(1,1,11)
},
{
MR_string_const("  }\n", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("    }\n", 6),
MR_TAG_COMMON(1,1,13)
},
{
MR_string_const(" init]\");\n", 10),
MR_TAG_COMMON(1,1,14)
},
{
MR_string_const("end", 3),
MR_TAG_COMMON(1,1,15)
},
{
MR_string_const(" ", 1),
MR_TAG_COMMON(1,1,16)
},
{
MR_string_const("args", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("ptr_num", 7),
MR_tbmkword(0, 0)
},
{
MR_string_const("return_value", 12),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
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

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_code_addr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_code_addr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const struct mercury_type_3 mercury_common_3[13] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
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
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(7,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr),
MR_CTOR0_ADDR(ml_backend__mlds_to_java, code_addr_wrapper)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_TAG_COMMON(0,7,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr),
MR_CTOR0_ADDR(ml_backend__mlds_to_java, code_addr_wrapper)
}
},
{
{
MR_TAG_COMMON(1,15,1),
MR_TAG_COMMON(3,16,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 2),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,15,3),
MR_tbmkword(0, 2),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__shorten_long_class_names_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_inits_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_finals_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_env_vars_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__write_main_driver_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_data_assignments_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_initializer_body_list_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_atomic_stmt_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_stmt_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_stmt_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_2;
static const struct mercury_type_4 mercury_common_4[12] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__shorten_long_class_names_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_COMMON(3,1),
MR_COMMON(3,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_inits_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_finals_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_env_vars_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__write_main_driver_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_data_assignments_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_initializer_body_list_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_atomic_stmt_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_CTOR0_ADDR(ml_backend__mlds, target_code_component),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_stmt_8_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_stmt_8_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_COMMON(3,11),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(io__write_string_3_0);
static const struct mercury_type_5 mercury_common_5[14] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(ml_backend__mlds_to_java__collect_env_var_names_3_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(ml_backend__mlds_to_java__output_import_3_0),
0
},
{
MR_COMMON(6,4),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(12,2),
MR_ENTRY_AP(ml_backend__mlds_to_java__defn_is_rtti_data_1_0),
0
},
{
MR_COMMON(12,3),
MR_ENTRY_AP(ml_backend__mlds_to_java__defn_is_data_1_0),
0
},
{
MR_COMMON(6,5),
MR_ENTRY_AP(ml_backend__mlds_to_java__write_argument_name_3_0),
0
},
{
MR_COMMON(12,4),
MR_ENTRY_AP(ml_backend__mlds_to_java__has_ptr_type_1_0),
0
},
{
MR_COMMON(6,6),
MR_ENTRY_AP(ml_backend__mlds_to_java__create_generic_arg_3_0),
0
},
{
MR_COMMON(6,9),
MR_ENTRY_AP(fn__ml_backend__mlds_to_java__IntroducedFrom__func__generate_call_method__1116__1_2_0),
0
},
{
MR_COMMON(13,2),
MR_ENTRY_AP(fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0),
0
},
{
MR_COMMON(6,27),
MR_ENTRY_AP(ml_backend__mlds_to_java__output_interface_3_0),
0
},
{
MR_COMMON(12,5),
MR_ENTRY_AP(ml_backend__mlds_to_java__defn_is_const_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__shorten_long_class_names_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_class_name_renaming_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_env_vars_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_debug_class_init_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_src_start_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_src_end_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__write_export_call_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_call_method_inputs_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_code_addr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_func_params_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_func_params_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_type_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_initializer_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_initializer_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_atomic_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_atomic_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_7;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_defn_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_defn_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_defn_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_implements_list_4_0_1;
static const struct mercury_type_6 mercury_common_6[28] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__shorten_long_class_names_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_env_vars_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_COMMON(7,1),
MR_COMMON(7,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_debug_class_init_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_src_start_9_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_import),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_src_end_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__write_export_call_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, call_method_inputs),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr),
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, call_method_inputs),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr),
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_func_params_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_func_params_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_type_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_initializer_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_initializer_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_atomic_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_atomic_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_5,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_6,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_defn_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_defn_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_defn_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, class_name_renaming),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_implements_list_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_7 mercury_common_7[10] =
{
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
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
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
MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr)
}
},
{
{
MR_TAG_COMMON(0,3,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 5),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,3,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,7,8),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_defns_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_output_aux_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_no_ref_out_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_exported_enum_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_class_body_7_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_class_body_7_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_func_decl_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_func_decl_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_switch_case_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
static const struct mercury_type_8 mercury_common_8[9] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_defns_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds_to_java, output_aux),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_no_ref_out_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_exported_enum_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_exported_enum_constant),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_class_body_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds_to_java, output_aux),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_class_body_7_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_func_decl_8_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_func_decl_8_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_switch_case_8_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
MR_string_const("<constructor>", 13)
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
1,
2
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_data_assignments_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_4;
static const struct mercury_type_11 mercury_common_11[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_data_assignments_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_COMMON(7,2),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_4,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_class_body_7_0_2;
static const struct mercury_type_12 mercury_common_12[6] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(3,2)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(3,3)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_5,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_6,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_class_body_7_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_rval_const_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_13 mercury_common_13[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_rval_const_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
},
};

static const struct mercury_type_14 mercury_common_14[2] =
{
{
0
},
{
2
},
};

static const struct mercury_type_15 mercury_common_15[5] =
{
{
MR_TAG_COMMON(0,1,18)
},
{
MR_TAG_COMMON(1,15,0)
},
{
MR_TAG_COMMON(0,1,19)
},
{
MR_TAG_COMMON(1,15,2)
},
{
MR_TAG_COMMON(0,14,1)
},
};

static const struct mercury_type_16 mercury_common_16[1] =
{
{
3,
MR_tbmkword(0, 5)
},
};

static const struct mercury_type_17 mercury_common_17[1] =
{
{
MR_COMMON(6,8),
MR_ENTRY_AP(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0),
1,
MR_TAG_COMMON(1,15,0)
},
};

static const struct mercury_type_18 mercury_common_18[1] =
{
{
MR_string_const("call", 4),
MR_tbmkword(0, 0),
MR_string_const("", 0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_1;
static const struct mercury_type_20 mercury_common_20[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_java, java_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_entity_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_9 mercury_vector_common_9_0[4] =
{
{
MR_string_const("jmercury.runtime.TypeInfo_Struct", 32)
},
{
MR_string_const("jmercury.runtime.TypeCtorInfo_Struct", 36)
},
{
MR_string_const("/* typeclass_info */ java.lang.Object[]", 39)
},
{
MR_string_const("/* base_typeclass_info */ java.lang.Object[]", 44)
},
};

static const struct mercury_type_9 mercury_vector_common_9_1[4] =
{
{
MR_string_const("0", 1)
},
{
MR_string_const("0", 1)
},
{
MR_string_const("\'\\u0000\'", 8)
},
{
MR_string_const("null", 4)
},
};

static const struct mercury_type_9 mercury_vector_common_9_2[4] =
{
{
MR_string_const("0", 1)
},
{
MR_string_const("0", 1)
},
{
MR_string_const("\'\\u0000\'", 8)
},
{
MR_string_const("null", 4)
},
};

static const struct mercury_type_14 mercury_vector_common_14_0[4] =
{
{
1
},
{
1
},
{
0
},
{
0
},
};

static const struct mercury_type_14 mercury_vector_common_14_1[4] =
{
{
1
},
{
1
},
{
0
},
{
0
},
};

static const struct mercury_type_14 mercury_vector_common_14_2[4] =
{
{
1
},
{
1
},
{
0
},
{
0
},
};

static const struct mercury_type_19 mercury_vector_common_19_0[64] =
{
{
MR_string_const("MethodPtr", 9),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("MethodPtr3", 10),
-1
},
{
MR_string_const("MethodPtr2", 10),
-1
},
{
MR_string_const("MethodPtr1", 10),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("MethodPtr7", 10),
-1
},
{
MR_string_const("MethodPtr6", 10),
-1
},
{
MR_string_const("MethodPtr5", 10),
-1
},
{
MR_string_const("MethodPtr4", 10),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("MethodPtr9", 10),
-1
},
{
MR_string_const("MethodPtr8", 10),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("MethodPtr13", 11),
-1
},
{
MR_string_const("MethodPtr12", 11),
-1
},
{
MR_string_const("MethodPtr11", 11),
-1
},
{
MR_string_const("MethodPtr10", 11),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("MethodPtr15", 11),
-1
},
{
MR_string_const("MethodPtr14", 11),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("MethodPtrN", 10),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("MercuryType", 11),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_var_name_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_java__field_types_call_method_inputs_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_var_name_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_0 = {
	"cmi_separate",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_java__field_types_call_method_inputs_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_java__field_types_call_method_inputs_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_1 = {
	"cmi_array",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_java__field_types_call_method_inputs_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_stag_ordered_call_method_inputs_0_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_stag_ordered_call_method_inputs_0_1[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_call_method_inputs_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_java__du_stag_ordered_call_method_inputs_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_java__du_stag_ordered_call_method_inputs_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_name_ordered_call_method_inputs_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_1,
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_call_method_inputs_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_java__functor_number_map_call_method_inputs_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_call_method_inputs_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0)),
	"ml_backend.mlds_to_java",
	"call_method_inputs",
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_name_ordered_call_method_inputs_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_call_method_inputs_0 },
	2,
	4,
	mercury_data_ml_backend__mlds_to_java__functor_number_map_call_method_inputs_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_java__field_types_class_name_renaming_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ml_backend__mlds_to_java__field_names_class_name_renaming_0_0[] = {
	"cnr_module",
	"cnr_renaming"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_class_name_renaming_0_0 = {
	"class_name_renaming",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_java__field_types_class_name_renaming_0_0,
	mercury_data_ml_backend__mlds_to_java__field_names_class_name_renaming_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_stag_ordered_class_name_renaming_0_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_class_name_renaming_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_class_name_renaming_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_java__du_stag_ordered_class_name_renaming_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_name_ordered_class_name_renaming_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_class_name_renaming_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_java__functor_number_map_class_name_renaming_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_class_name_renaming_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0)),
	"ml_backend.mlds_to_java",
	"class_name_renaming",
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_name_ordered_class_name_renaming_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_class_name_renaming_0 },
	1,
	4,
	mercury_data_ml_backend__mlds_to_java__functor_number_map_class_name_renaming_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_java__field_types_code_addr_wrapper_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ml_backend__mlds_to_java__field_names_code_addr_wrapper_0_0[] = {
	"caw_class",
	"caw_ptr_num"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_code_addr_wrapper_0_0 = {
	"code_addr_wrapper",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_java__field_types_code_addr_wrapper_0_0,
	mercury_data_ml_backend__mlds_to_java__field_names_code_addr_wrapper_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_stag_ordered_code_addr_wrapper_0_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_code_addr_wrapper_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_code_addr_wrapper_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_java__du_stag_ordered_code_addr_wrapper_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_name_ordered_code_addr_wrapper_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_code_addr_wrapper_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_java__functor_number_map_code_addr_wrapper_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0)),
	"ml_backend.mlds_to_java",
	"code_addr_wrapper",
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_name_ordered_code_addr_wrapper_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_code_addr_wrapper_0 },
	1,
	4,
	mercury_data_ml_backend__mlds_to_java__functor_number_map_code_addr_wrapper_0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_0 = {
	"can_break",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_1 = {
	"can_continue",
	1
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_2 = {
	"can_return",
	2
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_3 = {
	"can_throw",
	3
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_4 = {
	"can_fall_through",
	4
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__mlds_to_java__enum_value_ordered_exit_method_0[] = {
	&mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_0,
	&mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_1,
	&mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_2,
	&mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_3,
	&mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_4
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__mlds_to_java__enum_name_ordered_exit_method_0[] = {
	&mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_0,
	&mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_1,
	&mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_4,
	&mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_2,
	&mercury_data_ml_backend__mlds_to_java__enum_functor_desc_exit_method_0_3
};

const MR_Integer mercury_data_ml_backend__mlds_to_java__functor_number_map_exit_method_0[] = {
	0,
	1,
	3,
	4,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_exit_method_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_java__exit_method_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_java__exit_method_0_0)),
	"ml_backend.mlds_to_java",
	"exit_method",
	{ (void *)mercury_data_ml_backend__mlds_to_java__enum_name_ordered_exit_method_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_java__enum_value_ordered_exit_method_0 },
	5,
	4,
	mercury_data_ml_backend__mlds_to_java__functor_number_map_exit_method_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_exit_method_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_java__type_ctor_info_exit_method_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds_to_java__type_ctor_info_exit_method_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_exit_methods_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_java__exit_methods_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_java__exit_methods_0_0)),
	"ml_backend.mlds_to_java",
	"exit_methods",
	{ 0 },
	{ (void *)&mercury_data_set_ordlist__ti_set_ordlist_1ml_backend__mlds_to_java__type_ctor_info_exit_method_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_func_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_func_params_0;

static const MR_NotagFunctorDesc mercury_data_ml_backend__mlds_to_java__notag_functor_desc_func_info_0 = {
	"func_info",
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_func_params_0,
	"func_info_params"
};

const MR_Integer mercury_data_ml_backend__mlds_to_java__functor_number_map_func_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_func_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_java__func_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_java__func_info_0_0)),
	"ml_backend.mlds_to_java",
	"func_info",
	{ (void *)&mercury_data_ml_backend__mlds_to_java__notag_functor_desc_func_info_0 },
	{ (void *)&mercury_data_ml_backend__mlds_to_java__notag_functor_desc_func_info_0 },
	1,
	4,
	mercury_data_ml_backend__mlds_to_java__functor_number_map_func_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_indent_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_java__indent_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_java__indent_0_0)),
	"ml_backend.mlds_to_java",
	"indent",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_code_addr_0,
	(MR_TypeInfo) &mercury_data_ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_java__field_types_java_out_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_mlds_code_addr_0ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0
};

const MR_ConstString mercury_data_ml_backend__mlds_to_java__field_names_java_out_info_0_0[] = {
	"joi_auto_comments",
	"joi_line_numbers",
	"joi_module_name",
	"joi_addrof_map"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_java_out_info_0_0 = {
	"java_out_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_java__field_types_java_out_info_0_0,
	mercury_data_ml_backend__mlds_to_java__field_names_java_out_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_stag_ordered_java_out_info_0_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_java_out_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_java_out_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_java__du_stag_ordered_java_out_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_name_ordered_java_out_info_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_java_out_info_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_java__functor_number_map_java_out_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_java_out_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_java__java_out_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_java__java_out_info_0_0)),
	"ml_backend.mlds_to_java",
	"java_out_info",
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_name_ordered_java_out_info_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_java_out_info_0 },
	1,
	4,
	mercury_data_ml_backend__mlds_to_java__functor_number_map_java_out_info_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_0 = {
	"none",
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
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_java__field_types_output_aux_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_1 = {
	"cname",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_java__field_types_output_aux_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_2 = {
	"alloc_only",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_3 = {
	"force_init",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_stag_ordered_output_aux_0_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_0,
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_2,
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_3

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_stag_ordered_output_aux_0_1[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_output_aux_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__mlds_to_java__du_stag_ordered_output_aux_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_java__du_stag_ordered_output_aux_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_name_ordered_output_aux_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_2,
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_1,
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_3,
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_aux_0_0
};

const MR_Integer mercury_data_ml_backend__mlds_to_java__functor_number_map_output_aux_0[] = {
	3,
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_output_aux_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_java__output_aux_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_java__output_aux_0_0)),
	"ml_backend.mlds_to_java",
	"output_aux",
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_name_ordered_output_aux_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_output_aux_0 },
	4,
	4,
	mercury_data_ml_backend__mlds_to_java__functor_number_map_output_aux_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_style_0_0 = {
	"normal_style",
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

const MR_PseudoTypeInfo mercury_data_ml_backend__mlds_to_java__field_types_output_style_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_style_0_1 = {
	"sized_array",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__mlds_to_java__field_types_output_style_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_stag_ordered_output_style_0_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_style_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_stag_ordered_output_style_0_1[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_style_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_output_style_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__mlds_to_java__du_stag_ordered_output_style_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__mlds_to_java__du_stag_ordered_output_style_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__mlds_to_java__du_name_ordered_output_style_0[] = {
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_style_0_0,
	&mercury_data_ml_backend__mlds_to_java__du_functor_desc_output_style_0_1
};

const MR_Integer mercury_data_ml_backend__mlds_to_java__functor_number_map_output_style_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_java__type_ctor_info_output_style_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__mlds_to_java__output_style_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__mlds_to_java__output_style_0_0)),
	"ml_backend.mlds_to_java",
	"output_style",
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_name_ordered_output_style_0 },
	{ (void *)mercury_data_ml_backend__mlds_to_java__du_ptag_ordered_output_style_0 },
	2,
	4,
	mercury_data_ml_backend__mlds_to_java__functor_number_map_output_style_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"lambda_mlds_to_java_m_2589",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2589,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_rtti_array_assignments",
8,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2669,
"d1;c7;d4;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_rtti_defn_assignments",
5,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2623,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_switch_case_8_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_case_cond",
6,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
3924,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_stmt_8_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"lambda_mlds_to_java_m_3733",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
3733,
"d1;c9;d12;c2;d3;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_stmt_8_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_rval",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
3617,
"d1;c9;d11;c10;t;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_atomic_stmt_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_target_code_component",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
4073,
"d1;c7;d10;c2;d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_func_decl_8_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_param",
6,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2773,
"d1;c9;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_func_decl_8_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_param",
6,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2773,
"d1;c9;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_class_body_7_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_enum_constant",
6,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2269,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_class_body_7_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"defn_is_const",
1,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2228,
"d1;c8;d5;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_class_body_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_defn",
6,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2063,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_implements_list_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_interface",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2181,
"d1;c5;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_defn_3_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_type",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1513,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_defn_3_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_argument",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1512,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_defn_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_defn",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1423,
"d1;c5;d3;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_7 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_switch_case",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1564,
"d1;c4;d4;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_6 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_rval",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1589,
"d1;c4;d9;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_5 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_lval",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1584,
"d1;c4;d8;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_rval",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1583,
"d1;c4;d8;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_type",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1579,
"d1;c4;d8;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_statement",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1539,
"d1;c4;d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_stmt_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_defn",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1538,
"d1;c4;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_atomic_3_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_type",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1654,
"d1;c4;d4;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_atomic_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_rval",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1653,
"d1;c4;d4;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_initializer_3_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_initializer",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1495,
"d1;c4;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_initializer_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_initializer",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1500,
"d1;c4;d3;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_type_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_type",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1440,
"d1;c4;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_func_params_3_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_type",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1513,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__rename_class_names_func_params_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_argument",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1512,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_1 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"replace_non_alphanum_underscore",
2,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1383,
"d1;c4;e;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"generate_call_method_nth_arg",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1178,
"d1;c7;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_4 = {
{
MR_FUNCTION,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"lambda_mlds_to_java_m_1116",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1116,
"d1;c10;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"generate_call_statement_for_addr",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1104,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"generate_call_statement_for_addr",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1104,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__generate_call_method_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"create_generic_arg",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1092,
"d1;c5;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_rval_const_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"lambda_mlds_to_java_m_4554",
2,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
4554,
"d1;c5;d6;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_initializer_body_list_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"lambda_mlds_to_java_m_2589",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2589,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_exported_enum_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_exported_enum_constant",
6,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
693,
"d1;c7;d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"lambda_mlds_to_java_m_502",
2,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
502,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"assign_ref_output",
7,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
583,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"assign_ref_output",
7,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
583,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_export_param_ref_out",
6,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
606,
"d1;c9;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_ref_out_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"has_ptr_type",
1,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
565,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_export_no_ref_out_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_param",
6,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2773,
"d1;c9;d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__write_export_call_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"write_argument_name",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
633,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_6 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"defn_is_data",
1,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
397,
"d1;c50;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_5 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"defn_is_rtti_data",
1,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
392,
"d1;c39;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_java_body_code",
5,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
389,
"d1;c37;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"generate_addr_wrapper_class",
5,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
363,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"lambda_mlds_to_java_m_347",
1,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
347,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_src_file_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"lambda_mlds_to_java_m_345",
1,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
345,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_rtti_assignments_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_rtti_defns_assignments",
5,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2610,
"d1;c6;d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_data_assignments_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_call_init_data_method",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2355,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_data_assignments_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_init_data_method",
7,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2349,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_defns_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_defn",
6,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2063,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_src_end_4_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2005,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_src_start_9_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_java_decl",
5,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1929,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_src_start_9_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_import",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
306,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_debug_class_init_4_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
2005,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__write_main_driver_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"write_indented_line",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1978,
"d1;c56;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_env_vars_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_env_var_definition",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1877,
"d1;c9;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_env_vars_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"collect_env_var_names",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1871,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_finals_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_final_pred_call",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1844,
"d1;c5;d2;c20;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_inits_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_init_2",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1811,
"d1;c5;d2;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__shorten_long_class_names_3_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"rename_class_names_defn",
3,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1330,
"d1;c7;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__shorten_long_class_names_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"maybe_shorten_long_class_name",
4,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
1324,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_exported_enums_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_exported_enum",
5,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
680,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_exports_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_export",
5,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
495,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_java__output_java_mlds_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_java",
"ml_backend.mlds_to_java",
"output_java_src_file",
5,
0
},
"ml_backend.mlds_to_java",
"mlds_to_java.m",
139,
"d1;c11;"
};


MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_get_module_name_1_0);
MR_decl_entry(parse_tree__file_names__module_name_to_file_name_7_0);
MR_decl_entry(libs__file_util__output_to_file_5_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module0)
	MR_init_entry1(ml_backend__mlds_to_java__output_java_mlds_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_java_mlds_4_0);
	MR_init_label3(ml_backend__mlds_to_java__output_java_mlds_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_java_mlds'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_java__output_java_mlds_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__mlds_to_java__output_java_mlds_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_java_mlds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_module_name_1_0,
		ml_backend__mlds_to_java__output_java_mlds_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_java_mlds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(".java", 5);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		ml_backend__mlds_to_java__output_java_mlds_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_java_mlds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_java_src_file_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__file_util__output_to_file_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module1)
	MR_init_entry1(ml_backend__mlds_to_java__defn_is_rtti_data_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__defn_is_rtti_data_1_0);
	MR_init_label1(ml_backend__mlds_to_java__defn_is_rtti_data_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_is_rtti_data'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__defn_is_rtti_data_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__defn_is_rtti_data_1_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 6));
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_java__defn_is_rtti_data_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module2)
	MR_init_entry1(ml_backend__mlds_to_java__defn_is_data_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__defn_is_data_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_is_data'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__defn_is_data_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	MR_r1 = (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module3)
	MR_init_entry1(fn__ml_backend__mlds_to_java__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_java__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_java__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(parse_tree__java_names__mangle_sym_name_for_java_4_0);
MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module4)
	MR_init_entry1(ml_backend__mlds_to_java__output_import_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_import_3_0);
	MR_init_label5(ml_backend__mlds_to_java__output_import_3_0,5,3,2,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_import'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_import_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_import_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_import_3_0_i5);
	}
	MR_r1 = MR_tfield(0, MR_r1, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__output_import_3_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_import_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("import_type \140user_visible_interface\' in Java backend", 52);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__output_import_3_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_import_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("foreign import in Java backend", 30);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__output_import_3_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_import_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__output_import_3_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_import_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_import_3_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_import_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("// import ", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module5)
	MR_init_entry1(fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0);
	MR_init_label2(fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_get_java_foreign_code'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_pragma_export_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module6)
	MR_init_entry1(ml_backend__mlds_to_java__output_exports_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_exports_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_exports'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_exports_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_export_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_pragma_export);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_exported_enum_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module7)
	MR_init_entry1(ml_backend__mlds_to_java__output_exported_enums_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_exported_enums_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_exported_enums'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_exported_enums_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_exported_enum_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_exported_enum);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module8)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_lval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_lval_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_lval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module9)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_rval_3_0);
	MR_init_label9(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,27,30,6,42,26,41,3,4,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_rval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i41));
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_lval_3_0);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i41));
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_EQ(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i26);
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r3, 0),6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i42);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r3, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i36) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i42) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i42) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i36) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i42));
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i41));
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0_i41));
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module10)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0);
	MR_init_label3(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_rvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module11)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0);
	MR_init_label7(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,23,3,11,7,9,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_initializers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0_i5));
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0_i23);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r3, 1);
	MR_np_localcall_lab(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r3, 0);
	MR_np_localcall_lab(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0_i23);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module12)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_statements_3_0);
	MR_init_label3(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_statements'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_statement_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_statements_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module13)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_statement_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_statement_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_statement'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_statement_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module14)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0);
	MR_init_label10(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,90,15,91,92,33,34,56,3,6,4)
	MR_init_label10(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,10,17,95,20,23,65,100,28,94,39)
	MR_init_label7(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,41,93,44,45,96,48,89)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_stmt'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i90) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i91) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i92) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i56));
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i15);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_statements_3_0);
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 2);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i48);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,92)
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
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i33);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_statement_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i34);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i89);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_statement_3_0);
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i93) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i94) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i95) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i96) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i65) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i3));
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i4);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 7);
	MR_r1 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_lval_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0);
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i65);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_lval_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0);
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 4);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i20);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("method_ptrs_in_stmt: computed gotos not supported in Java.", 58);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i100);
	}
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i28);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("method_ptrs_in_stmt: goto label not supported in Java.", 54);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i39);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("method_ptrs_in_stmt: labels not supported in Java.", 50);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_rvals_3_0);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 5);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i44);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i45);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_switch_default_3_0);
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_statement_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0_i48);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_statement_3_0);
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module15)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_switch_default_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_switch_default_3_0);
	MR_init_label1(ml_backend__mlds_to_java__method_ptrs_in_switch_default_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_switch_default'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_switch_default_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_switch_default_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_switch_default_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module16)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0);
	MR_init_label3(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_switch_cases'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_r1, 0), 2), 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_stmt_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_switch_cases_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module17)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_defns_3_0);
	MR_init_label3(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_defns'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_defns_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module18)
	MR_init_entry1(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__method_ptrs_in_defn_3_0);
	MR_init_label8(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0,4,6,10,12,8,19,27,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'method_ptrs_in_defn'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0_i19);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0_i6);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_tempr1 = MR_tfield(2, MR_r3, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 5);
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0,
		ml_backend__mlds_to_java__method_ptrs_in_defn_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0);
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r3, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0_i10) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0_i8));
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r4, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r4, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0);
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r3, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0_i21);
	}
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__method_ptrs_in_defn_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__method_ptrs_in_statement_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module19)
	MR_init_entry1(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0);
	MR_init_label10(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,45,3,6,8,12,14,10,21,31,23)
	MR_init_label1(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_pointer_addressed_methods'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr3, 0), 3);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i21);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tfield(0, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0,
		ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_defns_3_0,
		ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i24);
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r3, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i31) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i14) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i10));
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_rval_3_0,
		ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i24);
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r4, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,
		ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i24);
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r4, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_initializers_3_0,
		ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i24);
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(1, MR_r3, 2);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i23);
	}
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i45);
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__method_ptrs_in_statement_3_0,
		ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i24);
MR_def_label(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0_i45);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(multi_map__set_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module20)
	MR_init_entry1(ml_backend__mlds_to_java__make_code_addr_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__make_code_addr_map_3_0);
	MR_init_label5(ml_backend__mlds_to_java__make_code_addr_map_3_0,16,3,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_code_addr_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__make_code_addr_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__make_code_addr_map_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__make_code_addr_map_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__mlds_to_java__make_code_addr_map_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__make_code_addr_map_3_0_i5);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 2), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__mlds_to_java__make_code_addr_map_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__make_code_addr_map_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tempr1, 1), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	}
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__mlds_to_java__make_code_addr_map_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__make_code_addr_map_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(multi_map__set_4_0,
		ml_backend__mlds_to_java__make_code_addr_map_3_0_i7);
MR_def_label(ml_backend__mlds_to_java__make_code_addr_map_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_java__make_code_addr_map_3_0_i16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module21)
	MR_init_entry1(ml_backend__mlds_to_java__shorten_long_class_names_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__shorten_long_class_names_3_0);
	MR_init_label4(ml_backend__mlds_to_java__shorten_long_class_names_3_0,2,5,8,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'shorten_long_class_names'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__shorten_long_class_names_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(fn__map__init_0_0,
		ml_backend__mlds_to_java__shorten_long_class_names_3_0_i2);
MR_def_label(ml_backend__mlds_to_java__shorten_long_class_names_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_java__shorten_long_class_names_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__shorten_long_class_names_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__is_empty_1_0,
		ml_backend__mlds_to_java__shorten_long_class_names_3_0_i8);
MR_def_label(ml_backend__mlds_to_java__shorten_long_class_names_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__shorten_long_class_names_3_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__mlds_to_java__shorten_long_class_names_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_defn_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module22)
	MR_init_entry1(ml_backend__mlds_to_java__indent_line_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__indent_line_3_0);
	MR_init_label3(ml_backend__mlds_to_java__indent_line_3_0,10,3,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'indent_line'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__indent_line_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__indent_line_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__indent_line_3_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__indent_line_3_0_i3);
MR_def_label(ml_backend__mlds_to_java__indent_line_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_java__indent_line_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__indent_line_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module23)
	MR_init_entry1(ml_backend__mlds_to_java__output_inits_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_inits_4_0);
	MR_init_label5(ml_backend__mlds_to_java__output_inits_4_0,4,5,7,8,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_inits'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_inits_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_inits_4_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_inits_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_inits_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("static {\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_inits_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_inits_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_init_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_java__output_inits_4_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_inits_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_inits_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_inits_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_inits_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module24)
	MR_init_entry1(ml_backend__mlds_to_java__output_finals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_finals_4_0);
	MR_init_label10(ml_backend__mlds_to_java__output_finals_4_0,4,5,6,7,8,9,10,11,13,14)
	MR_init_label7(ml_backend__mlds_to_java__output_finals_4_0,15,16,17,18,19,20,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_finals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_finals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_finals_4_0_i29);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("static {\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jmercury.runtime.JavaInternal.register_finaliser(\n", 50);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("new java.lang.Runnable() {\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("public void run() {\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_final_pred_call_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(1) + (MR_Integer) 4);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_java__output_finals_4_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_finals_4_0_i20);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_finals_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module25)
	MR_init_entry1(ml_backend__mlds_to_java__output_env_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_env_vars_4_0);
	MR_init_label4(ml_backend__mlds_to_java__output_env_vars_4_0,2,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_env_vars'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_env_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__mlds_to_java__output_env_vars_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_env_vars_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__mlds_to_java__output_env_vars_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_env_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ml_backend__mlds_to_java__output_env_vars_4_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_env_vars_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_env_vars_4_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_env_var_definition_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ml_backend__mlds_to_java__output_env_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module26)
	MR_init_entry1(ml_backend__mlds_to_java__write_main_driver_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__write_main_driver_4_0);
	MR_init_label10(ml_backend__mlds_to_java__write_main_driver_4_0,2,3,4,5,6,7,8,9,10,30)
	MR_init_label1(ml_backend__mlds_to_java__write_main_driver_4_0,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_main_driver'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__write_main_driver_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__write_main_driver_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("public static void main", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__write_main_driver_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(java.lang.String[] args)\n", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__write_main_driver_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__write_main_driver_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__write_main_driver_4_0_i6);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\";", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__write_main_driver_4_0_i7);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("jmercury.runtime.JavaInternal.progname = \"", 42);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__write_main_driver_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(".main_2_p_0();", 14);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__write_main_driver_4_0_i9);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("   ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__write_main_driver_4_0_i10);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("try {", 5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("benchmarking.ML_initialise();", 29);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("jmercury.runtime.JavaInternal.exit_status = 0;", 46);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("jmercury.runtime.JavaInternal.args = args;", 42);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__write_indented_line_4_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr4, 3) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_java__write_main_driver_4_0_i30);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__write_main_driver_4_0_i31);
MR_def_label(ml_backend__mlds_to_java__write_main_driver_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module27)
	MR_init_entry1(ml_backend__mlds_to_java__output_debug_class_init_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_debug_class_init_4_0);
	MR_init_label1(ml_backend__mlds_to_java__output_debug_class_init_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_debug_class_init'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_debug_class_init_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_java__output_debug_class_init_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_debug_class_init_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,15);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(" ", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("      System.out.println(\"[", 27);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("    if (System.getenv(\"MERCURY_DEBUG_CLASS_INIT\") != null) {\n", 61);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("  static {\n", 11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__version_1_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(parse_tree__prog_out__write_sym_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_import_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
MR_decl_entry(io__write_list_5_0);
MR_decl_entry(ml_backend__ml_util__defns_contain_main_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module28)
	MR_init_entry1(ml_backend__mlds_to_java__output_src_start_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_src_start_9_0);
	MR_init_label10(ml_backend__mlds_to_java__output_src_start_9_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(ml_backend__mlds_to_java__output_src_start_9_0,12,13,14,15,16,17,18,20,22,23)
	MR_init_label6(ml_backend__mlds_to_java__output_src_start_9_0,24,25,26,27,30,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_src_start'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_src_start_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(library__version_1_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(".m", 2);
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_7_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("//\n//\n// Automatically generated from ", 38);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" by the Mercury Compiler,\n", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("// version ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("//\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("//\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* :- module ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(". */\n\n", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("package jmercury;\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_import);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_java__output_src_start_9_0_i20);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_java_decl_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i22);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("public class ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i23);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i24);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i25);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" {\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i26);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("start", 5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_debug_class_init_4_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i27);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_util__defns_contain_main_1_0,
		ml_backend__mlds_to_java__output_src_start_9_0_i30);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_src_start_9_0_i33);
	}
	MR_r1 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__write_main_driver_4_0);
MR_def_label(ml_backend__mlds_to_java__output_src_start_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module29)
	MR_init_entry1(ml_backend__mlds_to_java__output_src_end_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_src_end_4_0);
	MR_init_label6(ml_backend__mlds_to_java__output_src_end_4_0,2,13,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_src_end'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_src_end_4_0)
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
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_java__output_src_end_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_src_end_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,17);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("      System.out.println(\"[", 27);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("    if (System.getenv(\"MERCURY_DEBUG_CLASS_INIT\") != null) {\n", 61);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("  static {\n", 11);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_java__output_src_end_4_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_src_end_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_end_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_src_end_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_src_end_4_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_src_end_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("// :- end_module ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_src_end_4_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_src_end_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_java__output_src_end_4_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_src_end_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module30)
	MR_init_entry1(ml_backend__mlds_to_java__output_defns_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_defns_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_defns'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_defns_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_defn_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0);
MR_decl_entry(fn__parse_tree__java_names__flip_initial_case_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module31)
	MR_init_entry1(ml_backend__mlds_to_java__output_class_name_and_arity_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_class_name_and_arity_4_0);
	MR_init_label5(ml_backend__mlds_to_java__output_class_name_and_arity_4_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_class_name_and_arity'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_class_name_and_arity_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		ml_backend__mlds_to_java__output_class_name_and_arity_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_class_name_and_arity_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__java_names__flip_initial_case_1_0,
		ml_backend__mlds_to_java__output_class_name_and_arity_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_class_name_and_arity_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_class_name_and_arity_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_class_name_and_arity_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_class_name_and_arity_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_class_name_and_arity_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_class_name_and_arity_4_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_class_name_and_arity_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__name_mangle_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module32)
	MR_init_entry1(ml_backend__mlds_to_java__output_pred_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_pred_label_3_0);
	MR_init_label10(ml_backend__mlds_to_java__output_pred_label_3_0,4,5,6,7,32,9,10,11,13,14)
	MR_init_label10(ml_backend__mlds_to_java__output_pred_label_3_0,3,18,19,20,21,22,23,24,25,28)
	MR_init_label2(ml_backend__mlds_to_java__output_pred_label_3_0,29,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_pred_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_pred_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_pred_label_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_pred_label_3_0_i9);
	}
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i32);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i29);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_pred_label_3_0_i18);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_string_const("f", 1);
	MR_sv(3) = ((MR_Integer) MR_tfield(0, MR_tempr1, 3) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,18)
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
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i20);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i22);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i23);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i24);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i25);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_pred_label_3_0_i2);
	}
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i28);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_java__output_pred_label_3_0_i29);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_pred_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__java_names__valid_java_symbol_name_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module33)
	MR_init_entry1(ml_backend__mlds_to_java__output_mlds_var_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_mlds_var_name_3_0);
	MR_init_label6(ml_backend__mlds_to_java__output_mlds_var_name_3_0,4,3,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_mlds_var_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_mlds_var_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_mlds_var_name_3_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_java__output_mlds_var_name_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_mlds_var_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__java_names__valid_java_symbol_name_1_0,
		ml_backend__mlds_to_java__output_mlds_var_name_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_mlds_var_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_mlds_var_name_3_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_mlds_var_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_mlds_var_name_3_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_mlds_var_name_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_mlds_var_name_3_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_mlds_var_name_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_java__output_mlds_var_name_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_mlds_var_name_3_0,10)
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

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module34)
	MR_init_entry1(ml_backend__mlds_to_java__mlds_output_proc_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__mlds_output_proc_label_3_0);
	MR_init_label10(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,4,5,6,7,36,9,10,11,13,14)
	MR_init_label10(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,15,3,18,19,20,21,22,23,24,25)
	MR_init_label7(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,38,27,28,29,31,32,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_proc_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__mlds_output_proc_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i7);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i9);
	}
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i13);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i11);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i36);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i14);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i15);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i38);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i18);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_string_const("f", 1);
	MR_sv(4) = ((MR_Integer) MR_tfield(0, MR_tempr2, 3) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i19);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,18)
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
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i19);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i20);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i21);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i22);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i23);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i24);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i25);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i27);
	}
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i31);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("_in__", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i28);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i29);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i38);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i32);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__mlds_output_proc_label_3_0_i33);
MR_def_label(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__rtti__tabling_info_id_str_1_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_std_tabling_proc_label_1_0);
MR_decl_entry(backend_libs__rtti__id_to_c_identifier_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module35)
	MR_init_entry1(ml_backend__mlds_to_java__output_data_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_data_name_3_0);
	MR_init_label10(ml_backend__mlds_to_java__output_data_name_3_0,7,3,14,25,17,18,19,43,5,9)
	MR_init_label2(ml_backend__mlds_to_java__output_data_name_3_0,50,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_data_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_data_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_name_3_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_name_3_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_name_3_0_i14) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_name_3_0_i25));
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("NYI: mlds_module_layout", 23);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_mlds_var_name_3_0);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("NYI: mlds_scalar_common_ref", 27);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_name_3_0_i50);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_name_3_0_i9);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_name_3_0_i5);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__tabling_info_id_str_1_0,
		ml_backend__mlds_to_java__output_data_name_3_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_data_name_3_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_name_3_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_std_tabling_proc_label_1_0,
		ml_backend__mlds_to_java__output_data_name_3_0_i43);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__mlds_output_proc_label_3_0);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("NYI: mlds_internal_layout", 25);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("NYI: mlds_proc_layout", 21);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		ml_backend__mlds_to_java__output_data_name_3_0_i46);
MR_def_label(ml_backend__mlds_to_java__output_data_name_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module36)
	MR_init_entry1(ml_backend__mlds_to_java__output_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_name_3_0);
	MR_init_label10(ml_backend__mlds_to_java__output_name_3_0,40,19,20,21,3,41,8,9,10,11)
	MR_init_label5(ml_backend__mlds_to_java__output_name_3_0,12,15,37,5,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_name_3_0_i40) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_name_3_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_name_3_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_name_3_0_i5));
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		ml_backend__mlds_to_java__output_name_3_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__java_names__flip_initial_case_1_0,
		ml_backend__mlds_to_java__output_name_3_0_i20);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_name_3_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_name_3_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_data_name_3_0);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,41)
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
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_pred_label_3_0,
		ml_backend__mlds_to_java__output_name_3_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_java__output_name_3_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_name_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_name_3_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_name_3_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_name_3_0_i39);
	}
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_name_3_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_name_3_0_i37);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_name_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module37)
	MR_init_entry1(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0);
	MR_init_label4(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,6,4,9,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_sym_name_prefixes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,
		ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0_i9);
MR_def_label(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("remove_sym_name_prefixes: prefix not found", 42);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module38)
	MR_init_entry1(ml_backend__mlds_to_java__output_array_brackets_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_array_brackets_3_0);
	MR_init_label3(ml_backend__mlds_to_java__output_array_brackets_3_0,2,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_array_brackets'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_array_brackets_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_array_brackets_3_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_array_brackets_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_array_brackets_3_0_i4);
	}
MR_def_label(ml_backend__mlds_to_java__output_array_brackets_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_array_brackets_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__output_array_brackets_3_0_i8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module39)
	MR_init_entry1(ml_backend__mlds_to_java__hand_defined_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__hand_defined_type_2_0);
	MR_init_label1(ml_backend__mlds_to_java__hand_defined_type_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hand_defined_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__hand_defined_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__hand_defined_type_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_9_0, (MR_Integer) MR_tempr1);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_java__hand_defined_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module40)
	MR_init_entry1(ml_backend__mlds_to_java__maybe_output_comment_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__maybe_output_comment_4_0);
	MR_init_label3(ml_backend__mlds_to_java__maybe_output_comment_4_0,4,5,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_output_comment'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__maybe_output_comment_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__maybe_output_comment_4_0_i14);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("/* ", 3);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__maybe_output_comment_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__maybe_output_comment_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__maybe_output_comment_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__maybe_output_comment_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__maybe_output_comment_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module41)
	MR_init_entry1(ml_backend__mlds_to_java__java_builtin_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__java_builtin_type_4_0);
	MR_init_label9(ml_backend__mlds_to_java__java_builtin_type_4_0,17,30,7,31,8,5,34,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'java_builtin_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__java_builtin_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r5 = MR_tag(MR_tempr1);
	if ((MR_r5 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__java_builtin_type_4_0_i17);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(ml_backend__mlds_to_java__java_builtin_type_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__java_builtin_type_4_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__java_builtin_type_4_0_i34) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__java_builtin_type_4_0_i31) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__java_builtin_type_4_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__java_builtin_type_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__java_builtin_type_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__java_builtin_type_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__java_builtin_type_4_0_i1) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__java_builtin_type_4_0_i1));
	}
MR_def_label(ml_backend__mlds_to_java__java_builtin_type_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__java_builtin_type_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__java_builtin_type_4_0_i5);
	}
	MR_r6 = MR_tfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__java_builtin_type_4_0_i7);
	}
	}
MR_def_label(ml_backend__mlds_to_java__java_builtin_type_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("char", 4);
	MR_r3 = (MR_Word) MR_string_const("java.lang.Character", 19);
	MR_r4 = (MR_Word) MR_string_const("charValue", 9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__java_builtin_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__java_builtin_type_4_0_i8);
	}
MR_def_label(ml_backend__mlds_to_java__java_builtin_type_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("double", 6);
	MR_r3 = (MR_Word) MR_string_const("java.lang.Double", 16);
	MR_r4 = (MR_Word) MR_string_const("doubleValue", 11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__java_builtin_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__java_builtin_type_4_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const("int", 3);
	MR_r3 = (MR_Word) MR_string_const("java.lang.Integer", 17);
	MR_r4 = (MR_Word) MR_string_const("intValue", 8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__java_builtin_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__java_builtin_type_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__java_builtin_type_4_0_i1);
	}
	}
MR_def_label(ml_backend__mlds_to_java__java_builtin_type_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("int", 3);
	MR_r3 = (MR_Word) MR_string_const("java.lang.Integer", 17);
	MR_r4 = (MR_Word) MR_string_const("intValue", 8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__java_builtin_type_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("boolean", 7);
	MR_r3 = (MR_Word) MR_string_const("java.lang.Boolean", 17);
	MR_r4 = (MR_Word) MR_string_const("booleanValue", 12);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__java_builtin_type_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(fn__parse_tree__java_names__mercury_runtime_package_name_0_0);
MR_decl_entry(backend_libs__rtti__rtti_id_maybe_element_java_type_3_0);
MR_decl_entry(backend_libs__rtti__tabling_id_java_type_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module42)
	MR_init_entry1(ml_backend__mlds_to_java__output_type_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_type_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_type_5_0,110,3,6,4,9,13,14,12,65,66)
	MR_init_label10(ml_backend__mlds_to_java__output_type_5_0,72,70,75,76,113,21,24,26,27,28)
	MR_init_label10(ml_backend__mlds_to_java__output_type_5_0,30,25,32,33,164,37,41,49,50,43)
	MR_init_label10(ml_backend__mlds_to_java__output_type_5_0,44,52,53,46,47,59,61,63,81,83)
	MR_init_label10(ml_backend__mlds_to_java__output_type_5_0,85,87,89,91,93,94,95,99,100,101)
	MR_init_label5(ml_backend__mlds_to_java__output_type_5_0,131,105,107,108,183)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_type'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_type_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i110) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i65) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i113));
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i81) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i87) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i85) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i83) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i63) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i61) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i105) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i89) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i107));
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__hand_defined_type_2_0,
		ml_backend__mlds_to_java__output_type_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_type_5_0_i4);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(4);
	if (MR_LTAGS_TESTR(MR_r5,0,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_type_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("/* builtin_dummy */ java.lang.Object", 36);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__mlds_to_java__output_type_5_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		ml_backend__mlds_to_java__output_type_5_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_type_5_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("/* c_pointer */ java.lang.Object", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_mercury_type_6_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_r3, 0);
	MR_sv(3) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_type_5_0_i66);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_type_5_0_i66);
	}
	MR_r1 = (MR_Word) MR_string_const("/* Array */ java.lang.Object", 28);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		ml_backend__mlds_to_java__output_type_5_0_i72);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_type_5_0_i70);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_type_5_0_i131);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("/* ", 3);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_type_5_0_i75);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_type_5_0_i76);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[] */ java.lang.Object", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_type_5_0_i131);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r3, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i59) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i24) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i21) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i91) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i59) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i93) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i99));
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_np_localcall_lab(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_type_5_0_i131);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__output_type_5_0_i26);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__java_names__mercury_runtime_package_name_0_0,
		ml_backend__mlds_to_java__output_type_5_0_i27);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__mlds_to_java__output_type_5_0_i28);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_type_5_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("jmercury.runtime.", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_type_5_0_i30);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,
		ml_backend__mlds_to_java__output_type_5_0_i32);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_type_5_0_i33);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_type_5_0_i164);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jmercury.runtime.Commit", 23);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i49) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i43) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i52) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i46));
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_type_5_0_i50);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_type: il foreign_type", 28);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_type_5_0_i44);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_type: c foreign_type", 27);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_r2 = (MR_Word) MR_string_const("foreign_type", 12);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__maybe_output_comment_4_0,
		ml_backend__mlds_to_java__output_type_5_0_i53);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_type_5_0_i47);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_type: erlang foreign_type", 32);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jmercury.runtime.MethodPtr", 26);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* env_ptr */ java.lang.Object", 30);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("java.lang.Object", 16);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("boolean", 7);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("double", 6);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jmercury.runtime.PseudoTypeInfo", 31);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r3, 1);
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i110) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i65) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_type_5_0_i113));
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(backend_libs__rtti__rtti_id_maybe_element_java_type_3_0,
		ml_backend__mlds_to_java__output_type_5_0_i94);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_type_5_0_i95);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_type_5_0_i183);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_array_brackets_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(backend_libs__rtti__tabling_id_java_type_3_0,
		ml_backend__mlds_to_java__output_type_5_0_i100);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_type_5_0_i101);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_type_5_0_i183);
	}
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_array_brackets_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jmercury.runtime.TypeInfo", 25);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_type_5_0_i108);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_type: unknown type", 25);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_type_5_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module43)
	MR_init_entry1(ml_backend__mlds_to_java__output_mercury_type_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_mercury_type_6_0);
	MR_init_label10(ml_backend__mlds_to_java__output_mercury_type_6_0,36,3,5,7,9,11,65,39,66,16)
	MR_init_label8(ml_backend__mlds_to_java__output_mercury_type_6_0,17,67,26,27,46,29,32,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_mercury_type'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_mercury_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i36) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i65) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i39));
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i66) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i67) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i65) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i34));
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_r4, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_mercury_type_6_0_i11));
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("double", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("java.lang.String", 16);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_mercury_user_type_6_0);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_mercury_type_6_0_i65);
	}
	MR_r4 = (MR_Word) MR_TAG_COMMON(3,10,0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_mercury_user_type_6_0);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("/* closure */ java.lang.Object", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_mercury_type_6_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_mercury_type_6_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_mercury_type_6_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("/* tuple */ java.lang.Object", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_mercury_type_6_0_i26);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_mercury_type_6_0_i27);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_mercury_type_6_0_i29);
	}
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__output_mercury_type_6_0_i46);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("java.lang.Object", 16);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_mercury_type_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("builtin.Void_0", 14);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(ml_backend__ml_type_gen__ml_gen_type_name_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module44)
	MR_init_entry1(ml_backend__mlds_to_java__output_mercury_user_type_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_mercury_user_type_6_0);
	MR_init_label4(ml_backend__mlds_to_java__output_mercury_user_type_6_0,3,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_mercury_user_type'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_mercury_user_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		ml_backend__mlds_to_java__output_mercury_user_type_6_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_mercury_user_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_mercury_user_type_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_type_name_3_0,
		ml_backend__mlds_to_java__output_mercury_user_type_6_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_mercury_user_type_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_mercury_user_type_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_type_5_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_mercury_user_type_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_type_5_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_mercury_user_type_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_mercury_user_type: not a user type", 41);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module45)
	MR_init_entry1(ml_backend__mlds_to_java__output_constness_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_constness_4_0);
	MR_init_label3(ml_backend__mlds_to_java__output_constness_4_0,6,7,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_constness'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_constness_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_constness_4_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_constness_4_0_i21);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("/* ", 3);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_constness_4_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_constness_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("const", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_constness_4_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_constness_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */", 3);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_constness_4_0,21)
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

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module46)
	MR_init_entry1(ml_backend__mlds_to_java__output_decl_flags_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_decl_flags_4_0);
	MR_init_label10(ml_backend__mlds_to_java__output_decl_flags_4_0,2,4,39,6,7,8,11,13,15,3)
	MR_init_label10(ml_backend__mlds_to_java__output_decl_flags_4_0,17,19,21,23,42,25,26,27,22,29)
	MR_init_label5(ml_backend__mlds_to_java__output_decl_flags_4_0,31,33,34,35,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_decl_flags'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_decl_flags_4_0)
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
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(ml_backend__mlds_to_java__output_decl_flags_4_0_i15) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_decl_flags_4_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_decl_flags_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_decl_flags_4_0_i4) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_decl_flags_4_0_i39));
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_decl_flags_4_0_i6);
	}
	}
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_decl_flags_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("default", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i39);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("private ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i39);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("protected ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i39);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("public ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i39);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__per_instance_1_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_decl_flags_4_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("static ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__virtuality_1_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_decl_flags_4_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_decl_flags_4_0_i22);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_decl_flags_4_0_i25);
	}
	}
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_decl_flags_4_0_i22);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i26);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("virtual", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i27);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i42);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__finality_1_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i29);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_decl_flags_4_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("final ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i31);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i33);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_constness_4_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i34);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__abstractness_1_0,
		ml_backend__mlds_to_java__output_decl_flags_4_0_i35);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_decl_flags_4_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("abstract ", 9);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_decl_flags_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__set_finality_2_0);
MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module47)
	MR_init_entry1(ml_backend__mlds_to_java__output_data_decls_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_data_decls_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_data_decls_5_0,25,6,7,8,9,10,11,12,4,27)
	MR_init_label1(ml_backend__mlds_to_java__output_data_decls_5_0,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_data_decls'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_data_decls_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_decls_5_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_decls_5_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_tempr4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_data_decls_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__mlds__set_finality_2_0,
		ml_backend__mlds_to_java__output_data_decls_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_decl_flags_4_0,
		ml_backend__mlds_to_java__output_data_decls_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_data_decls_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__output_data_decls_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		ml_backend__mlds_to_java__output_data_decls_5_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_decls_5_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_decls_5_0_i25);
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("output_data_decls: not data", 27);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__output_data_decls_5_0_i27);
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_decls_5_0_i25);
MR_def_label(ml_backend__mlds_to_java__output_data_decls_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__chunk_3_0);
MR_decl_entry(list__foldl2_6_2);
MR_decl_entry(int__fold_up_5_2);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module48)
	MR_init_entry1(ml_backend__mlds_to_java__output_data_assignments_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_data_assignments_5_0);
	MR_init_label6(ml_backend__mlds_to_java__output_data_assignments_5_0,2,5,6,7,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_data_assignments'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_data_assignments_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 1000;
	MR_np_call_localret_ent(list__chunk_3_0,
		ml_backend__mlds_to_java__output_data_assignments_5_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_data_assignments_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_init_data_method_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,3);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		ml_backend__mlds_to_java__output_data_assignments_5_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_data_assignments_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_data_assignments_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_data_assignments_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("static {\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_assignments_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_data_assignments_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_call_init_data_method_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	}
	MR_np_call_localret_ent(int__fold_up_5_2,
		ml_backend__mlds_to_java__output_data_assignments_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_data_assignments_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_data_assignments_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_data_assignments_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module49)
	MR_init_entry1(ml_backend__mlds_to_java__output_rtti_assignments_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_rtti_assignments_5_0);
	MR_init_label6(ml_backend__mlds_to_java__output_rtti_assignments_5_0,4,5,6,9,10,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rtti_assignments'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_rtti_assignments_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_assignments_5_0_i19);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_0,
		ml_backend__mlds_to_java__output_rtti_assignments_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_rtti_assignments_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_rtti_assignments_5_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_rtti_assignments_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("static {\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_rtti_assignments_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_rtti_assignments_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,3);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_java__output_rtti_assignments_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_rtti_assignments_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_rtti_assignments_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_rtti_assignments_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rtti_assignments_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module50)
	MR_init_entry1(fn__ml_backend__mlds_to_java__init_java_out_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_java__init_java_out_info_2_0);
	MR_init_label5(fn__ml_backend__mlds_to_java__init_java_out_info_2_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_java_out_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_java__init_java_out_info_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__ml_backend__mlds_to_java__init_java_out_info_2_0_i2);
MR_def_label(fn__ml_backend__mlds_to_java__init_java_out_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 120;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ml_backend__mlds_to_java__init_java_out_info_2_0_i3);
MR_def_label(fn__ml_backend__mlds_to_java__init_java_out_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 119;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ml_backend__mlds_to_java__init_java_out_info_2_0_i4);
MR_def_label(fn__ml_backend__mlds_to_java__init_java_out_info_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		fn__ml_backend__mlds_to_java__init_java_out_info_2_0_i5);
MR_def_label(fn__ml_backend__mlds_to_java__init_java_out_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		fn__ml_backend__mlds_to_java__init_java_out_info_2_0_i6);
MR_def_label(fn__ml_backend__mlds_to_java__init_java_out_info_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_global_data__ml_global_data_get_all_global_defns_4_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(fn__multi_map__init_0_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__list__reverse_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module51)
	MR_init_entry1(ml_backend__mlds_to_java__output_java_src_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_java_src_file_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_java_src_file_5_0,2,4,5,7,8,9,10,11,12,13)
	MR_init_label10(ml_backend__mlds_to_java__output_java_src_file_5_0,15,17,20,21,22,23,24,25,26,27)
	MR_init_label10(ml_backend__mlds_to_java__output_java_src_file_5_0,28,29,31,33,34,35,36,38,39,40)
	MR_init_label10(ml_backend__mlds_to_java__output_java_src_file_5_0,41,42,43,44,45,46,47,48,49,50)
	MR_init_label3(ml_backend__mlds_to_java__output_java_src_file_5_0,51,52,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_java_src_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_java_src_file_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
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
	MR_sv(9) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_global_data_get_all_global_defns_4_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__IntroducedFrom__pred__output_java_src_file__345__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(11) = MR_r3;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("output_java_src_file: nonempty ScalarCellGroupMap", 49);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__IntroducedFrom__pred__output_java_src_file__347__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("output_java_src_file: nonempty VectorCellGroupMap", 49);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__find_pointer_addressed_methods_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(14) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(fn__multi_map__init_0_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__make_code_addr_map_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = (MR_Word) MR_TAG_COMMON(0,7,4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(13) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(10);
	MR_sv(12) = MR_r1;
	MR_sv(17) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, code_addr_wrapper);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(17);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i20);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i22);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__shorten_long_class_names_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i23);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__mlds_get_java_foreign_code_1_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i24);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i25);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_sv(13) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i26);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i27);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__init_java_out_info_2_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i28);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_src_start_9_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i29);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_java_body_code_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i31);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i33);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n// RttiDefns\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i34);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_defns_6_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i35);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rtti_assignments_5_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i36);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i38);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n// DataDefns\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i39);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_data_decls_5_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i40);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_data_assignments_5_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i41);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n// NonDataDefns\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i42);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_defns_6_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i43);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n// ExportDefns\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i44);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_exports_5_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i45);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n// ExportedEnums\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i46);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_exported_enums_5_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i47);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n// InitPreds\n", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i48);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_inits_4_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i49);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n// FinalPreds\n", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i50);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_finals_4_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i51);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n// EnvVarNames\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i52);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_env_vars_4_0,
		ml_backend__mlds_to_java__output_java_src_file_5_0_i53);
MR_def_label(ml_backend__mlds_to_java__output_java_src_file_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_src_end_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module52)
	MR_init_entry1(ml_backend__mlds_to_java__lock_last_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__lock_last_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_last_context'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__lock_last_context_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__lock_last_context_0_0
{
#line 4667 "mlds_to_java.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif
;}
#line 9302 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module53)
	MR_init_entry1(ml_backend__mlds_to_java__unlock_last_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__unlock_last_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_last_context'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__unlock_last_context_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__unlock_last_context_0_0
{
#line 4667 "mlds_to_java.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif
;}
#line 9335 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module54)
	MR_init_entry1(ml_backend__mlds_to_java__unsafe_get_last_context_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__unsafe_get_last_context_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_last_context'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__unsafe_get_last_context_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__unsafe_get_last_context_1_0
{
#line 4667 "mlds_to_java.m"
X = ml_backend__mlds_to_java__mutable_variable_last_context;
;}
#line 9366 "ml_backend.mlds_to_java.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module55)
	MR_init_entry1(ml_backend__mlds_to_java__unsafe_set_last_context_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__unsafe_set_last_context_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_last_context'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__unsafe_set_last_context_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__unsafe_set_last_context_1_0
	X = MR_r1;
{
#line 4667 "mlds_to_java.m"
ml_backend__mlds_to_java__mutable_variable_last_context = X;
;}
#line 9399 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_get_prog_context_1_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(string__replace_all_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module56)
	MR_init_entry1(ml_backend__mlds_to_java__output_context_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_context_4_0);
	MR_init_label10(ml_backend__mlds_to_java__output_context_4_0,4,5,6,11,15,16,17,18,19,20)
	MR_init_label2(ml_backend__mlds_to_java__output_context_4_0,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_context'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_context_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_context_4_0_i37);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_java__output_context_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__output_context_4_0
{
#line 4667 "mlds_to_java.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif
;}
#line 9450 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__output_context_4_0
{
#line 4667 "mlds_to_java.m"
X = ml_backend__mlds_to_java__mutable_variable_last_context;
;}
#line 9462 "ml_backend.mlds_to_java.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__output_context_4_0
{
#line 4667 "mlds_to_java.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif
;}
#line 9475 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_java__output_context_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_java__output_context_4_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		ml_backend__mlds_to_java__output_context_4_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_context_4_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	if (MR_INT_LE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_context_4_0_i36);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_context_4_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("// ", 3);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_context_4_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\\u", 2);
	MR_r3 = (MR_Word) MR_string_const("\\\\u", 3);
	MR_np_call_localret_ent(string__replace_all_4_0,
		ml_backend__mlds_to_java__output_context_4_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_context_4_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_context_4_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__output_context_4_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_context_4_0_i20);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__output_context_4_0
{
#line 4667 "mlds_to_java.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif
;}
#line 9555 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__output_context_4_0
	X = MR_sv(1);
{
#line 4667 "mlds_to_java.m"
ml_backend__mlds_to_java__mutable_variable_last_context = X;
;}
#line 9566 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__output_context_4_0
{
#line 4667 "mlds_to_java.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif
;}
#line 9578 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__mlds_to_java__output_context_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module57)
	MR_init_entry1(ml_backend__mlds_to_java__indent_line_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__indent_line_5_0);
	MR_init_label1(ml_backend__mlds_to_java__indent_line_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'indent_line'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__indent_line_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__indent_line_5_0_i2);
MR_def_label(ml_backend__mlds_to_java__indent_line_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__indent_line_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module58)
	MR_init_entry1(ml_backend__mlds_to_java__output_java_decl_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_java_decl_5_0);
	MR_init_label5(ml_backend__mlds_to_java__output_java_decl_5_0,4,5,6,16,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_java_decl'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_java_decl_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_java_decl_5_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__mlds_to_java__output_java_decl_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_java_decl_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_java_decl_5_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_java_decl_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_java_decl_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_java_decl_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_java_decl_5_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_java_decl_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(ml_backend__mlds_to_java__output_java_decl_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("foreign decl other than Java", 28);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module59)
	MR_init_entry1(ml_backend__mlds_to_java__output_java_body_code_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_java_body_code_5_0);
	MR_init_label5(ml_backend__mlds_to_java__output_java_body_code_5_0,4,5,6,16,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_java_body_code'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_java_body_code_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_java_body_code_5_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__mlds_to_java__output_java_body_code_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_java_body_code_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_java_body_code_5_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_java_body_code_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_java_body_code_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_java_body_code_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_java_body_code_5_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_java_body_code_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(ml_backend__mlds_to_java__output_java_body_code_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("foreign code other than Java", 28);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module60)
	MR_init_entry1(ml_backend__mlds_to_java__write_export_call_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__write_export_call_4_0);
	MR_init_label10(ml_backend__mlds_to_java__write_export_call_4_0,2,3,4,5,8,23,7,10,11,13)
	MR_init_label5(ml_backend__mlds_to_java__write_export_call_4_0,14,17,18,19,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_export_call'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__write_export_call_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__write_export_call_4_0_i7);
	}
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i17);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i10);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i11);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__write_export_call_4_0_i13);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i23);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i18);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i19);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,7);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__write_export_call_4_0_i21);
MR_def_label(ml_backend__mlds_to_java__write_export_call_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module61)
	MR_init_entry1(ml_backend__mlds_to_java__output_export_no_ref_out_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_export_no_ref_out_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,2,19,4,5,8,9,10,11,12,20)
	MR_init_label3(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,14,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_export_no_ref_out'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_export_no_ref_out_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 4);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = ((MR_Integer) MR_tempr2 + (MR_Integer) 1);
	MR_r1 = (MR_Integer) 40;
	}
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i4);
	}
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_param_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(7) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i14);
	}
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__write_export_call_4_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("return ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i20);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_export_no_ref_out_5_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_export_no_ref_out_5_0,17)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module62)
	MR_init_entry1(ml_backend__mlds_to_java__output_export_ref_out_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_export_ref_out_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_export_ref_out_5_0,3,4,35,6,7,10,11,12,13,14)
	MR_init_label10(ml_backend__mlds_to_java__output_export_ref_out_5_0,15,16,17,20,27,28,40,30,31,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_export_ref_out'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_export_ref_out_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 4);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,8);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_ref_out_5_0_i6);
	}
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_export_param_ref_out_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i35);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("java.lang.Object[] results = ", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__write_export_call_4_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_ref_out_5_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__assign_ref_output_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Integer) 0;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_ref_out_5_0_i27);
	}
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_ref_out_5_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(6);
	MR_r8 = MR_tfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r8,0,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_ref_out_5_0_i20);
	}
	MR_r8 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r8,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_ref_out_5_0_i20);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__assign_ref_output_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(7);
	MR_r6 = (MR_Integer) 1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_ref_out_5_0_i27);
	}
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_export_ref_out: unexpected ReturnTypes", 45);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i27);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r6;
	MR_np_call_localret_ent(list__foldl2_6_2,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i28);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_ref_out_5_0_i30);
	}
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i33);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i31);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("return ((java.lang.Boolean) results[0]).booleanValue();\n", 56);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_ref_out_5_0_i40);
MR_def_label(ml_backend__mlds_to_java__output_export_ref_out_5_0,33)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module63)
	MR_init_entry1(ml_backend__mlds_to_java__has_ptr_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__has_ptr_type_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'has_ptr_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__has_ptr_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_r1 = ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 4));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module64)
	MR_init_entry1(ml_backend__mlds_to_java__output_export_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_export_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_export_5_0,3,4,5,7,10,12,13,14,19,18)
	MR_init_label4(ml_backend__mlds_to_java__output_export_5_0,21,23,26,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_export'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_export_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__IntroducedFrom__pred__output_export__502__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r3 = (MR_Word) MR_string_const("foreign_export for language other than Java.", 44);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_java__output_export_5_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_export_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("public static ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_5_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(5), 1);
	MR_r3 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_5_0_i7);
	}
	MR_sv(5) = MR_tfield(0, MR_sv(5), 0);
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_5_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_5_0_i10);
	}
	MR_sv(5) = MR_tfield(0, MR_sv(5), 0);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_export_5_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(0, MR_sv(5), 0);
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("java.lang.Object []", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_5_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_export_5_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_export_5_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_java__output_export_5_0_i18);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__mlds_to_java__output_export_5_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_r5 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_5_0_i21);
	}
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_5_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_5_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_export_ref_out_5_0);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(6), 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_export_5_0_i26);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_export_ref_out_5_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_export: multiple return values", 37);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_export_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_export_no_ref_out_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module65)
	MR_init_entry1(ml_backend__mlds_to_java__output_export_param_ref_out_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_export_param_ref_out_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_export_param_ref_out'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_export_param_ref_out_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module66)
	MR_init_entry1(ml_backend__mlds_to_java__write_argument_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__write_argument_name_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_argument_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__write_argument_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module67)
	MR_init_entry1(ml_backend__mlds_to_java__assign_ref_output_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__assign_ref_output_7_0);
	MR_init_label10(ml_backend__mlds_to_java__assign_ref_output_7_0,2,3,4,9,7,5,16,15,19,22)
	MR_init_label3(ml_backend__mlds_to_java__assign_ref_output_7_0,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'assign_ref_output'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__assign_ref_output_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i2);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i3);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".val = (", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i4);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__assign_ref_output_7_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_sv(5), 1);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i9);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__assign_ref_output_7_0_i7);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i19);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i19);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i16);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__assign_ref_output_7_0_i15);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i19);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i19);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i22);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("];\n", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i23);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(") results[", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i24);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__assign_ref_output_7_0_i25);
MR_def_label(ml_backend__mlds_to_java__assign_ref_output_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module68)
	MR_init_entry1(ml_backend__mlds_to_java__output_exported_enum_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_exported_enum_5_0);
	MR_init_label3(ml_backend__mlds_to_java__output_exported_enum_5_0,8,10,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_exported_enum'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_exported_enum_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_exported_enum_5_0_i21);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(ml_backend__ml_type_gen__ml_gen_type_name_3_0,
		ml_backend__mlds_to_java__output_exported_enum_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_exported_enum_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 4;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_exported_enum_constant);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		ml_backend__mlds_to_java__output_exported_enum_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_exported_enum_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_exported_enum_constant_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ml_backend__mlds_to_java__output_exported_enum_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module69)
	MR_init_entry1(ml_backend__mlds_to_java__output_initializer_body_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_initializer_body_list_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_initializer_body_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_initializer_body_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list__2589__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r3 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module70)
	MR_init_entry1(fn__ml_backend__mlds_to_java__type_is_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_java__type_is_array_1_0);
	MR_init_label8(fn__ml_backend__mlds_to_java__type_is_array_1_0,2,37,4,19,22,6,26,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_is_array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_java__type_is_array_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__type_is_array_1_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_java__type_is_array_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__type_is_array_1_0_i4);
	}
MR_def_label(fn__ml_backend__mlds_to_java__type_is_array_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_java__type_is_array_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__type_is_array_1_0_i6);
	}
	MR_r2 = MR_tfield(1, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__type_is_array_1_0_i19) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__type_is_array_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__type_is_array_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__type_is_array_1_0_i22));
MR_def_label(fn__ml_backend__mlds_to_java__type_is_array_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__type_is_array_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__type_is_array_1_0_i37) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__type_is_array_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__type_is_array_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__type_is_array_1_0_i24));
MR_def_label(fn__ml_backend__mlds_to_java__type_is_array_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__type_is_array_1_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_tempr2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_14_0, (MR_Integer) MR_tempr1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_proceed();
	}
MR_def_label(fn__ml_backend__mlds_to_java__type_is_array_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__type_is_array_1_0_i24);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(backend_libs__rtti__rtti_id_maybe_element_java_type_3_0,
		fn__ml_backend__mlds_to_java__type_is_array_1_0_i26);
MR_def_label(fn__ml_backend__mlds_to_java__type_is_array_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__mlds_to_java__type_is_array_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_module_name_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module71)
	MR_init_entry1(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_maybe_qualified_name_4_0);
	MR_init_label10(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,4,2,7,8,9,10,13,26,12,15)
	MR_init_label4(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,16,18,19,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_maybe_qualified_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_name_3_0);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i12);
	}
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i22);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i18);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_maybe_qualified_name_4_0_i26);
MR_def_label(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__java_util__java_binary_infix_op_2_0);
MR_decl_entry(ml_backend__java_util__java_float_compare_op_2_0);
MR_decl_entry(ml_backend__java_util__java_float_op_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module72)
	MR_init_entry1(ml_backend__mlds_to_java__output_binary_op_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_binary_op_3_0);
	MR_init_label6(ml_backend__mlds_to_java__output_binary_op_3_0,4,2,9,7,13,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_binary_op'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_binary_op_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__java_util__java_binary_infix_op_2_0,
		ml_backend__mlds_to_java__output_binary_op_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_binary_op_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binary_op_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_binary_op_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__java_util__java_float_compare_op_2_0,
		ml_backend__mlds_to_java__output_binary_op_3_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_binary_op_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binary_op_3_0_i7);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_binary_op_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__java_util__java_float_op_2_0,
		ml_backend__mlds_to_java__output_binary_op_3_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_binary_op_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binary_op_3_0_i12);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_binary_op_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_binary_op: invalid binary operator", 41);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module73)
	MR_init_entry1(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0);
	MR_init_label7(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0,26,3,30,21,22,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_java_type_initializer'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i26) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i3) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i30) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i30));
MR_def_label(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i30) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i21) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i23) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i23) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i22) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i30) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i30) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i30) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i30) MR_AND
		MR_LABEL_AP(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i24));
MR_def_label(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_tag(MR_tempr1),1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0_i30);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_9_1, (MR_Integer) MR_tempr2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("null", 4);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("false", 5);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'\\u0000\'", 8);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0", 1);
	MR_proceed();
MR_def_label(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("get_type_initializer: variable has unknown_type", 47);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);
MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module74)
	MR_init_entry1(ml_backend__mlds_to_java__output_int_const_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_int_const_3_0);
	MR_init_label3(ml_backend__mlds_to_java__output_int_const_3_0,31,5,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_int_const'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_int_const_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_int_const_3_0_i31);
	}
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_java__output_int_const_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 32;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		ml_backend__mlds_to_java__output_int_const_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_int_const_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_int_const_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = ((MR_Integer) MR_tempr3 & (MR_Integer) -2147483648);
	if (MR_INT_NE(MR_tempr1,-2147483648)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_int_const_3_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_tempr3 & (MR_Integer) -1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("0x%x", 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__format_4_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_int_const_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module75)
	MR_init_entry1(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0);
	MR_init_label10(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,2,3,4,5,8,19,7,10,11,13)
	MR_init_label2(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,14,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_fully_qualified_proc_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i7);
	}
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i13);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__mlds_output_proc_label_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module76)
	MR_init_entry1(ml_backend__mlds_to_java__mlds_output_code_addr_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__mlds_output_code_addr_5_0);
	MR_init_label10(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,4,5,6,7,40,9,3,14,15,16)
	MR_init_label10(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,17,20,37,19,22,23,25,26,29,30)
	MR_init_label2(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,31,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_code_addr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__mlds_output_code_addr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, code_addr_wrapper);
	MR_r3 = MR_tfield(0, MR_sv(1), 3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i5);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_0(", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i9);
	}
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i40);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i13);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i14);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i15);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i16);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i17);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i20);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i19);
	}
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i29);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i22);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i23);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i25);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i26);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i26);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i37);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__mlds_output_proc_label_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i30);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_code_addr_5_0_i31);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_java__mlds_output_code_addr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_fully_qualified_proc_label_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module77)
	MR_init_entry1(ml_backend__mlds_to_java__mlds_output_data_addr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__mlds_output_data_addr_3_0);
	MR_init_label10(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,2,3,4,5,11,7,18,29,21,22)
	MR_init_label6(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,23,24,9,13,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_output_data_addr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__mlds_output_data_addr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i2);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i3);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i29));
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("NYI: mlds_module_layout", 23);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_mlds_var_name_3_0);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("NYI: mlds_scalar_common_ref", 27);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i15);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i13);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i9);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__backend_libs__rtti__tabling_info_id_str_1_0,
		ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i21);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i22);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i23);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_std_tabling_proc_label_1_0,
		ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i24);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__mlds_output_proc_label_3_0);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("NYI: mlds_internal_layout", 25);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("NYI: mlds_proc_layout", 21);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_np_call_localret_ent(backend_libs__rtti__id_to_c_identifier_2_0,
		ml_backend__mlds_to_java__mlds_output_data_addr_3_0_i16);
MR_def_label(ml_backend__mlds_to_java__mlds_output_data_addr_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__output_float_literal_3_0);
MR_decl_entry(backend_libs__c_util__output_quoted_multi_string_lang_4_0);
MR_decl_entry(backend_libs__c_util__output_quoted_string_lang_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module78)
	MR_init_entry1(ml_backend__mlds_to_java__output_rval_const_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_rval_const_4_0);
	MR_init_label10(ml_backend__mlds_to_java__output_rval_const_4_0,51,26,34,90,23,24,55,94,4,5)
	MR_init_label10(ml_backend__mlds_to_java__output_rval_const_4_0,8,7,14,18,20,28,97,32,96,37)
	MR_init_label6(ml_backend__mlds_to_java__output_rval_const_4_0,40,98,88,95,46,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rval_const'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_rval_const_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i51) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i34) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i90) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i55));
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_const_4_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const("true", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("false", 5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_int_const_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tfield(2, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(2, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i23);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".K", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i24);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_int_const_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i94) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i95) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i96) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i40) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_const_4_0_i98));
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("((char) ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_const_4_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 32;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_const_4_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = ((MR_Integer) MR_tempr3 & (MR_Integer) -2147483648);
	if (MR_INT_NE(MR_tempr1,-2147483648)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_const_4_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) MR_tempr3 & (MR_Integer) -1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("0x%x", 4);
	}
	MR_np_call_localret_ent(io__format_4_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(ml_backend__mlds_to_java__mlds_output_code_addr_5_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__mlds_output_data_addr_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(backend_libs__c_util__output_float_literal_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(13,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__IntroducedFrom__pred__output_rval_const__4554__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(3, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 2;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_r2 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r3 = (MR_Word) MR_string_const("output_rval_const: language other than Java.", 44);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i32);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i37);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_multi_string_lang_4_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i47);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__get_java_type_initializer_1_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i46);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_lang_4_0,
		ml_backend__mlds_to_java__output_rval_const_4_0_i47);
MR_def_label(ml_backend__mlds_to_java__output_rval_const_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module79)
	MR_init_entry1(ml_backend__mlds_to_java__output_lval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_lval_4_0);
	MR_init_label10(ml_backend__mlds_to_java__output_lval_4_0,85,8,6,12,10,14,15,16,17,18)
	MR_init_label10(ml_backend__mlds_to_java__output_lval_4_0,21,80,5,26,25,24,30,31,32,33)
	MR_init_label5(ml_backend__mlds_to_java__output_lval_4_0,34,39,86,37,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_lval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_lval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_lval_4_0_i85) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_lval_4_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_lval_4_0_i86) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_lval_4_0_i41));
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_lval_4_0_i5);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	MR_sv(4) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r5 = MR_tfield(0, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("data_tag", 8)) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_lval_4_0_i6);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_lval_4_0_i6);
	}
	MR_r2 = MR_r5;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_bracketed_rval_4_0,
		ml_backend__mlds_to_java__output_lval_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_lval_4_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_lval_4_0_i10);
	}
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_lval_4_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_lval_4_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("((", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_lval_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_lval_4_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_lval_4_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_bracketed_rval_4_0,
		ml_backend__mlds_to_java__output_lval_4_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_lval_4_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		ml_backend__mlds_to_java__output_lval_4_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__java_names__valid_java_symbol_name_1_0,
		ml_backend__mlds_to_java__output_lval_4_0_i80);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	if (MR_LTAGS_TESTR(MR_r4,0,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_lval_4_0_i26);
	}
	MR_sv(1) = MR_r1;
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_lval_4_0_i25);
	}
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_lval_4_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_lval_4_0_i24);
	}
	MR_sv(1) = MR_r1;
	}
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("((java.lang.Object[]) ", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_lval_4_0_i31);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("unexpected field type.", 22);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__output_lval_4_0_i30);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_lval_4_0_i31);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_lval_4_0_i32);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")[", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_lval_4_0_i33);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_lval_4_0_i34);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_bracketed_rval_4_0);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("mercury_envvar_", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_lval_4_0_i37);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_lval_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr2 = MR_tfield(3, MR_r2, 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr3;
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_maybe_qualified_name_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module80)
	MR_init_entry1(ml_backend__mlds_to_java__output_bracketed_rval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_bracketed_rval_4_0);
	MR_init_label4(ml_backend__mlds_to_java__output_bracketed_rval_4_0,4,34,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_bracketed_rval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_bracketed_rval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_bracketed_rval_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_bracketed_rval_4_0_i34);
	}
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_rval_4_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_bracketed_rval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_bracketed_rval_4_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_bracketed_rval_4_0_i34);
	}
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_rval_4_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_bracketed_rval_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__output_bracketed_rval_4_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_bracketed_rval_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_bracketed_rval_4_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_bracketed_rval_4_0,10)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module81)
	MR_init_entry1(ml_backend__mlds_to_java__output_rval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_rval_4_0);
	MR_init_label10(ml_backend__mlds_to_java__output_rval_4_0,7,11,5,24,3,9,13,15,17,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_rval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_4_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_4_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_4_0_i24));
MR_def_label(ml_backend__mlds_to_java__output_rval_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_lval_4_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_rval: tags not supported in Java", 39);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_rval_const_4_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_4_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_4_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_4_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_4_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_4_0_i19) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rval_4_0_i15));
MR_def_label(ml_backend__mlds_to_java__output_rval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_binop_6_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_rval_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_rval: mem_addr(_) not supported", 38);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_rval: ml_scalar_common", 29);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("this", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_unop_5_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_rval_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_rval: ml_vector_common_row", 33);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module82)
	MR_init_entry1(ml_backend__mlds_to_java__output_unop_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_unop_5_0);
	MR_init_label4(ml_backend__mlds_to_java__output_unop_5_0,3,9,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_unop'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_unop_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_unop_5_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_unop_5_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_unop_5_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_unop_5_0_i7));
MR_def_label(ml_backend__mlds_to_java__output_unop_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_boxed_rval_5_0);
MR_def_label(ml_backend__mlds_to_java__output_unop_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_unboxed_rval_5_0);
MR_def_label(ml_backend__mlds_to_java__output_unop_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_cast_rval_5_0);
MR_def_label(ml_backend__mlds_to_java__output_unop_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(3, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_std_unop_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module83)
	MR_init_entry1(ml_backend__mlds_to_java__output_cast_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_cast_rval_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_cast_rval_5_0,7,8,9,6,12,11,14,2,20,19)
	MR_init_label10(ml_backend__mlds_to_java__output_cast_rval_5_0,54,25,26,27,29,30,18,33,35,32)
	MR_init_label3(ml_backend__mlds_to_java__output_cast_rval_5_0,37,38,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_cast_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_cast_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,8)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(2, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i2);
	}
	MR_tempr3 = MR_r1;
	MR_r6 = MR_tfield(0, MR_tempr3, 0);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i7);
	}
	MR_sv(1) = MR_tempr3;
	MR_sv(3) = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i6);
	}
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_string_const("/* ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cast", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i11);
	}
	if (MR_INT_GT(MR_sv(2),5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("jmercury.runtime.PseudoTypeInfo.K", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("new jmercury.runtime.PseudoTypeInfo(", 36);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i30);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,7)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i20);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i18);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	}
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i25);
	}
	}
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("jmercury.runtime.TypeInfo_Struct.maybe_new(", 43);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i29);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i26);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cast", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i27);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i54);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i30);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i33);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i32);
	}
	if ((strcmp(MR_string_const("int", 3), (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_cast_rval_5_0_i32);
	}
	MR_r1 = (MR_Word) MR_string_const("(int) ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i35);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i37);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i38);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_cast_rval_5_0_i39);
MR_def_label(ml_backend__mlds_to_java__output_cast_rval_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_rval_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module84)
	MR_init_entry1(ml_backend__mlds_to_java__output_boxed_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_boxed_rval_5_0);
	MR_init_label8(ml_backend__mlds_to_java__output_boxed_rval_5_0,4,6,7,8,9,2,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_boxed_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_boxed_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		ml_backend__mlds_to_java__output_boxed_rval_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_boxed_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_boxed_rval_5_0_i2);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_rval_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_boxed_rval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_rval_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_boxed_rval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_rval_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_boxed_rval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_boxed_rval_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_boxed_rval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_boxed_rval_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("((java.lang.Object) (", 21);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_rval_5_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_boxed_rval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_boxed_rval_5_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_boxed_rval_5_0,12)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module85)
	MR_init_entry1(ml_backend__mlds_to_java__output_unboxed_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_unboxed_rval_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_unboxed_rval_5_0,4,6,7,8,9,10,11,2,13,14)
	MR_init_label2(ml_backend__mlds_to_java__output_unboxed_rval_5_0,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_unboxed_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_unboxed_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_unboxed_rval_5_0_i2);
	}
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("((", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_bracketed_rval_4_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("()", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("((", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_unboxed_rval_5_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_rval_5_0,16)
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

MR_decl_entry(ml_backend__java_util__java_unary_prefix_op_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module86)
	MR_init_entry1(ml_backend__mlds_to_java__output_std_unop_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_std_unop_5_0);
	MR_init_label5(ml_backend__mlds_to_java__output_std_unop_5_0,19,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_std_unop'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_std_unop_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_std_unop_5_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("/* tag */  0", 12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_std_unop_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__java_util__java_unary_prefix_op_2_0,
		ml_backend__mlds_to_java__output_std_unop_5_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_std_unop_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_std_unop_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_std_unop_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_std_unop_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_std_unop_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_std_unop_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_std_unop_5_0,8)
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

MR_decl_entry(ml_backend__java_util__java_string_compare_op_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module87)
	MR_init_entry1(ml_backend__mlds_to_java__output_binop_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_binop_6_0);
	MR_init_label10(ml_backend__mlds_to_java__output_binop_6_0,4,5,6,2,10,12,13,14,15,16)
	MR_init_label10(ml_backend__mlds_to_java__output_binop_6_0,17,8,22,21,28,29,30,33,32,38)
	MR_init_label10(ml_backend__mlds_to_java__output_binop_6_0,37,43,45,42,49,50,51,19,53,54)
	MR_init_label4(ml_backend__mlds_to_java__output_binop_6_0,55,56,57,58)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_binop'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_binop_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r4;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_bracketed_rval_4_0,
		ml_backend__mlds_to_java__output_binop_6_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_binop_6_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__java_util__java_string_compare_op_2_0,
		ml_backend__mlds_to_java__output_binop_6_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i8);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_binop_6_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".compareTo(", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_binop_6_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" 0)", 3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i19);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i22);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 3);
	MR_r7 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i19);
	}
	MR_r6 = MR_tfield(1, MR_tempr3, 1);
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i19);
	}
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i21);
	}
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r6, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i19);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	}
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i28);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_binop_6_0_i29);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".MR_value ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i30);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__java_util__java_binary_infix_op_2_0,
		ml_backend__mlds_to_java__output_binop_6_0_i33);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i32);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i45);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__java_util__java_float_compare_op_2_0,
		ml_backend__mlds_to_java__output_binop_6_0_i38);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i37);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i45);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__java_util__java_float_op_2_0,
		ml_backend__mlds_to_java__output_binop_6_0_i43);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_binop_6_0_i42);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i45);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i50);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_binary_op: invalid binary operator", 41);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__output_binop_6_0_i49);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i50);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_binop_6_0_i51);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".MR_value)", 10);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i53);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_binop_6_0_i54);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i55);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_binary_op_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i56);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_binop_6_0_i57);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_binop_6_0_i58);
MR_def_label(ml_backend__mlds_to_java__output_binop_6_0,58)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module88)
	MR_init_entry1(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0);
	MR_init_label4(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0,2,6,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rval_maybe_with_enum'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0_i6);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0_i13);
	}
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_PTAG_TESTR(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0_i13);
	}
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0_i5);
	}
MR_def_label(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0_i13);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0_i13);
	}
	}
MR_def_label(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".MR_value", 9);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module89)
	MR_init_entry1(ml_backend__mlds_to_java__output_initializer_body_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_initializer_body_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_initializer_body_5_0,55,12,97,15,16,17,62,19,34,37)
	MR_init_label10(ml_backend__mlds_to_java__output_initializer_body_5_0,21,41,39,45,46,49,50,51,98,4)
	MR_init_label4(ml_backend__mlds_to_java__output_initializer_body_5_0,6,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_initializer_body'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_initializer_body_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i55) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i97) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i98));
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_initializer_body: no_initializer", 39);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_rval_4_0);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i17);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i45);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i19);
	}
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 0;
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i45);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i21);
	}
	MR_r3 = MR_tfield(1, MR_sv(2), 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i34) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i37));
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i62) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i62) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_body_5_0_i39));
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i39);
	}
	MR_r4 = MR_tfield(3, MR_r3, 1);
	MR_r3 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_14_1, (MR_Integer) MR_r4);
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i45);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i39);
	}
	MR_r1 = MR_tfield(3, MR_sv(2), 1);
	MR_np_call_localret_ent(backend_libs__rtti__rtti_id_maybe_element_java_type_3_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i41);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i45);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 1;
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i46);
	}
	MR_r1 = (MR_Word) MR_string_const(" {", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i49);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i49);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_body_list_4_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i50);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i51);
	}
	MR_r1 = (MR_Integer) 125;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_char_3_0);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_char_3_0);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(3, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_body_5_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("/* XXX init_array */ Object[]", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" {\n\t\t", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_body_list_4_0,
		ml_backend__mlds_to_java__output_initializer_body_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_initializer_body_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module90)
	MR_init_entry1(ml_backend__mlds_to_java__output_exported_enum_constant_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_exported_enum_constant_6_0);
	MR_init_label7(ml_backend__mlds_to_java__output_exported_enum_constant_6_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_exported_enum_constant'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_exported_enum_constant_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_exported_enum_constant_6_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_exported_enum_constant_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("public static final ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_exported_enum_constant_6_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_exported_enum_constant_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_exported_enum_constant_6_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_exported_enum_constant_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_exported_enum_constant_6_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_exported_enum_constant_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_exported_enum_constant_6_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_exported_enum_constant_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_exported_enum_constant_6_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_exported_enum_constant_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_body_5_0,
		ml_backend__mlds_to_java__output_exported_enum_constant_6_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_exported_enum_constant_6_0,8)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module91)
	MR_init_entry1(fn__ml_backend__mlds_to_java__max_specialised_method_ptr_arity_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_java__max_specialised_method_ptr_arity_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_specialised_method_ptr_arity'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_java__max_specialised_method_ptr_arity_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_46_46_2_0);
MR_decl_entry(list__map2_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
MR_decl_entry(fn__term__context_init_0_0);
MR_decl_entry(fn__hlds__hlds_pred__initial_pred_id_0_0);
MR_decl_entry(fn__list__length_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
MR_decl_entry(fn__list__map_corresponding_3_0);
MR_decl_entry(fn__hlds__hlds_pred__initial_proc_id_0_0);
MR_decl_entry(fn__ml_backend__ml_type_gen__ml_gen_final_member_decl_flags_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module92)
	MR_init_entry1(ml_backend__mlds_to_java__generate_call_method_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__generate_call_method_4_0);
	MR_init_label10(ml_backend__mlds_to_java__generate_call_method_4_0,3,4,6,2,17,18,19,20,24,25)
	MR_init_label9(ml_backend__mlds_to_java__generate_call_method_4_0,26,28,22,36,21,38,39,44,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_call_method'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__generate_call_method_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__max_specialised_method_ptr_arity_0_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_method_4_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_46_46_2_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,9);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map2_4_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i6);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(6,7);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_method_4_0_i17);
	}
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,7,6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,17,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i18);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i19);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i20);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_method_4_0_i22);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_method_4_0_i24);
	}
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_pred_id_0_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i38);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i25);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_46_46_2_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i26);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,10);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i28);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,1,19);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 4) = MR_r1;
	MR_tfield(3, MR_tempr3, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(1) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_pred_id_0_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i38);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i36);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_call_method: no statements", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i21);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_pred_id_0_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i38);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_proc_id_0_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i39);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,18,0);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,7,7);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i44);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 5);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 4) = MR_r1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_type_gen__ml_gen_final_member_decl_flags_0_0,
		ml_backend__mlds_to_java__generate_call_method_4_0_i47);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__init_decl_flags_6_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module93)
	MR_init_entry1(fn__ml_backend__mlds_to_java__addr_wrapper_decl_flags_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_java__addr_wrapper_decl_flags_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'addr_wrapper_decl_flags'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_java__addr_wrapper_decl_flags_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__ml_backend__mlds__init_decl_flags_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module94)
	MR_init_entry1(ml_backend__mlds_to_java__add_to_address_map_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__add_to_address_map_2_5_0);
	MR_init_label3(ml_backend__mlds_to_java__add_to_address_map_2_5_0,12,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_to_address_map_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__add_to_address_map_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__add_to_address_map_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__add_to_address_map_2_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__mlds_to_java__add_to_address_map_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr4 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr5 = MR_r1;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr5;
	MR_sv(2) = MR_tempr4;
	MR_tempr6 = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr6, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr);
	MR_tempr3 = MR_tempr6;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, code_addr_wrapper);
	MR_r3 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ml_backend__mlds_to_java__add_to_address_map_2_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__add_to_address_map_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_java__add_to_address_map_2_5_0_i12);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module95)
	MR_init_entry1(ml_backend__mlds_to_java__add_to_address_map_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__add_to_address_map_4_0);
	MR_init_label4(ml_backend__mlds_to_java__add_to_address_map_4_0,2,6,11,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_to_address_map'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__add_to_address_map_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__java_names__flip_initial_case_1_0,
		ml_backend__mlds_to_java__add_to_address_map_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__add_to_address_map_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__add_to_address_map_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_r6 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__add_to_address_map_4_0_i6);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, code_addr_wrapper);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
MR_def_label(ml_backend__mlds_to_java__add_to_address_map_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tempr4 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,14,0);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr4;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, code_addr_wrapper);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ml_backend__mlds_to_java__add_to_address_map_4_0_i11);
MR_def_label(ml_backend__mlds_to_java__add_to_address_map_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__add_to_address_map_2_5_0);
	}
MR_def_label(ml_backend__mlds_to_java__add_to_address_map_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("generate_addr_wrapper_class: no addresses", 41);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__from_int_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module96)
	MR_init_entry1(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0);
	MR_init_label10(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,2,3,7,8,9,13,31,35,5,39)
	MR_init_label10(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,4,41,43,44,45,42,47,48,53,55)
	MR_init_label3(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,56,57,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_addr_wrapper_class'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i2);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("addrOf", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i3);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i7);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i4);
	}
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,19);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,15,3);
	MR_np_call_localret_ent(fn__ml_backend__ml_type_gen__ml_gen_final_member_decl_flags_0_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i13);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tempr10 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr10;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tempr11 = MR_sv(1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr11;
	MR_tfield(0, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr3, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr4, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 3) = (MR_Integer) 0;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr11;
	MR_tfield(0, MR_tempr5, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr5, 2) = (MR_Word) MR_string_const("ptr_num", 7);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr8, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr8, 1) = MR_tempr7;
	MR_tfield(0, MR_tempr8, 2) = MR_tempr6;
	MR_tfield(0, MR_tempr8, 3) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr8, 4) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr11;
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr4, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr6, 0) = MR_tempr4;
	MR_tfield(3, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr6, 0) = MR_tempr8;
	MR_tfield(2, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr9, 1) = MR_tempr10;
	MR_sv(5) = MR_tempr2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(1,7,8);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i31);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 5);
	MR_sv(7) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(0,7,9);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__init_decl_flags_6_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i35);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_sv(1) = MR_r4;
	MR_GOTO_LAB(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i4);
	}
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i39);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("generate_addr_wrapper_class_for_arity: no addresses", 51);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__generate_call_method_4_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i41);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__max_specialised_method_ptr_arity_0_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i43);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(2) > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i42);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i44);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MethodPtr", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i45);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__java_names__mercury_runtime_package_name_0_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i47);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const("MethodPtrN", 10);
	MR_np_call_localret_ent(fn__parse_tree__java_names__mercury_runtime_package_name_0_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i47);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i48);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i53);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i55);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i56);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__addr_wrapper_decl_flags_0_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i57);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_sv(1) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr3, 2) = MR_r1;
	MR_tfield(0, MR_tempr3, 3) = MR_tempr2;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__add_to_address_map_4_0,
		ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0_i61);
MR_def_label(ml_backend__mlds_to_java__generate_addr_wrapper_class_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module97)
	MR_init_entry1(ml_backend__mlds_to_java__create_generic_arg_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__create_generic_arg_3_0);
	MR_init_label2(ml_backend__mlds_to_java__create_generic_arg_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'create_generic_arg'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__create_generic_arg_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__from_int_1_0,
		ml_backend__mlds_to_java__create_generic_arg_3_0_i2);
MR_def_label(ml_backend__mlds_to_java__create_generic_arg_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("arg", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__create_generic_arg_3_0_i3);
MR_def_label(ml_backend__mlds_to_java__create_generic_arg_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr4, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module98)
	MR_init_entry1(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0);
	MR_init_label3(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0,20,3,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_call_method_args_from_array'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tempr6 = MR_r2;
	MR_tfield(3, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tempr7 = MR_r3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_TAG_COMMON(1,15,4);
	MR_tfield(3, MR_tempr5, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr5, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tempr8 = MR_r1;
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr8, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tempr6;
	MR_sv(2) = MR_tempr7;
	MR_sv(3) = MR_tfield(1, MR_tempr8, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_r4;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0_i14);
MR_def_label(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0_i20);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_corresponding_4_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module99)
	MR_init_entry1(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0);
	MR_init_label10(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,3,2,7,5,11,4,15,20,28,30)
	MR_init_label2(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,31,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_call_statement_for_addr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i2);
	}
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tfield(0, MR_tempr1, 0), 0);
	}
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__generate_call_method_args_from_array_5_0,
		ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i7);
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,1,20);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,20);
	MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i4);
	}
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__generate_call_method_nth_arg_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tfield(0, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(list__map_corresponding_4_0,
		ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i11);
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,1,20);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,20);
	MR_r2 = MR_tempr1;
	}
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_tbmkword(0, 5);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0,
		ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i28);
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(3);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i20);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = MR_r2;
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_tempr3;
	MR_sv(5) = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0,
		ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i28);
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,16,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_sv(7), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(7), 0) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(3,16,0);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0,
		ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i28);
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(9) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_r1;
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i30);
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i31);
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tempr9 = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr9;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_r5 = MR_tempr4;
	MR_tfield(2, MR_tempr4, 0) = MR_tempr3;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0_i37);
	}
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr4;
	MR_tfield(3, MR_tempr3, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr3, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 6) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr6, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr7, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr7, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr8, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr8, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr8, 1) = MR_tempr9;
	MR_r1 = MR_tempr8;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__generate_call_statement_for_addr_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr6 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_r5;
	MR_tfield(3, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr2, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr2, 5) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 6) = (MR_Integer) 2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tempr7 = MR_r1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr7;
	MR_r1 = MR_tempr5;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module100)
	MR_init_entry1(ml_backend__mlds_to_java__generate_call_method_nth_arg_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__generate_call_method_nth_arg_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_call_method_nth_arg'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__generate_call_method_nth_arg_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__length_1_0);
MR_decl_entry(fn__string__left_2_0);
MR_decl_entry(fn__string__right_2_0);
MR_decl_entry(fn__string__hash_1_0);
MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(fn__string__to_char_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__from_char_list_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module101)
	MR_init_entry1(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0);
	MR_init_label10(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,2,12,14,13,15,16,17,24,25,27)
	MR_init_label5(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,28,29,33,30,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_shorten_long_class_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__access_1_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 0);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i40);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i12);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__length_1_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,100)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i13);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r3;
	MR_r5 = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i29);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 44;
	MR_np_call_localret_ent(fn__string__left_2_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i15);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 44;
	MR_np_call_localret_ent(fn__string__right_2_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i16);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__hash_1_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i17);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = ((MR_Integer) MR_r1 & (MR_Integer) -1);
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
	MR_r1 = (MR_Word) MR_string_const("s_%s_%08x_%s", 12);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i24);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i25);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i27);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_list_1_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i28);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(4);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r4, (char *) (MR_Word *) MR_r3) == 0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_sv(1) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr2, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(svmap__det_insert_4_0,
		ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0_i33);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r5;
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__mlds_to_java__maybe_shorten_long_class_name_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_alnum_or_underscore_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module102)
	MR_init_entry1(fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0);
	MR_init_label2(fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_non_alphanum_underscore'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__is_alnum_or_underscore_1_0,
		fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0_i3);
MR_def_label(fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(fn__ml_backend__mlds_to_java__replace_non_alphanum_underscore_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 95;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module103)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_func_params_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_func_params_3_0);
	MR_init_label2(ml_backend__mlds_to_java__rename_class_names_func_params_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_func_params'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_func_params_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_argument_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_tempr2 = MR_tempr4;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_func_params_3_0_i3);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_func_params_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_func_params_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_func_params_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module104)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_type_3_0);
	MR_init_label10(ml_backend__mlds_to_java__rename_class_names_type_3_0,61,70,28,45,73,5,72,9,11,8)
	MR_init_label7(ml_backend__mlds_to_java__rename_class_names_type_3_0,71,19,75,23,74,36,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i70) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i45));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_type_3_0_i28);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i72) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i73) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i74) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i75) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i41));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_type_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(7) = MR_tempr2;
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__mlds_to_java__rename_class_names_type_3_0_i9);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_type_3_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		ml_backend__mlds_to_java__rename_class_names_type_3_0_i11);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_type_3_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_r1 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 3) = MR_sv(2);
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0_i61);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(3, MR_sv(7), 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_type_3_0_i19);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_func_params_3_0,
		ml_backend__mlds_to_java__rename_class_names_type_3_0_i23);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_type_3_0_i36);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_type_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module105)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_lval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_lval_3_0);
	MR_init_label10(ml_backend__mlds_to_java__rename_class_names_lval_3_0,27,4,5,6,7,28,11,12,9,29)
	MR_init_label1(ml_backend__mlds_to_java__rename_class_names_lval_3_0,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_lval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_lval_3_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_lval_3_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_lval_3_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_lval_3_0_i29));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_lval_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_field_id_3_0,
		ml_backend__mlds_to_java__rename_class_names_lval_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_lval_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_lval_3_0_i7);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_lval_3_0_i11);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_lval_3_0_i12);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 0);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_lval_3_0_i15);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_lval_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module106)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_field_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_field_id_3_0);
	MR_init_label3(ml_backend__mlds_to_java__rename_class_names_field_id_3_0,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_field_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_field_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_field_id_3_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_field_id_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_field_id_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_field_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_field_id_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_field_id_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module107)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_rval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_rval_3_0);
	MR_init_label10(ml_backend__mlds_to_java__rename_class_names_rval_3_0,85,34,86,40,7,71,32,88,16,89)
	MR_init_label10(ml_backend__mlds_to_java__rename_class_names_rval_3_0,23,70,91,4,5,92,37,94,44,90)
	MR_init_label10(ml_backend__mlds_to_java__rename_class_names_rval_3_0,48,49,55,56,51,52,54,62,93,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_rval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i85) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i86) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i7) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i70));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_lval_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i34);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i40);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(2, MR_r2, 0);
	if (MR_INT_EQ(MR_tag(MR_r3),3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i32);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r3, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i88) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i89));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i16);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r3, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i23);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i90) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i91) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i92) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i93) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i94));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_lval_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i37);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i44);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r2, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i48) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i55) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i51) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0_i54));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i49);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i62);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i56);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i62);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(2, MR_r3, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i52);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i62);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i62);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_rval_3_0_i65);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_rval_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module108)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_initializer_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_initializer_3_0);
	MR_init_label9(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,21,15,26,8,27,11,13,28,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_initializer'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_initializer_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_initializer_3_0_i15) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_initializer_3_0_i26) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_initializer_3_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_initializer_3_0_i28));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_initializer_3_0_i8);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_initializer_3_0_i11);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,14);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_initializer_3_0_i21);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_initializer_3_0_i13);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_initializer_3_0_i21);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(3, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_initializer_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module109)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_atomic_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_atomic_3_0);
	MR_init_label10(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,40,4,5,32,41,8,9,42,13,43)
	MR_init_label5(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,19,20,22,24,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_atomic'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_atomic_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i40) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i32));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_lval_3_0,
		ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i41) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i42) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i43) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i28));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_lval_3_0,
		ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i8);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i9);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i13);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(3, MR_tempr1, 9);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_lval_3_0,
		ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i19);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i20);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,15);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i22);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,16);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_atomic_3_0_i24);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 10);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 8) = MR_r1;
	MR_tfield(3, MR_tempr1, 9) = MR_sv(9);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module110)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_statement_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_statement_3_0);
	MR_init_label1(ml_backend__mlds_to_java__rename_class_names_statement_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_statement'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_statement_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,
		ml_backend__mlds_to_java__rename_class_names_statement_3_0_i2);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_statement_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module111)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_stmt_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_stmt_3_0);
	MR_init_label10(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,82,8,10,83,57,58,84,31,32,34)
	MR_init_label10(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,36,63,91,4,87,14,15,17,19,21)
	MR_init_label10(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,86,24,90,27,39,88,42,85,45,46)
	MR_init_label6(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,48,49,89,52,53,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_stmt'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_stmt_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i82) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i83) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i84) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i63));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,17);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_defn_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_tempr2 = MR_tempr4;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i8);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,18);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_statement_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i57);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_statement_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i58);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_r2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i31);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_statement_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i32);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tfield(2, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_statement_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i36);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(2, MR_tempr2, 2) = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i85) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i86) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i87) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i88) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i89) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i90) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i91));
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_atomic_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,19);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_tempr4, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr4, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr4, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr4, 6);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tempr1;
	MR_sv(8) = MR_tfield(3, MR_tempr4, 2);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i14);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i15);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i17);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,20);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i19);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,21);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_lval_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i21);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i24);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i27);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,22);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_rval_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i42);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i45);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_rval_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i46);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,23);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_switch_case_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i48);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_switch_default_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i49);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 3);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_lval_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i52);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_statement_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i53);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_statement_3_0,
		ml_backend__mlds_to_java__rename_class_names_stmt_3_0_i54);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module112)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_switch_default_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_switch_default_3_0);
	MR_init_label2(ml_backend__mlds_to_java__rename_class_names_switch_default_3_0,20,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_switch_default'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_switch_default_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_switch_default_3_0_i20);
	}
	MR_r1 = MR_tempr2;
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_switch_default_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,
		ml_backend__mlds_to_java__rename_class_names_switch_default_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_switch_default_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module113)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_defn_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_defn_3_0);
	MR_init_label10(ml_backend__mlds_to_java__rename_class_names_defn_3_0,5,6,9,10,11,13,15,17,20,22)
	MR_init_label1(ml_backend__mlds_to_java__rename_class_names_defn_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_defn'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_defn_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 3);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_defn_3_0_i13);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_defn_3_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_COMMON(6,24);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_defn_3_0);
	MR_tfield(0, MR_tempr3, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 3) = MR_r1;
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr4, 0);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_defn_3_0_i5);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_defn_3_0_i6);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_r3 = MR_tempr2;
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_defn_3_0_i2);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_r2;
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_defn_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_initializer_3_0,
		ml_backend__mlds_to_java__rename_class_names_defn_3_0_i11);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_defn_3_0_i2);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,25);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_argument_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr3 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r5;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr4, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr4, 4);
	MR_tempr5 = MR_r2;
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 0);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_defn_3_0_i15);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,26);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__rename_class_names_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__mlds_to_java__rename_class_names_defn_3_0_i17);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_defn_3_0_i20);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 5);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 4) = MR_sv(5);
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(ml_backend__mlds_to_java__rename_class_names_defn_3_0_i2);
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_statement_3_0,
		ml_backend__mlds_to_java__rename_class_names_defn_3_0_i22);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 3) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 4) = MR_sv(5);
	MR_r1 = MR_tempr2;
	}
MR_def_label(ml_backend__mlds_to_java__rename_class_names_defn_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module114)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_argument_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_argument_3_0);
	MR_init_label1(ml_backend__mlds_to_java__rename_class_names_argument_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_argument'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_argument_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_type_3_0,
		ml_backend__mlds_to_java__rename_class_names_argument_3_0_i2);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_argument_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module115)
	MR_init_entry1(ml_backend__mlds_to_java__rename_class_names_switch_case_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__rename_class_names_switch_case_3_0);
	MR_init_label1(ml_backend__mlds_to_java__rename_class_names_switch_case_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rename_class_names_switch_case'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__rename_class_names_switch_case_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__rename_class_names_stmt_3_0,
		ml_backend__mlds_to_java__rename_class_names_switch_case_3_0_i2);
MR_def_label(ml_backend__mlds_to_java__rename_class_names_switch_case_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module116)
	MR_init_entry1(ml_backend__mlds_to_java__output_init_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_init_2_4_0);
	MR_init_label2(ml_backend__mlds_to_java__output_init_2_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_init_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_init_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_init_2_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_init_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_init_2_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_init_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("();\n", 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module117)
	MR_init_entry1(ml_backend__mlds_to_java__output_final_pred_call_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_final_pred_call_4_0);
	MR_init_label2(ml_backend__mlds_to_java__output_final_pred_call_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_final_pred_call'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_final_pred_call_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_final_pred_call_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_final_pred_call_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_final_pred_call_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_final_pred_call_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("();\n", 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__union_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module118)
	MR_init_entry1(ml_backend__mlds_to_java__collect_env_var_names_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__collect_env_var_names_3_0);
	MR_init_label1(ml_backend__mlds_to_java__collect_env_var_names_3_0,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'collect_env_var_names'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__collect_env_var_names_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__collect_env_var_names_3_0_i5);
	}
	MR_r1 = MR_r2;
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_java__collect_env_var_names_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r3, 4);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set__union_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module119)
	MR_init_entry1(ml_backend__mlds_to_java__output_env_var_definition_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_env_var_definition_4_0);
	MR_init_label7(ml_backend__mlds_to_java__output_env_var_definition_4_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_env_var_definition'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_env_var_definition_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_env_var_definition_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_env_var_definition_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("private static int mercury_envvar_", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_env_var_definition_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_env_var_definition_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_env_var_definition_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_env_var_definition_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" =\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_env_var_definition_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_env_var_definition_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_env_var_definition_4_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_env_var_definition_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("java.lang.System.getenv(\"", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_env_var_definition_4_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_env_var_definition_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_env_var_definition_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_env_var_definition_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\") == null ? 0 : 1;\n", 20);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module120)
	MR_init_entry1(ml_backend__mlds_to_java__write_indented_line_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__write_indented_line_4_0);
	MR_init_label2(ml_backend__mlds_to_java__write_indented_line_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_indented_line'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__write_indented_line_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__write_indented_line_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__write_indented_line_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__write_indented_line_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__write_indented_line_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module121)
	MR_init_entry1(ml_backend__mlds_to_java__output_extends_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_extends_list_5_0);
	MR_init_label5(ml_backend__mlds_to_java__output_extends_list_5_0,6,7,21,5,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_extends_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_extends_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_extends_list_5_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_extends_list_5_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_extends_list_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_extends_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("extends ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_extends_list_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_extends_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_extends_list_5_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_extends_list_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(ml_backend__mlds_to_java__output_extends_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_extends_list: multiple inheritance not supported in Java", 63);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_extends_list_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module122)
	MR_init_entry1(ml_backend__mlds_to_java__output_implements_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_implements_list_4_0);
	MR_init_label4(ml_backend__mlds_to_java__output_implements_list_4_0,4,5,14,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_implements_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_implements_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_implements_list_4_0_i16);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_implements_list_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_implements_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("implements ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_implements_list_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_implements_list_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(",", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,12);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_implements_list_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_implements_list_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(ml_backend__mlds_to_java__output_implements_list_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module123)
	MR_init_entry1(ml_backend__mlds_to_java__output_class_body_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_class_body_7_0);
	MR_init_label10(ml_backend__mlds_to_java__output_class_body_7_0,3,34,8,10,11,12,13,14,15,16)
	MR_init_label6(ml_backend__mlds_to_java__output_class_body_7_0,17,18,19,21,23,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_class_body'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_class_body_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(ml_backend__mlds_to_java__output_class_body_7_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_class_body_7_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_class_body_7_0_i21) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_class_body_7_0_i25) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_class_body_7_0_i34));
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_defn_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,13);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(list__filter_3_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_enum_constant_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("private ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(int val) {\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("super(val);\n", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_class_body_7_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r5;
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_defns_6_0);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("cannot use package as a type.", 29);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_class_body_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_class_body: structs not supported in Java.", 49);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module124)
	MR_init_entry1(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_initializer_alloc_only_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,21,15,38,18,19,39,4,5,8,10)
	MR_init_label2(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,11,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_initializer_alloc_only'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i21) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i15) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i39));
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_initializer_alloc_only: no_initializer", 45);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_initializer_alloc_only: init_obj", 39);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("()", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_tfield(3, MR_r2, 0);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("/* XXX init_array */ Object", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__output_initializer_alloc_only_5_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_type_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module125)
	MR_init_entry1(ml_backend__mlds_to_java__output_data_defn_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_data_defn_7_0);
	MR_init_label10(ml_backend__mlds_to_java__output_data_defn_7_0,2,3,4,42,79,88,46,47,72,49)
	MR_init_label10(ml_backend__mlds_to_java__output_data_defn_7_0,89,67,68,69,70,48,18,19,24,28)
	MR_init_label8(ml_backend__mlds_to_java__output_data_defn_7_0,30,31,36,40,6,7,12,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_data_defn'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_data_defn_7_0)
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
	MR_sv(5) = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(5)),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i42) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i6));
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i88);
	}
	MR_r4 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i79);
	}
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i46);
	}
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i47);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(4)),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i72) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i49) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i89) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i89));
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(4)),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i89) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i67) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i69) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i69) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i68) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i89) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i89) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i89) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i89) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_data_defn_7_0_i70));
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(4), 1);
	if (MR_INT_NE(MR_tag(MR_tempr1),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i89);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_9_2, (MR_Integer) MR_tempr2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("null", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("false", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'\\u0000\'", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("get_type_initializer: variable has unknown_type", 47);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i48);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i24);
	}
	MR_r6 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i28);
	}
	}
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_body_5_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i24);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i31);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i36);
	}
	MR_r6 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i40);
	}
	}
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_body_5_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i36);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i12);
	}
	MR_r6 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i16);
	}
	}
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_body_5_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
MR_def_label(ml_backend__mlds_to_java__output_data_defn_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_data_defn_7_0_i12);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_alloc_only_5_0,
		ml_backend__mlds_to_java__output_data_defn_7_0_i88);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module126)
	MR_init_entry1(ml_backend__mlds_to_java__output_func_decl_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_func_decl_8_0);
	MR_init_label10(ml_backend__mlds_to_java__output_func_decl_8_0,5,8,10,11,12,13,15,16,20,21)
	MR_init_label4(ml_backend__mlds_to_java__output_func_decl_8_0,22,43,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_func_decl'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_func_decl_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_func_decl_8_0_i20);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr3);
	MR_tempr4 = MR_r6;
	MR_r4 = MR_tfield(0, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_func_decl_8_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr4, 0);
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_func_decl_8_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_r6, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_r6, 0);
	MR_r1 = (MR_Word) MR_string_const("java.lang.Object []", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_func_decl_8_0_i15);
	}
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_char_3_0);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_param_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i43);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_r6, 0);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i22);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_func_decl_8_0_i24);
	}
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_char_3_0);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i25);
MR_def_label(ml_backend__mlds_to_java__output_func_decl_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_param_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(",\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_func_decl_8_0_i43);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(fn__set__delete_2_0);
MR_decl_entry(fn__set__insert_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module127)
	MR_init_entry1(fn__ml_backend__mlds_to_java__while_exit_methods_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_java__while_exit_methods_2_0);
	MR_init_label5(fn__ml_backend__mlds_to_java__while_exit_methods_2_0,7,2,3,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'while_exit_methods'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_java__while_exit_methods_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__while_exit_methods_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__while_exit_methods_2_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__member_2_0,
		fn__ml_backend__mlds_to_java__while_exit_methods_2_0_i7);
MR_def_label(fn__ml_backend__mlds_to_java__while_exit_methods_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__ml_backend__mlds_to_java__while_exit_methods_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__set__delete_2_0,
		fn__ml_backend__mlds_to_java__while_exit_methods_2_0_i10);
MR_def_label(fn__ml_backend__mlds_to_java__while_exit_methods_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(fn__ml_backend__mlds_to_java__while_exit_methods_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r3 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__set__insert_2_0,
		fn__ml_backend__mlds_to_java__while_exit_methods_2_0_i10);
MR_def_label(fn__ml_backend__mlds_to_java__while_exit_methods_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__set__delete_2_0,
		fn__ml_backend__mlds_to_java__while_exit_methods_2_0_i12);
MR_def_label(fn__ml_backend__mlds_to_java__while_exit_methods_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__set__delete_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module128)
	MR_init_entry1(ml_backend__mlds_to_java__output_boxed_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_boxed_args_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_boxed_args_5_0,50,33,3,11,13,14,15,16,9,18)
	MR_init_label4(ml_backend__mlds_to_java__output_boxed_args_5_0,19,21,24,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_boxed_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_boxed_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_boxed_args_5_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_boxed_args_5_0_i53);
	}
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_boxed_args: length mismatch.", 35);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_boxed_args_5_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		ml_backend__mlds_to_java__output_boxed_args_5_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_boxed_args_5_0_i9);
	}
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_args_5_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_args_5_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_args_5_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_boxed_args_5_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_args_5_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("((java.lang.Object) (", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_args_5_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_boxed_args_5_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("))", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_args_5_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_boxed_args_5_0_i53);
	}
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_boxed_args_5_0_i24);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_boxed_args_5_0_i50);
MR_def_label(ml_backend__mlds_to_java__output_boxed_args_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module129)
	MR_init_entry1(ml_backend__mlds_to_java__output_args_as_array_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_args_as_array_5_0);
	MR_init_label2(ml_backend__mlds_to_java__output_args_as_array_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_args_as_array'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_args_as_array_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("new java.lang.Object[] { ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_args_as_array_5_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_args_as_array_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_boxed_args_5_0,
		ml_backend__mlds_to_java__output_args_as_array_5_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_args_as_array_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("} ", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module130)
	MR_init_entry1(ml_backend__mlds_to_java__output_unboxed_result_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_unboxed_result_5_0);
	MR_init_label10(ml_backend__mlds_to_java__output_unboxed_result_5_0,4,6,7,8,9,10,11,2,15,16)
	MR_init_label4(ml_backend__mlds_to_java__output_unboxed_result_5_0,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_unboxed_result'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_unboxed_result_5_0)
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
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_unboxed_result_5_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("((", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("()", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("]).", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("]", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("result[", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_unboxed_result_5_0_i20);
MR_def_label(ml_backend__mlds_to_java__output_unboxed_result_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module131)
	MR_init_entry1(ml_backend__mlds_to_java__output_assign_results_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_assign_results_8_0);
	MR_init_label10(ml_backend__mlds_to_java__output_assign_results_8_0,30,21,3,9,10,11,12,13,14,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_assign_results'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_assign_results_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__output_assign_results_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_assign_results_8_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_assign_results_8_0_i33);
	}
MR_def_label(ml_backend__mlds_to_java__output_assign_results_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_assign_results: list length mismatch.", 44);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_assign_results_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_assign_results_8_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r6;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r2;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(8) = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_assign_results_8_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_assign_results_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_assign_results_8_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_assign_results_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_lval_4_0,
		ml_backend__mlds_to_java__output_assign_results_8_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_assign_results_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_assign_results_8_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_assign_results_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_unboxed_result_5_0,
		ml_backend__mlds_to_java__output_assign_results_8_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_assign_results_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_assign_results_8_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_assign_results_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_assign_results_8_0_i30);
MR_def_label(ml_backend__mlds_to_java__output_assign_results_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module132)
	MR_init_entry1(ml_backend__mlds_to_java__output_case_cond_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_case_cond_6_0);
	MR_init_label5(ml_backend__mlds_to_java__output_case_cond_6_0,4,5,6,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_case_cond'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_case_cond_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_case_cond_6_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_case_cond_6_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_case_cond_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_case_cond_6_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_case_cond_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("case ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_case_cond_6_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_case_cond_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_case_cond_6_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_case_cond_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_case_cond_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_case_cond: cannot match ranges in Java cases", 51);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module133)
	MR_init_entry1(ml_backend__mlds_to_java__output_init_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_init_args_5_0);
	MR_init_label7(ml_backend__mlds_to_java__output_init_args_5_0,30,20,3,9,22,11,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_init_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_init_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__output_init_args_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_init_args_5_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_init_args_5_0_i33);
	}
MR_def_label(ml_backend__mlds_to_java__output_init_args_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_init_args: length mismatch.", 34);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_init_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_init_args_5_0_i20);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_init_args_5_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_init_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_init_args_5_0_i11);
	}
MR_def_label(ml_backend__mlds_to_java__output_init_args_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_init_args_5_0_i30);
MR_def_label(ml_backend__mlds_to_java__output_init_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_init_args_5_0_i22);
MR_def_label(ml_backend__mlds_to_java__output_init_args_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module134)
	MR_init_entry1(ml_backend__mlds_to_java__output_atomic_stmt_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_atomic_stmt_6_0);
	MR_init_label10(ml_backend__mlds_to_java__output_atomic_stmt_6_0,20,21,12,13,14,15,3,4,5,6)
	MR_init_label10(ml_backend__mlds_to_java__output_atomic_stmt_6_0,7,80,9,10,17,18,23,26,25,29)
	MR_init_label10(ml_backend__mlds_to_java__output_atomic_stmt_6_0,31,32,34,36,37,35,39,40,41,42)
	MR_init_label10(ml_backend__mlds_to_java__output_atomic_stmt_6_0,43,50,48,52,53,45,55,57,60,61)
	MR_init_label10(ml_backend__mlds_to_java__output_atomic_stmt_6_0,59,63,64,65,66,68,69,71,72,74)
	MR_init_label1(ml_backend__mlds_to_java__output_atomic_stmt_6_0,75)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_atomic_stmt'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_atomic_stmt_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i80));
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("gc_check not implemented.", 25);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_lval_4_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r3, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i34) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i31) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i74) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i23) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i68));
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_atomic_stmt: assign_if_in_heap", 37);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("delete_object not supported in Java.", 36);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr1,4)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i26);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_target_code_component_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i29);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("inline_target_code only works for lang_java", 43);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i32);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mark_hp not implemented.", 24);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r6 = MR_tfield(3, MR_tempr1, 3);
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 8);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i35);
	}
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(3, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(3, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(3, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i37);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_atomic_stmt: explicit secondary tag", 42);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i35);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i39);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i40);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_5_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i41);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_lval_4_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i42);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = new ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i43);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i45);
	}
	MR_sv(3) = MR_tfield(1, MR_sv(6), 0);
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i48);
	}
	MR_r1 = MR_tfield(1, MR_sv(5), 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__hand_defined_type_2_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i50);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i45);
	}
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i52);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 46;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i53);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(3), 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_class_name_and_arity_4_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i55);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i55);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__type_is_array_1_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i57);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_atomic_stmt_6_0_i59);
	}
	MR_r1 = (MR_Word) MR_string_const(" {", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i60);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_init_args_5_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i61);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i65);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i63);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_init_args_5_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i64);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i65);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i66);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i69);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("foreign language interfacing not implemented", 44);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i72);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("restore_hp not implemented.", 27);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_atomic_stmt_6_0_i75);
MR_def_label(ml_backend__mlds_to_java__output_atomic_stmt_6_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("trail_ops not implemented.", 26);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module135)
	MR_init_entry1(ml_backend__mlds_to_java__output_call_rval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_call_rval_4_0);
	MR_init_label1(ml_backend__mlds_to_java__output_call_rval_4_0,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_call_rval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_call_rval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_call_rval_4_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_call_rval_4_0_i20);
	}
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(ml_backend__mlds_to_java__mlds_output_code_addr_5_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_call_rval_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_bracketed_rval_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__make_singleton_set_1_0);
MR_decl_entry(fn__set__union_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module136)
	MR_init_entry1(ml_backend__mlds_to_java__output_statements_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_statements_7_0);
	MR_init_label8(ml_backend__mlds_to_java__output_statements_7_0,35,5,7,9,10,12,11,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_statements'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_statements_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_statements_7_0_i35);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 4;
	MR_np_tailcall_ent(fn__set__make_singleton_set_1_0);
MR_def_label(ml_backend__mlds_to_java__output_statements_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r4, 1);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statement_7_0,
		ml_backend__mlds_to_java__output_statements_7_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_statements_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(set__member_2_0,
		ml_backend__mlds_to_java__output_statements_7_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_statements_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_statements_7_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_localcall_lab(ml_backend__mlds_to_java__output_statements_7_0,
		ml_backend__mlds_to_java__output_statements_7_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_statements_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(fn__set__union_2_0,
		ml_backend__mlds_to_java__output_statements_7_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_statements_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		ml_backend__mlds_to_java__output_statements_7_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_statements_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_statements_7_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__mlds_to_java__output_statements_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 4;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__set__delete_2_0);
MR_def_label(ml_backend__mlds_to_java__output_statements_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module137)
	MR_init_entry1(ml_backend__mlds_to_java__output_statement_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_statement_7_0);
	MR_init_label1(ml_backend__mlds_to_java__output_statement_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_statement'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_statement_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
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
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_statement_7_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_statement_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_stmt_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__assoc_list__from_corresponding_lists_2_0);
MR_decl_entry(fn__string__duplicate_char_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module138)
	MR_init_entry1(ml_backend__mlds_to_java__output_stmt_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_stmt_8_0);
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,6,7,8,232,10,11,9,13,14,204)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,207,208,209,210,211,212,213,206,215,216)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,217,218,222,219,225,125,126,127,128,129)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,137,138,139,140,130,142,145,144,147,148)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,149,231,3,16,17,18,19,240,21,24)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,23,20,32,33,30,34,35,37,27,40)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,45,47,48,43,50,51,42,54,39,56)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,57,58,55,59,61,62,63,64,65,66)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,60,68,69,70,71,73,250,75,80,82)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,83,79,77,89,90,95,96,98,99,101)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,102,103,104,105,106,107,108,110,113,114)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,116,117,118,120,121,152,153,155,158,157)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,162,163,164,161,166,167,168,169,170,173)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,174,175,176,178,179,180,181,182,183,184)
	MR_init_label10(ml_backend__mlds_to_java__output_stmt_8_0,185,186,187,188,189,190,191,192,193,194)
	MR_init_label8(ml_backend__mlds_to_java__output_stmt_8_0,195,196,197,198,199,200,201,202)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_stmt'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_stmt_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i204) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i125) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i231));
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i10);
	}
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_defns_6_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i232);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statements_7_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i185);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i206);
	}
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i207);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("do\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i208);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statement_7_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i209);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i210);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("while (", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i211);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i212);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i213);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_java__while_exit_methods_2_0);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i215);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("while (", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i216);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i217);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i218);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i219);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_sv(6), 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i219);
	}
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i222);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{  /* Unreachable code */  }\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i96);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statement_7_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i225);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__ml_backend__mlds_to_java__while_exit_methods_2_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i126);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("if (", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i127);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i128);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i129);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i130);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(5);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i130);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i130);
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
	MR_sv(5) = MR_tfield(1, MR_sv(6), 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statement_7_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i137);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i138);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("else\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i139);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statement_7_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i140);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__set__union_2_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statement_7_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i142);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i144);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i145);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__set__union_2_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_sv(6), 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i147);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("else\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i148);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statement_7_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i149);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__set__union_2_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r4, 0),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i178) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i152) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i110) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i98) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i16) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i155) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i186) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i101) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_stmt_8_0_i3));
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(3, MR_r4, 1);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_atomic_stmt_6_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i96);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tfield(3, MR_tempr3, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr3, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr3, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr3, 5);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i21);
	}
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,240)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i20);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i23);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_lval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i24);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i240);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("java.lang.Object [] result = ", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i240);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tfield(2, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i27);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr2;
	MR_r2 = MR_tfield(1, MR_sv(5), 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_bracketed_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i32);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i33);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_call_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i34);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i35);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_rval_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i37);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i250);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i40);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i39);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(9);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i42);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i45);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i43);
	}
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("((", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i47);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i48);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i54);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(10);
	MR_r1 = (MR_Word) MR_string_const("((", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i50);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i51);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i54);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("((java.lang.Object[]) ", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i54);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i56);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i55);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_bracketed_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i57);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i58);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i59);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__max_specialised_method_ptr_arity_0_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i61);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(5) > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i60);
	}
	MR_r1 = (MR_Word) MR_string_const("((jmercury.runtime.MethodPtr", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i62);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i63);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i64);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_bracketed_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i65);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").call___0_0(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i66);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_boxed_args_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i71);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("((jmercury.runtime.MethodPtrN) ", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i68);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_bracketed_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i69);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(").call___0_0(", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i70);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_args_as_array_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i71);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i73);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i75);
	}
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i89);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(9);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i77);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i80);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i79);
	}
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const(").", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i82);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i83);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("()", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i250);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i250);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i250);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i90);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(7);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i90);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_assign_results_8_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i90);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i95);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i96);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 4;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__set__make_singleton_set_1_0);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i99);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_stmt: computed gotos not supported in Java.", 50);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(3, MR_r4, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i102);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i103);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = new jmercury.runtime.Commit();\n", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i104);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i105);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("throw ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i106);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i107);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i108);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__set__make_singleton_set_1_0);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i120);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i116);
	}
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i113);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("break;\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i114);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__set__make_singleton_set_1_0);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i117);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("continue;\n", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i118);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__set__make_singleton_set_1_0);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i121);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_stmt: gotos not supported in Java.", 41);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_java__this_file_0_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i153);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("output_stmt: labels not supported in Java.", 42);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(3, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i157);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i158);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("return;\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i176);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_stmt_8_0_i161);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i162);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("return ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i163);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i164);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i176);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tfield(0, MR_r3, 1);
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(fn__assoc_list__from_corresponding_lists_2_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i166);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("return new java.lang.Object[] {\n", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i167);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i168);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_r2 = (((MR_Integer) MR_sv(2) + (MR_Integer) 1) * (MR_Integer) 2);
	MR_np_call_localret_ent(fn__string__duplicate_char_2_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i169);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i170);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__IntroducedFrom__pred__output_stmt__3733__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i173);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i174);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i175);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i176);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__set__make_singleton_set_1_0);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r5;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i179);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("switch (", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i180);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_rval_maybe_with_enum_4_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i181);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") {\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i182);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_switch_cases_9_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i183);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_5_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i184);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i185);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(11);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i187);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("try\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i188);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i189);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i190);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statement_7_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i191);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,191)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i192);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i193);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i194);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("catch (jmercury.runtime.Commit commit_variable)\n", 48);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i195);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i196);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i197);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i198);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statement_7_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i199);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i200);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i201);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Integer) 3;
	MR_np_call_localret_ent(fn__set__delete_2_0,
		ml_backend__mlds_to_java__output_stmt_8_0_i202);
MR_def_label(ml_backend__mlds_to_java__output_stmt_8_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(fn__set__union_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module139)
	MR_init_entry1(ml_backend__mlds_to_java__output_switch_cases_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_switch_cases_9_0);
	MR_init_label7(ml_backend__mlds_to_java__output_switch_cases_9_0,27,5,6,8,10,11,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_switch_cases'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_switch_cases_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_switch_cases_9_0_i27);
	}
	MR_r5 = MR_r6;
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_switch_default_8_0);
MR_def_label(ml_backend__mlds_to_java__output_switch_cases_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_r5, 1);
	MR_r5 = MR_tfield(1, MR_r5, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_switch_case_8_0,
		ml_backend__mlds_to_java__output_switch_cases_9_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_switch_cases_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(5);
	}
	MR_np_localcall_lab(ml_backend__mlds_to_java__output_switch_cases_9_0,
		ml_backend__mlds_to_java__output_switch_cases_9_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_switch_cases_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__member_2_0,
		ml_backend__mlds_to_java__output_switch_cases_9_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_switch_cases_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_switch_cases_9_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__set__delete_2_0,
		ml_backend__mlds_to_java__output_switch_cases_9_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_switch_cases_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 4;
	}
	MR_np_call_localret_ent(fn__set__insert_2_0,
		ml_backend__mlds_to_java__output_switch_cases_9_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_switch_cases_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__set__union_2_0);
MR_def_label(ml_backend__mlds_to_java__output_switch_cases_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__set__union_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module140)
	MR_init_entry1(ml_backend__mlds_to_java__output_switch_case_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_switch_case_8_0);
	MR_init_label10(ml_backend__mlds_to_java__output_switch_case_8_0,2,4,5,6,8,10,11,12,13,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_switch_case'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_switch_case_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
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
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_case_cond_6_0,
		ml_backend__mlds_to_java__output_switch_case_8_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_switch_case_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_case_cond_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_java__output_switch_case_8_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_switch_case_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_switch_case_8_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_switch_case_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_stmt_8_0,
		ml_backend__mlds_to_java__output_switch_case_8_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_switch_case_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 4;
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__member_2_0,
		ml_backend__mlds_to_java__output_switch_case_8_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_switch_case_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_switch_case_8_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_switch_case_8_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_switch_case_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_switch_case_8_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_switch_case_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("break;\n", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_switch_case_8_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_switch_case_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__set__insert_2_0,
		ml_backend__mlds_to_java__output_switch_case_8_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_switch_case_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 4;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__set__delete_2_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_switch_case_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module141)
	MR_init_entry1(ml_backend__mlds_to_java__output_switch_default_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_switch_default_8_0);
	MR_init_label10(ml_backend__mlds_to_java__output_switch_default_8_0,12,13,14,15,16,17,9,34,4,5)
	MR_init_label2(ml_backend__mlds_to_java__output_switch_default_8_0,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_switch_default'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_switch_default_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r5;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_switch_default_8_0_i34);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_switch_default_8_0_i9);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_r4;
	MR_sv(3) = MR_tempr3;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_switch_default_8_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_switch_default_8_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("default: /*NOTREACHED*/\n", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_switch_default_8_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_switch_default_8_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_switch_default_8_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("throw new jmercury.runtime.UnreachableDefault();\n", 49);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_switch_default_8_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__set__make_singleton_set_1_0);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
	MR_r2 = (MR_Integer) 4;
	MR_np_tailcall_ent(fn__set__make_singleton_set_1_0);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r5, 0);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_switch_default_8_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_switch_default_8_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("default:\n", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_switch_default_8_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_switch_default_8_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_switch_default_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_stmt_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module142)
	MR_init_entry1(ml_backend__mlds_to_java__output_func_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_func_9_0);
	MR_init_label9(ml_backend__mlds_to_java__output_func_9_0,4,5,6,7,8,9,10,11,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_func'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_func_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r7,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_func_9_0_i20);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(1, MR_r7, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_func_decl_8_0,
		ml_backend__mlds_to_java__output_func_9_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_func_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_func_9_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_func_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_func_9_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_func_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_func_9_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_func_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_func_9_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_func_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_statement_7_0,
		ml_backend__mlds_to_java__output_func_9_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_func_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_func_9_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_func_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_func_9_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_func_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_func_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module143)
	MR_init_entry1(ml_backend__mlds_to_java__output_defn_body_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_defn_body_8_0);
	MR_init_label4(ml_backend__mlds_to_java__output_defn_body_8_0,5,7,34,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_defn_body'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_defn_body_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_defn_body_8_0_i7);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_defn_body_8_0_i5);
	}
	MR_r4 = MR_tfield(2, MR_tempr2, 0);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_defn_body_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_data_defn_7_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_defn_body_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_r9 = MR_tfield(1, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_defn_body_8_0_i34);
	}
	MR_tempr1 = MR_tempr2;
	MR_r6 = MR_tfield(1, MR_r6, 1);
	MR_r7 = MR_tfield(1, MR_tempr1, 2);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_func_9_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_defn_body_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 2);
	MR_r2 = MR_tfield(1, MR_r9, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_pred_proc_id_4_0,
		ml_backend__mlds_to_java__output_defn_body_8_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_defn_body_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_func_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module144)
	MR_init_entry1(ml_backend__mlds_to_java__output_defn_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_defn_6_0);
	MR_init_label9(ml_backend__mlds_to_java__output_defn_6_0,2,3,7,8,10,11,12,4,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_defn'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_defn_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_defn_6_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_defn_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_defn_6_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_defn_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_defn_6_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(7), 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_defn_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("/* external:\n", 13);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_defn_6_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_defn_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_decl_flags_4_0,
		ml_backend__mlds_to_java__output_defn_6_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_defn_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_r9 = MR_tfield(1, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_r9,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_defn_6_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tfield(1, MR_tempr1, 1);
	MR_r7 = MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_func_9_0,
		ml_backend__mlds_to_java__output_defn_6_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_defn_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(1, MR_sv(7), 1);
	MR_sv(7) = MR_tfield(1, MR_sv(7), 2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_r9, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_pred_proc_id_4_0,
		ml_backend__mlds_to_java__output_defn_6_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_defn_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_func_9_0,
		ml_backend__mlds_to_java__output_defn_6_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_defn_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("*/\n", 3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_defn_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_decl_flags_4_0,
		ml_backend__mlds_to_java__output_defn_6_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_defn_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_defn_body_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module145)
	MR_init_entry1(ml_backend__mlds_to_java__output_interface_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_interface_3_0);
	MR_init_label10(ml_backend__mlds_to_java__output_interface_3_0,4,6,7,8,9,10,13,15,11,34)
	MR_init_label2(ml_backend__mlds_to_java__output_interface_3_0,2,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_interface'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_interface_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_interface_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__output_interface_3_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_interface_3_0_i6);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_interface_3_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_interface_3_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_interface_3_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_interface_3_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_interface_3_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_hash_string((MR_String) MR_sv(2)) & (MR_Integer) 63);
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r2 * (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_19_0)[(MR_Integer) MR_tempr1];
	MR_r4 = MR_tempr2;
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_sv(2)) == 0))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_interface_3_0_i15);
	}
	MR_r2 = ((MR_Word *) &mercury_vector_common_19_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r2,0))
		continue;
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_interface_3_0_i11);
	}
	break; } /* end while */
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i38) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_interface_3_0_i11));
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_interface_3_0_i34);
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_interface: interface was not a class.", 44);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_interface_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module146)
	MR_init_entry1(ml_backend__mlds_to_java__defn_is_const_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__defn_is_const_1_0);
	MR_init_label1(ml_backend__mlds_to_java__defn_is_const_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'defn_is_const'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__defn_is_const_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__constness_1_0,
		ml_backend__mlds_to_java__defn_is_const_1_0_i2);
MR_def_label(ml_backend__mlds_to_java__defn_is_const_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module147)
	MR_init_entry1(ml_backend__mlds_to_java__output_enum_constant_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_enum_constant_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_enum_constant'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_enum_constant_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module148)
	MR_init_entry1(ml_backend__mlds_to_java__output_init_data_statements_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_init_data_statements_5_0);
	MR_init_label9(ml_backend__mlds_to_java__output_init_data_statements_5_0,46,6,7,10,12,26,4,48,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_init_data_statements'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_init_data_statements_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(ml_backend__mlds_to_java__output_init_data_statements_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_init_data_statements_5_0_i49);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 3);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_init_data_statements_5_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_tempr4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_init_data_statements_5_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_init_data_statements_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		ml_backend__mlds_to_java__output_init_data_statements_5_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_init_data_statements_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(6)),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_init_data_statements_5_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_init_data_statements_5_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_init_data_statements_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_body_5_0,
		ml_backend__mlds_to_java__output_init_data_statements_5_0_i12);
MR_def_label(ml_backend__mlds_to_java__output_init_data_statements_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_init_data_statements_5_0_i26);
MR_def_label(ml_backend__mlds_to_java__output_init_data_statements_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_init_data_statements_5_0_i46);
MR_def_label(ml_backend__mlds_to_java__output_init_data_statements_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("output_init_data_statements: not mlds_data", 42);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		ml_backend__mlds_to_java__output_init_data_statements_5_0_i48);
MR_def_label(ml_backend__mlds_to_java__output_init_data_statements_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_init_data_statements_5_0_i46);
MR_def_label(ml_backend__mlds_to_java__output_init_data_statements_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module149)
	MR_init_entry1(ml_backend__mlds_to_java__output_init_data_method_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_init_data_method_7_0);
	MR_init_label8(ml_backend__mlds_to_java__output_init_data_method_7_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_init_data_method'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_init_data_method_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_init_data_method_7_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_init_data_method_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_init_data_method_7_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_init_data_method_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("() {\n", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_init_data_method_7_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_init_data_method_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("private static void MR_init_data_", 33);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_init_data_method_7_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_init_data_method_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_init_data_method_7_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_init_data_method_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_init_data_statements_5_0,
		ml_backend__mlds_to_java__output_init_data_method_7_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_init_data_method_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_init_data_method_7_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_init_data_method_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_init_data_method_7_0_i9);
MR_def_label(ml_backend__mlds_to_java__output_init_data_method_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module150)
	MR_init_entry1(ml_backend__mlds_to_java__output_call_init_data_method_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_call_init_data_method_4_0);
	MR_init_label4(ml_backend__mlds_to_java__output_call_init_data_method_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_call_init_data_method'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_call_init_data_method_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_call_init_data_method_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_call_init_data_method_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__mlds_to_java__output_call_init_data_method_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_call_init_data_method_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("();\n", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_call_init_data_method_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_call_init_data_method_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_init_data_", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_java__output_call_init_data_method_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_call_init_data_method_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module151)
	MR_init_entry1(ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0);
	MR_init_label2(ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rtti_defns_assignments'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0)
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
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("//\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defns_assignments_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module152)
	MR_init_entry1(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0);
	MR_init_label10(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,6,79,53,9,54,12,27,30,14,34)
	MR_init_label8(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,32,37,40,41,42,44,3,78)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rtti_defn_assignments_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i78) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i6) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i79) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i3));
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_rtti_defn_assignments_2: init_obj", 40);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(2, MR_tempr2, 0);
	MR_r6 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i9);
	}
	}
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_rtti_defn_assignments_2: is_array", 40);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i12);
	}
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i37);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i14);
	}
	MR_r4 = MR_tfield(1, MR_r6, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i27) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i30));
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r4),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i54) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i54) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i32));
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i32);
	}
	MR_r6 = MR_tfield(3, MR_r4, 1);
	MR_r4 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_14_2, (MR_Integer) MR_r6);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r4, 0);
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i37);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r6, 1);
	MR_np_call_localret_ent(backend_libs__rtti__rtti_id_maybe_element_java_type_3_0,
		ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i34);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i37);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Integer) 1;
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i40);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i41);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".init(", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i42);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list__2589__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(",\n\t\t", 4);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0_i44);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(20,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_tempr2, 0);
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module153)
	MR_init_entry1(ml_backend__mlds_to_java__output_rtti_defn_assignments_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_rtti_defn_assignments_5_0);
	MR_init_label1(ml_backend__mlds_to_java__output_rtti_defn_assignments_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rtti_defn_assignments'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_rtti_defn_assignments_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 3);
	MR_tempr2 = MR_tag(MR_tempr1);
	if (((MR_tempr2 == MR_mktag((MR_Integer) 1)) || (MR_tempr2 == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_rtti_defn_assignments_5_0_i3);
	}
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_r4 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_rtti_defn_assignments_2_6_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_rtti_defn_assignments_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_rtti_defn_assignments: expected mlds_data", 48);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module154)
	MR_init_entry1(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_rtti_array_assignments_8_0);
	MR_init_label7(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_rtti_array_assignments'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_rtti_array_assignments_8_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		ml_backend__mlds_to_java__output_rtti_array_assignments_8_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_rtti_array_assignments_8_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__output_rtti_array_assignments_8_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] = ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_rtti_array_assignments_8_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_initializer_body_5_0,
		ml_backend__mlds_to_java__output_rtti_array_assignments_8_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_rtti_array_assignments_8_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_rtti_array_assignments_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module155)
	MR_init_entry1(ml_backend__mlds_to_java__output_pred_proc_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_pred_proc_id_4_0);
	MR_init_label7(ml_backend__mlds_to_java__output_pred_proc_id_4_0,4,5,6,7,8,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_pred_proc_id'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_pred_proc_id_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_pred_proc_id_4_0_i18);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("// pred_id: ", 12);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_pred_proc_id_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_pred_proc_id_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		ml_backend__mlds_to_java__output_pred_proc_id_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_pred_proc_id_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__output_pred_proc_id_4_0_i6);
MR_def_label(ml_backend__mlds_to_java__output_pred_proc_id_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", proc_id: ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_pred_proc_id_4_0_i7);
MR_def_label(ml_backend__mlds_to_java__output_pred_proc_id_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ml_backend__mlds_to_java__output_pred_proc_id_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_pred_proc_id_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_java__output_pred_proc_id_4_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_pred_proc_id_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(ml_backend__mlds_to_java__output_pred_proc_id_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module156)
	MR_init_entry1(ml_backend__mlds_to_java__output_param_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_param_6_0);
	MR_init_label4(ml_backend__mlds_to_java__output_param_6_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_param'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_param_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_param_6_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_param_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		ml_backend__mlds_to_java__output_param_6_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_param_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		ml_backend__mlds_to_java__output_param_6_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_param_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__mlds_to_java__output_param_6_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_param_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module157)
	MR_init_entry1(ml_backend__mlds_to_java__output_target_code_component_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_target_code_component_4_0);
	MR_init_label10(ml_backend__mlds_to_java__output_target_code_component_4_0,35,53,79,38,39,5,44,45,83,10)
	MR_init_label10(ml_backend__mlds_to_java__output_target_code_component_4_0,9,13,14,15,16,19,51,18,21,22)
	MR_init_label3(ml_backend__mlds_to_java__output_target_code_component_4_0,24,25,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_target_code_component'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_target_code_component_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_java__output_target_code_component_4_0_i35) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_target_code_component_4_0_i53) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_target_code_component_4_0_i5) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_java__output_target_code_component_4_0_i44));
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_target_code_component_4_0_i79);
	}
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r2, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i38);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_context_4_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i39);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_rval_4_0);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(3, MR_r2, 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_target_code_component_4_0_i45);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_lval_4_0);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_target_code_component_4_0_i83);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_type_5_0);
	}
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_target_code_component_4_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_name_3_0);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i13);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i15);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i16);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_target_code_component_4_0_i18);
	}
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i28);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i22);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_target_code_component_4_0_i24);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i25);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i25);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_target_code_component_4_0_i51);
MR_def_label(ml_backend__mlds_to_java__output_target_code_component_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module158)
	MR_init_entry1(ml_backend__mlds_to_java__pre_initialise_mutable_last_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__pre_initialise_mutable_last_context_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_last_context'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__pre_initialise_mutable_last_context_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__pre_initialise_mutable_last_context_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_last_context");
{
#line 4667 "mlds_to_java.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ml_backend__mlds_to_java__mutable_variable_last_context_lock, MR_MUTEX_ATTR);
#endif
;}
#line 21995 "ml_backend.mlds_to_java.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_last_context");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module159)
	MR_init_entry1(ml_backend__mlds_to_java__initialise_mutable_last_context_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__initialise_mutable_last_context_0_0);
	MR_init_label1(ml_backend__mlds_to_java__initialise_mutable_last_context_0_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_last_context'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__initialise_mutable_last_context_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__initialise_mutable_last_context_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_last_context");
{
#line 4667 "mlds_to_java.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&ml_backend__mlds_to_java__mutable_variable_last_context_lock, MR_MUTEX_ATTR);
#endif
;}
#line 22032 "ml_backend.mlds_to_java.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_last_context");
#undef	MR_PROC_LABEL
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		ml_backend__mlds_to_java__initialise_mutable_last_context_0_0_i2);
MR_def_label(ml_backend__mlds_to_java__initialise_mutable_last_context_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__initialise_mutable_last_context_0_0
{
#line 4667 "mlds_to_java.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif
;}
#line 22049 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__initialise_mutable_last_context_0_0
	X = MR_r1;
{
#line 4667 "mlds_to_java.m"
ml_backend__mlds_to_java__mutable_variable_last_context = X;
;}
#line 22060 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__ml_backend__mlds_to_java__initialise_mutable_last_context_0_0
{
#line 4667 "mlds_to_java.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&ml_backend__mlds_to_java__mutable_variable_last_context_lock,
                "ml_backend__mlds_to_java__mutable_variable_last_context_lock");
#endif
;}
#line 22072 "ml_backend.mlds_to_java.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_var_name_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module160)
	MR_init_entry1(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_java__call_method_inputs_0_0);
	MR_init_label3(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_var_name_0_0);
	}
MR_def_label(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__mlds_to_java__call_method_inputs_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_var_name_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module161)
	MR_init_entry1(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_java__call_method_inputs_0_0);
	MR_init_label5(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0_i2);
MR_def_label(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__mlds__mlds_var_name_0_0);
MR_def_label(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_java__call_method_inputs_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module162)
	MR_init_entry1(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_java__class_name_renaming_0_0);
	MR_init_label3(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0_i4);
MR_def_label(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_java__class_name_renaming_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_module_name_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module163)
	MR_init_entry1(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_java__class_name_renaming_0_0);
	MR_init_label4(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0_i2);
MR_def_label(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_module_name_0_0,
		__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0_i5);
MR_def_label(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ml_backend__mlds_to_java__class_name_renaming_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module164)
	MR_init_entry1(__Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0);
	MR_init_label2(__Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0_i6);
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
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
	}
MR_def_label(__Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_java__code_addr_wrapper_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module165)
	MR_init_entry1(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0);
	MR_init_label4(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0_i2);
MR_def_label(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0,2)
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
		__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0_i5);
MR_def_label(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ml_backend__mlds_to_java__code_addr_wrapper_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module166)
	MR_init_entry1(__Unify___ml_backend__mlds_to_java__exit_method_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_java__exit_method_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_java__exit_method_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module167)
	MR_init_entry1(__Compare___ml_backend__mlds_to_java__exit_method_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_java__exit_method_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_java__exit_method_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module168)
	MR_init_entry1(__Unify___ml_backend__mlds_to_java__exit_methods_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_java__exit_methods_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_java__exit_methods_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
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

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module169)
	MR_init_entry1(__Compare___ml_backend__mlds_to_java__exit_methods_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_java__exit_methods_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_java__exit_methods_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, exit_method);
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

MR_decl_entry(__Unify___ml_backend__mlds__mlds_func_params_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module170)
	MR_init_entry1(__Unify___ml_backend__mlds_to_java__func_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_java__func_info_0_0);
	MR_init_label1(__Unify___ml_backend__mlds_to_java__func_info_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_java__func_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__func_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_func_params_0_0);
MR_def_label(__Unify___ml_backend__mlds_to_java__func_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_func_params_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module171)
	MR_init_entry1(__Compare___ml_backend__mlds_to_java__func_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_java__func_info_0_0);
	MR_init_label2(__Compare___ml_backend__mlds_to_java__func_info_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_java__func_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__func_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__func_info_0_0_i2);
MR_def_label(__Compare___ml_backend__mlds_to_java__func_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__mlds_to_java__func_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__mlds__mlds_func_params_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module172)
	MR_init_entry1(__Unify___ml_backend__mlds_to_java__indent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_java__indent_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_java__indent_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module173)
	MR_init_entry1(__Compare___ml_backend__mlds_to_java__indent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_java__indent_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_java__indent_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module174)
	MR_init_entry1(__Unify___ml_backend__mlds_to_java__java_out_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_java__java_out_info_0_0);
	MR_init_label3(__Unify___ml_backend__mlds_to_java__java_out_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_java__java_out_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__java_out_info_0_0_i8);
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
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__java_out_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__java_out_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		__Unify___ml_backend__mlds_to_java__java_out_info_0_0_i4);
MR_def_label(__Unify___ml_backend__mlds_to_java__java_out_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__java_out_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, code_addr_wrapper);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___ml_backend__mlds_to_java__java_out_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_java__java_out_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module175)
	MR_init_entry1(__Compare___ml_backend__mlds_to_java__java_out_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_java__java_out_info_0_0);
	MR_init_label6(__Compare___ml_backend__mlds_to_java__java_out_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_java__java_out_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__java_out_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__java_out_info_0_0_i2);
MR_def_label(__Compare___ml_backend__mlds_to_java__java_out_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__mlds_to_java__java_out_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_java__java_out_info_0_0_i5);
MR_def_label(__Compare___ml_backend__mlds_to_java__java_out_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__java_out_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__mlds_to_java__java_out_info_0_0_i9);
MR_def_label(__Compare___ml_backend__mlds_to_java__java_out_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__java_out_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_module_name_0_0,
		__Compare___ml_backend__mlds_to_java__java_out_info_0_0_i13);
MR_def_label(__Compare___ml_backend__mlds_to_java__java_out_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__java_out_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_code_addr);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds_to_java, code_addr_wrapper);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ml_backend__mlds_to_java__java_out_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_entity_name_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module176)
	MR_init_entry1(__Unify___ml_backend__mlds_to_java__output_aux_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_java__output_aux_0_0);
	MR_init_label3(__Unify___ml_backend__mlds_to_java__output_aux_0_0,6,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_java__output_aux_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__output_aux_0_0_i15);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__output_aux_0_0_i6);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr1);
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__mlds_to_java__output_aux_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__output_aux_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_entity_name_0_0);
MR_def_label(__Unify___ml_backend__mlds_to_java__output_aux_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_java__output_aux_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_entity_name_0_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module177)
	MR_init_entry1(__Compare___ml_backend__mlds_to_java__output_aux_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_java__output_aux_0_0);
	MR_init_label9(__Compare___ml_backend__mlds_to_java__output_aux_0_0,81,43,12,55,24,31,14,75,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_java__output_aux_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i55);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i14);
	}
	MR_r3 = MR_unmkbody(MR_tempr1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i43);
	}
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i81);
	}
	MR_tempr4 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_tempr4,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i81);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Compare___ml_backend__mlds_to_java__output_aux_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_java__output_aux_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i75);
	}
	MR_r3 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ml_backend__mlds_to_java__output_aux_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i81);
	}
MR_def_label(__Compare___ml_backend__mlds_to_java__output_aux_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_java__output_aux_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i75);
	}
	MR_r3 = MR_unmkbody(MR_tempr2);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i31);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ml_backend__mlds_to_java__output_aux_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_java__output_aux_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i17);
	}
	MR_tempr2 = MR_unmkbody(MR_tempr3);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_aux_0_0_i81);
	}
	}
MR_def_label(__Compare___ml_backend__mlds_to_java__output_aux_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_java__output_aux_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__mlds__mlds_entity_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module178)
	MR_init_entry1(__Unify___ml_backend__mlds_to_java__output_style_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__mlds_to_java__output_style_0_0);
	MR_init_label3(__Unify___ml_backend__mlds_to_java__output_style_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__mlds_to_java__output_style_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__output_style_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__output_style_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__mlds_to_java__output_style_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__mlds_to_java__output_style_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__mlds_to_java__output_style_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__mlds_to_java__output_style_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module179)
	MR_init_entry1(__Compare___ml_backend__mlds_to_java__output_style_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__mlds_to_java__output_style_0_0);
	MR_init_label4(__Compare___ml_backend__mlds_to_java__output_style_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__mlds_to_java__output_style_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_style_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_style_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_style_0_0_i7);
	}
MR_def_label(__Compare___ml_backend__mlds_to_java__output_style_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_java__output_style_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_java__output_style_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__mlds_to_java__output_style_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__mlds_to_java__output_style_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module180)
	MR_init_entry1(ml_backend__mlds_to_java__IntroducedFrom__pred__output_java_src_file__345__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__IntroducedFrom__pred__output_java_src_file__345__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_java_src_file__345__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_java_src_file__345__1_1_0)
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

MR_BEGIN_MODULE(ml_backend__mlds_to_java_module181)
	MR_init_entry1(ml_backend__mlds_to_java__IntroducedFrom__pred__output_java_src_file__347__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__IntroducedFrom__pred__output_java_src_file__347__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_java_src_file__347__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_java_src_file__347__1_1_0)
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


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module182)
	MR_init_entry1(ml_backend__mlds_to_java__IntroducedFrom__pred__output_export__502__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__IntroducedFrom__pred__output_export__502__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_export__502__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_export__502__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module183)
	MR_init_entry1(fn__ml_backend__mlds_to_java__IntroducedFrom__func__generate_call_method__1116__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_java__IntroducedFrom__func__generate_call_method__1116__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__generate_call_method__1116__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_java__IntroducedFrom__func__generate_call_method__1116__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_r1 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 2) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module184)
	MR_init_entry1(ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list__2589__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list__2589__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_initializer_body_list__2589__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_initializer_body_list__2589__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_initializer_body_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module185)
	MR_init_entry1(ml_backend__mlds_to_java__IntroducedFrom__pred__output_stmt__3733__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__IntroducedFrom__pred__output_stmt__3733__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_stmt__3733__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_stmt__3733__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_boxed_rval_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module186)
	MR_init_entry1(ml_backend__mlds_to_java__IntroducedFrom__pred__output_rval_const__4554__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__IntroducedFrom__pred__output_rval_const__4554__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_rval_const__4554__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__IntroducedFrom__pred__output_rval_const__4554__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module187)
	MR_init_entry1(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0);
	MR_init_label10(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,2,3,4,5,8,21,7,10,11,13)
	MR_init_label4(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,14,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_fully_qualified_thing__ho1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_package_name_1_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i2);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_module_name_to_sym_name_1_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i3);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i4);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i5);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i8);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i7);
	}
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i17);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i10);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__remove_sym_name_prefixes_3_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i11);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i13);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(parse_tree__java_names__mangle_sym_name_for_java_4_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i14);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i21);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i18);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__java_names__flip_initial_case_1_0,
		ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0_i19);
MR_def_label(ml_backend__mlds_to_java__output_fully_qualified_thing__ho1_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module188)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0);
	MR_init_label8(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0,2,5,8,7,11,3,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__output_export_param_ref_out__[3]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,4)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0_i3);
	}
	MR_sv(3) = MR_tfield(3, MR_sv(3), 1);
	MR_r1 = (MR_Word) MR_string_const("jmercury.runtime.Ref<", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__java_builtin_type_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0_i7);
	}
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("> ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0_i15);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_type_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0_i15);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_120_112_111_114_116_95_112_97_114_97_109_95_114_101_102_95_111_117_116_95_95_91_51_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__mlds_to_java__output_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module189)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0);
	MR_init_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,3,2,11,13,14,15,16,17,18,19)
	MR_init_label9(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,20,21,22,23,24,25,26,28,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__output_class__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_tag(MR_r3),0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r4;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i2);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("output_class: name is not entity_type.", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),2)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("interface ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i13);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("class ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i13);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__java_names__flip_initial_case_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i15);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i16);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i17);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i19);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i20);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_extends_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i21);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_implements_list_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i22);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i23);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i24);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(10);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_class_body_7_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i25);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i26);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_defns_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i28);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0_i29);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_97_115_115_95_95_91_52_93_95_48_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n\n", 3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_java_module190)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0);
	MR_init_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,39,7,11,12,13,14,15,16,17,18)
	MR_init_label7(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,19,20,21,22,23,24,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__output_enum_constant__[1]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i2);
	}
	MR_r6 = MR_tfield(0, MR_tempr1, 1);
	if (MR_INT_EQ(MR_tag(MR_r6),1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i7);
	}
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_enum_constant: not mlconst_enum", 38);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r6, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i39);
	}
	MR_tempr2 = MR_tfield(2, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i39);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r3, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_java__indent_line_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("public static final ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i12);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i13);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" = new ", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i15);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" K", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i16);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i17);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i19);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("); ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i20);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i21);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i22);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" /* ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i23);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_java__output_name_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0_i24);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */", 3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_106_97_118_97_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_101_110_117_109_95_99_111_110_115_116_97_110_116_95_95_91_49_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_java.m", 14);
	MR_r2 = (MR_Word) MR_string_const("output_enum_constant: definition body was not data.", 51);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 4667 "mlds_to_java.m"
MR_Word ml_backend__mlds_to_java__mutable_variable_last_context;
#ifdef MR_THREAD_SAFE
    MercuryLock ml_backend__mlds_to_java__mutable_variable_last_context_lock;
#endif

#line 23839 "ml_backend.mlds_to_java.c"

MR_declare_static(mercury__ml_backend__mlds_to_java__initialise_mutable_last_context_0_0);

void
ml_backend__mlds_to_java__user_init_pred_0(void);

void
ml_backend__mlds_to_java__user_init_pred_0(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__ml_backend__mlds_to_java__initialise_mutable_last_context_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__ml_backend__mlds_to_java__initialise_mutable_last_context_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__ml_backend__mlds_to_java_maybe_bunch_0(void)
{
	ml_backend__mlds_to_java_module0();
	ml_backend__mlds_to_java_module1();
	ml_backend__mlds_to_java_module2();
	ml_backend__mlds_to_java_module3();
	ml_backend__mlds_to_java_module4();
	ml_backend__mlds_to_java_module5();
	ml_backend__mlds_to_java_module6();
	ml_backend__mlds_to_java_module7();
	ml_backend__mlds_to_java_module8();
	ml_backend__mlds_to_java_module9();
	ml_backend__mlds_to_java_module10();
	ml_backend__mlds_to_java_module11();
	ml_backend__mlds_to_java_module12();
	ml_backend__mlds_to_java_module13();
	ml_backend__mlds_to_java_module14();
	ml_backend__mlds_to_java_module15();
	ml_backend__mlds_to_java_module16();
	ml_backend__mlds_to_java_module17();
	ml_backend__mlds_to_java_module18();
	ml_backend__mlds_to_java_module19();
	ml_backend__mlds_to_java_module20();
	ml_backend__mlds_to_java_module21();
	ml_backend__mlds_to_java_module22();
	ml_backend__mlds_to_java_module23();
	ml_backend__mlds_to_java_module24();
	ml_backend__mlds_to_java_module25();
	ml_backend__mlds_to_java_module26();
	ml_backend__mlds_to_java_module27();
	ml_backend__mlds_to_java_module28();
	ml_backend__mlds_to_java_module29();
	ml_backend__mlds_to_java_module30();
	ml_backend__mlds_to_java_module31();
	ml_backend__mlds_to_java_module32();
	ml_backend__mlds_to_java_module33();
	ml_backend__mlds_to_java_module34();
	ml_backend__mlds_to_java_module35();
	ml_backend__mlds_to_java_module36();
	ml_backend__mlds_to_java_module37();
	ml_backend__mlds_to_java_module38();
	ml_backend__mlds_to_java_module39();
}

static void mercury__ml_backend__mlds_to_java_maybe_bunch_1(void)
{
	ml_backend__mlds_to_java_module40();
	ml_backend__mlds_to_java_module41();
	ml_backend__mlds_to_java_module42();
	ml_backend__mlds_to_java_module43();
	ml_backend__mlds_to_java_module44();
	ml_backend__mlds_to_java_module45();
	ml_backend__mlds_to_java_module46();
	ml_backend__mlds_to_java_module47();
	ml_backend__mlds_to_java_module48();
	ml_backend__mlds_to_java_module49();
	ml_backend__mlds_to_java_module50();
	ml_backend__mlds_to_java_module51();
	ml_backend__mlds_to_java_module52();
	ml_backend__mlds_to_java_module53();
	ml_backend__mlds_to_java_module54();
	ml_backend__mlds_to_java_module55();
	ml_backend__mlds_to_java_module56();
	ml_backend__mlds_to_java_module57();
	ml_backend__mlds_to_java_module58();
	ml_backend__mlds_to_java_module59();
	ml_backend__mlds_to_java_module60();
	ml_backend__mlds_to_java_module61();
	ml_backend__mlds_to_java_module62();
	ml_backend__mlds_to_java_module63();
	ml_backend__mlds_to_java_module64();
	ml_backend__mlds_to_java_module65();
	ml_backend__mlds_to_java_module66();
	ml_backend__mlds_to_java_module67();
	ml_backend__mlds_to_java_module68();
	ml_backend__mlds_to_java_module69();
	ml_backend__mlds_to_java_module70();
	ml_backend__mlds_to_java_module71();
	ml_backend__mlds_to_java_module72();
	ml_backend__mlds_to_java_module73();
	ml_backend__mlds_to_java_module74();
	ml_backend__mlds_to_java_module75();
	ml_backend__mlds_to_java_module76();
	ml_backend__mlds_to_java_module77();
	ml_backend__mlds_to_java_module78();
	ml_backend__mlds_to_java_module79();
}

static void mercury__ml_backend__mlds_to_java_maybe_bunch_2(void)
{
	ml_backend__mlds_to_java_module80();
	ml_backend__mlds_to_java_module81();
	ml_backend__mlds_to_java_module82();
	ml_backend__mlds_to_java_module83();
	ml_backend__mlds_to_java_module84();
	ml_backend__mlds_to_java_module85();
	ml_backend__mlds_to_java_module86();
	ml_backend__mlds_to_java_module87();
	ml_backend__mlds_to_java_module88();
	ml_backend__mlds_to_java_module89();
	ml_backend__mlds_to_java_module90();
	ml_backend__mlds_to_java_module91();
	ml_backend__mlds_to_java_module92();
	ml_backend__mlds_to_java_module93();
	ml_backend__mlds_to_java_module94();
	ml_backend__mlds_to_java_module95();
	ml_backend__mlds_to_java_module96();
	ml_backend__mlds_to_java_module97();
	ml_backend__mlds_to_java_module98();
	ml_backend__mlds_to_java_module99();
	ml_backend__mlds_to_java_module100();
	ml_backend__mlds_to_java_module101();
	ml_backend__mlds_to_java_module102();
	ml_backend__mlds_to_java_module103();
	ml_backend__mlds_to_java_module104();
	ml_backend__mlds_to_java_module105();
	ml_backend__mlds_to_java_module106();
	ml_backend__mlds_to_java_module107();
	ml_backend__mlds_to_java_module108();
	ml_backend__mlds_to_java_module109();
	ml_backend__mlds_to_java_module110();
	ml_backend__mlds_to_java_module111();
	ml_backend__mlds_to_java_module112();
	ml_backend__mlds_to_java_module113();
	ml_backend__mlds_to_java_module114();
	ml_backend__mlds_to_java_module115();
	ml_backend__mlds_to_java_module116();
	ml_backend__mlds_to_java_module117();
	ml_backend__mlds_to_java_module118();
	ml_backend__mlds_to_java_module119();
}

static void mercury__ml_backend__mlds_to_java_maybe_bunch_3(void)
{
	ml_backend__mlds_to_java_module120();
	ml_backend__mlds_to_java_module121();
	ml_backend__mlds_to_java_module122();
	ml_backend__mlds_to_java_module123();
	ml_backend__mlds_to_java_module124();
	ml_backend__mlds_to_java_module125();
	ml_backend__mlds_to_java_module126();
	ml_backend__mlds_to_java_module127();
	ml_backend__mlds_to_java_module128();
	ml_backend__mlds_to_java_module129();
	ml_backend__mlds_to_java_module130();
	ml_backend__mlds_to_java_module131();
	ml_backend__mlds_to_java_module132();
	ml_backend__mlds_to_java_module133();
	ml_backend__mlds_to_java_module134();
	ml_backend__mlds_to_java_module135();
	ml_backend__mlds_to_java_module136();
	ml_backend__mlds_to_java_module137();
	ml_backend__mlds_to_java_module138();
	ml_backend__mlds_to_java_module139();
	ml_backend__mlds_to_java_module140();
	ml_backend__mlds_to_java_module141();
	ml_backend__mlds_to_java_module142();
	ml_backend__mlds_to_java_module143();
	ml_backend__mlds_to_java_module144();
	ml_backend__mlds_to_java_module145();
	ml_backend__mlds_to_java_module146();
	ml_backend__mlds_to_java_module147();
	ml_backend__mlds_to_java_module148();
	ml_backend__mlds_to_java_module149();
	ml_backend__mlds_to_java_module150();
	ml_backend__mlds_to_java_module151();
	ml_backend__mlds_to_java_module152();
	ml_backend__mlds_to_java_module153();
	ml_backend__mlds_to_java_module154();
	ml_backend__mlds_to_java_module155();
	ml_backend__mlds_to_java_module156();
	ml_backend__mlds_to_java_module157();
	ml_backend__mlds_to_java_module158();
	ml_backend__mlds_to_java_module159();
}

static void mercury__ml_backend__mlds_to_java_maybe_bunch_4(void)
{
	ml_backend__mlds_to_java_module160();
	ml_backend__mlds_to_java_module161();
	ml_backend__mlds_to_java_module162();
	ml_backend__mlds_to_java_module163();
	ml_backend__mlds_to_java_module164();
	ml_backend__mlds_to_java_module165();
	ml_backend__mlds_to_java_module166();
	ml_backend__mlds_to_java_module167();
	ml_backend__mlds_to_java_module168();
	ml_backend__mlds_to_java_module169();
	ml_backend__mlds_to_java_module170();
	ml_backend__mlds_to_java_module171();
	ml_backend__mlds_to_java_module172();
	ml_backend__mlds_to_java_module173();
	ml_backend__mlds_to_java_module174();
	ml_backend__mlds_to_java_module175();
	ml_backend__mlds_to_java_module176();
	ml_backend__mlds_to_java_module177();
	ml_backend__mlds_to_java_module178();
	ml_backend__mlds_to_java_module179();
	ml_backend__mlds_to_java_module180();
	ml_backend__mlds_to_java_module181();
	ml_backend__mlds_to_java_module182();
	ml_backend__mlds_to_java_module183();
	ml_backend__mlds_to_java_module184();
	ml_backend__mlds_to_java_module185();
	ml_backend__mlds_to_java_module186();
	ml_backend__mlds_to_java_module187();
	ml_backend__mlds_to_java_module188();
	ml_backend__mlds_to_java_module189();
	ml_backend__mlds_to_java_module190();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__mlds_to_java__init(void);
void mercury__ml_backend__mlds_to_java__init_type_tables(void);
void mercury__ml_backend__mlds_to_java__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__mlds_to_java__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__mlds_to_java__init_complexity_procs(void);
#endif
void mercury__ml_backend__mlds_to_java__required_init(void);

void mercury__ml_backend__mlds_to_java__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__mlds_to_java_maybe_bunch_0();
	mercury__ml_backend__mlds_to_java_maybe_bunch_1();
	mercury__ml_backend__mlds_to_java_maybe_bunch_2();
	mercury__ml_backend__mlds_to_java_maybe_bunch_3();
	mercury__ml_backend__mlds_to_java_maybe_bunch_4();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_java__type_ctor_info_call_method_inputs_0,
		ml_backend__mlds_to_java__call_method_inputs_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_java__type_ctor_info_class_name_renaming_0,
		ml_backend__mlds_to_java__class_name_renaming_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0,
		ml_backend__mlds_to_java__code_addr_wrapper_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_java__type_ctor_info_exit_method_0,
		ml_backend__mlds_to_java__exit_method_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_java__type_ctor_info_exit_methods_0,
		ml_backend__mlds_to_java__exit_methods_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_java__type_ctor_info_func_info_0,
		ml_backend__mlds_to_java__func_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_java__type_ctor_info_indent_0,
		ml_backend__mlds_to_java__indent_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_java__type_ctor_info_java_out_info_0,
		ml_backend__mlds_to_java__java_out_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_java__type_ctor_info_output_aux_0,
		ml_backend__mlds_to_java__output_aux_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__mlds_to_java__type_ctor_info_output_style_0,
		ml_backend__mlds_to_java__output_style_0_0);
	mercury__ml_backend__mlds_to_java__init_debugger();
}

void mercury__ml_backend__mlds_to_java__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_java__type_ctor_info_call_method_inputs_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_java__type_ctor_info_class_name_renaming_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_java__type_ctor_info_code_addr_wrapper_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_java__type_ctor_info_exit_method_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_java__type_ctor_info_exit_methods_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_java__type_ctor_info_func_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_java__type_ctor_info_indent_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_java__type_ctor_info_java_out_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_java__type_ctor_info_output_aux_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__mlds_to_java__type_ctor_info_output_style_0);
	}
}


void mercury__ml_backend__mlds_to_java__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__mlds_to_java__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__mlds_to_java);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__mlds_to_java__init_complexity_procs(void)
{
}

#endif

void mercury__ml_backend__mlds_to_java__required_init(void)
{
	ml_backend__mlds_to_java__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
